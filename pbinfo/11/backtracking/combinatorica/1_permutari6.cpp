// https://www.pbinfo.ro/probleme/3909/permutari6
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll a, b;
  cin>>a>>b;
  
  vector<ll> perm;
  for (ll i=a; i<=b; ++i) perm.push_back(i);

  do {
    for (ll i=0; i<perm.size(); ++i) cout<<perm[i]<<" ";
    cout<<endl;
  } while (next_permutation(perm.begin(), perm.end()));
}