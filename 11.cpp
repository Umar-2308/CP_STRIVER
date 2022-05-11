// https://codeforces.com/problemset/problem/136/A
// In this problem one had to read a permutation and output the inverse permutation to it. It can be found with the following algorithm. When reading the i-th number, which is equal to a one can store i into the a-th element of the resulting array. The only thing left is to output this array.

// The complexity is O(N).

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int a[n];
    for(int i=1;i<=n;i++){
    a[arr[i]] = i;
}
 for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}