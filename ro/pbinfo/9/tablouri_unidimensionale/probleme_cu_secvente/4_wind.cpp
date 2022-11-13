// https://www.pbinfo.ro/probleme/3436/wind
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("wind.in");
ofstream fout("wind.out");

#define int long long

signed main() {
  int c, n;
  fin>>c>>n;
  
  if (c==1) {
    int nrdiv=0;
    for (int i=1; i*i<=n; ++i) {
      if (n%i==0) {
        ++nrdiv;
        if (n/i!=i) ++nrdiv;
      }
    }
    fout<<nrdiv-1;
  } else {
    vector<int> s(n);
    fin>>s[0];
    for (int i=1; i<n; ++i) {
      int x;
      fin>>x;
      s[i] = s[i-1]+x;
    }

    vector<int> div{1};
    for (int i=2; i*i<=n; ++i) {
      if (n%i==0) {
        div.push_back(i);
        if (n/i!=i) div.push_back(n/i);
      }
    }
    sort(div.begin(), div.end(), greater<int>());

    int minf=LONG_LONG_MAX, centrale=0, maxidx=0;
    for (int d:div) {
      int maxi=LONG_LONG_MIN, mini=LONG_LONG_MAX, localidx=0;
      for (int i=0; i<n/d; ++i) {
        int e=s[d*i+d-1];
        if (i>0) e -= s[d*i-1];

        if (e>=maxi) {
          maxi = e;
          localidx = d*i;
        }
        mini = min(mini, e);
      }
      
      if (maxi-mini <= minf) {
        minf = maxi-mini;
        centrale = d;
        maxidx = localidx;
      }
    }

    fout<<n/centrale<<" "<<maxidx+1;
  }
}