// https://www.varena.ro/problema/macheta
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("macheta.in");
ofstream fout("macheta.out");

struct Build {
  int i, x, lx, h;
};

int main() {
  int n;
  fin>>n;

  int maxx=0, maxy=0;
  map<int,vector<Build>> c;
  for (int i=0; i<n; ++i) {
    int x, y, lx, ly, h;
    fin>>x>>y>>lx>>ly>>h;
    c[y].push_back(Build{i, x, lx, h});
    maxx = max(maxx, x+lx);
    maxy = max(maxy, y);
  }

  vector<int> h(maxx);
  vector<bool> vis(n);
  for (int i=0; i<=maxy; ++i) {
    if (c[i].size() == 0) continue;

    for (auto b : c[i]) {
      for (int j=b.x; j<b.x+b.lx; ++j) {
        if (b.h > h[j]) {
          h[j] = b.h;
          vis[b.i] = true;
        }
      }
    }
  }

  for (int i=0; i<n; ++i) {
    if (vis[i]) fout<<i+1<<" ";
  }
}