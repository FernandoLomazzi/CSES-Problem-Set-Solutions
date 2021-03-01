#include <bits/stdc++.h>
using namespace std;

struct event{
	int t,v;
	bool operator<(event o){
		return(this->t<o.t);
	}
};
int main() {
	#ifdef w1b 
	freopen("input.in", "r", stdin);
	//freopen("output.out" , "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector<event> v(2*n);
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v[2*i] = {a,1};
		v[2*i+1] = {b,-1};
	}
	sort(v.begin(),v.end());
	int p=0,ans=0;
	for(auto &it: v){
		p += it.v;
		ans = max(ans,p);
	}
	cout << ans << '\n';
	
