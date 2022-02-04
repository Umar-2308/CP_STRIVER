// https://codeforces.com/contest/514/problem/A
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
 ll num;
//  test = 1; //for no test cases ques
 cin>>num;
 ll ans =0;
 ll r = 1;
while(num/10!=0){
    ll dig = num%10;
    if(dig>4){
        dig = 9-dig;

    }
    ans += r*dig;
    r = r*10;
    num = num/10;
}
 ll dig = num%10;
    if(dig>4&& dig!=9){
        dig = 9-dig;

    }
    ans += r*dig;
    r = r*10;
    num = num/10;
cout<<ans;
}