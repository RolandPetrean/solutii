// https://www.pbinfo.ro/probleme/125/permutari2
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

ifstream fin("permutari2.in");
ofstream fout("permutari2.out");

int main() {
  long long n;
  fin>>n;

  vector<long long> perm(n);
  for (int i=0; i<n; ++i) fin>>perm[i];
  sort(perm.begin(), perm.end());

  do {
    for (int i=0; i<perm.size(); ++i) fout<<perm[i]<<" ";
    fout<<endl;
  } while (next_permutation(perm.begin(), perm.end()));
}