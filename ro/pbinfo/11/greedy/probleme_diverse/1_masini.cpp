// https://www.pbinfo.ro/probleme/91/masini
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

ifstream fin("masini.in");
ofstream fout("masini.out");

int main() {
  long long n, T;
  fin>>n>>T;

  vector<long long> m(n);
  for (int i=0; i<n; ++i) fin>>m[i];
  sort(m.begin(), m.end());

  long long s=0;
  for (int i=0; i<n; ++i) {
    if (T-m[i] < 0) break;
    ++s;
    T -= m[i];
  }
  fout<<s;
}