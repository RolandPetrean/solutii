// https://www.pbinfo.ro/probleme/272/paresort
#include <bits/stdc++.h>
using namespace std;

ifstream fin("paresort.in");
ofstream fout("paresort.out");

int main() {
  int n;
  fin>>n;

  vector<int> a;
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    if (x%2==0) a.push_back(x);
  }
  sort(a.begin(), a.end());

  if (a.size()==0) {
    fout<<"nu exista";
    return 0;
  }
  fout<<a.size()<<endl;
  for (int x:a) fout<<x<<" ";
}