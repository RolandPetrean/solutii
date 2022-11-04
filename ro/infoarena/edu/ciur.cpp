#include <bits/stdc++.h>
using namespace std;

ifstream fin("ciur.in");
ofstream fout("ciur.out");

bool ciur[2000005];
int N;

void init_ciur() {
  ciur[0] = ciur[1] = true;
  for (int i=2; i*i<=N; ++i) {
    if (!ciur[i]) {
      for (int j=i*i; j<=N; j+=i) ciur[j] = true;
    }
  }
}

int main() {
  fin>>N;

  init_ciur();

  int t=0;
  for (int i=0; i<=N; ++i) {
    if (!ciur[i]) ++t;
  }
  fout<<t;
}