// https://www.pbinfo.ro/probleme/3909/permutari6
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b;
  cin>>a>>b;
  
  vector<long long> perm;
  for (int i=a; i<=b; ++i) perm.push_back(i);

  do {
    for (int i=0; i<perm.size(); ++i) cout<<perm[i]<<" ";
    cout<<endl;
  } while (next_permutation(perm.begin(), perm.end()));
}