// http://www.usaco.org/index.php?page=viewproblem2&cpid=567
#include <bits/stdc++.h>
using namespace std;

ifstream fin("paint.in");
ofstream fout("paint.out");

int main() {
  int a, b, c, d;
  fin>>a>>b>>c>>d;

  if (min(a, b) <= max(c, d) && max(a, b) >= min(c, d)) fout<<max(a, max(b, max(c, d)))-min(a, min(b, min(c, d)));
  else fout<<(max(a, b)-min(a, b))+(max(c, d)-min(c, d));
}