// https://www.infoarena.ro/problema/ambuscada2
#include <bits/stdc++.h>
using namespace std;

ifstream fin("ambuscada2.in");
ofstream fout("ambuscada2.out");

int main() {
  int n, m, v;
  fin>>n>>m>>v;

  vector<pair<int,int>> mars{};
  for (int i=0; i<m; ++i) {
    int st, dr, d;
    fin>>st>>dr>>d;
    mars.push_back({st, d});
    mars.push_back({dr+1, -d});
  }
  sort(mars.begin(), mars.end());
  
  int dmg=0, k=0, st=0;
  for (int i=0; i<mars.size(); ++i) {
    if (dmg >= v) k += mars[i].first - st;
    st = mars[i].first;
    dmg += mars[i].second;
  }

  fout<<n-k;
}