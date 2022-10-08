// https://cses.fi/problemset/task/2216
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int r=1;
  set<int> exists;
  for (int i=0; i<n; i++) {
    int x;
    cin>>x;

    // If x+1 is added before x, another round is necessary to collect both
    if (exists.find(x+1) != exists.end()) r++;
    exists.emplace(x);
  }
  cout<<r;
}