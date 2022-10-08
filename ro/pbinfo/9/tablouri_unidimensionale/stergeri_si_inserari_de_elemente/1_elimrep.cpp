// https://www.pbinfo.ro/probleme/2734/elimrep
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> v(n);
  for (int i=0; i<n; ++i) cin>>v[i];

  vector<bool> rep(n);
  for (int i=0; i<n; ++i) {
    for (int j=i+1; j<n; ++j) {
      if (v[j] == v[i]) rep[j] = true;
    }
  }

  for (int i=0; i<n; ++i) {
    if (!rep[i]) cout<<v[i]<<" ";
  }
}