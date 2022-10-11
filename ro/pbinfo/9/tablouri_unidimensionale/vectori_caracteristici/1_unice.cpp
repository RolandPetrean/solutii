// https://www.pbinfo.ro/probleme/267/unice
#include <bits/stdc++.h>
using namespace std;

ifstream fin("unice.in");
ofstream fout("unice.out");

int main() {
  int n;
  fin>>n;

  array<int,100> nr{};
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    ++nr[x];
  }

  for (int i=0; i<100; ++i) {
    if (nr[i]==1) fout<<i<<" ";
  }
}