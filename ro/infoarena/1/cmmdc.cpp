// https://www.infoarena.ro/problema/cmmdc
#include <bits/stdc++.h>
using namespace std;

ifstream fin("cmmdc.in");
ofstream fout("cmmdc.out");

int main() {
  int a, b;
  fin>>a>>b;
  if (__gcd(a,b)==1) fout<<0;
  else fout<<__gcd(a, b);
}