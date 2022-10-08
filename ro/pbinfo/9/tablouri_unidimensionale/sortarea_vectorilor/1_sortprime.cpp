// https://www.pbinfo.ro/probleme/510/sortprime
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

bool prim(long long x) {
  if (x < 2) return false;
  for (int i=2; i*i<=x; i++) {
    if (x%i==0) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  vector<long long> prime;
  for (int i=0; i<n; i++) {
    long long x;
    cin>>x;
    if (prim(x)) prime.push_back(x);
  }
  sort(prime.begin(), prime.end());
  for (auto p : prime) cout<<p<<" ";
}