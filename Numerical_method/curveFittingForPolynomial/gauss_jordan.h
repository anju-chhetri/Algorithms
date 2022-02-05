#include <iostream>
using namespace std;

void jordan(){
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
