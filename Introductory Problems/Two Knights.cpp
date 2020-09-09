#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	
	ll n;

	cin>>n;

	for(int i=1; i<=n; i++){
		ll m = i*i;

		cout<<((m*(m-1))/2 - (i-2)*(i-1)*4)<<endl;
	}

	return 0;
}