#include<bits/stdc++.h>
using namespace std;
/*find the Kth largest element among N elements
N=6; arr[]={7,10,4,3,20,15}
K=3
Kth smallest element=7
*/
//Brute force => sort karke k elements from back
//K+min. element => MINHEAP
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	int n, k; cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	priority_queue<int>minH;
	for (int i = 0; i < n; i++) {
		minH.push(-arr[i]);
		if (minH.size() > k)
			minH.pop();
	}
	while (minH.size() > 0) {
		cout << -minH.top() << " ";
		minH.pop();
	}
	return 0;
}