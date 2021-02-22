#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
int main() {
	#ifdef w1b 
	freopen("input.in", "r", stdin);
	//freopen("output.out" , "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector<string> m(n);
	for(int i=0;i<n;i++){
		cin>>m[i];
	}
	vector<vector<int>> v(n,vector<int>(n+1));
	v[0][0] = m[0][0]!='*';
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(m[i][j]=='*')
				continue;
			if(i>0 and m[i-1][j]!='*')
				v[i][j] = (v[i][j]+v[i-1][j])%mod;
			if(j>0 and m[i][j-1]!='*')
				v[i][j] = (v[i][j]+v[i][j-1])%mod;
		}
	}
	cout << v[n-1][n-1] << '\n';
	return 0;
}
