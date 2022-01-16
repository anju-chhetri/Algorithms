#include <iostream>
#include <cmath>
using namespace std;

void sort(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         if(*(arr+i)<*(arr+j)){
             int temp = *(arr+i);
             *(arr+i) = *(arr+j);
             *(arr+j) = temp;
        }}}}

void search(int arr[], int l1,int l2,int value_search){
    int mid_value = (l2+l1)/2;
    if(arr[mid_value]==value_search){
        cout<<mid_value<<" is the requried index.";exit(0);
    }
    else if(abs(l1-l2)==1){
        if(arr[l1]==value_search){
            cout<<l1<<" is the requried index.";exit(0);
        }
        else if(arr[l2] == value_search){
            cout<<l2<<" is the required index.";exit(0);
        }
        else{cout<<"The required key cannot be found in the tree.";exit(0);}
    }
    else if(arr[mid_value]>value_search){
        search(arr, l1,mid_value, value_search);
    }
    else{
        search(arr,mid_value, l2, value_search);
    }
}

int main(){
    int n =10;
    int arr[n] = {12,45,23,43,16,56,48,89,57,34};
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    int value_search;
    cout<<"Value to search: \n";
    cin>>value_search;
    search(arr, 0,n,value_search);
}
