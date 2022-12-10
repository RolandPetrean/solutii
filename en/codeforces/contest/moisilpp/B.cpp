#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("ion.in");
ofstream fout("ion.out");

#define int long long

signed main() {
  int n;
  fin>>n;

  int maxi=0, mini=LONG_LONG_MAX, s=0;
  vector<int> a(n);
  for (int i=0; i<n; ++i) {
    fin>>a[i];
    s += a[i];
    mini = min(mini, a[i]);
    maxi = max(maxi, a[i]);
  }

  if (maxi==mini) {
    fout<<0;
    return 0;
  }
  if (n==2) {
    fout<<-1; 
    return 0;
  }
  
  int oy=ceil((double)(s-(2*mini))/(n-2));
  for (int y=max(oy, maxi); y<oy+10*n; ++y) {
    int sy=n*y-s;
    if (sy-y+2*mini>=y && sy%2==0) {
      fout<<sy/2;
      return 0;
    }
  }
  if (n*maxi-s-maxi+2*mini>=maxi && (n*maxi-s)%2==0) fout<<(n*maxi-s)/2;
  else fout<<-1;
}