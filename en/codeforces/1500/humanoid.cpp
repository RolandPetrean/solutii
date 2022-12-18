// https://codeforces.com/contest/1759/problem/E
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

int humanoid(vector<int>& a, int h, int g, int b, int i) {
  if (i>=a.size()) return 0;
  if (a[i]<h) return 1+humanoid(a, h+a[i]/2, g, b, i+1);

  int maxi=0;
  if (g) maxi = max(maxi, humanoid(a, 2*h, g-1, b, i));
  if (b) maxi = max(maxi, humanoid(a, 3*h, g, b-1, i));
  return maxi;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n, h;
    cin>>n>>h;
    
    vector<int> a(n);
    for (int i=0; i<n; ++i) cin>>a[i];
    sort(a.begin(), a.end());

    cout<<humanoid(a, h, 2, 1, 0)<<endl;
  }
}