#include <iostream>
#include<math.h>
#include <gauss_jordan.h>
using namespace std;

void gauss_jordan(float mat[][4]){
    n=n+1;
   float ratio;
   for(int j=0;j<n;j++){            //row operation
    for(int i=0;i<n;i++){
        if(i!=j){
            ratio = mat[i][j]/mat[j][j];
        for(int k=0;k<=n;k++){
            mat[i][k] = mat[i][k] - (ratio* mat[j][k]);
        }}
    }}
    float dia_mul;
    for(int i=0;i<n;i++){
        dia_mul = (1/mat[i][i]);
        mat[i][i] = mat[i][i] * dia_mul;
        mat[i][n] = mat[i][n] * dia_mul;
    }
    for(int i=0;i<n;i++){       //display output matrix
    for(int j=0;j<=n;j++){
        cout<<(mat[i][j])<<" ";}
        cout<<"\n";
    }}

int main(){
    int d,n;
    cout<<"Enter the degree of polynomial: \n";
    cin>>n;
    cout<<"Enter the number of data points(d>n): \n";
    cin>>d;
    float x[d],y[d];
    float aug_mat[n+1][n+2];
    cout<<" x  y\n";
    for(int i=0;i<d;i++){
        cin>>x[i]>>y[i];}
    float sum;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=(n+1);j++){
            sum=0;
            if(j!=(n+1)){
            for(int k=0;k<d;k++){
              sum = sum + pow(x[k],i+j);
            }}
            else{

            for(int k=0;k<d;k++){
              sum = sum+(pow(x[k],i)*y[k]); }
            }

                 aug_mat[i][j] = sum;

        }}

//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=(n+1);j++){
//             cout<<aug_mat[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
    gauss_jordan(aug_mat);
}


