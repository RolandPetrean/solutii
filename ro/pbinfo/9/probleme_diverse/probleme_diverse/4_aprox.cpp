// https://www.pbinfo.ro/probleme/3781/aprox
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("aprox.in");
ofstream fout("aprox.out");

#define int long long
#define double long double

double x;
int n;

int cautbin(double la, double lb, double ra, double rb, bool snd) {
  int l=0, r=n, p=0;
  while (l <= r) {
    int mid=(l+r)/2;
    if (lb+rb*mid <= n && (!snd ? (la+ra*mid)/(lb+rb*mid) <= x : (la+ra*mid)/(lb+rb*mid) >= x)) {
      p = mid;
      l = mid+1;
    } else r = mid-1;
  }
  return p;
}

signed main() {
  fin>>x>>n;

  double la=0, lb=1, ra=1, rb=1;
  while (lb <= n && rb <= n) {
    double na=la+ra, nb=lb+rb;
    if (nb > n) break;
    if (na/nb<=x) {
      int p = cautbin(la, lb, ra, rb, false);
      la += ra*p;
      lb += rb*p;
    } else {
      int p = cautbin(ra, rb, la, lb, true);
      ra += la*p;
      rb += lb*p;
    }
  }

  if (abs(la/lb-x)<abs(ra/rb-x)) fout<<(int)la<<" "<<(int)lb;
  else fout<<(int)ra<<" "<<(int)rb;
}