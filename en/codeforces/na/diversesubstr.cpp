// https://codeforces.com/contest/1748/problem/B
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

    vector<int> s(n);
    for (int i=0; i<n; ++i) {
      char aux;
      cin>>aux;
      s[i] = aux-'0';
    }

    int ans=0;
    for (int i=0; i<n; ++i) {
      int unique=0, maxfreq=0;
      array<int,10> freq{};
      for (int j=i; j<i+110 && j<n; ++j) {
        if (freq[s[j]]==0) ++unique;
        ++freq[s[j]];

        maxfreq = max(maxfreq, freq[s[j]]);
        if (maxfreq<=unique) ++ans;
      }
    }

    cout<<ans<<endl;
  }
}