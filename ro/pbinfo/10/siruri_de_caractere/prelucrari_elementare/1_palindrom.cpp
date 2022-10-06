// https://www.pbinfo.ro/probleme/88/palindrom
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

int main() {
  ll n;
  fin>>n;

  for (ll i=0; i<n; ++i) {
    string s;
    fin>>s;

    string rs=s;
    reverse(rs.begin(), rs.end());
    fout<<(s==rs)<<endl;
  }
}