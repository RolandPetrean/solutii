// https://www.pbinfo.ro/probleme/4009/moscraciun1
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, s;
  cin>>n>>s;

  vector<long long> c(n);
  for (int i=0; i<n; ++i) cin>>c[i];
  sort(c.begin(), c.end());

  long long k=0, p=0;
  for (int i=0; i<n; ++i) {
    if (c[i] > s) {
      p = c[i]-s;
      break;
    }
    s -= c[i];
    ++k;
  }
  cout<<k<<" "<<p;
}