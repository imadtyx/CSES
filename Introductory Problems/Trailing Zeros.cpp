#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

const ll M = 1000000007;

int main(){
	
	int n;

	cin>>n;

	int m=5, ans=0;

	while(m<=n){
		ans+=(n/m);
		m*=5;

	}

	cout<<ans;
	return 0;

}