// https://www.varena.ro/problema/sume
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("sume.in");
ofstream fout("sume.out");

int main() {
  int n, k;
  fin>>n>>k;

  array<int,2000> count{};
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    if (x<0) x = abs(x)+1000;
    ++count[x];
  }
  vector<int> x;
  for (int i=999; i>=0; --i) {
    for (int j=0; j<count[i]; ++j) {
      x.push_back(i);
    }
  }
  for (int i=0; i<1000; ++i) {
    for (int j=0; j<count[i+1000]; ++j) {
      x.push_back(-i);
    }
  }

  int smin=x[0], smax=x[0];
  for (int i=1; i<n; ++i) {
    if (smin+x[i]<smin && i>=k) break;
    smin += x[i];
  }
  for (int i=1; i<k; ++i) {
    if (smax+x[i]<smax) break;
    smax += x[i];
  }
  fout<<smin<<endl<<smax;
}