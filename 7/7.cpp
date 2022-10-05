#include <iostream>
#include <cstring>
using namespace std;
class MyString {
  char* str ;
	int size ;
  public:
    char a[20];
    MyString(const char* const s="", const int size=0){ strcpy(a,s); str=a; this->size=size;}
    MyString(const MyString& copy):str(copy.str), size(copy.size){for(int i=0;i<strlen(str);i++)str[i]=copy.str[i];}
    void set(const char* s){strcpy(str,s);}
    char* get(char* s)const {s=str; return s;}
    bool isEqual(const MyString& r)const{ 
      char *s;
      return !strcmp(r.get(s),str);}
    void print() const{ cout<<str<<endl;}
};
int main() {
	MyString strs[] = {
		MyString("C"),
		MyString(),
		MyString("Java")
	} ;
	strs[1].set("C++") ;
	const int arraySize = sizeof(strs) / sizeof(MyString);
	const MyString target("Java") ;
	for ( int i = 0 ; i < arraySize ; i ++ ) {
		const MyString str(strs[i]) ; // copy constructor
		if ( str.isEqual(target) ) {
			cout << "[" << i << "]: " ;
			str.print() ;
			break ;
		}
	}
	for ( const MyString& str : strs ) {
		str.print() ;
	}
}