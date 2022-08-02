// https://www.pbinfo.ro/probleme/387/suma-divizorilor-impari
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll s=0;
  for (ll i=1; i*i<=n; i++) {
    if (n%i==0) {
      if (i&1) s+=i;
      if (n/i != i && n/i&1) s+=n/i;
    }
  }
  cout<<s;
}