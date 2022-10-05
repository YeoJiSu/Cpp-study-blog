#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int SUBJECT_NO=3;

struct StudentInfo {
  string name;
  int scores[SUBJECT_NO];
  int sum;
  float average;
};

void printStudentInfo(const StudentInfo& ps){
  static int n=1;
  cout<<n++<<"\t"<<ps.name<<"\t"<<ps.scores[0]<<"\t"<<ps.scores[1]<<"\t"<<ps.scores[2]<<"\t"<<ps.sum << "\t" << ps.average << endl;
};

void printVector(vector<StudentInfo>& v){
  cout<<endl;
  int first=0,second=0,third=0;
  for (vector <StudentInfo>:: iterator it = v.begin(); it!=v.end(); ++it)
  {
    printStudentInfo(*it);
    first+=it->scores[0];
    second+=it->scores[1];
    third+=it->scores[2];
  }
  int sum= first+second+third;
  cout<<"Total\t\t"<<first<<"\t"<<second<<"\t"<<third<<'\t'<<sum<<endl;
};

int main(){
  int numb;
  while (1){
    cin >> numb;
    if (numb<=3) break;
  }
  
  vector <StudentInfo> info(numb);
  for (vector <StudentInfo>:: iterator it = info.begin(); it!=info.end(); it++){
    cin>>it->name;
    for (int i=0;i<SUBJECT_NO;i++){
      cin>>it->scores[i];
    }
    it->sum= it->scores[0]+it->scores[1]+it->scores[2];
    it->average = it->sum/float(3);
  }
  printVector(info);
  return 0;
}
