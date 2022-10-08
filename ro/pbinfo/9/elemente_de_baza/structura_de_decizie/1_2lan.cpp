// https://www.pbinfo.ro/probleme/3479/2lan
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

ifstream fin("2lan.in");
ofstream fout("2lan.out");

int main() {
  long long n;
  fin>>n;
  if (n == 0) fout<<1;
  else fout<<(ll) pow(2, n%4+4)%10;
}