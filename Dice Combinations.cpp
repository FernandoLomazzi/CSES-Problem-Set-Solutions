#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
int main() {
	#ifdef w1b 
	freopen("input.in", "r", stdin);
	//freopen("output.out" , "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector<int> v(max(n+1,20));
	for(int i=1;i<=6;i++)
		v[i] = 1;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n and j<=i+6;j++){
			v[j] = ((long long)v[j]+v[i])%mod;
		}
	}
	cout << v[n] << '\n';
	return 0;
}
