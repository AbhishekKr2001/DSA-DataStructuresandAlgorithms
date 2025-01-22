#include<iostream>
using namespace std;
// struct emp{
//     int id;
//     char favchar;
//     float salary;

// };
typedef struct emp{
    int id;
    char favchar;
    float salary;

}ep;
int main(){
     ep abhi;
    abhi.id=1;
    abhi.favchar='a';
    abhi.salary=5000;
    cout<<abhi.salary<<endl;
    return 0;
}