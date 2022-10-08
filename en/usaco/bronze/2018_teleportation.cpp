// http://www.usaco.org/index.php?page=viewproblem2&cpid=807
#include <bits/stdc++.h>
using namespace std;

ifstream fin("teleport.in");
ofstream fout("teleport.out");

int main() {
  int a, b, x, y;
  fin>>a>>b>>x>>y;

  fout<<min(abs(a-x)+abs(y-b), min(abs(a-y)+abs(x-b), abs(a-b)));
}