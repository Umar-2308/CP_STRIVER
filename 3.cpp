// https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define endl "\n"
#define modulo 1000000007
void arrayinput(ll arr[], ll size)
{
 for (ll i = 0; i < size; i++) 
cin >> arr[i];
 return;
}
void printarray(ll arr[], ll size)
{
 for (ll i = 0; i < size; i++) 
cout << arr[i] << " ";
 return;
}
int32_t main()
{
 fastio;
 ll test;
//  test = 1; //for no test cases ques
int arr[6][6];
int first ;
int sec;
 for(int i=1;i<=5;i++){
     for(int j=1;j<=5;j++){
         cin>>arr[i][j];
         if(arr[i][j]==1){
              first = i;
              sec = j;
         }
     }
 }
 cout<<(abs(3-first)+abs(3-sec));
}