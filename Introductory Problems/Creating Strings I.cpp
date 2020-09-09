#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin>>str;

	set<string> ans;

	ans.insert(str);

	for(auto x: ans){
		for(int i=0; i<x.length(); i++){
			for(int j = i; j<x.length(); j++){
			string temp = x;
			swap(temp[i], temp[j]);
			ans.insert(temp);
			}
		}

	}	

	cout<<(int)ans.size()<<endl;

	for(auto x: ans) cout<<x<<endl;

	return 0;
}