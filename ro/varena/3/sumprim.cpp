// https://www.varena.ro/problema/sumprim
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("sumprim.in");
ofstream fout("sumprim.out");

int n;

bool prim(int i, int d) {
  if (d*d > i) return true;
  if (i%d==0) return false;
  return prim(i, d+1);
}

void sumprim(int i, int s) {
  if (i>n) {
    fout<<s;
    return;
  }
  if (prim(i, 2)) s += i;
  sumprim(i+1, s);
}

int main() {
  fin>>n;
  sumprim(2, 0);
}