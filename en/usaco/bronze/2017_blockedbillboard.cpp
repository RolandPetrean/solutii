// http://www.usaco.org/index.php?page=viewproblem2&cpid=759
#include <bits/stdc++.h>
using namespace std;

ifstream fin("billboard.in");
ofstream fout("billboard.out");

int tx1, ty1, tx2, ty2;

int area(int x1, int y1, int x2, int y2) {
  return (x2-x1)*(y2-y1);
}

int intersect(int x1, int y1, int x2, int y2) {
  return max(0, min(x2, tx2) - max(x1, tx1)) * max(0, min(y2, ty2) - max(y1, ty1));
}

int main() {
  int bx1, by1, bx2, by2, b2x1, b2y1, b2x2, b2y2;
  fin>>bx1>>by1>>bx2>>by2>>b2x1>>b2y1>>b2x2>>b2y2>>tx1>>ty1>>tx2>>ty2;

  fout<<area(bx1, by1, bx2, by2) + area(b2x1, b2y1, b2x2, b2y2) - intersect(bx1, by1, bx2, by2) - intersect(b2x1, b2y1, b2x2, b2y2);
}