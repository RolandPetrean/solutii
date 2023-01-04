// https://www.nerdarena.ro/problema/intergalactic
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("intergalactic.in");
ofstream fout("intergalactic.out");

#define int long long

const int MAXV=2000001;
bool prim[MAXV];

void ciur() {
  memset(prim, true, sizeof(prim));
  prim[0] = prim[1] = false;
  for (int i=2; i*i<MAXV; ++i) {
    if (prim[i]) for (int j=i*i; j<MAXV; j+=i) prim[j] = false;
  }
}

signed main() {
  int n, t;
  fin>>n>>t;

  ciur();

  // a, b -- stabil, instabil
  vector<int> a{-1}, b{-1};
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    if (prim[x]) a.push_back(x);
    else b.push_back(x);
  }
  sort(a.begin()+1, a.end());
  sort(b.begin()+1, b.end());

  while (t--) {
    int k;
    fin>>k;

    int l=0, r=4000001, res=-1;
    while (l <= r) {
      int mid=(l+r)/2;

      int cnt=0, j=b.size()-1;
      for (int i=1; i<a.size(); ++i) {
        while (j>0 && a[i]+b[j]>=mid) --j;
        cnt += j;
      }

      if (cnt<k) {
        res = mid;
        l = mid+1;
      } else r=mid-1;
    }

    fout<<res<<endl;
  }
}