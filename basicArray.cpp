#include <iostream>

using namespace std;

int main()
{
    // an array of 10 integers. 
    // If arr[0] is stored at
    // address x, then arr[1] is
    // stored at x + sizeof(int)
    // arr[2] is stored at x +
    // sizeof(int) + sizeof(int)
    // and so on.

    int arr[7], i;

    cout<<"size of a single integer is "<< sizeof(int)<<endl;
    for(i=0;i<5;i++)
    {
        cout<<"the address of arr[" << i <<"] is " << &arr[i] << endl;
    }

}