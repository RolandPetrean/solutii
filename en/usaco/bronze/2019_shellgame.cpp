// http://www.usaco.org/index.php?page=viewproblem2&cpid=891
#include <bits/stdc++.h>
using namespace std;

ifstream fin("shell.in");
ofstream fout("shell.out");

int main() {
  int n;
  fin>>n;

  vector<tuple<int,int,int>> shells;
  for (int i=0; i<n; ++i) {
    int a, b, g;
    fin>>a>>b>>g;
    --a; --b; --g;
    shells.push_back({a,b,g});
  }

  int maxscore=0;
  for (int i=0; i<3; ++i) {
    array<bool,3> sim{false, false, false};
    sim[i] = true;

    int score=0;
    for (int j=0; j<n; ++j) {
      auto [a, b, g] = shells[j];
      swap(sim[a], sim[b]);
      
      if (sim[g]) ++score;
    }

    maxscore = max(maxscore, score);
  }

  fout<<maxscore;
}