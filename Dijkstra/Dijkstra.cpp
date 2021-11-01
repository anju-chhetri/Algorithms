#include <iostream>
#include <array>
#include <typeinfo>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> return_sorted(int*, int);
int main(){
    int comp_arr[] = {0,2147483647,2147483647,2147483647,2147483647,2147483647,2147483647};        //distance
    bool end_of_program = true;
    int const number_of_nodes = 7;
    array<array<int, number_of_nodes>,number_of_nodes> path ={{{0,2,6,-1,-1,-1,-1},//A
                                {2,0,-1,5,-1,-1,-1}, //B
                                {6,-1,0,8,-1,-1,-1}, //C
                                {-1,5,8,0,10,15,-1}, //D
                                {-1,-1,-1,10,0,6,2}, //E
                                {-1,-1,-1,15,6,0,6}, //G
                                {-1,-1,-1,-1,2,6,0}  //H
    }};//E
    vector<int>visited_index;
    int index=0;
    while (end_of_program){
            for(int i=0;i<number_of_nodes;i++){
                int temp =0;
                char a[]={'T'};
                for(int coil:visited_index){              //Don't compute for the visited node
                        if(coil==i){
                            a[0]='F';
                            break;}}
            if(i != index && path[i][index] != -1 && a[0]=='T' ) {        //not for the own node, visited node and the one with no connection
                temp = path[i][index] + comp_arr[index] ;
                    if(temp< comp_arr[i])
                        comp_arr[i] = temp;
                }}
            visited_index.push_back(index); //create stack of node that are visited
            if(visited_index.size()==number_of_nodes)     //IF all  nodes are visited end the program
                break;
            vector <pair<int,int>> sorted_nodes = return_sorted(comp_arr, number_of_nodes);
            int check_visit=0;
            bool notsmallestnode = true;
            while(notsmallestnode){    //All this fuss just to check to find the smallest node. collecting all the
                notsmallestnode = false; // nodes cost and finding the smallest unvisited node,
                index = sorted_nodes[check_visit].second;
                for(int n:visited_index){
                if(sorted_nodes[check_visit].second == n){
                    check_visit++;
                    notsmallestnode =true;
                    break;}}}
        }
for(int i=0;i<number_of_nodes;i++){
    cout<<" for "<<i+1<<": "<<comp_arr[i]<<"\n";
}
}

vector<pair<int, int>> return_sorted(int arr[], int n){
    vector<pair<int, int>> visited_nodes;

        for(int i=0;i<n;i++){
        visited_nodes.push_back(make_pair(arr[i],i));
        }
        sort(visited_nodes.begin(), visited_nodes.end());

        return visited_nodes;

}



// int arr[5] = {23,21,452,3451,12};
//
// vector<pair<int,int>> visited_nodes = return_sorted(arr);
//     for(int i=0;i<visited_nodes.size();i++){
//         cout<<visited_nodes[i].first<<"  ; "<<visited_nodes[i].second<<"\n";
//     }
// }
// {{{0,3,1,-1,-1},//A
//                                 {3,0,7,5,1}, //B
//                                 {1,7,0,2,-1}, //C
//                                 {-1,5,2,0,7}, //D
//                                 {-1,1,-1,7,0}}};//E
