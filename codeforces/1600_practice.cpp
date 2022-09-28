// https://codeforces.com/problemset/problem/234/G
#include <bits/stdc++.h>
using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main() {
  int n;
  fin>>n;

  int x=ceil(log2(n));
  fout<<x<<endl;
  for (int msk=0; msk<x; ++msk) {
    int nr=0;
    for (int i=0; i<n; ++i) {
      if ((1<<msk)&i) ++nr;
    }
    fout<<nr;
    for (int i=0; i<n; ++i) {
      if ((1<<msk)&i) fout<<" "<<i+1;
    }
    fout<<endl;
  }
}