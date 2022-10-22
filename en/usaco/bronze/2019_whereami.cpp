// http://www.usaco.org/index.php?page=viewproblem2&cpid=964
#include <bits/stdc++.h>
using namespace std;

ifstream fin("whereami.in");
ofstream fout("whereami.out");

int main() {
  int n;
  string m;
  fin>>n>>m;

  bool ok=false;
  for (int k=1; k<=n && !ok; ++k) {
    set<string> s;
    ok = true;
    for (int i=0; i<n-k+1 && ok; ++i) {
      string id=m.substr(i, k);
      if (s.find(id) != s.end()) ok = false;
      s.insert(id);
    }

    if (ok) fout<<k;
  }
}