// https://www.pbinfo.ro/probleme/1157/ksort2
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, k;
  cin>>n>>k;

  vector<long long> e(n);
  for (int i=0; i<n; ++i) cin>>e[i];
  sort(e.begin(), e.begin()+k);
  sort(e.begin()+k, e.end(), greater<long long>());

  for (auto v : e) cout<<v<<" ";
}