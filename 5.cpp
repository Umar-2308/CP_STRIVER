#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
int tmax = max(a,b);
int tmin = min(a,b);
tmax = max(tmax,c);
 tmin = min(c,tmin);
cout<<tmax-tmin;

return 0;
}