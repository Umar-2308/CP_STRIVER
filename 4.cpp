
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
 int n,k,l,c,d,p,nl,np;
 cin>>n>>k>>l>>c >>d >>p >>nl >>np;
 int rnl = k*l; //20
 int rnp = p;//100
 int rsl = c*d;//80
 int cnt = 0;
 //3 1 1
 while(rnl && rnp && rsl){
     rnl = (rnl /nl)/3;
     rnp = (rnp / np)/3;
     rsl = (rsl / 1)/3;
    //  if(rnl && rnp && rsl){
         cnt++;
    //  }
 }
 cout<<cnt;
}
