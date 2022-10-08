// https://www.pbinfo.ro/probleme/123/permutari
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

ifstream fin("permutari.in");
ofstream fout("permutari.out");

int main() {
  long long n;
  fin>>n;

  vector<long long> perm;
  for (int i=0; i<n; ++i) perm.push_back(i);

  do {
    for (int i=0; i<perm.size(); ++i) fout<<perm[i]<<" ";
    fout<<endl;
  } while (next_permutation(perm.begin(), perm.end()));
}