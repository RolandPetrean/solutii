// https://www.varena.ro/problema/ssm
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("ssm.in");
ofstream fout("ssm.out");

int main() {
  int n;
  fin>>n;

  int j=1;
  pair<int,pair<int,int>> best{-1, {0,0}};
  vector<int> a(n+1);
  fin>>a[1];
  for (int i=2; i<=n; ++i) {
    fin>>a[i];
    if (a[i-1]<0) j=i;
    else a[i] += a[i-1];
    best = max(best, {a[i], {j, i}});
  }
  best = max(best, {a[n], {j, n}});

  fout<<best.first<<" "<<best.second.first<<" "<<best.second.second;
}