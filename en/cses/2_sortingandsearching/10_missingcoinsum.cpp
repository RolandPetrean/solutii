// https://cses.fi/problemset/task/2183
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> x(n);
  for (int i=0; i<n; i++) cin>>x[i];
  sort(x.begin(), x.end());

  // The smallest coin sum is the current sum + 1 if there is no smaller coin
  int curr=0;
  for (auto a : x) {
    if (curr+1 < a) break; // Check current sum + 1 < than next coin
    curr += a;
  }
  cout<<curr+1;
}