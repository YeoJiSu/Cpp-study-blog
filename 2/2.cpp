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
        int char_count=0;
        int int_count=0;
        int long_count=0;
        int float_count=0;
        int double_count=0;        
        

       while(true){
        string typeString;
        cin >> typeString;
        string lowerCase= toLowerCase(typeString);
         if ( lowerCase=="char"){
           char_count++;
           cout<<static_cast<int> (numeric_limits<char>::min())<<"  "<<static_cast<int>(numeric_limits<char>::max())<<endl; 
         }
         else if ( lowerCase=="int"){
           int_count++;
          cout<<numeric_limits<int>::min()<<"  "<<numeric_limits<int>::max()<<endl; 
         }
         else if ( lowerCase=="long"){
           long_count++;
          cout<<numeric_limits<long>::min()<<"  "<<numeric_limits<long>::max()<<endl;
         }
         else if ( lowerCase=="float"){
           float_count++;
           cout<<numeric_limits<float>::min()<<"  "<<numeric_limits<float>::max()<<endl;
         }
         else if ( lowerCase=="double"){
           double_count++;
           cout<<numeric_limits<double>::min()<<"  "<<numeric_limits<double>::max()<<endl; 
         }
         else if( lowerCase=="quit"){
           break;
         }
       }
        cout<<"=== A List of # of types ==="<<endl;
         cout<<"int:"<<int_count<<endl;
         cout<<"long: "<<long_count<<endl;
         cout<<"float: "<<float_count<<endl;
         cout<<"double: "<<double_count<<endl;
         cout<<"char: "<<char_count<<endl;
} 
