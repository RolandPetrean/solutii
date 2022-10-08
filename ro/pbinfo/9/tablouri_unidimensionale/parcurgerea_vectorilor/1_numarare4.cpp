// https://www.pbinfo.ro/probleme/496/numarare4
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> v(n);
  for (int i=0; i<n; ++i) cin>>v[i];

  int s=0;
  for (int i=0; i<n-1; ++i) {
    if (__gcd(v[i], v[n-1])==1) ++s;
  }
  cout<<s;
}