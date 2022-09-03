#include<bits/stdc++.h>
using namespace std;
/*find the Kth smallest element among N elements
N=6; arr[]={7,10,4,3,20,15}
K=3
Kth smallest element=7
*/
//Brute force => sort karke kth element from front
//K+min. element => MAXHEAP
int main() {
	int n, k; cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	priority_queue<int>maxH;
	for (int i = 0; i < n; i++) {
		maxH.push(arr[i]);
		if (maxH.size() > k)
			maxH.pop();
	}
	cout << maxH.top() << "\n";
	return 0;
}