// https://www.pbinfo.ro/probleme/338/expresie5
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

long long powll(long long a, long long b) { 
  long long r=1;
  for (int i=0; i<b; ++i) r *= a;
  return r;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long s=0;
  for (int i=1; i<=n; ++i) s += powll(i, i);
  cout<<"Rezultatul este "<<s;
}