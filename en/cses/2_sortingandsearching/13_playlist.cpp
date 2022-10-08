// https://cses.fi/problemset/task/1141
// https://discuss.codechef.com/t/help-in-cses-problem-playlist/67085
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

// Using a set would fail in
// 10
// 1 2 3 4 1 5 6 7 8 9

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  map<int,int> s;
  int l=0, best=0; // l is the left pointer, best is greedy
  for (int i=1; i<=n; i++) {
    int x;
    cin>>x;

    // If x is a duplicate, increase left pointer to be after the old one
    if (s.find(x) != s.end() && s[x] > l) l = s[x];
    s[x] = i;
    best = max(best, i-l); // i-l is the distance
  }
  cout<<best;
}