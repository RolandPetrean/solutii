// https://www.varena.ro/problema/numchar
#include <bits/stdc++.h>
using namespace std;

ifstream fin("numchar.in");
ofstream fout("numchar.out");

int main() {
  int n;
  fin>>n;

  int l=0, d=0;
  for (int i=0; i<=n; ++i) {
    char c;
    fin>>noskipws>>c;
    if (isalpha(c)) ++l;
    else if (isdigit(c)) ++d;
  }

  fout<<l<<" "<<d;
}