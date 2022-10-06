// https://www.pbinfo.ro/probleme/494/constr1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int s=0;
  vector<int> v(n);
  for (int i=0; i<n; ++i) {
    cin>>v[i];
    s += v[i];
  }

  for (int i=0; i<n; ++i) cout<<s-v[i]<<" ";
}