#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    string str("sadef(wadwefew)ewfew");
    stack<char> st;
    string::size_type ind;
    for(ind = str.size(); ind >= 0; --ind){
        if(str[ind] == ')')
            break;
    }
    --ind;
    while(ind != 0){
        if(str[ind] == '(')
            break;
        st.push(str[ind]);
        --ind;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
}
