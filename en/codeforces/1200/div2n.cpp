// https://codeforces.com/contest/1744/problem/D
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

    int f=0;
    for (int i=0; i<n; ++i) {
      while (a[i]%2==0) {
        ++f;
        a[i] /= 2;
      }
    }

    vector<int> b;
    for (int i=2; i<=n; i+=2) {
      int p=0, x=i;
      while (x%2==0) {
        x /= 2;
        ++p;
      }
      b.push_back(p);
    }
    sort(b.begin(), b.end(), greater<int>());

    int op=0, r=n-f;
    for (int i=0; i<b.size() && r>0; ++i) {
      r -= b[i];
      ++op;
    }
    cout<<(r>0?-1:op)<<endl;
  }
}