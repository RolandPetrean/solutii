// https://www.varena.ro/problema/latin
#include <bits/stdc++.h>
using namespace std;

ifstream fin("latin.in");
ofstream fout("latin.out");

int main() {
  int n;
  fin>>n;

  int sz=pow(2, n);
  for (int i=0; i<sz; ++i) {
    for (int j=0; j<sz; ++j) {
      fout<<(i+j)%sz+1<<" ";
    }
    fout<<endl;
  }
}