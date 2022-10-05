# include <iostream>
# include <string>
# include <vector>
using namespace std;

class Student {
   public:
    string name ;
	  float gpa ;
    Student(const string& kname, const float kgpa=0.0F): name(kname){gpa=kgpa;}
    void setGPA(float gpa){
      this->gpa=gpa;
    };
    void setName(string name){
      this->name=name;
    };
} ;

class School {
  private:
	  string schoolName ;
	  vector<Student> students ;
    int count=0;
    

  public:
    School(const string& school_name): schoolName(school_name){}
    void addStudent(const string& kname, const float& kgpa){
     Student temp= Student(kname, kgpa);
     students.push_back(temp);
    }
     
    void addStudent(const string& kname){
      Student temp= Student(kname);
      students.push_back(temp);
    }
    void print(){
      cout<<"School Name: "<<schoolName<<", Count: "<<students.size() <<endl;
  
      for (vector<Student>::const_iterator it= students.begin();it !=students.end();it++){
        cout << '\t' <<"Name: "<<it->name<<" GPA: "<<it->gpa<<endl;
      }
      cout<<endl;
    };
    void swap(Student& a1,Student& a2){
      Student temp(a1);
      a1=a2;
      a2=temp;
    }
    void sort(){
      for (int i=0; i<students.size()-1;i++){
        for (int k=i+1;k<students.size();k++)
        {
          if (students[i].gpa < students[k].gpa)
          swap(students[i],students[k]);
        }
      }

    };
    Student& findStudentWithName(const string& kname)
    {int i;
      for ( i=0; i<students.size();++i){
        if (kname==students[i].name) return students[i];
      }
    return students[i]; 
    };
} ;

int main() {
	School pnu("PNU") ;

	pnu.addStudent("Kim", 2.7F) ;
	pnu.addStudent("Hong", 3.5F) ;
	pnu.addStudent("Lee") ;
	pnu.addStudent("Joo", 1.5F) ;
	
	pnu.print() ;

	pnu.sort() ; // descending
	pnu.print() ;

	School knu("KNU") ;
	knu.addStudent("Seo", 2.5F) ;
	knu.addStudent("Lee", 3.8F) ;
	knu.print() ;


	Student& lee = pnu.findStudentWithName("Lee") ;
	lee.setGPA(3.3F) ;
	lee.setName("Yoon") ;

	pnu.print() ;

	knu.addStudent("Hong", 4.3F) ;
	Student& hong = knu.findStudentWithName("Hong") ;
	hong.setGPA(3.3F) ;
	hong.setName("Joon") ;
	knu.print() ;
}