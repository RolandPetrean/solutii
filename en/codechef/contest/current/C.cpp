#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n, x;
    cin>>n>>x;

    vector<int> a(n), b(n);
    for (int i=0; i<n; ++i) cin>>a[i];
    for (int i=0; i<n; ++i) cin>>b[i];

    int s=0;
    for (int i=0; i<n; ++i) {
      if (a[i]>=x) s += b[i];
    }

    cout<<s<<endl;
  }
}