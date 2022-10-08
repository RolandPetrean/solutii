// https://www.pbinfo.ro/probleme/4037/cautariliniare
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> v(n);
  for (int i=0; i<n; ++i) cin>>v[i];

  int x, k;
  cin>>x>>k;

  bool found=false;
  for (int i=0; i<n; ++i) {
    if (v[i]==x) {
      cout<<i+1<<endl;
      found = true;
      break;
    }
  }
  if (!found) cout<<0<<endl;
  found = false;

  for (int i=n-1; i>=0; --i) {
    if (v[i]==x) {
      cout<<i+1<<endl;
      found = true;
      break;
    }
  }
  if (!found) cout<<0<<endl;

  int ap=0;
  for (int i=0; i<n; ++i) {
    if (v[i]==x) {
      ++ap;
      if (ap==k) {
        cout<<i+1;
        return 0;
      }
    }
  }
  cout<<0;
}