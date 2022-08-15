// https://www.varena.ro/problema/disjoint
// TODO 50p, needs optimisation
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("disjoint.in");
ofstream fout("disjoint.out");

int ufind(vector<int>& uf, int x) {
  if (uf[x] == x) return x;

  stack<int> s;
  s.push(x);
  while (uf[s.top()] != s.top()) {
    s.push(uf[s.top()]);
  }

  int t=s.top();
  while (!s.empty()) {
    uf[s.top()] = t;
    s.pop();
  }
  return t;
}

void join(vector<int>& uf, int x, int y) {
  uf[ufind(uf, y)] = ufind(uf, x);
}

int main() {
  int n, m;
  fin>>n>>m;

  vector<int> uf(n);
  for (int i=0; i<n; ++i) uf[i] = i;
  for (int i=0; i<m; ++i) {
    int cod, x, y;
    fin>>cod>>x>>y;
    --x; --y;

    if (cod == 1) {
      join(uf, x, y);
    } else {
      if (ufind(uf, x) == ufind(uf, y)) fout<<"DA"<<endl;
      else fout<<"NU"<<endl;
    }
  }
}