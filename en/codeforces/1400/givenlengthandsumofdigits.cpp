// https://codeforces.com/problemset/problem/489/C
#include <bits/stdc++.h>
using namespace std;
 
bool possible(int m, int s) {
  if (s>=0 && s<=9*m) return true;
  return false;
}
 
int main() {
  int m, s;
  cin>>m>>s;
 
  if (!possible(m, s) || s==0 && m>1) cout<<"-1 -1";
  else {
    int mins=s, maxs=s;
    string minimum="", maximum="";
    for (int i=0; i<m; ++i) {
      for (int j=0; j<10; ++j) {
        if ((i>0||j>0||(m==1&&j==0)) && possible(m-i-1, mins-j)) {
          mins -= j;
          minimum += to_string(j);
          break;
        }
      }
 
      for (int j=9; j>=0; --j) {
        if ((i>0||j>0||(m==1&&j==0)) && possible(m-i-1, maxs-j)) {
          maxs -= j;
          maximum += to_string(j);
          break;
        }
      }
    }
 
    cout<<minimum<<" "<<maximum;
  }
}