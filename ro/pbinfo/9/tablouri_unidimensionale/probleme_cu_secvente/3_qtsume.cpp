// https://www.pbinfo.ro/probleme/3796/qtsume
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("qtsume.in");
ofstream fout("qtsume.out");

#define int long long

signed main() {
  int n, q;
  fin>>n;

  vector<int> s(n+2), s2(n+2);
  for (int i=1; i<=n; ++i) {
    fin>>s[i];
    s2[i] = s2[i-1]+s[i]*i;
    s[i] += s[i-1];
  }

  fin>>q;
  while (q--) {
    int x, y;
    fin>>x>>y;
    fout<<s2[y]-s2[x-1] - (x-1)*(s[y]-s[x-1])<<endl;
  }
}