// https://www.pbinfo.ro/probleme/986/numarare7
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<double> v(n);
  for (int i=0; i<n; ++i) cin>>v[i];

  int s=0;
  for (int i=1; i<n-1; ++i) {
    if (v[i] < min(v[0], v[n-1]) || v[i] > max(v[0], v[n-1])) ++s;
  }
  cout<<s;
}