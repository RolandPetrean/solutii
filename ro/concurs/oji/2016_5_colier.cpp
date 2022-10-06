// https://www.pbinfo.ro/probleme/1610/colier
#include <bits/stdc++.h>
using namespace std;

ifstream fin("colier.in");
ofstream fout("colier.out");

int minmax(int n) {
  bool prim=false;
  int mini=10, maxi=0;
  while (n) {
    if (n%10<mini) {
      prim = true;
      mini = n%10;
    }
    if (n%10>maxi) {
      prim = false;
      maxi = n%10;
    }
    n /= 10;
  }
  if (prim) return mini*10+maxi;
  return maxi*10+mini;
}

int main() {
  int t, n;
  fin>>t>>n;

  if (t==1) {
    int t1=0;
    for (int i=0; i<n; ++i) {
      int x;
      fin>>x;
      x = minmax(x);

      if (x/10%10<x%10) ++t1;
    }
    fout<<t1;
    return 0;
  }

  int px;
  fin>>px;
  px = minmax(px);

  int lx=px, s=n;
  for (int i=1; i<n; ++i) {
    int x;
    fin>>x;
    x = minmax(x);

    if ((x/10%10<x%10 && lx/10%10<lx%10) || (x/10%10>x%10 && lx/10%10>lx%10)) --s;
    lx = x;
  }
  if ((lx/10%10<lx%10 && px/10%10<px%10) || (lx/10%10>lx%10 && px/10%10>px%10)) --s;

  fout<<s;
}