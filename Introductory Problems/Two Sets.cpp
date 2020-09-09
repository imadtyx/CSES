#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	
	ll n;

	cin>>n;

	if(((n*(n+1))/2)%2 == 0){
		vector<int> first, second;
		cout<<"YES"<<endl;

		if(n%2){
			first.push_back(1);
			first.push_back(2);
			second.push_back(3);

			for(int i=4; i<=(n+3)/2; i++){
				if(i%2==0){
					first.push_back(i);
					first.push_back(n-i+4);
				}
				else{
					second.push_back(i);
					second.push_back(n-i+4);
				}
			}			

			sort(first.begin(), first.end());
			sort(second.begin(), second.end());

			cout<<(int)first.size()<<endl;
			for(auto x: first){
				cout<<x<<" ";
			}
			cout<<endl;
			cout<<(int)second.size()<<endl;
			for(auto x: second){
				cout<<x<<" ";
			}

		}
		else{
			for(int i=1; i<=n/2; i++){
				if(i%2){
					first.push_back(i);
					first.push_back(n-i+1);
				}
				else{
					second.push_back(i);
					second.push_back(n-i+1);
				}
			}

			sort(first.begin(), first.end());
			sort(second.begin(), second.end());

			cout<<(int)first.size()<<endl;
			for(auto x: first){
				cout<<x<<" ";
			}
			cout<<endl;
			cout<<(int)second.size()<<endl;
			for(auto x: second){
				cout<<x<<" ";
			}
		}

	}
	else{
		cout<<"NO";
	}

	return 0;
}