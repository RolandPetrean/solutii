// https://www.pbinfo.ro/probleme/428/transfb
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int b, n;
  cin>>b>>n;

  int curr=pow(b, n-1), s=0;
  while (n--) {
    int c;
    cin>>c;
    
    s += curr*c;
    curr /= b;
  }
  cout<<s;
}