// https://www.pbinfo.ro/probleme/160/inserareinainte
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  vector<long long> nr;
  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;

    long long sq = sqrt(x);
    if (sq*sq == x) nr.push_back(sq);
    nr.push_back(x);
  }
  for (auto x : nr) cout<<x<<" ";
}