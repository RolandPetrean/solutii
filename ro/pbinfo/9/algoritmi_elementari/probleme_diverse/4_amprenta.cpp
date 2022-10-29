// https://www.pbinfo.ro/probleme/2936/amprenta
#include <bits/stdc++.h>
using namespace std;

ifstream fin("amprenta.in");
ofstream fout("amprenta.out");

array<int,11> cif{0, 1, 2, 3, 4, 5, 5, 4, 3, 2, 1};

int main() {
  int c;
  fin>>c;
  if (c==1) {
    long long n;
    fin>>n;
    fout<<cif[n%11];
    return 0;
  }

  long long p, q;
  int a;
  fin>>p>>q>>a;
  if (p>q) swap(p, q);

  long long cnt=0;
  while (p%11!=0 && p<=q) {
    if (p%11==a || 11-p%11==a) ++cnt;
    ++p;
  }
  while (q%11!=0 && q>=p) {
    if (q%11==a || 11-q%11==a) ++cnt;
    --q;
  }

  if (p<=q) {
    if (a==0) cnt += (q-p)/11+1;
    else cnt += (q-p)/11*2;
  }
  fout<<cnt;
}