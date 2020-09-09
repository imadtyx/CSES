#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin>>str;

	char s=str[0];
	int ans = 0, temp = 0;

	

	for(auto x: str){
		if(s==x){
			temp++;
		}
		else if(x!=s){
			ans = max(ans, temp);
			temp = 1;
			s = x;
		}
	}

	ans = max(ans, temp);

	cout<<ans;

	return 0;
}