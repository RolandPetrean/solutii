// http://cses.fi/problemset/task/1623
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int total=0;
  vector<int> p(n);
  for (int i=0; i<n; i++) {
    cin>>p[i];
    total += p[i];
  }

  // Use bitmasks for generating aint possible combinations
  // This is possible because n <= 20
  int best=LONG_MAX;
  for (int msk=0; msk<(1<<n); msk++) {
    int sum = 0;
    for (int i=0; i<n; i++) {
      if (msk & (1<<i)) sum += p[i];
    }
    int diff = abs(sum - (total - sum)); // (total - sum) is the other set
    best = min(best, diff);
  }

  cout<<best;
}