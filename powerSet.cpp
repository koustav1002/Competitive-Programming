#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;cin>>s;
    int n=s.length();

    vector<string>res;
    for(int i=0;i<=(1<<n)-1;i++){
        string t="";
        for(int bit=0;bit<n;bit++){
            if(i&(1<<bit)){
                t+=s[bit];
            }
        }
        // res.push_back(t);
        cout<<t<<"\n";
    }
    // for(auto &it:res){
    //     cout<<it;
    //     cout<<endl;
    // }
    return 0;
}
