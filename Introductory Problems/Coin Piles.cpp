#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

const ll M = 1000000007;

int main(){
	
	int t;
	cin>>t;

	while(t--){
		int a, b;
		cin>>a>>b;
		
		if(a==b && (a+b)%3 == 0){
			cout<<"YES"<<endl;
		}
		else if(a>b && a<=2*b && (a+b)%3 == 0){
			cout<<"YES"<<endl;
		}
		else if(b>a && b<=2*a && (a+b)%3 == 0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}


		// while(a>0 || b>0){
		// 	if(a>=b){
		// 		a=a-2;
		// 		b=b-1;
		// 	}
		// 	else{
		// 		a=a-1;
		// 		b=b-2;
		// 	}
		// }

		// if(a==0 && b==0){
		// 	cout<<"YES"<<endl;
		// }
		// else{
		// 	// cout<<a<<" "<<b;
		// 	cout<<"NO"<<endl;
		// }

	}

	return 0;

}