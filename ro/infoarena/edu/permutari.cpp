// https://www.infoarena.ro/problema/permutari
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("permutari.in");
ofstream fout("permutari.out");

int main() {
  int n;
  fin>>n;

  vector<int> x(n);
  for (int i=0; i<n; ++i) x[i] = i+1;

  do {
    for (int v:x) fout<<v<<" ";
    fout<<endl;
  } while (next_permutation(x.begin(), x.end()));
}