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
	vector<int> v(1);
	cin>>v[0];
	for(int i=1;i<n;i++){
		int x;
		cin>>x;
		auto it = lower_bound(v.begin(),v.end(),x);
		if(it==v.end())
			v.push_back(x);
		else
			*it = x;
	}
	cout << v.size() << '\n';
	return 0;
}
