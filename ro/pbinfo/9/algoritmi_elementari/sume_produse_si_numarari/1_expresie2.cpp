// https://www.pbinfo.ro/probleme/332/expresie2
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  
  long long s=0;
  for (int i=1; i<=n; ++i) {
    s += i*(i+1);
  }
  cout<<"Rezultatul este "<<s;
}