// http://www.usaco.org/index.php?page=viewproblem2&cpid=617
#include <bits/stdc++.h>
using namespace std;

ifstream fin("balancing.in");
ofstream fout("balancing.out");

bool cmp(pair<int,int> a, pair<int,int> b) {
  return a.second < b.second;
}

int main() {
  int n, B;
  fin>>n>>B;

  vector<pair<int,int>> cows;
  set<int> v, h;
  for (int i=0; i<n; ++i) {
    int x, y;
    fin>>x>>y;
    cows.push_back({x, y});
    v.insert(x+1);
    h.insert(y+1);
  }
  
  int mini=INT_MAX;
  for (int a:v) {
    for (int b:h) {
      int q1=0, q2=0, q3=0, q4=0;

      for (auto [x,y]:cows) {
        if (x > a && y > b) ++q1;
        else if (x > a && y < b) ++q2;
        else if (x < a && y > b) ++q3;
        else ++q4;
      }

      mini = min(mini, max(q1, max(q2, max(q3, q4))));
    }
  }

  fout<<mini;
}