// SIMPLE VECTOR PROGRAM
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;

    cout << "taking the elements in vector" << endl;
    for (int i = 0; i <= 5; i++)
    {
        arr.push_back(i);
    }
    cout << "printing out the elements" << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << endl;
    }
}