// http://www.usaco.org/index.php?page=viewproblem2&cpid=665
#include <bits/stdc++.h>
using namespace std;

ifstream fin("cowsignal.in");
ofstream fout("cowsignal.out");

int main() {
  int n, m, k;
  fin>>n>>m>>k;

  vector<vector<char>> signal(n, vector<char>(m));
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) fin>>signal[i][j];
  }

  for (int i=0; i<n; ++i) {
    for (int va=0; va<k; ++va) {
      for (int j=0; j<m; ++j) {
        for (int ha=0; ha<k; ++ha) fout<<signal[i][j];
      }
      fout<<endl;
    }
  }
}