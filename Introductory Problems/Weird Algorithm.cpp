#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    ll n;
    cin>>n;
    
    while(!(n==1)){
    	cout<<n<<" ";

    	if(n%2){
    		n = 3*n + 1;
    	}
    	else{
    		n/=2;
    	}
    }

    cout<<n;

    return 0;
}
