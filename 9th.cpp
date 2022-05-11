#include<bits/stdc++.h>
using namespace std;
int main(){
int n; 
cin>>n;
int arr[n+2]; 

for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxx=arr[0];
int mxi=0;int mni=0;
int minn = arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>maxx){
        maxx = arr[i];
        mxi = i;
    }
     if(arr[i]<=minn){
        minn = arr[i];
        mni = i;
    }
}
int ans=mxi + n-mni-1;
if(mxi>mni){
    ans=ans-1;
}
cout<<ans;
}