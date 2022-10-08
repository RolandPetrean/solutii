// https://www.varena.ro/problema/selectie
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("selectie.in");
ofstream fout("selectie.out");

int main() {
  int n, k;
  fin>>n>>k;
  --k;

  vector<int> x(n);
  for (int i=0; i<n; ++i) fin>>x[i];
  
  nth_element(x.begin(), x.begin()+k, x.end());
  fout<<x[k];
}