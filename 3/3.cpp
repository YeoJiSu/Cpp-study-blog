#include <iostream>
#include <string>

using namespace std;

string toLowerCase(string str){
  for (int i=0; i<str.length();i++){
    str[i]=tolower(str[i]);
  }
  return str;
}

int main(){
     cout << "Enter the score count: " ;
	   int maxSize ;
  	 cin >> maxSize ;

	    int* const scores = new int[maxSize] ;
      int sum=0;
      int i=0;    
        
       while(true){

        string typeString;
        cout << "Enter command: (add, sum, average, list, quit) ";
        cin >> typeString;
        string lowerCase= toLowerCase(typeString);
         if ( lowerCase=="add"){
           if (i>=maxSize) cout <<"\t"<< "Too many scores" <<endl;
           
           else{ 
             int score;
             cout<<"Enter score: ";
             cin >> score;
             if (score>=0 && score<=100){
               scores[i]=score; 
               i++;
              cout<<"\t"<<score<<" added"<<endl;}
             else {
               cout<<"\t"<<"Score should be between 0 and 100"<<endl;
               score=0;
             }
           }
           
         }
         else if ( lowerCase=="sum"){
           if (i!=0){
            for (int j=0;j<i;j++){
            sum+=scores[j];
           }
           }
          cout<<"\t"<<"Sum: "<<sum<<endl;
          sum=0;
         }
         else if ( lowerCase=="average"){
           if (i!=0){
             for (int j=0;j<i;j++){
            sum+=scores[j];
           }
           cout<<"\t"<< "Average: "<< sum/i <<endl;
           }
           sum=0;
         }
         else if ( lowerCase=="list"){
           if (i!=0){
            cout<<"\t"<< scores[0];
            for (int a=1; a<i;a++){
            cout<< ", "<<scores[a];
            }
            cout<<endl;
           }
         }
         else if( lowerCase=="quit"){
           cout<<"\t"<<"Bye";
           break;
         }
       }
	 delete [] scores ;
} 
