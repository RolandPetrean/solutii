// https://www.pbinfo.ro/probleme/163/stergere
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

bool prim(long long n) {
  if (n <= 1) return false;
  for (long long i=2; i*i <= n; ++i) {
    if (n%i==0) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  vector<long long> p;
  for (long long i=0; i<n; ++i) {
    long long x;
    cin>>x;
    if (!prim(x)) p.push_back(x);
  }
  for (auto x : p) cout<<x<<" ";
}