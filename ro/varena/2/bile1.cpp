// https://www.varena.ro/problema/bile1
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("bile1.in");
ofstream fout("bile1.out");

int main() {
  int n, m, p;
  fin>>n>>m>>p;

  vector<vector<int>> obs(n, vector<int>());
  for (int i=0; i<p; ++i) {
    int a, b;
    fin>>a>>b;
    --a; --b;
    obs[a].push_back(b);
  }

  vector<int> b(m);
  for (int i=0; i<m; ++i) fin>>b[i];

  for (int i=0; i<n; ++i) {
    for (int j : obs[i]) {
      b[j-1] += b[j]/2 + (b[j]&1);
      b[j+1] += b[j]/2;
      b[j] = 0;
    }
  }

  for (auto v : b) fout<<v<<endl;
}