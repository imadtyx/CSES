#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t;

	cin>>t;

	while(t--){
		ll x, y;
		cin>>x>>y;

		ll line = max(x, y);

		// int center = 

		if(line%2 == 0){
			if(x<=y){ 
				cout<<(y-1)*(y-1) + x<<endl;
			}
			else{
				cout<<(x*x) - y + 1<<endl;
			}
		}
		else{
			if(y<=x){
				cout<<(x-1)*(x-1) + y<<endl;
			}
			else{
				cout<<(y*y) - x + 1<<endl;
			}
		}

		// cout<<ans;
	
		}

	return 0;

}