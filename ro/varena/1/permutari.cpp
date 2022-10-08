// https://www.varena.ro/problema/permutari
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("permutari.in");
ofstream fout("permutari.out");

int main() {
  int n, k;
  fin>>n>>k;

  vector<int> a(k), p(n);
  for (int i=0; i<k; ++i) fin>>a[i];
  for (int i=0; i<n; ++i) p[i] = i+1;
  
  int i=1, j=0;
  do {
    if (a[j] == i) {
      for (auto v : p) fout<<v<<" ";
      fout<<endl;
      ++j;
    }
    ++i;
  } while (next_permutation(p.begin(), p.end()));
}