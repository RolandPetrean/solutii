// https://www.infoarena.ro/problema/fractii
#include <bits/stdc++.h>
using namespace std;

ifstream fin("fractii.in");
ofstream fout("fractii.out");

int e[1000005];

int main() {
  int n;
  fin>>n;

  for (int i=2; i<=n; ++i) e[i] = i;
  for (int i=2; i<=n; ++i) {
    if (e[i]==i) {
      for (int j=i; j<=n; j+=i) e[j] -= e[j]/i;
    }
  }

  long long s=0;
  for (int i=2; i<=n; ++i) s += e[i];
  fout<<2*s+1;
}