// https://www.pbinfo.ro/probleme/1923/egale
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

ifstream fin("egale.in");
ofstream fout("egale.out");

int main() {
  int t;
  fin>>t;

  if (t==1) {
    long long a, b;
    fin>>a>>b;

    long long nr=0;
    for (int i=0; i<18; ++i) {
      nr = nr*10+1;
      for (long long j=nr; j<=9*nr && j<=b; j+=nr) {
        if (j>=a) fout<<j<<" ";
      }
    }
  } else {
    int x;
    fin>>x;

    for (int i=1; i<=x; ++i) {
      for (int j=1; j<=9; ++j) {
        for (int k=1; k<=i; ++k) fout<<j;
        fout<<" ";
      }
    }
  }
}