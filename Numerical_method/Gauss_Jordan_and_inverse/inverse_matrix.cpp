#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cout<<"Enter the order of matrix: \n";
    cin>>n;
    float mat[n][n*2];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Element row = "<<i<<" column:  "<<j<<" :";
            cin>>mat[i][j];cout<<"\n";}}
for(int i=0;i<n;i++){
    for(int j=n;j<(2*n);j++){
    if(j==(i+n))
        mat[i][j] = 1;
    else
        mat[i][j] =0;
    }}
   float ratio;
   for(int j=0;j<n;j++){            //row operation
    for(int i=0;i<n;i++){
        if(i!=j){
            ratio = mat[i][j]/mat[j][j];
        for(int k=0;k<(2*n);k++){
            mat[i][k] = mat[i][k] - (ratio* mat[j][k]);
        }}
    }}
     float dia_mul;
     for(int i=0;i<n;i++){
         dia_mul = (1/mat[i][i]);
         for(int j=0;j<(2*n);j++){
         mat[i][j] = mat[i][j] * dia_mul;
     }}
    for(int i=0;i<n;i++){       //display output matrix
    for(int j=0;j<(2*n);j++){
        cout<<setprecision(2)<<(mat[i][j])<<"  ";}
        cout<<"\n";
    }}

