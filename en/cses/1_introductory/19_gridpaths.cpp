// https://cses.fi/problemset/task/1625
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

ll found=0;
vector<ll> turns(48);
vector<vector<bool>> visited(7, vector<bool>(7));

bool valid(ll i, ll j) {
  if (i < 0 || j < 0 || i > 6 || j > 6 || visited[i][j]) return false;
  return true;
}

ll dfs(ll i, ll j, ll a) {
  if (i==6 && j==0) {
    if (a==48) ++found;
    return 0;
  }
  array<pair<ll,ll>,4> dir{{{1,0}, {0,-1}, {-1,0}, {0,1}}};

  if (turns[a] != -1) {
    pair<ll,ll> d=dir[turns[a]], d1=dir[turns[a-1]], d2=dir[(turns[a]+2)%4];
    if (!valid(i+d.first, j+d.second)) return 0;
    if (a != 0) if (!valid(i+d1.first, j+d1.second) && valid(i+d2.first, j+d2.second)) return 1;

    visited[i][j] = true;
    dfs(i+d.first, j+d.second, a+1);
    visited[i][j] = false;
    return 0;
  }

  for (ll k=0; k<4; ++k) {
    turns[a] = k;
    if (dfs(i, j, a)) break;
  }
  turns[a] = -1;
  return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  cin>>s;
  
  for (ll i=0; i<48; ++i) {
    if (s[i] == 'D') turns[i] = 0;
    else if (s[i] == 'L') turns[i] = 1;
    else if (s[i] == 'U') turns[i] = 2;
    else if (s[i] == 'R') turns[i] = 3;
    else if (s[i] == '?') turns[i] = -1;
  }
  

  dfs(0, 0, 0);
  cout<<found;
}