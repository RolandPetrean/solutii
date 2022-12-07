// https://www.pbinfo.ro/probleme/955/miny
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("miny.in");
ofstream fout("miny.out");

const int MAXX=10000;
int prim[MAXX+5];

int main() {
  int n;
  fin>>n;

  int p=1;
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    p = (p*x)%100;

    for (int d=2; d*d<=x; ++d) {
      if (x%d==0) {
        int e=0;
        while (x%d==0) {
          ++e;
          x /= d;
        }
        prim[d] += e;
      }
    }
    if (x>1) ++prim[x];
  }

  fout<<p/10%10<<endl;

  int egcd=0;
  vector<pair<int,int>> f{};
  for (int i=2; i<MAXX; ++i) {
    if (prim[i]) f.push_back({i, prim[i]});
    egcd = __gcd(egcd, prim[i]);
  }
  fout<<f.size()<<endl;
  for (auto d:f) fout<<d.first<<" "<<d.second/egcd<<endl;
}