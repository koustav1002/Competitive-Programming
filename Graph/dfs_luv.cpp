#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int>g[N];
int vis[N] = {0};
void dfs(int vertex) {
	if (vis[vertex]) return;
	cout << vertex << endl;
	vis[vertex] = 1;
	for (int child : g[vertex]) {
		// if (vis[child]) continue;
		cout << "par " << vertex << ", child " << child << endl;
		dfs(child);
	}
}
int main() {
	int n, m; cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v; cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			dfs(i);
		}
	}
	return 0;
}