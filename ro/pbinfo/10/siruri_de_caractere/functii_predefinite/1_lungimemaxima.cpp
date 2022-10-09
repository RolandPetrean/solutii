// https://www.pbinfo.ro/probleme/87/lungimemaxima
#include <bits/stdc++.h>
using namespace std;

ifstream fin("lgmax.in");
ofstream fout("lgmax.out");

int main() {
  int n;
  fin>>n;

  string maxi="";
  for (int i=0; i<=n; ++i) {
    string s;
    getline(fin, s);
    if (s.size()>maxi.size()) maxi = s;
  }
  fout<<maxi;
}