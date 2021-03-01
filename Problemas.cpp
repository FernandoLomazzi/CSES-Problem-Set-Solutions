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
	multiset<int> st;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		st.insert(x);
	}
	for(int i=0;i<m;i++){
		int k;
		cin>>k;
		auto it = st.upper_bound(k);
		if(it==st.begin())
			cout << -1 << '\n';
		else{
			cout << *--it << '\n';
			st.erase(it);
		}
	}
	return 0;
}
