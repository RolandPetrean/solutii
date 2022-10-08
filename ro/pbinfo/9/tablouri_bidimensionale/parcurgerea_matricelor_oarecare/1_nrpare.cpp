// https://www.pbinfo.ro/probleme/766/nrpare
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, m;
  cin>>n>>m;

  long long maxi=-1;
  vector<long long> lm;
  for (int i=1; i<=n; ++i) {
    long long s=0;
    for (int j=0; j<m; ++j) {
      long long x;
      cin>>x;
      if (x%2==0) ++s;
    }
    if (s > maxi) {
      maxi = s;
      lm = {i};
    } else if (s == maxi) lm.push_back(i);
  }
  for (auto v : lm) cout<<v<<" ";
}