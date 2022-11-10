// https://www.infoarena.ro/problema/minlcm
#include <bits/stdc++.h>
using namespace std;

ifstream fin("minlcm.in");
ofstream fout("minlcm.out");

const int V=100'005;

int main() {
  int t;
  fin>>t;

  while (t--) {
    int n;
    fin>>n;

    bitset<V> exista;
    for (int i=0; i<n; ++i) {
      int a;
      fin>>a;
      exista[a] = true;
    }

    long long mini=LONG_LONG_MAX;
    for (int i=1; i<V; ++i) {
      long long x=-1, y=-1;
      for (int j=i; j<V && y==-1; j+=i) {
        if (exista[j]) {
          if (x==-1) x = j;
          else y = j;
        }
      }
      if (y!=-1) mini = min(mini, x*y/i);
    }

    fout<<mini<<endl;
  }
}