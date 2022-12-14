// https://www.pbinfo.ro/probleme/88/palindrom
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

int main() {
  long long n;
  fin>>n;

  for (int i=0; i<n; ++i) {
    string s;
    fin>>s;

    string rs=s;
    reverse(rs.begin(), rs.end());
    fout<<(s==rs)<<endl;
  }
}