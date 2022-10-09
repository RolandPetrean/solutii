// https://www.pbinfo.ro/probleme/3356/alfa
#include <bits/stdc++.h>
using namespace std;

ifstream fin("alfa.in");
ofstream fout("alfa.out");

int main() {
  int n, k;
  fin>>n>>k;

  vector<int> v, pozk;
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    if (x == k) pozk.push_back(i);
    v.push_back(x);
  }

  for (int i=1; i<pozk.size(); ++i) sort(v.begin()+pozk[i-1]+1, v.begin()+pozk[i]);
  for (int x:v) fout<<x<<" ";
}