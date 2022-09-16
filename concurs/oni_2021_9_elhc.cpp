// https://www.pbinfo.ro/probleme/3744/elhc
#include <bits/stdc++.h>
using namespace std;

ifstream fin("elhc.in");
ofstream fout("elhc.out");

int fastpow(long long a, int b, int p) {
  int res=1;
  while (b>0) {
    if (b&1) res = res*a%p;
    a = a*a%p;
    b /= 2;
  }
  return res;
}

int main() {
  int t;
  fin>>t;

  while (t--) {
    int g, p;
    fin>>g>>p;
    if (g==1 && p==2) {
      fout<<1;
      continue;
    }

    int p1=p-1;
    bool complet=true;
    for (int d=2; d*d<=p1; ++d) {
      if (p1%d==0) {
        if (fastpow(g, (p-1)/d, p)==1) {
          complet=false;
          break;
        }
        while (p1%d==0) p1 /= d;
      }
    }
    if (p1!=1 && fastpow(g, (p-1)/p1, p)==1) complet=false; 

    fout<<complet;
  }
}