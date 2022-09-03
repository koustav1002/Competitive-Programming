#include<bits/stdc++.h>
using namespace std;
/*sort a K sorted array
N=6; arr[]={7,10,4,3,20,15}
K=3
K sorted array => element that should have been at ith position if sorted then that
element lies in between [i-k,i+k]
eg: 3 should have been at 0th pos but it's 3rd position
*/
//Brute force => introsort
//max element reqd at end so min heap
int main() {
	int n, k; cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	priority_queue<int, vector<int>, greater<int>>minH;
	for (int i = 0; i < n; i++) {
		minH.push(arr[i]);
		if (minH.size() > k) {
			cout << minH.top() << " ";
			minH.pop();
		}
	}
	while (minH.size() > 0) {
		cout << minH.top() << " ";
		minH.pop();
	}
	return 0;
}
