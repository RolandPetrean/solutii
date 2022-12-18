// https://codeforces.com/problemset/problem/1325/D
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int u, v;
  cin>>u>>v;

  if (u==v) {
    if (u==0) cout<<"0";
    else cout<<"1\n"<<u;
  } else if (u>v || (u%2 != v%2)) cout<<"-1";
  else {
    int x=(v-u)/2;
    if (x&u) cout<<"3\n"<<u<<" "<<x<<" "<<x;
    else cout<<"2\n"<<u+x<<" "<<x;
  }
}