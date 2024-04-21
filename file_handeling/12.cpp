#include<iostream>
#include<fstream>
using namespace std;

class sort{
    int a[10];
    int n;
    public:
    void getdata();
    void dispaly();
    void getrecord();
    void showrecord();
};
void sort::getdata(){
     cout<<"enter the number of data you want to enter:";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the data "<<i<<" : "<<endl;
        cin>>a[i];
    }
}

void sort::getrecord(){
    fstream file;
    file.open("test 5.txt",ios::app);
    for(int i=0;i<n;i++){
        file<<a[i]<<"\t";
    }
    file.close();
}
void sort::showrecord(){
    int a;
    fstream file;
    file.open("test 5.cpp",ios::in);
   for(int i=0;i<n;i++){
    file>>a;
    cout<<a;
   }
    file.close();
}
int main()
{
    sort s;
    s.getdata();
    s.getrecord();
    s.showrecord();

return 0;
}