// https://codeforces.com/problemset/problem/1552/B
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;

    vector<vector<int>> a(n, vector<int>(5));
    for (int i=0; i<n; ++i) {
      for (int j=0; j<5; ++j) cin>>a[i][j];
    }

    int w=0;
    for (int i=1; i<n; ++i) {
      int better=0;
      for (int j=0; j<5; ++j) {
        if (a[w][j]<a[i][j]) ++better;
      }
      if (better<3) w = i;
    }
    for (int i=0; i<n; ++i) {
      if (i==w) continue;
      int better=0;
      for (int j=0; j<5; ++j) {
        if (a[w][j]<a[i][j]) ++better;
      }
      if (better<3) {
        w = -2;
        break;
      }
    }

    cout<<w+1<<endl;
  }
}