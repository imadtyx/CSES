#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	if(n==2 || n==3){
		cout<<"NO SOLUTION";
	}
	else {
		int m = n-1;

		while(m>0){
			cout<<m<<" ";
			m = m-2;
		}

		while(n>0){
			cout<<n<<" ";
			n = n-2;
		}
	}

	return 0;

}