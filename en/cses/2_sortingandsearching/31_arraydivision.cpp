// https://cses.fi/problemset/task/1085
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, k;
  cin>>n>>k;

  int ms=0;
  vector<int> x(n);
  for (int i=0; i<n; ++i) {
    cin>>x[i];
    ms += x[i];
  }

  int l=0, h=ms, m=0, res=0;
  while (l <= h) {
    int div=0, s=0;
    m = (l+h)/2;

    for (int i=0; i<n; ++i) {
      if (x[i]>m) {
        div = -2;
        break;
      }
      if (s+x[i]>m) {
        ++div;
        s=0;
      }
      s += x[i];
    }
    if (s) ++div;
    if (div >= 0 && div <= k) {
      res = m;
      h = m-1;
    } else l = m+1;
  }

  cout<<res;
}