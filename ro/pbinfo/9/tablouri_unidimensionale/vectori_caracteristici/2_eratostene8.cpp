// https://www.pbinfo.ro/probleme/3319/eratostene8
#include <bits/stdc++.h>
using namespace std;

ifstream fin("eratostene8.in");
ofstream fout("eratostene8.out");

int nr[10000001]{};

int main() {
  int n, t;
  fin>>n>>t;

  vector<int> p(n);
  for (int i=0; i<n; ++i) fin>>p[i];
  sort(p.begin(), p.end());

  for (int i=0; i<n; ++i) {
    if (i != 0 && p[i] == p[i-1]) continue;
    for (int d=p[i]; d<=10000000; d+=p[i]) nr[d] = 1;
  }

  for (int i=0; i<=10000000; ++i) nr[i] += nr[i-1];

  for (int i=0; i<t; ++i) {
    int s, d;
    fin>>s>>d;
    if (s==0) fout<<nr[d]<<endl;
    else fout<<nr[d]-nr[s-1]<<endl;
  }
}