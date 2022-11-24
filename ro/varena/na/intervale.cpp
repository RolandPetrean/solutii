// https://www.varena.ro/problema/intervale
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("intervale.in");
ofstream fout("intervale.out");

const int MAXN=1000000, MAXP=10;
vector<int> ciur(MAXN+1);
vector<vector<int>> p(MAXP);

void initciur() {
  for (int i=2; i<=MAXN; ++i) {
    if (!ciur[i]) {
      for (int j=i; j<=MAXN; j+=i) ++ciur[j];
    }
  }
  for (int i=0; i<=MAXN; ++i) p[ciur[i]].push_back(i);
}

int main() {
  initciur();
  int a, b, k;
  while (fin>>a>>b>>k) {
    if (k>=MAXP) fout<<0<<endl;
    else {
      auto it1 = lower_bound(p[k].begin(), p[k].end(), a), it2=lower_bound(p[k].begin(), p[k].end(), b);
      if (it2==p[k].begin()) fout<<0<<endl;
      else fout<<distance(it1, it2)+(*it2==b)<<endl;
    }
  }
}