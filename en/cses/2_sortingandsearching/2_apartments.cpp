// https://cses.fi/problemset/task/1084
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m, k, x;
  cin>>n>>m>>k;

  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin>>a[i];
  for (int i=0; i<m; i++) cin>>b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  // Using two pointers with sorted vectors
  int total=0, i=0, j=0;
  while (i < n && j < m) {
    if (abs(a[i] - b[j]) <= k) { // Found a match, increment i AND j
      total++;
      i++;
      j++;  
    } else if (b[j] >= a[i]-k) i++; // Increment i OR j accordingly
    else j++;
  }

  cout<<total;
}