// https://www.pbinfo.ro/probleme/1380/pluton
#include <bits/stdc++.h>
using namespace std;

ifstream fin("pluton.in");
ofstream fout("pluton.out");

int main() {
  int n;
  fin>>n;

  int maxp=0, nrmaxp=0;
  string idmaxp;
  map<string,vector<string>> pluton;
  for (int i=0; i<n; ++i) {
    string x;
    fin>>x;

    string p=x;
    sort(p.begin(), p.end());

    if (pluton.find(p) != pluton.end()) pluton[p].push_back(x);
    else pluton[p] = {x};

    if (pluton[p].size()>maxp) {
      idmaxp = p;
      maxp = pluton[p].size();
      nrmaxp = 1;
    } else if (pluton[p].size() == maxp) ++nrmaxp;
  }

  fout<<pluton.size()<<endl<<maxp<<endl<<nrmaxp<<endl;
  for (string x:pluton[idmaxp]) fout<<x<<" ";
}