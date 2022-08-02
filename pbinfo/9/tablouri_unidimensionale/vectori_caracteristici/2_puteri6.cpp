#include <bits/stdc++.h>
using namespace std;
#define ll long long

ifstream fin("puteri6.in");
ofstream fout("puteri6.out");

int main() {
  ll n, x;
  fin>>n;

  array<ll,10> p{};
  while (fin>>x) {
    ++p[log10(x)];
  }
  
  int s=0;
  for (int i=0; i<10; ++i) {
    s += p[i];
    if (s >= n) {
      fout<<pow(10, i);
      return 0;
    }
  }
  fout<<"Nu exista";
}
