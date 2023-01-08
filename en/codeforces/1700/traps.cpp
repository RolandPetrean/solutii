// https://codeforces.com/problemset/problem/1684/D
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n, k;
    cin>>n>>k;

    int s=0;
    vector<int> b(n+1);
    for (int i=1; i<=n; ++i) {
      int a_i;
      cin>>a_i;
      s += a_i;
      b[i] = a_i-n+i;
    }
    sort(b.begin()+1, b.end(), greater<int>());
    for (int i=1; i<=k; ++i) s -= i+b[i]-1;

    cout<<s<<endl;
  }
}