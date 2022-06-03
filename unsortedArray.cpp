#include <iostream>

using namespace std;

void print_array(int arr[],int n)
{
    for(int j = 0;j<n;j++)
        {
            cout<<arr[j]<<endl;
        }
}

int search(int arr[], int n, int element)
{
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int append(int arr[], int n, int element, int idx)
{
    if(idx > n)
    {
        return n;
    }
    
    arr[n] = element;

    return n + 1;
    
}

int Delete(int arr[], int n, int element)
{
    int search_output = search(arr,n,element);
    if( search_output == -1)
    {
       cout << "the value is not in the array hence cannot be deleted" << endl;
       return n;
    }
    else
    {
        if(search_output == n)
        {
            arr[search_output] = 0;
        }
        else
        {
            for(int i= search_output; i < n - 1; i++)
            {
            arr[i] = arr[i+1];
            }
        }   
        return n-1; 
    }
    
}

int main()
{
    int arr[] = {10,20,30,40};
    int n,key;
    n = sizeof(arr)/sizeof(int);
    key = 90;
    int opt = search(arr,n,key);
    if(opt != -1)
    {
        cout<<"the value "<<key<<" is at index "<<opt<<endl;
    }
    else
    {
        cout<<"the value is not in the array"<<endl;
    }
    //---------------- insert ---------------------------
    
    int idx = 4;
    key = 50;
    int opt2 = append(arr,n, key, idx);
    if( opt2 != n)
    {
        cout<<"Inserted the elemt at the last index"<<endl;
        n = opt2;
        print_array(arr,n);
    }
    //----------------- delete ---------------------------

    key = 50;
    int opt3 = Delete(arr,n,key);
    if(opt3 != n)
    {
        cout<<"Deleted the element at the last index"<<endl;
        n = opt3;
        print_array(arr,n);
    }
    


    
}