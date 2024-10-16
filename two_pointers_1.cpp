#include<bits/stdc++.h>

using namespace std;
//942 A div 2

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n),b(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		int arw1=0,arw2=0,cnt=0;
		while(arw2<=n-1){
			if(a[arw1]>b[arw2]){
				cnt++; arw2++;
			}else{
				arw1++; arw2++;
			} 
		}
		cout<<cnt<<endl;
	}
}
