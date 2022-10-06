// https://www.pbinfo.ro/probleme/1860/blackfriday
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("blackfriday.in");
ofstream fout("blackfriday.out");

int main() {
  int n;
  fin>>n;

  vector<double> v(n);
  for (int i=0; i<n; ++i) fin>>v[i];

  pair<double,int> maxi={0,0};
  for (int i=0; i<n; ++i) {
    double x;
    fin>>x;

    double p = 100 - (100 / (v[i] / x));
    if (p>maxi.first) maxi = {p, i+1};
  }
  fout<<maxi.second;
}