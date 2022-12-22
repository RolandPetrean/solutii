// https://www.codechef.com/problems/FREQARRRET
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;

    vector<int> b(n);
    for (int i=0; i<n; ++i) cin>>b[i];

    int x=0;  
    vector<int> a(n);
    vector<pair<int,int>> freq(100005);
    for (int i=0; i<n; ++i) {
      if (!freq[b[i]].second) freq[b[i]] = {++x, b[i]};
      a[i] = freq[b[i]].first;
      --freq[b[i]].second;
    }
    
    bool ok=true;
    for (int i=0; i<n; ++i) {
      if (freq[b[i]].second) ok = false;
    }

    if (!ok) cout<<-1;
    else for (int v:a) cout<<v<<" ";
    cout<<endl;
  }
}