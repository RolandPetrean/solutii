// http://www.usaco.org/index.php?page=viewproblem2&cpid=663
#include <bits/stdc++.h>
using namespace std;

ifstream fin("square.in");
ofstream fout("square.out");

struct Rectangle {
  int x1, y1, x2, y2;
};

inline int max4(int a, int b, int c, int d) {
  return max(a, max(b, max(c, d)));
}

inline int min4(int a, int b, int c, int d) {
  return min(a, min(b, min(c, d)));
}

int main() {
  Rectangle r1, r2;
  fin>>r1.x1>>r1.y1>>r1.x2>>r1.y2>>r2.x1>>r2.y1>>r2.x2>>r2.y2;
  
  int l=max(abs(max4(r1.x1, r1.x2, r2.x1, r2.x2) - min4(r1.x1, r1.x2, r2.x1, r2.x2)), abs(max4(r1.y1, r1.y2, r2.y1, r2.y2) - min4(r1.y1, r1.y2, r2.y1, r2.y2)));
  fout<<l*l;
}