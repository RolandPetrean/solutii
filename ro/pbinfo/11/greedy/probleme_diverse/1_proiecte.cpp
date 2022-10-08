// https://www.pbinfo.ro/probleme/92/proiecte
#include <bits/stdc++.h>
using namespace std;#define mod 1000000007

ifstream fin("proiecte.in");
ofstream fout("proiecte.out");

int main() {
  long long n;
  fin>>n;

  vector<pair<long long long long>> p;
  for (int i=0; i<n; ++i) {
    long long x;
    fin>>x;
    p.push_back({x, i+1});
  }
  sort(p.begin(), p.end());

  for (auto v : p) fout<<v.second<<" ";
}