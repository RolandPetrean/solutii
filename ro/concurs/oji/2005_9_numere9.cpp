// https://www.pbinfo.ro/probleme/1374/numere9
#include <bits/stdc++.h>
using namespace std;

ifstream fin("numere9.in");
ofstream fout("numere9.out");

int main() {
  int n;
  fin>>n;

  vector<bool> nr(n*n+1);
  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      int x;
      fin>>x;
      nr[x] = true;
    }
  }

  int p=-1, u;
  for (int i=1; i<=60000 && i<=n*n; ++i) {
    if (!nr[i]) {
      if (p==-1) p=i;
      u=i;
    }
  }

  fout<<p<<" "<<u;
}