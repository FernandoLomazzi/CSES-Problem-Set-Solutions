#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifdef w1b
	freopen("input.in", "r", stdin);
	//freopen("output.out" , "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,x;
	cin>>n>>x;
	vector<int> v(n),dp(x+1);
	for(int i=0;i<n;i++)
		cin>>v[i];
	dp[0] = 1;
	for(int i=1;i<=x;i++){
		for(int j=0;j<n;j++){
			if(i-v[j]>=0){
				dp[i] += dp[i-v[j]];
				dp[i] %= 1000000007;
			}
		}
	}
	cout << dp[x] << '\n';
	return 0;
}
