// http://www.usaco.org/index.php?page=viewproblem2&cpid=855
#include <bits/stdc++.h>
using namespace std;

ifstream fin("mixmilk.in");
ofstream fout("mixmilk.out");

int main() {
  array<pair<int,int>, 3> buckets;
  for (int i=0; i<3; ++i) {
    int c, m;
    fin>>c>>m;
    buckets[i] = {c,m};
  }

  for (int i=0; i<100; ++i) {
    int curr=(i%3), next=((i+1)%3);
    int poured=min(buckets[curr].second, buckets[next].first-buckets[next].second);
    
    buckets[curr].second -= poured;
    buckets[next].second += poured;
  }

  for (auto [c, m] : buckets) fout<<m<<endl;
}