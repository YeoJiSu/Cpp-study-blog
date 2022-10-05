#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

enum Color{RED, BLUE, YELLOW};

class Shape{
  Color lineColor;
public:
  Color getLineColor() const {return lineColor;}
  virtual Shape* clone() const = 0;
  virtual void print() const =0;
  virtual float getLength() const =0;
};

class ClosedShape : public Shape{
  public:
  Shape* clone() const;
  float getLength() const;
  virtual float getArea() const = 0;
};

class Point{
  public:
  int x, y;
  Point() {}
  Point(int a,int b):x(a),y(b){ }
  
};

//polygon이 point vector를 가지고 구현 concrete다.  

class Polygon: public ClosedShape{
  vector <Point*> point;
  Point p[4];

  public:  
  Polygon(){}
  Polygon( Point p1, Point p2, Point p3,  Point p4){
    p[0]=p1;p[1]=p2;p[2]=p3;p[3]=p4;
  };

  Polygon( Point p1, Point p2, Point p3){
    p[0]=p1;p[1]=p2;p[2]=p3;
  };
  void addShape(Point* const r){
    point.push_back(r);
  };
  
};

class Rectangle: public Polygon{
  Point a,b,c,d;
 public:
 Rectangle(Point x ,Point y,Point z, Point k):a(x),b(y),c(z),d(k){};
 ~Rectangle(){};
 float getArea() const{return abs(a.x*b.y + b.x*c.y + c.x*d.y + d.x*a.y - b.x*a.y - c.x*b.y - d.x*c.y - a.x*d.y)/2.0; };
 void print() const;
};

class Triangle: public Polygon{
  Point a,b,c;
  public:
  Triangle(Point x ,Point y,Point z):a(x),b(y),c(z){};
 ~Triangle(){};
  float getArea() const{return abs(a.x*b.y + b.x*c.y + c.x*a.y - b.x*a.y - c.x*b.y - a.x*c.y)/2.0; };
  void print() const;


};

class ClosedShapeList{
  vector<ClosedShape*>v;
  public:
  void addShape(ClosedShape* const r){
    v.push_back(r);
  };
  float getTotalArea(){
    auto totalArea = 0.0F;
    for(const auto shape: v){
      totalArea += shape->getArea();
    }
    return totalArea;
};

  void print() const{
    vector <Point> v;
    for (auto a = v.begin(); a != v.end(); a++) {
		cout<< "Rectangle: "<<"("<< v.x<<", "<<v.y<<")";
	  } cout<<endl;
    for (auto a = v.begin(); a != v.end(); a++) {
		cout<< "Triangle: "<<"("<< v.x<<", "<<v.y<<")";
	  } 
  };
};


int main() {
	Point p1(0, 0), p2(0, 10), p3(20, 20), p4(20, 30);

	ClosedShape* const r = new Rectangle(p1, p2, p3, p4) ;
	ClosedShape* const t = new Triangle(p1, p2, p3) ;

	ClosedShapeList list{} ;
	list.addShape(r) ;
	list.addShape(t) ;
	delete r;
	delete t;

	list.print() ;

	cout << list.getTotalArea() << endl ;
}
