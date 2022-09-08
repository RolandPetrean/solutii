// https://www.varena.ro/problema/aparitii
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("aparitii.in");
ofstream fout("aparitii.out");

int main() {
  int n;
  fin>>n;

  int x=0;
  for (int i=0; i<2*n-1; ++i) {
    ll a;
    fin>>a;
    x ^= a;
  }
  fout<<x;
}