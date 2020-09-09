#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int n;
    cin>>n;
    
    unordered_set<int> s;

    for(int i=1; i<n; i++){
        int temp;
        cin>>temp;
        s.insert(temp);
    }

    for(int i=1; i<=n; i++){
        if(s.count(i)<1){
            cout<<i;
            return 0;
        }
    }

    return 0;
}
