// https://www.pbinfo.ro/probleme/2024/divizor112
#include <bits/stdc++.h>
using namespace std;#define mod 1000000007

ifstream fin("divizor112.in");
ofstream fout("divizor112.out");

array<long long,1000001> freq;

int main() {
  long long n;
  fin>>n;

  for (int i=0; i<n; ++i) {
    long long x;
    fin>>x;
    
    for (int j=1; j*j<=n; ++j) {
      if (x%j==0) {
        ++freq[j];
        if (x/j != j) ++freq[x/j];
      }
    }
  }

  long long maxi=-1, r;
  for (int i=2; i<=freq.size(); ++i) {
    if (freq[i] > maxi) {
      r = i;
      maxi = freq[i];
    }
  }
  fout<<r;
}