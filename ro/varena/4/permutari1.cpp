// https://www.varena.ro/problema/permutari1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("permutari1.in");
ofstream fout("permutari1.out");

int main() {
  int n, x;
  fin>>n;

  vector<int> p, c(n);
  for (int i=0; i<n; ++i) c[i] = i;
  while (fin>>x && x != 0) p.push_back(--x);

  ull s=0;
  int i=0, j=0;
  do {
    if (i == p[j]) {
      ull num=0;
      for (auto v : c) num = num*10+v;
      s += num;
      ++j;
    }
    ++i;
  } while (next_permutation(c.begin(), c.end()));
  fout<<s;
}