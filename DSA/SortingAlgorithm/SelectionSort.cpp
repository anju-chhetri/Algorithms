#include <iostream>
using namespace std;

int main(){
    int arr[8]= {23,12,34,244,665,12,4,65};
    int index, temp_index, temp;
    for(int a=7;a>=0;a--){
    int comp = 0;
    for(int i=0;i<=a;i++){
        if(comp<arr[i]){
            comp = arr[i];
            index = i;
        }}
        if(index == a)
            continue;
        arr[index] = arr[a];
        arr[a] = comp;
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

}
