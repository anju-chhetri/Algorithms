#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string infix_expression = "A+(B*C-(D/E^F)*G)*H";
    string priority = "-+*/^";
    stack<char> STACK;
    stack<char> POSTFIX;
    STACK.push('(');
    int prev_current=-1;
    for (int i=0;i<infix_expression.length();i++){
        for (int j=0;j<priority.length();j++){  //comparing if the expression has any operation
            if(infix_expression[i]==priority[j]){
                if(prev_current >=j){
                    POSTFIX.push(priority[prev_current]);
                    STACK.pop();}
                STACK.push(priority[j]);
                prev_current = j;
                continue;
            }}
            if(infix_expression[i]=='('){
                STACK.push(infix_expression[i]);
                prev_current = -1;;
            }
            else if(infix_expression[i]==')'){
                char comp = STACK.top();
                while(STACK.top()!='('){
                    POSTFIX.push(STACK.top());
                    STACK.pop();
                }
                STACK.pop();
        for (int lo=0;lo<priority.length();lo++){
                if(priority[lo]==STACK.top())
                    prev_current = lo;
            }}

            else if(int(infix_expression[i]>=65 && int(infix_expression[i]<=90))){
                POSTFIX.push(infix_expression[i]);
            }}
            while(STACK.top() != '('){
                POSTFIX.push(STACK.top());
                STACK.pop();
            }
            stack<char> DUP;
            while(!POSTFIX.empty()){
                DUP.push(POSTFIX.top());
                POSTFIX.pop();
            }
            while(!DUP.empty()){
                cout<<DUP.top();
                DUP.pop();
            }

}



