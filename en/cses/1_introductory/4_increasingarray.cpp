// https://cses.fi/problemset/task/1094
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;
  
  int x, moves=0, maxx=0;
  for (int i=0; i<n; i++) {
    cin>>x;
    maxx = max(maxx, x);
    moves += maxx - x;
  }
  cout<<moves;
}