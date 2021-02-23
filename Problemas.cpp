#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifdef w1b 
	freopen("input.in", "r", stdin);
	//freopen("output.out" , "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,k;
	cin>>n>>k;
	vector<int> v(n+1),w(n+1);
	vector<vector<int>> dp(n+1,vector<int>(k+1));
	for(int i=0;i<n;i++)
		cin>>w[i];
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=k;j++){
			if(i==0 or j==0)
				continue;
			if(j-w[i-1]>=0)
				dp[i][j] = max(v[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[n][k] << '\n';
	return 0;
}
