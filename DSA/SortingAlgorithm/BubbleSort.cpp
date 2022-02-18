#include <iostream>
using namespace std;

int main(){
    int arr[8]= {23,121,34,24,45,12,34,65};
int i=7;
while(i>=0){
    int temp,bub;
    bub = arr[0];
    for(int j=1;j<=i;j++){
        if(bub>arr[j]){
            temp = arr[j];
            arr[j] =bub;
            arr[j-1] = temp;
        }
        else
            bub = arr[j];
    }
    arr[i] = bub;
    i--;

}
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}
