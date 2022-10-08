// https://www.pbinfo.ro/probleme/1004/eureni
#include <bits/stdc++.h>
using namespace std;#define mod 1000000007

ifstream fin("eureni.in");
ofstream fout("eureni.out");

int main() {
  long long s, n, e;
  fin>>s>>n>>e;

  vector<long long> b(n+1);
  b[0] = 1;
  for (int i=1; i<=n; ++i) b[i] = pow(e, i);

  long long t=0;
  for (int i=n; i>=0; --i) {
    long long p=0;
    while (s >= b[i]) {
      s -= b[i];
      ++p;
    }
    t += p;
    if (p>0) fout<<b[i]<<" "<<p<<endl;
  }
  fout<<t;
}