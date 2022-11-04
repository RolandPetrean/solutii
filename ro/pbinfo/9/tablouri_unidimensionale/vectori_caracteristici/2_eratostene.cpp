// https://www.pbinfo.ro/probleme/303/eratostene
#include <bits/stdc++.h>
using namespace std;

ifstream fin("eratostene.in");
ofstream fout("eratostene.out");

const int CIUR_SIZE=1000001;
bitset<CIUR_SIZE> c;

void ciur() {
  c[0] = c[1] = true;
  for (int i=2; i*i<=CIUR_SIZE; ++i) {
    for (int j=i*i; j<=CIUR_SIZE; j+=i) c[j] = true;
  }
}

int main() {
  int n;
  fin>>n;

  ciur();

  int t=0;
  for (int i=0; i<n; ++i) {
    int v;
    fin>>v;
    t += !c[v];
  }
  fout<<t;
}