// https://cses.fi/problemset/task/1660
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, x;
  cin>>n>>x;

  int p=0, t=0;
  map<int,int> s;
  s[0] = 1;
  for (int i=0; i<n; ++i) {
    int a;
    cin>>a;
    p += a;

    t += s[p-x];
    ++s[p];
  }
  cout<<t;
}