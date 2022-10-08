// https://cses.fi/problemset/task/1629
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, a, b;
  cin>>n;

  // Sort by soonest movie ending instead of starting
  vector<pair<int,int>> movies;
  for (int i=0; i<n; i++) {
    cin>>a>>b;
    movies.push_back({b, a}); // Reversed values
  }
  sort(movies.begin(), movies.end());

  int last=0, total=0;
  for (auto [b, a] : movies) {
    if (a >= last) {
      total++;
      last = b;
    }
  }

  cout<<total;
}