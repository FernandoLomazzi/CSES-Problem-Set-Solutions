#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifdef w1b 
	freopen("input.in", "r", stdin);
	//freopen("output.out" , "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	vector<vector<pair<int,int>>> g(n);
	for(int i=0;i<m;i++){
		int a,b,w;
		cin>>a>>b>>w;
		a--;b--;
		g[a].push_back({b,w});
	}
	priority_queue<pair<long long,int>> pq;
	vector<long long> d(n,1e18);
	vector<bool> used(n);
	d[0] = 0;
	pq.push({0,0});
	while(pq.size()){
		int nodo = pq.top().second;
		pq.pop();
		if(used[nodo])
			continue;
		used[nodo] = true;
		for(auto it: g[nodo]){
			int b = it.first, w = it.second;
			if(d[nodo]<d[b]-w){
				d[b] = d[nodo]+w;
				pq.push({-d[b],b});
			}
		}
	}
	for(long long x: d)
		cout << x << ' ';
	cout << '\n';
	return 0;
}

