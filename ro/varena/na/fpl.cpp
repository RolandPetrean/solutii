// https://www.varena.ro/problema/fpl
#include <bits/stdc++.h>
using namespace std;
 
ifstream fin("fpl.in");
ofstream fout("fpl.out");
 
int main() {
  int q, n;
  fin>>q>>n;
 
  pair<int,int> maxi={-1,-1};
  vector<int> v(n);
  for (int i=0; i<n; ++i) {
    fin>>v[i];
    maxi = max(maxi, {v[i], i});
  }
  
  if (q==1) {
    fout<<maxi.first<<" "<<maxi.second;
  } else if (q==2) {
    int y, s=0;
    fin>>y;
    for (int i=0; i<n; ++i) {
      if (v[i]>y) ++s;
    }
    fout<<s+1;
  } else {
    for (int i=0; i<n; ++i) {
      fout<<v[i]+__builtin_popcount(v[i])<<" ";
    }
  }
}