// Problem: Given a sorted array arr[] of n elements, write a function to search a given element x 
// in arr[] and return the index of x in array.

#include <iostream>

using namespace std;

void LinearSearch(int arr[], int n, int element)
{   
    for(int i = 0; i < n; i++)
    {
        if(arr[i]==element){
            // return i;
        }
    }
}

int binarySearch(int arr[], int l, int r, int element){
    int mid = (l + (r-1))/2;
    if(arr[l] == element){
        return l;
    }
    if(arr[r-1] == element){
        return r-1;
    }

    if(arr[mid]==element){
        return mid;
    }
    
    if(arr[mid]> element){
        return binarySearch(arr, l, mid, element);
    }

    return binarySearch(arr,mid,r,element);
    
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(int);
    int element = 10;
    int l = 0;
    // LinearSearch(arr,n,element);
    int opt = binarySearch(arr,l,n,element);
    cout<<opt<<endl;
}

