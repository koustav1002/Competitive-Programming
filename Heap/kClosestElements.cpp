#include<bits/stdc++.h>
using namespace std;
/*K closest elements from X in array
arr[]={5,6,7,8,9}
K=7
X=3
closest eleemnts are 6,7,8
*/
//Brute force => sort on the basis of abs diff of (arr[i]-x)
//make a max heap with key as abs(arr[i]-x) and pop the last k elements remaining
int main() {
	int n, k, x; cin >> n >> k >> x;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	priority_queue<pair<int, int>>maxH;
	for (int i = 0; i < n; i++) {
		maxH.push({abs(arr[i] - x), arr[i]});
		if (maxH.size() > k) {
			maxH.pop();
		}
	}
	while (maxH.size() > 0) {
		cout << maxH.top().second << " ";
		maxH.pop();
	}
	return 0;
}
