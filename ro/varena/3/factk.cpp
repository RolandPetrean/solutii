// https://www.varena.ro/problema/factk
#include <bits/stdc++.h>
using namespace std;

ifstream fin("factk.in");
ofstream fout("factk.out");

int pw(int n, int x) {
  int p=1;
  for (int i=0; i<x; ++i) p *= n;
  return p;
}
int l(int n, int x) {
  int p=0;
  while (n>1) {
    ++p;
    n /= x;
  }
  if (n==0) --p;
  return p;
}

int main() {
  int N, k;
  fin>>N>>k;

  vector<pair<int,int>> kp;
  for (int i=2; i*i<=k; ++i) {
    if (k%i==0) {
      int p=0;
      while (k%i==0) {
        k /= i;
        ++p;
      }
      kp.push_back({i,p});
    }
  }
  if (k>1) kp.push_back({k,1});

  int mini=INT_MAX;
  for (int i=0; i<kp.size(); ++i) {
    int sum=0;
    for (int s=1; s<=l(N, kp[i].first); ++s) sum += N/pw(kp[i].first, s);
    sum /= kp[i].second;
    mini = min(mini, sum);
  }

  fout<<mini;
}