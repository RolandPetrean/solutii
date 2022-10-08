// https://www.pbinfo.ro/probleme/1327/sirpie
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

ifstream fin("sirpie.in");
ofstream fout("sirpie.out");

int main() {
  long long n;
  fin>>n;

  vector<long long> perm(n);
  for (int i=0; i<n; ++i) fin>>perm[i];
  sort(perm.begin(), perm.end());
  
  do {
    bool ok = true;
    for (int i=1; i<perm.size(); ++i) {
      if (__gcd(perm[i-1], perm[i]) != 1) ok = false;
    }
    if (!ok) continue;

    for (int i=0; i<perm.size(); ++i) fout<<perm[i]<<" ";
    fout<<endl;
  } while (next_permutation(perm.begin(), perm.end()));
}