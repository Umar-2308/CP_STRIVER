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
 ll n;
//  test = 1; //for no test cases ques
 cin>>n;
 int x=0;
 while (n--){
 string s;
 cin>>s;
//  stringstream str(s);
//  string t;
//  while(str<<t){

//  }
if(s[1]=='+'){
    x++;
}
else{
    x--;
}
}
cout<<x;
}