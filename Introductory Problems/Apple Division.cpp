#include<bits/stdc++.h>

using namespace std;

#define long long int

int main(){
	int n, sum=0;
	cin>>n;

	vector<int> vec;
	set<int> s;

	while(n--){
		int temp;
		cin>>temp;
		sum += temp;
		vec.push_back(temp);
		s.insert(temp);
	}

	int halfsum = sum/2;



	vector<vector<int>> dp((int)vec.size()+1, vector<int>(halfsum+1));

	for(int i=0; i<(int)dp.size(); i++){
		for(int j=0; j<(halfsum+1); j++){
			if(i==0 || j==0){
				dp[i][j] = 0;
			}
			else if(j>=vec[i-1]){
				dp[i][j] = max(dp[i-1][j], dp[i][j-*s.lower_bound(vec[i-1]-1)]+vec[i-1]);
			}
			else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}

	cout<<dp[(int)vec.size()][halfsum]<<endl;
	cout<<halfsum<<endl;

	// if(sum%2){
	// 	cout<<1+2*(halfsum-dp[(int)vec.size()][halfsum]);
	// }
	// else{
	// 	cout<<2*(halfsum-dp[(int)vec.size()][halfsum]);
	// }

	return 0;
}