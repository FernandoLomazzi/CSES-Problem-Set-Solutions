#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifdef w1b 
	freopen("input.in", "r", stdin);
	//freopen("output.out" , "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector<int> v(n);
	set<int> st={0};
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
		vector<int> w;
		for(int x: st){
			w.push_back(v[i]+x);
		}
		for(int x: w)
			st.insert(x);
	}
	bool ok = 0;
	cout << st.size()-1 << '\n';
	for(int x: st){
		if(ok)
			cout << x << " ";
		ok = 1;
	}
	cout << '\n';
	return 0;
}

