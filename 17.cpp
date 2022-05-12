//https://codeforces.com/problemset/problem/236/A

#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int arr[30]={0};
for(int i=0;i<s.size();i++){
    arr[s[i]-'a']++;
}
int cnt=0;
for(int i=0;i<26;i++){
    if(arr[i]>0){
        cnt++;
    }
}
// cout<<cnt;
if(cnt%2==0){
    cout<<"CHAT WITH HER!";
}
else{
    cout<<"IGNORE HIM!";
}
}