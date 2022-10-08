// https://cses.fi/problemset/task/1621
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  set<int> xs; // A set can only contain unique elements
  for (int i=0; i<n; i++) {
    int x;
    cin>>x;
    xs.emplace(x);
  }

  cout<<xs.size();
}