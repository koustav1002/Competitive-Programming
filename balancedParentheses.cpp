#include <bits/stdc++.h>

using namespace std;
bool isOpp(char o,char c){
    return (o=='(' && c==')')|| (o=='[' && c==']')|| (o=='{' && c=='}');

}
int main()
{
    string s;cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
        else{
            if(st.empty()){
                cout<<"No";return 0;
            }
            if(isOpp(st.top(),s[i])) st.pop();
            else{
             cout<<"No";return 0;   
            }
        }
    }
    if(st.empty()) cout<<"Yes";
    else cout<<"No";
    return 0;
}
