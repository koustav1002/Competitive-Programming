#include<bits/stdc++.h>
using namespace std;

const int N=1e7+10;
//Q<10^7,N<10^7
vector<bool> isPrime(N,1);
int main(){
  isPrime[0]=isPrime[1]=false;
  for(int x=2;x*x<N;x++){
      if(isPrime[x]==true){
          for(int y=x*x;y<N;y+=x){
              isPrime[y]=false;
          }
      }
  }

  for(int x=1;x<100;x++){
      if(isPrime[x])
         cout<<x<<" ";
  }
     cout<<endl;
return 0;
}