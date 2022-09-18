// https://www.varena.ro/problema/date
#include <bits/stdc++.h>
using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");

array<int,12> luni{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int bisect(int a, int l) {
  if (l<2) --a;
  return a/4-a/100+a/400;
}

int main() {
  long long z1, l1, a1, z2, l2, a2;
  fin>>z1>>l1>>a1>>z2>>l2>>a2;
  --l1; --l2;

  long long s1 = a1*365+bisect(a1, l1)+z1, s2 = a2*365+bisect(a2, l2)+z2;
  for (int i=0; i<l1; ++i) s1 += luni[i];
  for (int i=0; i<l2; ++i) s2 += luni[i];
  fout<<s2-s1;
}