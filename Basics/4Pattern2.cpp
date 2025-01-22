#include<iostream>
using namespace std;
int main() 
{
    int row,column,i,j;
    cout<<"Enter number of rows and column"<<endl;
    cin>>row;
    cin>>column;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=column;j++)
        {
            if((i==1)||(i==row)||(j==column)||(j==1))
            {
            cout <<"*";
            cout <<' ';
            }
            else
            {
               cout<<' ';
               cout<<' ';
            }
        }
       
        cout<<endl;
    }
    return 0;
}