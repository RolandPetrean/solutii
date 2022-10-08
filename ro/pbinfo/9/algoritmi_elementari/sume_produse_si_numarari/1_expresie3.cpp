// https://www.pbinfo.ro/probleme/335/expresie3
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  
  long long s=0;
  for (int i=1; i<=n; ++i) {
    if (i&1) s += i*(i+1);
    else s -= i*(i+1);
  }
  cout<<"Rezultatul este "<<s;
}