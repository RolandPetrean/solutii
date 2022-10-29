// https://www.pbinfo.ro/probleme/414/listavecini
#include <bits/stdc++.h>
using namespace std;

ifstream fin("listavecini.in");
ofstream fout("listavecini.out");

int main() {
  int n;
  fin>>n;

  vector<vector<bool>> g(n, vector<bool>(n));
  int i, j;
  while (fin>>i>>j) g[i][j] = g[--j][--i] = true;

  for (int i=0; i<n; ++i) {
    int s=0;
    for (int j=0; j<n; ++j) {
      if (g[i][j]) ++s;
    }
    fout<<s<<" ";
    for (int j=0; j<n; ++j) {
      if (g[i][j]) fout<<j+1<<" ";
    }
    fout<<endl;
  }
}