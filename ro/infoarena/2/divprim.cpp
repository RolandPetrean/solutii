// https://infoarena.ro/problema/divprim
#include <bits/stdc++.h>
using namespace std;

ifstream fin("divprim.in");
ofstream fout("divprim.out");

const int N=1000001;
int nrprim[N];
vector<int> divprim[8];

void ciur() {
  bitset<N> c;
  c[0] = c[1] = true;
  for (int i=2; i*i<=N; ++i) {
    if (!c[i]) {
     for (int j=i*i; j<N; j+=i) c[j] = true;
    }
  }

  for (int i=0; i<N; ++i) {
    if (!c[i]) {
      for (int j=i; j<N; j+=i) ++nrprim[j];
    }
  }

  for (int i=0; i<N; ++i) {
    if (nrprim[i]<=7) divprim[nrprim[i]].push_back(i);
  }
}

int main() {
  int t;
  fin>>t;
  
  ciur();

  while (t--) {
    int n, k;
    fin>>n>>k;

    int l=0, r=divprim[k].size()-1, m=(l+r)/2, poz=-1;
    while (l <= r) {
      m = (l+r)/2;
      if (divprim[k][m]>n) r = m-1;
      else {
        l = m+1;
        poz = m;
      }
    }

    if (poz==-1) fout<<"0\n";
    else fout<<divprim[k][poz]<<endl;
  }
}