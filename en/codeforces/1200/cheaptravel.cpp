// https://codeforces.com/problemset/problem/466/A
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m, a, b;
  cin>>n>>m>>a>>b;

  if (a*m<=b) cout<<n*a;
  else cout<<b*(n/m)+min(a*(n%m), b);
}