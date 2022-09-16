// https://www.varena.ro/problema/aritmetica2
#include <bits/stdc++.h>
using namespace std;

ifstream fin("aritmetica2.in");
ofstream fout("aritmetica2.out");

int main() {
  int a, b, c;
  fin>>a>>b>>c;

  if (b==0) fout<<a+c;
  else if (b==1) fout<<a-c;
  else if (b==2) fout<<a*c;
  else fout<<a/c<<" "<<a%c;
}