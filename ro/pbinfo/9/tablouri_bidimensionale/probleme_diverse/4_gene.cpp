// https://www.pbinfo.ro/probleme/2497/gene
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("gene.in");
ofstream fout("gene.out");

int grad(string a, string b) {
  array<int,26> chara{}, charb{};
  for (char c:a) ++chara[c-'a'];
  for (char c:b) ++charb[c-'a'];

  int g=0;
  for (int i=0; i<26; ++i) g += min(chara[i], charb[i]);
  return g;
}

int main() {
  int c, n, m, k;
  string s;
  fin>>c>>n>>m>>k>>s;

  if (c==1) {
    int maxg=-1;
    vector<pair<pair<int,int>,string>> xs{};
    for (int i=1; i<=n; ++i) {
      for (int j=1; j<=m; ++j) {
        string x;
        fin>>x;
        int g=grad(s, x);
        if (g>maxg) {
          maxg = g;
          xs = {{{{i, j}, x}}};
        } else if (g==maxg) xs.push_back({{i, j}, x});
      }
    }

    for (auto x:xs) fout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<endl;
  } else {
    vector<vector<int>> dp(n+2, vector<int>(m+2));
    int maxl=0, l=0, c=0;
    for (int i=1; i<=n; ++i) {
      for (int j=1; j<=m; ++j) {
        string x;
        fin>>x;
        dp[i][j] = grad(s, x)>k ? min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1 : 0;

        if (dp[i][j]>maxl) {
          maxl = dp[i][j];
          l = i-maxl+1;
          c = j-maxl+1;
        }
      }
    }

    fout<<l<<" "<<c<<" "<<maxl;
  }
}