#include <bits/stdc++.h>
using namespace std;

struct movies{
	int i,f;
	bool operator<(movies o){
		return (this->f<o.f);
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
	vector<movies> v(n);
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v[i] = {a,b};
	}
	sort(v.begin(),v.end());
	int ans=0,t=-1;
	for(int i=0;i<n;i++){
		if(t<=v[i].i){
			ans++;
			t = v[i].f;
		}
	}
	cout << ans << '\n';
	return 0;
}
