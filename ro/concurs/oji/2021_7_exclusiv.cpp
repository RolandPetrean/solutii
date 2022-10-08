// https://www.pbinfo.ro/probleme/3729/exclusiv
// TODO sursa obtine doar 80 de puncte
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

ifstream fin("exclusiv.in");
ofstream fout("exclusiv.out");

int main() {
  int n, m;
  fin>>n>>m;

  vector<int> s(n), v(m);
  for (int i=0; i<n; ++i) fin>>s[i];
  for (int i=0; i<m; ++i) fin>>v[i];
  
  set<int> x;
  for (int i=0; i<m; ++i) {
    x.insert(v[i]);

    int maxl=0, k=0;
    for (int j=0; j<n; ++j) {
      if (x.find(s[j]) != x.end()) {
        maxl = max(maxl, j-k);
        k=j+1;
      }
    }
    maxl = max(maxl, n-k);
    fout<<maxl<<endl;
  }
}