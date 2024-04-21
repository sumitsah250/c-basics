#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    fstream file;
    file.open("1test.txt",ios::in);
    
     while(file.get(ch)){
        cout<<ch;
        
      }

 
return 0;
}