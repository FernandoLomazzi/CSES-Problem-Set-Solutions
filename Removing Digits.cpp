#include <bits/stdc++.h>
using namespace std;

int max_digit(int n){
	int d = 0;
	while(n>0){
		d = max(d,n%10);
		n /= 10;
	}
	return d;
}
int main() {
	#ifdef w1b 
	freopen("input.in", "r", stdin);
	//freopen("output.out" , "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,ans=1;
	cin>>n;
	while(n>9){
		n -= max_digit(n);
		ans++;
	}
	cout << ans << '\n';
	return 0;
}
