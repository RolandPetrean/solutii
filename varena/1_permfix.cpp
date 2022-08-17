// https://www.varena.ro/problema/permfix
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("permfix.in");
ofstream fout("permfix.out");

int main() {
  int n, k;
  fin>>n>>k;

  vector<int> a(k), p(n);
  for (int i=0; i<k; ++i) fin>>a[i];
  for (int i=0; i<n; ++i) p[i] = i+1;
  
  int i=1, j=0;
  do {
    bool fix=false;
    for (int k=0; k<n; ++k) {
      if (p[k] == k+1) fix=true;
    }
    if (fix) continue;
    
    if (a[j] == i) {
      for (auto v : p) fout<<v<<" ";
      fout<<endl;
      ++j;
    }
    ++i;
  } while (next_permutation(p.begin(), p.end()));
}