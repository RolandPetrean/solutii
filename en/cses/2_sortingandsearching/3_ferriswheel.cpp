// https://cses.fi/problemset/task/1090
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, x;
  cin>>n>>x;

  vector<int> p;
  for (int i=0; i<n; i++) cin>>p[i];
  sort(p.begin(), p.end());

  int i=0, total=0;
  for (int j=n-1; j>=0; j--) { // Iterate from the heaviest child to lightest
    if (p[i] + p[j] <= x) i++; // Lighter child can be paired with heavier child, increment light
    total++; // Total number is increased (the heavy child rides alone or is paired with light)
  }

  cout<<total;
}