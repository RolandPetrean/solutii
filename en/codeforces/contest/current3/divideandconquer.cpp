// https://codeforces.com/contest/1762/problem/A
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

    int s=0;
    vector<int> a(n);
    for (int i=0; i<n; ++i) {
      cin>>a[i];
      s += a[i];
    }

    int p=INT_MAX;
    if (s&1) {
      for (int i=0; i<n; ++i) {
        int ns=s,st=0;
        while (ns&1) {
          ++st;
          ns = ns-a[i]+a[i]/2;
          a[i] /= 2;
        }
        p = min(p, st);
      }
    }

    cout<<(p==INT_MAX?0:p)<<endl;
  }
}