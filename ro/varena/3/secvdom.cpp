// https://www.varena.ro/problema/secvdom
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("secvdom.in");
ofstream fout("secvdom.out");

int main() {
  int t;
  fin>>t;

  while (t--) {
    int n;
    fin>>n;

    array<int,1000001> freq{};
    int mini=-2;
    for (int i=0; i<n; ++i) {
      int x;
      fin>>x;
      if (freq[x] && (mini<0 || i-freq[x]+1<mini)) mini = i-freq[x]+1;
      freq[x] = i+1;
    }
    fout<<mini+1<<endl;
  }
}