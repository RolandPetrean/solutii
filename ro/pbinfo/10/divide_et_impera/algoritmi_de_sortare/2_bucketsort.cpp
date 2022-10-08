// https://www.pbinfo.ro/probleme/2720/bucketsort
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("bucketsort.in");
ofstream fout("bucketsort.out");

int main() {
  long long n, d;
  fin>>n;

  vector<long long> e(n);
  for (int i=0; i<n; ++i) fin>>e[i];
  fin>>d;
  if (d == 0) sort(e.begin(), e.end());
  else sort(e.begin(), e.end(), greater<long long>());

  for (auto v : e) fout<<v<<" ";
}