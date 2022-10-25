// https://www.varena.ro/problema/maxnr
#include <bits/stdc++.h>
using namespace std;

ifstream fin("maxnr.in");
ofstream fout("maxnr.out");

int main() {
  int n;
  fin>>n;

  array<int,10> freq{};
  while (n) {
    ++freq[n%10];
    n /= 10;
  }

  for (int i=9; i>=0; --i) {
    for (int j=0; j<freq[i]; ++j) fout<<i;
  }
}