// https://codeforces.com/contest/1783/problem/A
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

    vector<int> a(n);
    for (int i=0; i<n; ++i) cin>>a[i];
    sort(a.begin(), a.end(), greater<int>());

    if (a[1]==a[0]) {
      for (int i=1; i<n; ++i) {
        if (a[i] != a[0]) swap(a[1], a[i]);
      }
    }
    
    bool ok=true;
    int s=0;
    for (int i=0; i<n && ok; ++i) {
      if (a[i]==s) ok = false;
      s += a[i];
    }

    if (!ok) cout<<"NO\n";
    else {
      cout<<"YES"<<endl;
      for (int x:a) cout<<x<<" ";
      cout<<endl;
    }
  }
}