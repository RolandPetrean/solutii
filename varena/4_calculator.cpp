// https://www.varena.ro/problema/calculator
#include <bits/stdc++.h>
using namespace std;

ifstream fin("calculator.in");
ofstream fout("calculator.out");

int m[1000][10];

int main() {
  int k;
  fin>>k;

  for (int c=1; c<=k; ++c) {
    for (int d=1; d<=9; ++d) {
      m[c][d] = (m[c-1][d]*10+d)%k;
      if (m[c][d]==0) {
        fout<<d<<" "<<c;
        return 0;
      }
    }
  }
  fout<<"Impossible";
}