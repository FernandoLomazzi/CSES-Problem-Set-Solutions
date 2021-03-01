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
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	long long ans=0,k=v[n/2];
	for(int i=0;i<n;i++){
		ans += abs(v[i]-k);
	}
	cout << ans << '\n';
	return 0;
}
