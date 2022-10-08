// https://cses.fi/problemset/task/1643
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  // Greedy
  int curr=0, best=LONG_MIN;
  for (int i=0; i<n; i++) {
    int x;
    cin>>x;
    curr = max(curr + x, x); // Can continue subarray or start new one
    best = max(best, curr);
  }

  cout<<best;
}