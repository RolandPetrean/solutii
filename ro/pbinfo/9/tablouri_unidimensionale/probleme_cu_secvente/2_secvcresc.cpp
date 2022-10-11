// https://www.pbinfo.ro/probleme/181/secvcresc
#include <bits/stdc++.h>
using namespace std;

ifstream fin("secvcresc.in");
ofstream fout("secvcresc.out");

int main() {
  int n;
  fin>>n;

  int lx;
  fin>>lx;

  int st=1, dr=1, maxst=1, maxdr=1;
  for (int i=1; i<n; ++i) {
    int x;
    fin>>x;

    if (x<=lx) {
      st = i+1;
      dr = st;
    } else ++dr;
    
    if (dr-st+1>maxdr-maxst+1) {
      maxst = st;
      maxdr = dr;
    }

    lx = x;
  }

  fout<<maxst<<" "<<maxdr;
}