// https://www.pbinfo.ro/probleme/3035/lumini
#include <bits/stdc++.h>
using namespace std;

ifstream fin("lumini.in");
ofstream fout("lumini.out");

int cautbin(vector<long long>& f, long long x) {
  auto res = upper_bound(f.begin(), f.end(), x); // Primul element mai mare ca x
  return distance(f.begin(), res);
}

int main() {
  int l, f;
  fin>>l>>f;

  vector<long long> f1, f2, f3;
  for (int i=0; i<f; ++i) {
    int t, l;
    fin>>t>>l;
    --l;

    if (t==1) {
      f1.push_back(l);
    } else if (t==2) {
      f2.push_back(l);
    } else if (t==3) {
      int c;
      fin>>c;
      --c;

      f3.push_back((long long)l+c);
    }
  }
  sort(f1.begin(), f1.end());
  sort(f2.begin(), f2.end());
  sort(f3.begin(), f3.end());
  
  int q;
  fin>>q;
  for (int i=0; i<q; ++i) {
    int l, c;
    fin>>l>>c;
    --l; --c;

    int r=(c&1) + cautbin(f1, l) + cautbin(f2, c) + cautbin(f3, (long long)l+c);
    if (l%2==0) ++r;
    fout<<(r&1)<<" ";
  }
}