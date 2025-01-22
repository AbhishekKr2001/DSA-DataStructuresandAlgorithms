#include<iostream>
using namespace std;
class emp{
    int id;
    int salary;
    public:
    void setid(void){
        cout<<"Enter the id and salary of the employee"<<endl;
        cin>>id>>salary;
    }
    void getid(void){
        cout<<"The id of the employee is  "<<id<<" and the salary of the emloyee is "<<salary<<endl;
    }
};
int main(){
    emp f[4];
    for(int i=0;i<4;i++){
        f[i].setid();
        f[i].getid();
    }
    return 0;
}