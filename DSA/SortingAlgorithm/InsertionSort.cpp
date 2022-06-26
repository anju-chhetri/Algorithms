#include <iostream>
using namespace std;

int main(){
    int arr[8]= {23,12,34,24,665,12,34,65};
    int val;
    int count=0;
    for(int i=0;i<8;i++){
        val = arr[i];
        for(int j=0;j<i;j++){
            if(arr[j]>val){
                for(int k=i;k>j;k--){
                    int temp = arr[k];
                    arr[k] = arr[k-1];
                    arr[k-1] = temp;

                }break;
            }}

    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<"  ";
    }

}
