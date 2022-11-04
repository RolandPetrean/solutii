// https://www.pbinfo.ro/probleme/3408/joc2020
#include <bits/stdc++.h>
using namespace std;

ifstream fin("joc2020.in");
ofstream fout("joc2020.out");

const int MAXN=1005;
vector<int> prime{};

void init_ciur() {
  bitset<MAXN> ciur{};
  ciur[0] = ciur[1] = true;
  for (int i=2; i*i<=MAXN; ++i) {
    if (ciur[i]) continue;
    for (int j=i*i; j<MAXN; j+=i) ciur[j] = true;
  }

  for (int i=0; i<MAXN; ++i) {
    if (!ciur[i]) prime.push_back(i);
  }
}

int nrdiv(int n) {
  int nrd=1;
  for (int i:prime) {
    if (i*i>n) break;
    if (n%i==0) {
      int p=0;
      while (n%i==0) {
        ++p;
        n /= i;
      }
      nrd *= p+1;
    }
  }
  if (n>1) nrd *= 2;
  return nrd;
}

int main() {
  int n;
  fin>>n;

  init_ciur();

  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    fout<<nrdiv(x)<<" ";
  }
}