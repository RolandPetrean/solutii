// https://www.infoarena.ro/problema/dictree
#include <bits/stdc++.h>
using namespace std;

ifstream fin("dictree.in");
ofstream fout("dictree.out");

int maxp(string a, string b) {
  if (a.size()>b.size()) swap(a, b);
  for (int i=0; i<a.size(); ++i) {
    if (a[i] != b[i]) return i;
  }
  return a.size();
}

int main() {
  int n;
  fin>>n;

  int t=0;
  vector<string> a(n);
  for (int i=0; i<n; ++i) {
    fin>>a[i];
    t += a[i].size();
  }
  sort(a.begin(), a.end());

  for (int i=0; i<n-1; ++i) t -= maxp(a[i], a[i+1]);
  fout<<++t;
}