// https://cses.fi/problemset/task/1619
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, a, b;
  cin>>n;

  vector<pair<int,int>> times;
  for (int i=0; i<n; i++) {
    cin>>a>>b;
    // Add the starting time with a positive value and ending time with a negative value
    times.push_back({a, 1});
    times.push_back({b, -1});
  }
  sort(times.begin(), times.end());

  // Iterate through times and greedily find best time
  int curr=0, best=0;
  for (auto [_, diff] : times) {
    curr += diff; // Increases on start times and decreases on end times
    best = max(best, curr);
  }

  cout<<best;
}