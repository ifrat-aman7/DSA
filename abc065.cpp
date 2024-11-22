#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int i=0,j,cnt=0;
	while(v[i]!=-1){
		if(i!=1){
			j=i;
			i=v[i]-1;
			v[j]=-1;
			cnt++;
		}else{
			cout<<cnt<<endl;
			return 0;
		}


	}
	cout<<"-1"<<endl;
}
