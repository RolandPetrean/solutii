// https://www.varena.ro/problema/disjoint
// TLE la 50% din teste, am furat codul de jos fix de pe cp-algorithms si tot nu merge. Cred ca
// trebuie scris in C pentru pb asta, ca altfel nu imi explic de ce nu functioneaza.
// (Fac union find by rank cu path compression)
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("disjoint.in");
ofstream fout("disjoint.out");

array<int,100000> parent{}, r{};

int find_set(int v) {
  if (v == parent[v])
    return v;
  return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
  a = find_set(a);
  b = find_set(b);
  if (a != b) {
    if (r[a] < r[b])
      swap(a, b);
    parent[b] = a;
    if (r[a] == r[b])
      r[a]++;
  }
}

int main() {
  int n, m;
  fin>>n>>m;

  for (int i=0; i<n; ++i) parent[i] = i;
  for (int i=0; i<m; ++i) {
    int cod, x, y;
    fin>>cod>>x>>y;
    --x; --y;
    if (cod==1) {
      union_sets(x, y);
    } else if (cod==2) {
      if (find_set(x) == find_set(y)) fout<<"DA"<<endl;
      else fout<<"NU"<<endl;
    }
  }
}