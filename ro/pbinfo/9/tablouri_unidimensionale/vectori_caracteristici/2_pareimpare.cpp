// https://www.pbinfo.ro/probleme/276/pareimpare
#include <bits/stdc++.h>
using namespace std;

ifstream fin("pareimpare.in");
ofstream fout("pareimpare.out");

int main() {
  int n;
  fin>>n;

  array<bool,100> nr{};
  int x;
  while (fin>>x) {
    nr[x] = true;
  }

  for (int i=1; i<100; i+=2) {
    if (nr[i]) fout<<i<<" ";
  }
  fout<<endl;
  for (int i=98; i>=0; i-=2) {
    if (nr[i]) fout<<i<<" ";
  }
}