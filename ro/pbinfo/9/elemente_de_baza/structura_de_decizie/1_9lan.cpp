// https://www.pbinfo.ro/probleme/3480/9lan
#include <bits/stdc++.h>
using namespace std;#define mod 1000000007

ifstream fin("9lan.in");
ofstream fout("9lan.out");

int main() {
  long long n;
  fin>>n;
  if (n&1) fout<<9;
  else fout<<1;
}