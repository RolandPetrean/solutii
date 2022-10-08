#include <bits/stdc++.h>
using namespace std;

ifstream fin("promote.in");
ofstream fout("promote.out");

int main() {
  int b, bp, s, sp, g, gp, p, pp;
  fin>>b>>bp>>s>>sp>>g>>gp>>p>>pp;
  int x=pp-p, y=x+(gp-g), z=y+(sp-s);
  fout<<z<<endl<<y<<endl<<x;
}