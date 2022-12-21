// https://www.pbinfo.ro/probleme/4133/microbuz
// 97p e cod antic si mi-e lene sa rescriu, ayaye
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("microbuz.in");
ofstream fout("microbuz.out");

const int MAXV=170;

int main() {
  int c, n;
  fin>>c;
  array<int,10> b;
  for (int i=0; i<10; ++i) fin>>b[i];
  fin>>n;

  if (c<3) {
    vector<int> d(MAXV, 1000);
    d[0] = 0;
    vector<array<int,10>> p(MAXV);
    for (int i=1; i<=10; ++i) d[i] = b[i-1];
    for (int i=1; i<MAXV; ++i) {
      int minj=(i<=10?i:0);
      for (int j=1; j<=10 && j<i; ++j) {
        if (p[i-j][j-1]<3 && d[i-j]+b[j-1]<d[i-minj]+b[minj-1]) minj = j;
      }
      if (minj) {
        d[i] = d[i-minj]+b[minj-1];
        p[i] = p[i-minj];
        ++p[i][minj-1];
      }
    }

    if (c==1) fout<<d[n]<<endl;
    else {
      for (int i=0; i<10; ++i) {
        for (int j=0; j<p[n][i]; ++j) {
          fout<<i+1<<" "<<b[i]<<endl;
        }
      }
    }
  } else {
    pair<int,pair<vector<int>,vector<int>>> best{-1,{{},{}}};

    for (int m=0; m<(1<<10); ++m) {
      for (int m2=0; m2<(1<<10); ++m2) {
        if (m2&m) continue;
        int b1sum=0, b2sum=0;
        vector<int> b1, b2;

        for (int i=0; i<10; ++i) {
          if (m&(1<<i)) {
            b1.push_back(i+1);
            b1sum += b[i];
          } else if (m2&(1<<i)) {
            b2.push_back(i+1);
            b2sum += b[i];
          }
        }

        if (b1sum == b2sum && b1sum > best.first) best = {b1sum, {b1, b2}};
      }
    }

    fout<<best.first<<endl;
    for (auto v : best.second.first) fout<<v<<" ";
    fout<<endl;
    for (auto v : best.second.second) fout<<v<<" ";
  }
}