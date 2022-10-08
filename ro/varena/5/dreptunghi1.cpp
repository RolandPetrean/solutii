// https://www.varena.ro/problema/dreptunghi1
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("dreptunghi1.in");
ofstream fout("dreptunghi1.out");

int main() {
  int n, m, z;
  fin>>n>>m>>z;

  vector<vector<unsigned short>> e(n);
  for (int i=0; i<z; ++i) {
    int l, c;
    fin>>l>>c;
    --l; --c;
    e[l].push_back(c);
  }

  vector<int> d(m+1);
  int maxai=0;
  for (int i=0; i<n; ++i) {
    int maxaj=0;
    stack<pair<short,short>> s;

    for (auto p:e[i]) d[p]=-1;
    d[m] = -1;

    for (int j=0; j<=m; ++j) {
      ++d[j];

      int l=0;
      while (!s.empty() && s.top().first>d[j]) {
        l += s.top().second;
        maxaj = max(maxaj, s.top().first*l);
        s.pop();
      }

      s.push({d[j],l+1});
    }

    maxai = max(maxai, maxaj);
  }

  fout<<maxai;
}