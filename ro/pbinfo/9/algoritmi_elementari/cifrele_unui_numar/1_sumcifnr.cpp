// https://www.pbinfo.ro/probleme/3662/sumcifnrcif
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int nrcif(int n) {
  int cnt=0;
  while (n) {
    ++cnt;
    n /= 10;
  }
  return cnt;
}

int sumcif(long long n) {
  int s=0;
  while (n) {
    s += n%10;
    n /= 10;
  }
  return s;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  cout<<nrcif(sumcif(n));
}