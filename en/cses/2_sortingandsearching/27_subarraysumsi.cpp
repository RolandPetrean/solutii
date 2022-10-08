// https://cses.fi/problemset/task/1660
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, x;
  cin>>n>>x;

  int l=0, s=0, t=0;
  vector<int> a(n);
  for (int i=0; i<n; ++i) {
    cin>>a[i];
    s += a[i];

    for (; s>x; ++l) s -= a[l];
    if (s == x) ++t;
  }
  cout<<t;
}