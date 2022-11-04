// https://www.pbinfo.ro/probleme/3466/num-sum-div
#include <bits/stdc++.h>
using namespace std;

ifstream fin("num_sum_div.in");
ofstream fout("num_sum_div.out");

const int MAXN=2250;
vector<int> prime{};

void init_ciur() {
  bitset<MAXN> ciur{};
  ciur[0] = ciur[1] = true;
  for (int i=2; i*i<=MAXN; ++i) {
    if (ciur[i]) continue;
    for (int j=i*i; j<MAXN; j+=i) ciur[j] = true;
  }

  for (int i=0; i<MAXN; ++i) {
    if (!ciur[i]) prime.push_back(i);
  }
}

long long sumdiv(long long n) {
  long long s=1;
  for (int i:prime) {
    if (1LL*i*i>n) break;
    if (n%i==0) {
      int d=1;
      while (n%i==0) {
        n /= i;
        d *= i;
      }
      
      s *= (i*d-1)/(i-1);
    }
  }
  if (n>1) s *= (n*n-1)/(n-1);
  return s;
}

int main() {
  int n;
  fin>>n;

  init_ciur();

  int def=0, perf=0, ab=0;
  for (int i=0; i<n; ++i) {
    long long x;
    fin>>x;

    long long sdiv = sumdiv(x)-x;
    if (sdiv==x) ++perf;
    else if (sdiv<x) ++def;
    else ++ab;
  }

  fout<<def<<" "<<perf<<" "<<ab;
}