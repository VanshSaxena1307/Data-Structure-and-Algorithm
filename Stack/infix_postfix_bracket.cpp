#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
      bool prcd(char a, char b){
        if(a == '*' || a == '/'){
            if(b == '*' || b == '/'){
                return true;
            }
            else{
                return false;
            }
        }
      }
      string infixtoPostfix(string &s){
        stack <char> stk;
        string postfix;
        int i =0;
        while(i<s.size()){
            char symbol = s[i];
            i++;
            if(symbol>='a' && symbol <= 'z'){
                postfix = postfix + symbol;
            }
            else{
                while(!stk.empty() && prcd(stk.top(), symbol)){
                    char x = stk.top();
                    stk.pop();
                    postfix = postfix + symbol;
                }
            }
        }
      }
};