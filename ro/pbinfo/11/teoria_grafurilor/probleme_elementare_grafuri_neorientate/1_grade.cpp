// https://www.pbinfo.ro/probleme/416/grade
#include <bits/stdc++.h>
using namespace std;

ifstream fin("grade.in");
ofstream fout("grade.out");

int main() {
  int n;
  fin>>n;

  vector<vector<bool>> g(n, vector<bool>(n));
  int i, j;
  while (fin>>i>>j) g[i][j] = g[--j][--i] = true;

  for (int i=0; i<n; ++i) {
    int cnt=0;
    for (int j=0; j<n; ++j) {
      if (g[i][j]) ++cnt;
    }
    fout<<cnt<<" ";
  }
}