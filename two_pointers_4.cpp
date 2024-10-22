#include<bits/stdc++.h>

using namespace std;
//898 div 4

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<char> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

        }
        int i=0,j=0,cnt=0;
        while(j<n){
            if(v[i]=='B'){
                j=i+k-1;
                cnt++;
                i=j+1;
                j++;
            }else{
                i++;
                j++;
            }
        }
        cout<<cnt<<endl;

    }
}
