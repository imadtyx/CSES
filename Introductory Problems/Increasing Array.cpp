#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int n;
	cin>>n;

	ll ans = 0;

	vector<ll> vec;

	while(n--){
		ll temp;
		cin>>temp;
		vec.push_back(temp);
	}

	for(int i=1; i<(int)vec.size(); i++){
		if(vec[i]<vec[i-1]){
			ans+=(vec[i-1]-vec[i]);
			vec[i] = vec[i-1];
		}
	}

	cout<<ans;

	return 0;
}