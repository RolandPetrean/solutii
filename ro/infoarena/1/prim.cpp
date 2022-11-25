// https://infoarena.ro/problema/prim
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("prim.in");
ofstream fout("prim.out");

const int MAXP=1300000;

int get_kth_prime(int k) {
  bitset<MAXP> ciur{};
  ciur[0] = ciur[1] = true;
  for (int i=2; i*i<=MAXP; ++i) {
    for (int j=i*i; j<MAXP; j+=i) ciur[j] = true;
  }

  for (int i=0; i<MAXP; ++i) {
    if (!ciur[i]) {
      if (!k) return i;
      --k;
    }
  }
  return -1;
}

int main() {
  int k;
  fin>>k;

  long long p=get_kth_prime(k);
  fout<<p*p;
}