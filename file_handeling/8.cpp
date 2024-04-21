#include<iostream>
#include<fstream>
using namespace std;
class student{
    long int roll;
    char name[7];
    public:
    void getdata(){
        cout<<"enter the of roll";cin>>roll;
        cout<<"enter the name of the student";cin>>name;
    }
    void showdata(){
          cout<<" roll:"<<roll<<endl;
        cout<<"name:"<<name<<endl;
    }
    void inputrecord(){
        student t;
        fstream s;
        s.open("test2.txt",ios::out);
        cout<<"enter the information:"<<endl;
        for(int i=0;i<3;i++){
        t.getdata();
        s.write((char*)&t,sizeof(t));
        }
        s.close();
    }
    void showrecord(){
        student s1;
        fstream s;
        s.open("test2.txt",ios::in);
            s.seekg(0);
            // s.read((char*)&s1,sizeof(s1));
// s.read((char*)&s1,sizeof(s1));
           while(!s.eof())
            // for(int i=0;i<3;i++)
            {
                
                 s.read((char*)&s1,sizeof(s1));
                 s1.showdata();
                
            }
            
        //  }  
        s.close();
      
    }
    
};
int main()
{
   
    student s1;
        s1.inputrecord();

        s1.showrecord();
    
return 0;
}