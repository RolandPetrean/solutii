// https://codeforces.com/contest/1748/problem/A
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;
  
  while (t--) {
    int n;
    cin>>n;
    cout<<n/2+(n%2)<<endl;
  }
}