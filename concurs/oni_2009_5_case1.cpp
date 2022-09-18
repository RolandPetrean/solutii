// https://www.varena.ro/problema/case1
#include <bits/stdc++.h>
using namespace std;

ifstream fin("case1.in");
ofstream fout("case1.out");

int main() {
  int n;
  fin>>n;
  
  vector<int> x(n+1);
  for (int i=1; i<=n; ++i) fin>>x[i];

  int prop=0, maxi=0;
  pair<int,pair<int,int>> best={0,{INT_MAX, INT_MAX}};
  for (int i=1; i<=n; ++i) {
    if (x[i]==i) ++prop;
    
    int p=i, s=1, b=0;
    while (x[p] != i) {
      ++s;
      if (x[p]<p) ++b;
      p = x[p];
    }
    if (s>best.first || (s==best.first && b<best.second.first)) best = {s, {b, i}};
    maxi = max(maxi, s);
  }

  fout<<prop<<endl<<maxi<<endl<<best.second.second;
}