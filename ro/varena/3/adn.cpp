// https://www.varena.ro/problema/adn
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("adn.in");
ofstream fout("adn.out");

const int MAXN=5000005;
int ciur[MAXN];

void init_ciur() {
  for (int i=0; i<MAXN; ++i) ciur[i] = 1;
  for (int i=2; i<MAXN; ++i) {
    if (ciur[i]==1) {
      for (int j=i; j<MAXN; j+=i) ciur[j] *= i;
    }
  }
}

int main() {
  int n;
  fin>>n;

  init_ciur();

  int ans=0;
  for (int i=1; i<=n; ++i) ans += n/ciur[i];
  fout<<ans;
}