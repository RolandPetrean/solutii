// https://www.pbinfo.ro/probleme/8/maxim3
#include <bits/stdc++.h>
using namespace std;

ifstream fin("maxim3.in");
ofstream fout("maxim3.out");

int main() {
  int a, b, c;
  fin>>a>>b>>c;
  fout<<max(c, max(a, b));
}