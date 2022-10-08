// http://www.usaco.org/index.php?page=viewproblem2&cpid=963
#include <bits/stdc++.h>
using namespace std;

ifstream fin("gymnastics.in");
ofstream fout("gymnastics.out");

int main() {
  int k, n;
  fin>>k>>n;

  vector<vector<int>> cows(k, vector<int>(n));
  for (int i=0; i<k; ++i) {
    for (int j=0; j<n; ++j) {
      int x;
      fin>>x;
      --x;
      cows[i][x] = j;
    }
  }

  int cnt=0;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      if (i==j) continue;

      bool consistent=true;
      for (int x=0; x<k && consistent; ++x) {
        if (cows[x][i]>cows[x][j]) consistent = false;
      }

      if (consistent) ++cnt;
    }
  }

  fout<<cnt;
}