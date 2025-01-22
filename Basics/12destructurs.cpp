#include<iostream>
using namespace std;
int count =0;
class num{
    public:
    num(){
        count++;
        cout<<"constructor is called"<<endl;
    }
    ~num(){
        cout<<"destructors is called"<<endl;
    count--;
    }
};
 
 int main(){
    cout<<"we are inside main block"<<endl;
    cout<<"creating our objects"<<endl;
    num n1;
    {
        cout<<"entering thiss block"<<endl;
        cout<<"creating two more blocks"<<endl;
           num n2,n3;
           cout<<"exiting this block"<<endl;

    }
    cout<<"back to the main menu"<<endl;
    return 0;
 }