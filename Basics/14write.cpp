#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("sample.txt");
    out<<"this is abhishek kumar"<<endl;
    out<<"the creater of universe"<<endl;
    out.close();
}