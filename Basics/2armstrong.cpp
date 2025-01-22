#include<iostream>
#include<cmath>
#include<strings.h>
using namespace std;
int main()
{
int n,l;
string st;
int k,last,s=0;
cout<<"Enter a three digit number"<<endl;
cin>>n;
k= n;
st=to_string(n);
l= st.length();


while(n>0){
    last = n%10;
    s= s+ pow(last,l);
    n=n/10;
}
cout<<s<<endl;
if(k==s)
{
cout<<"armstrong number\n"<<endl;
}
else
{
    cout<<"Not an armstrong number\n";
}
return 0;
}