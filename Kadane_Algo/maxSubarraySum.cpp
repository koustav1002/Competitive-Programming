#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxx=INT_MIN;
        for(auto &val:nums){
            sum+=val;
            maxx=max(maxx,sum);
            if(sum<0) sum=0;
        }
        return maxx;
}
int main(){
        vector<int>v={-2,1,-3,4,-1,2,1,-5,4};
        cout<<maxSubArray(v);
        return 0;
}
