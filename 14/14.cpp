# include <iostream> 
# include <typeinfo>
using namespace std ;
namespace shape{
  class Shape {
      public:
        virtual void draw() const = 0;
        virtual bool isEqual(Shape* s) const = 0;
        virtual Shape* clone() const = 0;
  };
  class Rectangle : public Shape {
      int x1, y1, x2, y2;
  public:
      Rectangle(const int& x1_,const int& y1_,const int& x2_,const int& y2_):x1(x1_),y1(y1_),x2(x2_),y2(y2_){}
      virtual Shape* clone() const override {
        Rectangle* const clone = new Rectangle(*this);
        return clone;
      }
      virtual void draw() const override{
        cout<<"Rectangle: ";
        cout<<"("<<x1<<", "<<y1<<"), ";
        cout<<"("<<x2<<", "<<y2<<")"<<endl;
      }
      virtual bool isEqual(Shape* s) const override{
         Shape* const k =dynamic_cast<Shape*>(s);
        return k==this;
      }
      
  };
  class Circle : public Shape {
      int x, y;
      int radius;
  public:
      Circle(const int& x_, const int& y_, const int& radius_):x(x_),y(y_),radius(radius_){}
      virtual Shape* clone() const override {
        Circle* const clone = new Circle(*this);
        return clone;
      }

      virtual void draw() const override{
        cout<<"Circle: ";
        cout<<"("<<x <<", "<<y<<")"<<", "<<radius<<endl;
      }
      virtual bool isEqual(Shape* s) const override{
       Shape* const clone = dynamic_cast<Shape*>(s);
       
        return clone==this;
      }
        
  };
}

namespace mystl{
  template <class T, int size>
  class MyArrayList {
      T* data[size];
      int count{0};
    public:
    int getSize(){
      return count;
    }
    T* getElement(const int i){
      return data[i];
    }
    void addElement(T* const a){
      data[count]=a;
      count++;
    }
    bool compare(shape::Shape* a, shape::Shape* b){
      return typeid(a) == typeid(b);
    }
    void removeElement(T* const a){
      int i;
      for (i=0;i<count;i++){
        if (compare(a,data[i])&&(a->isEqual(data[i]))){data[i] = nullptr;} 
      }
    }
//리스트 객체 제거시 객체를 비교함. typeid를 활용해서 타입 비교하자
  };
}

int main() {
	shape::Shape* r1 = new shape::Rectangle(0, 0, 10, 10);
	shape::Shape* r2 = new shape::Rectangle(0, 0, 20, 20);

	shape::Shape* c1 = new shape::Circle(0, 0, 10);
	shape::Shape* c2 = new shape::Circle(10, 10, 20);
	
	mystl::MyArrayList<shape::Shape, 5> list;
	
	list.addElement(r1);
	list.addElement(r2);
	list.addElement(c1);
	list.addElement(c2);

//	delete r2; delete c2;
	for ( int i=0; i < list.getSize(); i ++ ) {
		shape::Shape* s = list.getElement(i);
		if (  s == nullptr ) continue;
		s->draw();
	}

	list.removeElement(r1);
  list.removeElement(c1);

	for ( int i=0; i < list.getSize(); i ++ ) {
		shape::Shape* s = list.getElement(i);
		if (  s == nullptr ) continue;
		s->draw();
	}

}