#include <iostream>
#include <vector>
using namespace std;
 
enum EmployeeLevel { 사원, 대리, 과장, 차장, 부장} ;

class Employee {
  string name ;
  const EmployeeLevel level ;
  public:
    Employee(const string& _name="",const EmployeeLevel& _level = 사원): name(_name) , level(_level){};
    string getName() const{return name;}
    int getNamelevel() const{return level;}
    friend ostream& operator << (ostream& os, const Employee& s);
};
ostream& operator << (ostream& os,const Employee& e){
  os << e.level << "\t"<< e.name <<endl;
  return os;
}

class Manager : public Employee {
  vector<Employee*> group ;
  public:
    Manager(const string& _name = "", const EmployeeLevel& _level=사원): Employee(_name, _level){};
    void addEmployee(Employee* const e){
      group.push_back(e);
    }
    friend ostream& operator << (ostream& os, const Manager& M);
    ~Manager(){
      group.clear();
    }
};
ostream& operator << (ostream& os, const Manager& M){
  os<< M.Employee::getNamelevel()<<"\t"<<M.Employee::getName() <<endl;
  os <<"List of employees managed by me"<<endl;
  for  (vector <Employee*>::const_iterator it=M.group.begin(); it!=M.group.end();it++){
    os <<*(*it);
  }
  return os;
}
 
int main() {
  Employee e1("홍", 사원), e2("김", 대리), e3("차", 사원) ;
  //operator overloading 해줘야함
  cout << e1 << e2 << e3 ;
  Manager m1("Tom", 차장) ;
  //operator overloading 해줘야함
  m1.addEmployee(&e1) ;
  m1.addEmployee(&e2) ;
  m1.addEmployee(&e3) ;
  cout << endl << "Information for Manager" << endl ;
  cout << m1 ;
}
