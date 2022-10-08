// https://www.pbinfo.ro/probleme/1024/quicksort
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  vector<long long> e(n);
  for (int i=0; i<n; ++i) cin>>e[i];
  sort(e.begin(), e.end());
  
  for (auto v : e) cout<<v<<" ";
}