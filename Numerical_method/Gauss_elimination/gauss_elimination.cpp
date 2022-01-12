#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the order of matrix: \n";
    cin>>n;
    float mat[n][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            cout<<"Element row = "<<i<<" column:  "<<j<<" :";
            cin>>mat[i][j];cout<<"\n";}}

   float ratio;
   for(int j=0;j<(n-1);j++){            //row operation
    for(int i=(j+1);i<n;i++){
            ratio = mat[i][j]/mat[j][j];
        for(int k=0;k<=n;k++){
            mat[i][k] = mat[i][k] - (ratio* mat[j][k]);
        }
    }}

    for(int i=0;i<n;i++){       //display output matrix
    for(int j=0;j<=n;j++){
        cout<<(mat[i][j])<<" ";}
        cout<<"\n";
    }}
