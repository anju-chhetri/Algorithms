#include <iostream>
#include <string>
#define ARR_SIZE 10
using namespace std;


template<class T>
class circular_queue{
private:
    T queue_arr[ARR_SIZE];int rear=-1;int front =-1;
public:
    void insert(){
        if((rear == (ARR_SIZE-1)&& front == 0) || rear == (front-1)){
            cout<<"ARRAY full";
            return ;
        }
        if(front ==-1)
            front++;
        if(rear == (ARR_SIZE-1)&& front != 0)
            rear = -1;
        T input;
        cin>>input;
        queue_arr[++rear] = input;
    }
    void remove(){
        if((front == (rear+1)) ||front==-1 )
        {cout<<"empty Queue";exit(0);}
        if((front == ARR_SIZE))
            front =0;
        cout<<"\n"<< queue_arr[front++];
    }

};
int main(){
    cout<<"Commands used: \ninsert: to write to queue\nremove: to read from queue\n";
    circular_queue<int> queue_object;
    string ask;
    while(true){
    string input;
    cout<<"Command: ";
    cin>>input;         //input command
    if(input=="insert")
        queue_object.insert();
    else if(input=="remove")
        queue_object.remove();
    else{
        cout<<"command not recognized\n";
        continue;}
    cout<<"\nDo you want to continue operation?(y/n) ";     // asking user if they want to give more commands
    int indicator=0;
    while(true){
    cin>>ask;
    if (ask=="y"){
       break;}
    else if(ask == "n"){
        indicator=1;break;}
    else{cout<<"wrong input. Try again.\n";continue;}
    }
    if(indicator==1){break;}
    }
}



