#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

const ll M = 1000000007;

int main(){
	
	string str;
	cin>>str;
	map<char, int> cf;

	for(auto x: str) cf[x]++;

	int numodd = 0;

	for(auto [k, v]: cf){
		if(v%2) numodd++;
	}

	if(numodd>1){
		cout<<"NO SOLUTION"<<endl;
		return 0;
	}
	else{
		vector<char> ans(str.length()); 

		int temp = 0;
		for(auto [k, v]: cf){
			while(v>0){
				if(v>1){
					ans[temp] = k;
					ans[str.length() - temp -1] = k;
					v-=2;
					temp++;
				}
				else if(v==1){
					ans[str.length()/2] = k;
					v--;
				}
			}
		}

		string final = "";

		for(auto x: ans) final += x;

		cout<<final<<endl;
	}



	return 0;

}