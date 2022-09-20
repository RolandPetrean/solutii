// https://codeforces.com/problemset/problem/768/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

long long mijloc(long long n) {
  long long x=1;
  while (n>1) {
    x *= 2;
    n /= 2;
  }
  return x;
}

bool el(long long n, long long p, long long mid) {
  if (p==mid) return n%2;
  if (p>mid) p -= mid;
  return el(n/2, p, mid/2);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, l, r;
  cin>>n>>l>>r;

  long long mid=mijloc(n), t=0;
  for (long long i=l; i<=r; ++i) t += el(n, i, mid);
  cout<<t;
}