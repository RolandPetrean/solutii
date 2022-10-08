// http://www.usaco.org/index.php?page=viewproblem2&cpid=761
#include <bits/stdc++.h>
using namespace std;

ifstream fin("measurement.in");
ofstream fout("measurement.out");

int maxcow(array<array<int,101>,3>& cows, int i) {
  if (cows[0][i] > cows[1][i] && cows[0][i] > cows[2][i]) return 0;
  else if (cows[1][i] > cows[0][i] && cows[1][i] > cows[2][i]) return 1;
  else if (cows[2][i] > cows[0][i] && cows[2][i] > cows[1][i]) return 2;
  else if (cows[0][i] == cows[1][i] && cows[1][i] == cows[2][i]) return 3;
  else if (cows[0][i] == cows[1][i]) return 4;
  else if (cows[1][i] == cows[2][i]) return 5;
  else if (cows[0][i] == cows[2][i]) return 6;
  return -1;
}

int main() {
  int n;
  fin>>n;

  array<array<int,101>,3> cows{};
  for (int i=0; i<3; ++i) cows[i][0] = 7;
  for (int i=0; i<n; ++i) {
    int day, change;
    string cow;
    fin>>day>>cow>>change;

    int idx;
    if (cow == "Bessie") idx=0;
    else if (cow == "Elsie") idx=1;
    else idx=2;

    cows[idx][day] += change;
  }

  int cnt=0, lmax=maxcow(cows, 0);
  for (int i=1; i<100; ++i) {
    for (int j=0; j<3; ++j) cows[j][i] += cows[j][i-1];
    
    if (maxcow(cows, i) != lmax) ++cnt;
    lmax = maxcow(cows, i);
  }

  fout<<cnt;
}