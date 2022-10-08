// http://www.usaco.org/index.php?page=viewproblem2&cpid=856
#include <bits/stdc++.h>
using namespace std;

ifstream fin("blist.in");
ofstream fout("blist.out");

int main() {
  int n;
  fin>>n;

  array<int,1001> buckets{};
  for (int i=0; i<n; ++i) {
    int s, t, b;
    fin>>s>>t>>b;
    buckets[s] += b;
    buckets[t+1] -= b;
  }
  
  int maxb=0;
  for (int i=1; i<1000; ++i) {
    buckets[i] += buckets[i-1];
    maxb = max(maxb, buckets[i]);
  }

  fout<<maxb;
}