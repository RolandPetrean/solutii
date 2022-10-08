// https://www.pbinfo.ro/probleme/7/maxim2
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

ifstream fin("maxim.in");
ofstream fout("maxim.out");

int main() {
  long long a, b;
  fin>>a>>b;
  fout<<max(a, b);
}