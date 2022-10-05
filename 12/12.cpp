#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

class Complex {
private:
	float real, imaginary;

public:
  Complex(const float x=0.F, const float y=0.F){
    this->real=x;
    this->imaginary=y;
  }
  bool operator == (const Complex& c) const{
    return (real == c.real & imaginary == c.imaginary);
  }
  friend ostream& operator << (ostream& os, const Complex& c);
}; 
ostream& operator << (ostream& os, const Complex& c){
  os<< c.real<< '+' << c.imaginary << 'i' <<endl;
  return os;
}

class MyString {
private:
	char* str;
public:
  MyString():str(nullptr){}
  MyString(const char* s){
    str = new char[strlen(s)];
    strcpy(str,s);
  }
  MyString(const MyString& some){
    str= new char[strlen(some.str)+1];
    strcpy(str, some.str);
  }
  bool operator == (const MyString& c) const{
    return (str == c.str);
  }
  MyString& operator = (const MyString& some){
    if ( str != nullptr ) delete [] str ; 
    str = new char[strlen(some.str)+1] ;
    str = new char[some.getSize()+1] ;
    strcpy(str, some.getStr()) ;
    return *this;
    }
    int getSize() const { return strlen(str) ; }
    char* getStr() const { return str ; }

  friend ostream& operator << (ostream& os, const MyString& c);
};
ostream& operator << (ostream& os, const MyString& c){
  os<< c.str <<endl;
  return os;
}

template <class T>
class List {
	T* items{nullptr};
	int count{0};
	int size{0};

public:
  List(int len):size(len){items= new T[size];}
  void add(const T& item){*items++ =item;count++; 
   }
  auto find(const T& item) {count++;
    for (auto i=0;i<size;i++){
      if(items[i]==item) return true; 
    }
    return false;
  } 
  T& operator [] (int i){return items[i];}
  int getSize()const{return count;}

}; 
template <class T>
ostream& operator << (ostream& os, List<T>& list){
  for(auto i=0;i<list.getSize();i++) os << list[i]<< endl;
  return os;
}

int main() {
	List<Complex> cList(100) ; //template class
	cList.add(Complex(0, 0)) ;
	cList.add(Complex(1, 1)) ;
  
	cout << cList;
	
	
	cout << std::boolalpha;
	cout << cList.find(Complex(1, 1)) << endl;	// true
	cout << cList.find(Complex(1, 0)) << endl;	// false

	List<MyString> sList(200) ;
	sList.add("abc") ;
	sList.add("def") ;
	cout << sList;
	cout << sList.find("def") << endl;	// true
	cout << sList.find("Aef") << endl;	// false

	List<MyString> s2List(sList) ;
	s2List.add("ghi") ;
	cout << s2List;
	
	List<MyString> s3List(10) ;
	s3List = s2List ;
	s3List.add("jkl");
	cout << s3List;	
}