// https://www.pbinfo.ro/probleme/2560/bits
#include <bits/stdc++.h>
using namespace std;

ifstream fin("bits.in");
ofstream fout("bits.out");

int main() {
  long long n;
  int q;
  fin>>n>>q;

  bitset<63> bits(n);

  while (q--) {
    int x;
    fin>>x;
    fout<<bits[x];
  }
}