// https://www.pbinfo.ro/probleme/3181/marte3
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  long long n, m, p;
  cin>>n>>m>>p;

  long long s = m * n;
  cout<<p/s<<endl;
  p -= (p/s)*s;
  cout<<p/m<<endl;
  p -=p/m*m;
  cout<<p;
}