#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <string>
using namespace std;
stack<char> convert_postfix(string);


int main(){
stack<char> POSTFIX;
string infix_expression = "(A+B^C)*D+E^5";
reverse(infix_expression.begin(), infix_expression.end());
for(int i=0;i<infix_expression.length();i++){
    if(infix_expression[i]=='(')
        infix_expression[i]=')';
    else if(infix_expression[i]==')')
        infix_expression[i]='(';
}
POSTFIX = convert_postfix(infix_expression);   //it actually returns the reversed step of the algorithm but due to
stack <char> PREFIX;                            // LIFO property of stack  we reverse them.

while(!POSTFIX.empty()){        //keeping the reverse data in a stack to display
                PREFIX.push(POSTFIX.top());
                POSTFIX.pop();
            }

            while(!PREFIX.empty()){  //displaying the data
                cout<<PREFIX.top();
                PREFIX.pop();
            }
}



stack<char> convert_postfix(string infix_expression){
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
            while(STACK.top() != '('){  //taking the reamining elements of STACK stack
                POSTFIX.push(STACK.top());
                STACK.pop();
            }
            stack<char> DUP;
            while(!POSTFIX.empty()){   //reversing a stack before displaying
                DUP.push(POSTFIX.top());
                POSTFIX.pop();
            }
            return DUP;
}
