// insert and delete opperation in a sorted array
#include <iostream>

using namespace std;

void print_array(int arr[],int n)
{
    for(int j = 0;j<n;j++)
        {
            cout<<arr[j]<<endl;
        }
}

int insert(int arr[], int capacity, int loc_idx, int element){
    if(loc_idx > capacity){
        return -1;
    }
    int i;
    for(i = loc_idx - 1 ; i >= 0 && arr[i]>element; i--){
         arr[i+1] = arr[i];
    }
    arr[i+1] = element;
    return loc_idx + 1;

}

int binarySearch(int arr[],int l, int r, int element){
    int mid = (l + (r-1))/2;

    if(arr[l] == element){
        return l;
    }

    if(arr[r] == element){
        return r-1;
    }
    
    if (arr[mid] == element){
        return mid;
    }

    if(arr[mid] > element){
        return binarySearch(arr,1,mid,element);
    }

    return binarySearch(arr,mid,r-1,element);
}

int Delete(int arr[],int loc_idx, int target_index){
    int i;
    for(i = target_index; i < loc_idx; i++){
        arr[i] = arr[i+1];
        // print_array(arr,loc_idx);
    }
    return loc_idx - 1;
}

int main(){
    int arr[6] = {20,50,100,130,150};
    int capacity = sizeof(arr)/sizeof(int);
    int loc_idx = 5;

    print_array(arr,loc_idx);
    cout<<endl;

    //----------------------insert------------------------
    int insert_element = 80;
    loc_idx = insert(arr,capacity,loc_idx,insert_element);
    if(loc_idx != -1){
        print_array(arr,loc_idx);
    }
    cout<<endl;
    //---------------------delete-------------------------
    int del_element = 130;
    int l = 0;
    int target_index = binarySearch(arr,l,loc_idx,del_element);
    // cout<<target_index<<endl;
    int na = Delete(arr,loc_idx,target_index);
    if(na == loc_idx-1){
        print_array(arr,na);
    }


}