// https://codeforces.com/contest/1731/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;

    vector<int> a(n);
    for (int i=0; i<n; ++i) cin>>a[i];

    int m=10-n;
    cout<<6*(m*(m-1)/2)<<endl;
  }
}