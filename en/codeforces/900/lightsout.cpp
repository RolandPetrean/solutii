// https://codeforces.com/problemset/problem/275/A
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  array<array<int,5>,5> pressed{};
  for (int i=1; i<=3; ++i) {
    for (int j=1; j<=3; ++j) {
      int n;
      cin>>n;
      pressed[i][j] += n;
      pressed[i+1][j] += n;
      pressed[i-1][j] += n;
      pressed[i][j+1] += n;
      pressed[i][j-1] += n;
    }
  }

  for (int i=1; i<=3; ++i) {
    for (int j=1; j<=3; ++j) cout<<!(pressed[i][j]&1);
    cout<<endl;
  }
}