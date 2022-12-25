// https://www.pbinfo.ro/probleme/3367/croseta
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("croseta.in");
ofstream fout("croseta.out");

#define int long long

signed main() {
  int n;
  fin>>n;

  int l=0, r=2000000000, res=-1;
  while (l<=r && res==-1) {
    int mid=(l+r)/2;

    int s=0, x=mid;
    while (x) {
      s += x;
      if (x==2) x = 1;
      else x /= 3;
    }
    s *= 2;

    if (s==n) res = mid;
    else if (s<n) l=mid+1;
    else r=mid-1;
  }

  fout<<res;
}