// https://www.pbinfo.ro/probleme/2024/divizor112
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ifstream fin("divizor112.in");
ofstream fout("divizor112.out");

array<ll,1000001> freq;

int main() {
  ll n;
  fin>>n;

  for (ll i=0; i<n; ++i) {
    ll x;
    fin>>x;
    
    for (ll j=1; j*j<=n; ++j) {
      if (x%j==0) {
        ++freq[j];
        if (x/j != j) ++freq[x/j];
      }
    }
  }

  ll maxi=-1, r;
  for (ll i=2; i<=freq.size(); ++i) {
    if (freq[i] > maxi) {
      r = i;
      maxi = freq[i];
    }
  }
  fout<<r;
}