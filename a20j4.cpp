// A. Beautiful Year
// https://codeforces.com/problemset/problem/271/A

#include<bits/stdc++.h>
using namespace std;
bool check(int t){
    int arr[10]={0};
    while(t){
    int digit =  t%10;
    arr[digit]++;
    t=t/10;
    }
    for(int i=0;i<10;i++){
        if(arr[i]>1){
            return false;
        }
    }
    return true;
}
int main(){

    int n; cin>>n;
    int t=n+1;
    while(check(t)!=true){
        t++;
    }
    cout<<t;
}