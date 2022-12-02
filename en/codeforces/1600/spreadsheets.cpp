// https://codeforces.com/problemset/problem/1/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

string getb26(int n) {
  string res="";
  while (n) {
    res.push_back('A'+(n%26+25)%26);
    if (n%26==0) --n;
    n /= 26;
  }
  reverse(res.begin(), res.end());
  return res;
}

int getb10(string n) {
  int res=0, p=1;
  for (int i=n.size()-1; i>=0; --i) {
    res += (n[i]-'A'+1)*p;
    p *= 26;
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  while (n--) {
    string s;
    cin>>s;

    string a="", b="", currs="";
    int x=0, y=0, currn=0;
    for (int i=0; i<s.size(); ++i) {
      if (isdigit(s[i])) {
        if (currs!="") {
          if (a=="") a = currs;
          else b = currs;
          currs = "";
        }
        currn = currn*10+(s[i]-'0');
      } else {
        if (currn) {
          if (!x) x = currn;
          else y = currn;
          currn = 0;
        }
        currs.push_back(s[i]);
      }
    }
    if (!x) x = currn;
    else y = currn;

    if (a=="R" && b=="C") cout<<getb26(y)<<x<<endl;
    else cout<<'R'<<x<<'C'<<getb10(a)<<endl;
  }
}