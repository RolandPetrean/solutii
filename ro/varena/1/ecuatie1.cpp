// https://www.varena.ro/problema/ecuatie1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("ecuatie1.in");
ofstream fout("ecuatie1.out");

int main() {
  int a, b;
  fin>>a>>b;
  if (a == 0 && b == 0) fout<<"multimea Z";
  else if (b == 0) fout<<0;
  else if (a == 0) fout<<"multimea vida";
  else {
    int res = (0-b)/a;
    if (res*a+b==0) fout<<(0-b)/a;
    else fout<<"multimea vida";
  }
}