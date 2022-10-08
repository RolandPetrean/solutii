// https://www.varena.ro/problema/siruri2
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("siruri2.in");
ofstream fout("siruri2.out");

int main() {
  string x, y;
  getline(fin, x);
  getline(fin, y);

  vector<char> a{'\0'}, b{'\0'};
  for (char c:x) a.push_back(tolower(c));
  for (char c:y) b.push_back(tolower(c));

  vector<vector<int>> dp(a.size(), vector<int>(b.size()));
  for (int i=0; i<=x.size(); ++i){
    for (int j=0; j<=y.size(); ++j) {
      if (i==0 || j==0) dp[i][j] = max(i, j);
      else dp[i][j] = min(dp[i-1][j-1] + (a[i] != b[j]), min(dp[i-1][j], dp[i][j-1])+1);
    }
  }
  fout<<dp[a.size()-1][b.size()-1];
}