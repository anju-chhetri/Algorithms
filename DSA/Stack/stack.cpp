#include <iostream>
#include <string>
using namespace std;

template <class T>
class stack{
private:
        T arr_stack[100];T in_char;  //declaring an array and an index
        int index=0;
public:

    void push(){        //implementing push command
        cin>>in_char;
        arr_stack[index] = in_char;
        index++; //updating index value after it has been given some value
    }
    void pop(){
        if(index<=0){
            cout<<"\nStack is empty.\n";
            }
        else{
            cout<<arr_stack[index-1];   // for user index starts from 1, so substraction is necessary to convert to computer storage form
            index--;
    }}
//     void see(){cout<<"index: "<<index<<"\n";
//         for (int i=0;i<index;i++){cout<<arr_stack[i]<<"\n";}
//     }
    void isfull(){ //if the stack is full
        if (index >100)
            cout<<"The stack is full.\n";
        else
            cout<<"The stack is not full\n";}
    void isempty(){     //if the stack is empty
        if (index <=0)
            cout<<"The stack is empty.\n";
        else
            cout<<"The stack is not empty\n";}
};

int main(){
    cout<<"Commands used: \npush: to write to stack\npop: to read from stack\nisfull: to check if the stack is full.\nisempty: to check if the stack is empty.\n";
    stack<int> stack_object;
    string ask;
    while(true){
    string input;
    cout<<"Command: ";
    cin>>input;         //input command
    if(input=="push")
        stack_object.push();
    else if(input=="pop")
        stack_object.pop();
    else if(input=="isempty")
        stack_object.isempty();
    else if(input=="isfull")
        stack_object.isfull();
    else{
        cout<<"command not recognized\n";
        continue;

    }
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


/*
 //------------struct implementation
 // g++ textures.cpp -o textures glad.c stb_image.h -ldl -lglfw
#include <iostream>
#define N 10

using namespace std;

struct stack{
    int arr[N];
    int top=-1;

};
void push(struct stack *s);
void pop(struct stack *s);
void isfull(struct stack *s);
void isempty(struct stack *s);

int main(){
    cout<<"1.Enter \n2.Display\n3. Check if empty \n4. Check if full\n";
    struct stack s;
        int choice;

    while(true){
        cout<<"enter: \n";
           cin>>choice;
    switch(choice){
        case 1: {
            push(&s); break;
        }
        case 2:{
            pop(&s);break;
        }
        case 3:{
            isempty(&s);break;
        }
        case 4:{
            isfull(&s);break;
        }
        char a;
        cout<<"continue? \n";
        cin>>a;
        if (a=='n')
            break;
    }}}

void push(struct stack *s){
    int num;
    cout<<"Enter number\n";
    cin>>num;
    if(s->top==(N-1)){
       cout<<"Stack overflow.\n";
    }
    else{
        s->top++;
        s->arr[s->top] = num;
    }
}

void pop(struct stack *s){
    if(s->top!=-1){
        cout<<s->arr[s->top]<<" \n";
        s->top--;
    }
    else
        cout<<"Stack Underflow\n";
}

void isfull(struct stack *s){
    if(s->top == (N-1))
        cout<<"Stack is full\n";
    else
        cout<<"stack is not full\n";
}

void isempty(struct stack *s){
    if(s->top == -1)
        cout<<"stack is empty.\n";
    else
        cout<<"stack is not empty.\n";
}

 */
