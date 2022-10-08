// https://www.pbinfo.ro/probleme/1005/numere8
#include <bits/stdc++.h>
using namespace std;


ifstream fin("numere8.in");
ofstream fout("numere8.out");

int main() {
  vector<long long> n(10000);
  long long x;
  while (fin>>x) {
    if (x < 10000) n[x] = -1;
  }
  for (int i=9999; i>0; --i) {
    if (n[i] != -1) fout<<i<<" ";
  }
}