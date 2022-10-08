// https://cses.fi/problemset/task/1617
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int res = 1;
  for (int i=1; i<=n; i++) {
    res = res * 2 % mod;
  }
  cout<<res;
}