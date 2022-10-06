// https://www.pbinfo.ro/probleme/3480/9lan
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ifstream fin("9lan.in");
ofstream fout("9lan.out");

int main() {
  ll n;
  fin>>n;
  if (n&1) fout<<9;
  else fout<<1;
}