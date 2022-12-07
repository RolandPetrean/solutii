// https://www.pbinfo.ro/probleme/2487/countbits
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("countbits.in");
ofstream fout("countbits.out");

int main() {
  int n, a, b, c, d, e;
  fin>>n>>a>>b>>c>>d>>e;

  int s=__builtin_popcount(a)+__builtin_popcount(b);
  for (int i=2; i<n; ++i) {
    int curr=1 + ((long long)a*c + (long long)b*d) % e;
    s += __builtin_popcount(curr);
    a = b;
    b = curr;
  }
  fout<<s;
}