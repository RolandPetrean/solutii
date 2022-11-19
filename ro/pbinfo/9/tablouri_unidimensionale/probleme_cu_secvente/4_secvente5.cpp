// https://www.pbinfo.ro/probleme/3748/secvente5
// TODO contiinue
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("secvente5.in");
ofstream fout("secvente5.out");

const int MAXN=100000;
vector<int> rest[MAXN];

int main() {
  int c, n;
  fin>>c>>n;

  rest[0].push_back(0);

  int secv=0, lgmax=-1;
  long long smax=0;
  vector<int> v(n), d(n);
  vector<long long> s(n);
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;

    s[i] = x;
    d[i] = (x+n)%n;
    if (i) {
      s[i] += s[i-1];
      d[i] = (d[i]+d[i-1]+n)%n;
    }

    secv += rest[d[i]].size();
    if (x%n==0) {
      --secv;
      lgmax = max(lgmax, 1);
      smax = max(smax, (long long)x);
    }

    if (rest[d[i]].size()) {
      lgmax = max(lgmax, i-rest[d[i]][0]);
      for (int j:rest[d[i]]) smax = max(smax, s[i]-s[j]);
    }
    rest[d[i]].push_back(i);
  }

  if (c==1) fout<<secv;
  else if (c==2) fout<<lgmax;
  else fout<<smax;
}