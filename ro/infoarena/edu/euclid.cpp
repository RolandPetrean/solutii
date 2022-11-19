// https://infoarena.ro/problema/euclid2
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("euclid2.in");
ofstream fout("euclid2.out");

int main() {
  int t;
  fin>>t;

  while (t--) {
    int a, b;
    fin>>a>>b;
    fout<<__gcd(a, b)<<endl;
  }
}