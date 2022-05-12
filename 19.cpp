#include <bits/stdc++.h>
using namespace std;

int main(){
string s; cin>>s;
vector<int> v;
for(int i=0;i<s.size();i=i+2){
    int tmp = s[i]-'0';
    v.push_back(tmp);
}
    // cout<<v[0];
    sort(v.begin(),v.end());

    for(auto i=v.begin();i<v.end()-1;i++){
        
                cout<<*i<<'+';
                
    
    }
    cout<<v.back();

}