// https://www.varena.ro/problema/reuniune
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("reuniune.in");
ofstream fout("reuniune.out");

int main() {
  int a1, a2, b1, b2;
  fin>>a1>>a2>>b1>>b2;

  if ((b1 <= a2 && b1 > a1) || (a1 <= b2 && a1 > b1)) {
    fout<<min(a1,b1)<<" "<<max(a2,b2);
  } else fout<<-1;
}