// https://www.pbinfo.ro/probleme/417/gradmax
#include <bits/stdc++.h>
using namespace std;

ifstream fin("gradmax.in");
ofstream fout("gradmax.out");

int main() {
  int n;
  fin>>n;

  vector<vector<bool>> g(n, vector<bool>(n));
  int i, j;
  while (fin>>i>>j) g[i][j] = g[--j][--i] = true;

  int maxi=-1;
  vector<int> maxv{};
  for (int i=0; i<n; ++i) {
    int cnt=0;
    for (int j=0; j<n; ++j) {
      if (g[i][j]) ++cnt;
    }
    if (cnt>maxi) {
      maxi = cnt;
      maxv = {i+1};
    } else if (cnt==maxi) maxv.push_back(i+1);
  }

  fout<<maxv.size()<<" ";
  for (auto v:maxv) fout<<v<<" ";
}