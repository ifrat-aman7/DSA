#include<bits/stdc++.h>

using namespace std;
//div3 -966-B

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		int bad=0;
		int l=v[0],r=v[0];
		for(int i=1;i<n;i++){
			if(v[i]==l-1) l--;
			else if(v[i]==r+1) r++;
			else bad=1;


		}
		cout<<(bad?"no":"yes")<<endl;
	}
}
