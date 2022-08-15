// https://www.varena.ro/problema/cifra
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("cifra.in");
ofstream fout("cifra.out");

int main() {
  int n, c;
  fin>>n>>c;

  for (int i=c; i<=n; i+=9) fout<<i<<" ";
}