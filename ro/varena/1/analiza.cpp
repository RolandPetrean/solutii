// https://www.varena.ro/problema/analiza
#include <bits/stdc++.h>
using namespace std;

ifstream fin("analiza.in");
ofstream fout("analiza.out");

int main() {
  int c, n;
  fin>>c>>n;

  if (c==1) {
    int maxi=0, secv=0;
    for (int i=0; i<n; ++i) {
      string x;
      fin>>x;

      string r=x;
      reverse(r.begin(), r.end());
      if (x==r) ++secv;
      else {
        maxi = max(maxi, secv);
        secv = 0;
      }
    }
    fout<<max(maxi, secv);
  } else {
    int freq[1000001]{};
    for (int i=0; i<n; ++i) {
      int x;
      fin>>x;
      ++freq[x];
    }

    int max1=0, max2=0;
    for (int i=0; i<=1000000; ++i) {
      if (freq[i]>max1) {
        max2=max1;
        max1=freq[i];
      } else if (freq[i]<max1 && freq[i]>max2) max2=freq[i];
    }
    fout<<max2;
  }
}