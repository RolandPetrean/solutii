// https://www.varena.ro/problema/bacan
#include <bits/stdc++.h>
using namespace std;

ifstream fin("bacan.in");
ofstream fout("bacan.out");

int main() {
  int n;
  fin>>n;

  map<string,int> produse{};
  for (int i=0; i<=n; ++i) {
    string p;
    getline(fin, p);

    int delim=p.find_first_of('*');
    if (delim == string::npos) continue;

    string nume=p.substr(0, delim-1);
    int vanzari=stoi(p.substr(delim+2));
    produse[nume] += vanzari;
  }

  fout<<produse.size()<<endl;
  for (auto produs:produse) {
    fout<<produs.first<<" * "<<produs.second<<endl;
  }
}