// https://www.pbinfo.ro/probleme/3210/cumparaturi
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long b, s;
  cin>>b>>s;
  cout<<s/b<<" "<<b-(s%b);
}