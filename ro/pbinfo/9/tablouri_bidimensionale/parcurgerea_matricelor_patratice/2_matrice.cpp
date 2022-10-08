// https://www.pbinfo.ro/probleme/81/matrice
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  long long t[n+2][n+2];
  for (int i=0; i<n+2; ++i) for (int j=0; j<n+2; ++j) t[i][j] = -1;
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=n; ++j) {
      cin>>t[i][j];
    }
  }

  long long s=0;
  array<pair<long long long long>,4> dir{{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}};
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=n; ++j) {
      bool k=true;
      for (auto d : dir) {
        if (t[i+d.first][j+d.second] >= t[i][j]) k = false;
      }
      if (k) {
        ++s;
      }
    }
  }
  cout<<s;
}