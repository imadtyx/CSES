#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

const ll M = 1000000007;

int main(){
	ll n;

	cin>>n;

	ll ans = 1;
	while(n>0){

		ans = ans<<1;
		n--;
		if(ans>M){
			ans = ans%M;
		}

	}

	// ll ans = 1<<30;

	cout<<(ans);

	return 0;

}