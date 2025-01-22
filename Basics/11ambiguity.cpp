#include<iostream>
using namespace std;
class base1{
    public:
    void greet(){
        cout<<"base1"<<endl;

    }
};

class base2{
    public:
    void greet()
    {
        cout<<"base2"<<endl;

    }
};

class derived:public base1,public base2{
    public:
    void greet(){
       
       base2::greet();
    }
};

int main(){
    derived d;
    d.greet();
}