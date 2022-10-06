// https://www.varena.ro/problema/cicada
// 70p
#include <bits/stdc++.h>
using namespace std;
ifstream fin("cicada.in");
ofstream fout("cicada.out");

inline long long gauss(long long a, int n) {
  long long x=n/a;
  return 1LL*a*(x*(x+1)/2);
}

int main() {
  int n;
  fin>>n;
 
  int x=n;
  vector<int> prim;
  for (int d=2; d*d<=n; ++d) {
    if (x%d==0) {
      while (x%d==0) x /= d;
      prim.push_back(d);
    }
  }
  if (x!=1) prim.push_back(x);

  long long s=0;
  for (int i=0; i<prim.size(); ++i) {
    int p=prim[i];
    s += gauss(p, n-1);
    for (int j=0; j<i; ++j) {
      int jp=p*prim[j];
      s -= gauss(jp, n-1);
    }
  }
  fout<<s;
}
