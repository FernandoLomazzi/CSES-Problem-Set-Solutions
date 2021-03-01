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
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v[x-1] = i;
	}
	int pos=1e6,ans=0;
	for(int i=0;i<n;i++){
		if(pos>v[i])
			ans++;
		pos = v[i];
	}
	cout << ans << '\n';		
	return 0;
}
