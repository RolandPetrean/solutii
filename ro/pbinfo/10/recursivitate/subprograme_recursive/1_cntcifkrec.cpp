// https://www.pbinfo.ro/probleme/1862/cntcifkrec
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

void cnt_cif(long long n, long long k, int& c) {
  if (n == 0) c=(k==0);
  else {
    if (n/10 == 0) c=0;
    else cnt_cif(n/10, k, c);
    c += (n%10>=k);
  }
}