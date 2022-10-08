// https://www.pbinfo.ro/probleme/124/permutari1
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

ifstream fin("permutari1.in");
ofstream fout("permutari1.out");

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  fin>>n;

  vector<long long> perm;
  for (int i=n; i>0; --i) perm.push_back(i);

  do {
    for (int i=0; i<perm.size(); ++i) fout<<perm[i]<<" ";
    fout<<endl;
  } while (prev_permutation(perm.begin(), perm.end()));
}