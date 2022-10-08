// http://www.usaco.org/index.php?page=viewproblem2&cpid=615
#include <bits/stdc++.h>
using namespace std;

ifstream fin("pails.in");
ofstream fout("pails.out");

int main() {
  int x, y, m;
  fin>>x>>y>>m;

  int maxm=0;
  for (int i=0; i<=m/x; ++i) {
    for (int j=0; j<=(m-x*i)/y; ++j) {
      maxm = max(maxm, x*i+y*j);
    }
  }

  fout<<maxm;
}