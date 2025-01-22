#include<iostream>
using namespace std;
class emp{
    int id;
    
    public:
        static int count;
           void setdata(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
        }
        void getdata(void){
        cout<<"This employee id is "<<id<<endl<<"This employee is number "<<count<<endl;
         }
           static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
        
           }};
int emp::count;
int main(){
    emp harry;
    harry.setdata();
    harry.getdata();
    emp::getcount();
    cout<<emp::count<<endl;
    return 0;
}
