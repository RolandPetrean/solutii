// https://codeforces.com/problemset/problem/371/C
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

const int MAXH=1000000000000000;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string recipe;
  int nb, ns, nc, pb, ps, pc, m, rb=0, rs=0, rc=0;
  cin>>recipe>>nb>>ns>>nc>>pb>>ps>>pc>>m;

  for (int i=0; i<recipe.size(); ++i) {
    if (recipe[i]=='B') ++rb;
    else if (recipe[i]=='S') ++rs;
    else ++rc;
  }

  int l=0, r=MAXH, res=0;
  while (l<=r) {
    int mid=(l+r)/2, price = pb*max(0LL, mid*rb-nb) + ps*max(0LL, mid*rs-ns) + pc*max(0LL, mid*rc-nc);
    if (price <= m) {
      res = mid;
      l = mid+1;
    } else r = mid-1;
  }
  cout<<res;
}