// http://www.usaco.org/index.php?page=viewproblem2&cpid=939
#include <bits/stdc++.h>
using namespace std;

ifstream fin("buckets.in");
ofstream fout("buckets.out");

int main() {
  int bx, by, lx, ly, rx, ry;

  for (int i=1; i<=10; ++i) {
    for (int j=1; j<=10; ++j) {
      char c;
      fin>>c;
      if (c=='B') {
        bx=i;
        by=j;
      } else if (c=='L') {
        lx=i;
        ly=j;
      } else if (c=='R') {
        rx=i;
        ry=j;
      }
    }
  }

  int sq=abs(bx-lx)+abs(by-ly)-1;
  if ((bx==lx && rx==bx && ((ly < ry && ry < by) || (by < ry && ry < ly))) || (by==ly && ry==by && ((lx < rx && rx < bx) || (bx < rx && rx < lx)))) sq += 2;
  
  fout<<sq;
}