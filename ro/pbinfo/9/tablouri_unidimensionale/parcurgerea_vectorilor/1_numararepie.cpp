// https://www.pbinfo.ro/probleme/498/numararepie
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> v(n);
  for (int i=0; i<n; ++i) cin>>v[i];

  int s=0;
  for (int i=0; i<n; ++i) {
    for (int j=i+1; j<n; ++j) {
      if (__gcd(v[i], v[j])==1) ++s;
    }
  }
  cout<<s;
}