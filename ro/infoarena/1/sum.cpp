// https://infoarena.ro/problema/sum
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("sum.in");
ofstream fout("sum.out");

const int VMAX=100'001;
int e[VMAX];

void ciur() {
  for (int i=0; i<VMAX; ++i) e[i] = i;
  for (int i=2; i<VMAX; ++i) {
    if (i==e[i]) {
      for (int j=i; j<VMAX; j+=i) e[j] -= e[j]/i;
    }
  }
}

int main() {
  int n;
  fin>>n;

  ciur();

  while (n--) {
    long long x;
    fin>>x;
    fout<<2*e[x]*x<<endl;
  }
}