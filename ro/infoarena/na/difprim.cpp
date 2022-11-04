// https://www.infoarena.ro/problema/difprim
#include <bits/stdc++.h>
using namespace std;

ifstream fin("difprim.in");
ofstream fout("difprim.out");

const int CIUR_SIZE = 10000001;
vector<int> p{};

void init_ciur() {
  bitset<CIUR_SIZE> ciur;
  ciur[0] = ciur[1] = true;
  for (int i=2; i*i<=CIUR_SIZE; ++i) {
    if (!ciur[i]) {
      for (int j=i*i; j<CIUR_SIZE; j+=i) ciur[j] = true;
    }
  }

  for (int i=2; i<CIUR_SIZE; ++i) {
    if (!ciur[i]) p.push_back(i);
  }
}

int main() {
  int a, b;
  fin>>a>>b;
  
  init_ciur();

  int l=0, r=p.size()-1, m, poz;
  while (l<=r) {
    m = (l+r)/2;
    if (p[m]<a) l = m+1;
    else {
      r = m-1;
      poz = m;
    }
  }

  if (p[poz]>b || poz==p.size()-1 || p[poz+1]>b) fout<<-1;
  else {
    int n1=-1, n2=-1;
    for (int i=poz+1; i<p.size() && p[i]<=b; ++i) {
      if (p[i]-p[i-1]>n2-n1) {
        n1 = p[i-1];
        n2 = p[i];
      }
    }
    fout<<n1<<" "<<n2;
  }
}