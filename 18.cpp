//A->65 a->97 ye lbh rkhop 32 ka diff
//https://codeforces.com/problemset/problem/281/A
#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
if(s[0]<97){ //chek if it capital
    cout<<s;
}
else{ //if small then remove smallness add capitalness
    s[0] = s[0] - 'a'+'A';
    cout<<s;
}
}   //ip  konjac //op Konjac