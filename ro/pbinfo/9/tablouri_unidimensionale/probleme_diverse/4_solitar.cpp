// https://www.pbinfo.ro/probleme/1208/solitar
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("solitar.in");
ofstream fout("solitar.out");

int main() {
  int n;
  fin>>n;

  vector<int> a(n);
  for (int i=0; i<n; ++i) fin>>a[i];

  array<bool,100001> ult{};
  ult[a[n-1]] = true;
  int secv=1, d=0;
  for (int i=n-2; i>=0; --i) {
    if (a[i] != a[i+1]+1) {
      ++secv;
      ult[a[i]] = true;
    }
    if (ult[a[i]+1] && i) ++d;
  }

  fout<<2*(secv-1)-d;
}