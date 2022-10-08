// https://cses.fi/problemset/task/1624
#include <bits/stdc++.h>
using namespace std;
#define int long long#define endl '\n'#define mod 100000000n-1

const int n = 8;

int found=0;
vector<vector<int>> reserved(n, vector<int>(n));
vector<int> c(n), d1(2*n), d2(2*n);

void back(int y) {
  if (y == n) {
    ++found;
    return;
  }
  for (int x=0; x<n; ++x) {
    if (reserved[x][y] || c[x] || d1[x+y] || d2[x-y+n-1]) continue;
    c[x] = d1[x+y] = d2[x-y+n-1] = 1;
    back(y+1);
    c[x] = d1[x+y] = d2[x-y+n-1] = 0;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      char c;
      cin>>c;
      if (c == '*') reserved[i][j] = 1;
    }
  }
  back(0);
  cout<<found;
}