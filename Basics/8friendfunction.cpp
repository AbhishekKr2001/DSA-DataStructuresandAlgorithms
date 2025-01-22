#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    int sumcomplex(complex,complex);

};
class complex{
    int a ,b;
    friend int calculator::sumcomplex(complex,complex);
    public:
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printnumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int calculator::sumcomplex(complex o1, complex o2){
    return (o1.a + o2.a);

}
int main(){
    complex o1,o2;
    o1.setnumber(8,6);
    o1.printnumber();
    o2.setnumber(9,6);
    o2.printnumber();
    calculator c;
     int r= c.sumcomplex(o1,o2);
     cout<<"the sum of real part is "<<r<<endl;
     return 0;
}