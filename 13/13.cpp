#include <iostream>
using namespace std;

class StackException {
  const string msg ;
  public:
  StackException(const string& _msg):msg(_msg){};
  void print() const { cout << msg << endl ; }
};

class CharStack {
    int size ;
    int top ;
    char* s ;
    public:
    CharStack(int sz) {
      top = 0 ;
      s = new char[size=sz];
    }
    void push(char c){ s[top++] = c ;
     if(top==size) throw StackException("Stack is Full!");
     }
    char pop() {
     if (top==0)throw StackException("Stack is Empty!");
     char r = s[--top];
     s[top] = '\0' ;
     return r ;
    }
    void print() const {
      for ( int i = 0 ; i < top ; i ++ ) cout << s[i] ;
      cout <<endl ;
    }
};



int main() {
    CharStack stack(5);
    try {
        stack.pop();
    }
    catch ( const StackException& e) {
        e.print();
    }
    try {
        stack.push('A');
        stack.push('B');
        stack.push('C');
        stack.push('D');
        stack.push('E');
        stack.push('F');
    }
    catch ( const StackException& e) {
        e.print();
        stack.print();
    }
}

