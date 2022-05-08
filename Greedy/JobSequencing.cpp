#include<bits/stdc++.h>
using namespace std;

struct Job {
   int id; // Job Id 
   int dead; // Deadline of job 
   int profit; // Profit if job is over before or on deadline 
};

bool static comparison(Job a, Job b) {
         return (a.profit > b.profit);
      }
   //Function to find the maximum profit and the number of jobs done
pair < int, int > JobScheduling(Job arr[], int n) {

    sort(arr, arr + n, comparison);
    int maxi = arr[0].dead;
    for (int i = 1; i < n; i++) {
         maxi = max(maxi, arr[i].dead);
    }

    int slot[maxi + 1];

    for (int i = 0; i <= maxi; i++)
    slot[i] = -1;

    int countJobs = 0, jobProfit = 0;

    for (int i = 0; i < n; i++) {
    for (int j = arr[i].dead; j > 0; j--) {
        if (slot[j] == -1) {
            slot[j] = arr[i].id;
            countJobs++;
            jobProfit += arr[i].profit;
            break;
        }
      }
    }

    for(int i=1;i<=maxi;i++)
       cout<<slot[i]<<" ";
    cout<<"\n";
    return make_pair(countJobs, jobProfit);
}
int main(){
     int n = 4;
     Job arr[n] = {{1,4,20},{2,1,10},{3,2,40},{4,2,30}};
     pair<int,int>ans=JobScheduling(arr,n);
     
     cout<<ans.first<<" "<<ans.second<<"\n";

	return 0;
}
