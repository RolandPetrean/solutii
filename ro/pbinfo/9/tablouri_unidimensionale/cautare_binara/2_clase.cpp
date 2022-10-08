// https://www.pbinfo.ro/probleme/2644/clase
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

ifstream fin("clase.in");
ofstream fout("clase.out");

int main() {
  long long n, m;
  fin>>n;
  set<long long> x;
  for (int i=0; i<n; ++i) {
    long long v;
    fin>>v;
    x.emplace(v);
  }
  fin>>m;
  
  long long s=0;
  for (int i=0; i<m; ++i) {
    long long v;
    fin>>v;

    bool f=x.find(v) != x.end();
    s += f;
  }
  fout<<s;
}