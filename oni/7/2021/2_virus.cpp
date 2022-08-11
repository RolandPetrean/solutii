#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("virus.in");
ofstream fout("virus.out");

bool mut(string v, string c) {
  if (v.size() != c.size()) return false;
  int s=0;
  for (int i=0; i<c.size(); ++i) {
    if (v[i] != c[i]) ++s;
  }
  if (s!=1) return false;
  return true;
}

int main() {
  int c, n;
  string cod;
  fin>>c>>cod>>n;

  int s=0;
  map<string,int> vs;
  pair<int,string> best{0,""};
  for (int i=0; i<n; ++i) {
    string v;
    fin>>v;

    if (mut(v, cod)) {
      ++s;
      ++vs[v];
      if (vs[v] > best.first || (vs[v] == best.first && v < best.second)) best = {vs[v], v};
    }
  }

  if (c==1) fout<<s;
  else fout<<best.second;
}