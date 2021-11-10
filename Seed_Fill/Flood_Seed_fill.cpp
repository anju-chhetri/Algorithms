#include <iostream>
#include <vector>
using namespace std;
void seed_fill(int x,int y, int height, int width, char mat[][10], char replacement_char[],char target_char[]);
void call(char mat[][10], int , int);
int main(){
    int width = 10; int height = 10;   //initialize the array parameters
    char mat[10][10] =
    {
        { 'Y', 'Y', 'Y', 'G', 'G', 'G', 'G', 'G', 'G', 'G' },
        { 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'G', 'X', 'X', 'X' },
        { 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'X', 'X', 'X' },
        { 'W', 'W', 'W', 'W', 'W', 'G', 'G', 'G', 'G', 'X' },
        { 'W', 'R', 'R', 'R', 'R', 'R', 'G', 'X', 'X', 'X' },
        { 'W', 'W', 'W', 'R', 'R', 'G', 'G', 'X', 'X', 'X' },
        { 'W', 'B', 'W', 'R', 'R', 'R', 'R', 'R', 'R', 'X' },
        { 'W', 'B', 'B', 'B', 'B', 'R', 'R', 'X', 'X', 'X' },
        { 'W', 'B', 'B', 'X', 'B', 'B', 'B', 'B', 'X', 'X' },
        { 'W', 'B', 'B', 'X', 'X', 'X', 'X', 'X', 'X', 'X' }
    };
    char target_char[] = {'Y'};     //this algorithm takes three arguments target, replacement, initial position
    char replacement_char[] = {'O'};
    int x = 0; int y=0;     //initial position
    cout<<"Before flood fill\n";        //Print the first table
    call(mat, height, width);
    seed_fill(x, y, height, width, mat, replacement_char, target_char ); //implement algorithm
    cout<<"\nAfter flood fill\n";   //Print the changed table
    call(mat, height, width);


    } 

void seed_fill(int x,int y, int height, int width, char mat[][10], char replacement_char[],char target_char[]){
if(x<0 || x>= width || y>=height || y<0)    //If the loop exceeds the four corner exit
    return;
if(mat[x][y]==target_char[0])   //If the position has target character replace it
    mat[x][y] = replacement_char[0];
else
    return;
    
seed_fill(x-1, y, height, width, mat, replacement_char, target_char);    //check for neighbours
seed_fill(x+1, y, height, width, mat, replacement_char, target_char);
seed_fill(x, y-1, height, width, mat, replacement_char, target_char);
seed_fill(x, y+1, height, width, mat, replacement_char, target_char);
}

void call(char mat[][10], int height, int width){   //Print the array character
    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++)
        cout<<mat[i][j]<<" ";
    cout<<"\n";
    }

}
