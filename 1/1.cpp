#include <iostream>
#include <string>

using namespace std;

int main(){
        
        while(true){
            string name;
            int score;
            char grade;
            
            cout << "Enter a name and score: ";
            cin >> name >> score;
            
            if  (score<0 || score>100){
                cout << "Bye " << name << endl;
                break;
            }
            else if (score>=90){
                grade = 'A';
            }
            else if (score>=80){
                grade = 'B';
            }
            else if (score>=70){
                grade ='C';
            }
            else if (score>=60){
                grade = 'D';
            }
            else if (score>=50){
                grade = 'E';
            }
            else{
                grade = 'F';
            }
            cout << "Hi " << name << "! Your grade is " << grade << endl;
    }
   
} 
