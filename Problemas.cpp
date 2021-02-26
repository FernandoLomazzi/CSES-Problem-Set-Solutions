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
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	int a=0,b=n-1,ans=0;
	while(b-a>=0){
		if((long long)v[a]+v[b]>k)
			b--;
		else{
			a++;
			b--;
		}
		ans++;
	}
	cout << ans << '\n';
	return 0;
}

