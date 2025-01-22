#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream in;
    string st,st2;
    in.open("sample.txt");
    // in>>st>>st2;
    // cout<<st<<" "<<st2;
    while(in.eof() ==0){
        getline(in,st);
        cout<<st<<endl;
    }

    in.close(); 
    

}
   