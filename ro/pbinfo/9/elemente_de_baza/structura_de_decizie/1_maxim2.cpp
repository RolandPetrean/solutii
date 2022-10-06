// https://www.pbinfo.ro/probleme/7/maxim2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ifstream fin("maxim.in");
ofstream fout("maxim.out");

int main() {
  ll a, b;
  fin>>a>>b;
  fout<<max(a, b);
}