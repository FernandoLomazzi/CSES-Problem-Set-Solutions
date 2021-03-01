#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifdef w1b 
	freopen("input.in", "r", stdin);
	//freopen("output.out" , "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,q;
	cin>>n>>q;
	vector<long long> v(n+1);
	for(int i=0;i<n;i++){
		cin>>v[i];
		v[i] += v[i-1];
	}
	while(q--){
		int a,b;
		cin>>a>>b;
		a--;b--;
		cout << v[b]-v[a-1] << '\n';
	}
	
	return 0;
}
