// https://infoarena.ro/problema/pipe
#include <bits/stdc++.h>
using namespace std;

ifstream fin("pipe.in");
ofstream fout("pipe.out");

const int DIFF=300, MAXS=30000;

bool dp[2][MAXS+30005];
bool bun[2];

int main() {
  int n, x1, y1, x2, y2;
  fin>>n>>x1>>y1>>x2>>y2;
  
  dp[0][0] = dp[1][0] = true;

  int dx=abs(x1-x2), dy=abs(y1-y2), s1=0, s2=0;
  for (int i=0; i<n; ++i) {
    char c;
    int x;
    fin>>c>>x;

    if (c=='A') {
      s1 += x;
      for (int j=s1; j>=x; --j) {
        if (dp[0][j-x]) dp[0][j] = true;
      }
    } else {
      s2 += x;
      for (int j=s2; j>=x; --j) {
        if (dp[1][j-x]) dp[1][j] = true;
      }
    }
  }

  int ans=0;
  for (int i=0; i<=MAXS && !bun[0]; ++i) {
    if (dp[0][i] && dp[0][i+dx]) {
      ans += 2*i+dx;
      bun[0] = true;
    }
  }
  for (int i=0; i<=MAXS && !bun[1]; ++i) {
    if (dp[1][i] && dp[1][i+dy]) {
      ans += 2*i+dy;
      bun[1] = true;
    }
  }

  if (bun[0] && bun[1]) fout<<ans;
  else fout<<"imposibil";
}