// https://www.pbinfo.ro/probleme/3227/tramvaie
#include <bits/stdc++.h>
using namespace std;

ifstream fin("tramvaie.in");
ofstream fout("tramvaie.out");

const int MAXN=1000007;
int e[MAXN];

void ciur() {
  for (int i=0; i<MAXN; ++i) e[i] = i;
  for (int i=2; i<MAXN; ++i) {
    if (e[i] == i) {
      for (int j=i; j<MAXN; j+=i) e[j] -= e[j]/i;
    }
  }
}

int main() {
  int t;
  fin>>t;

  ciur();

  while (t--) {
    int x;
    fin>>x;
    fout<<e[x]<<" ";
  }
}