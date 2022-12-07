// https://www.pbinfo.ro/probleme/2438/pal
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

ifstream fin("pal.in");
ofstream fout("pal.out");

int _pow10(int n) {
  int x=1;
  while (n--) x *= 10;
  return x;
}

string find_palindrome(string n) {
  if (n.size()==1) return n;
  string p1=n.substr(0, n.size()/2), p2=n.substr(n.size()/2+1), p12=p1;
  reverse(p12.begin(), p12.end());

  int i12=stoll(p12), i2=stoll(p2);
  if (i2>i12) return find_palindrome(to_string(stoll(n) + _pow10(p2.size())-i2));
  else return p1 + n[n.size()/2] + p12;
}

signed main() {
  int c, n;
  fin>>c>>n;

  vector<string> p(n);
  for (int i=0; i<n; ++i) {
    fin>>p[i];
    p[i] = find_palindrome(p[i]);
  }

  if (c==1) {
    for (string v:p) fout<<v<<" ";
  } else {
    set<string> s;
    for (string v:p) s.insert(v);

    vector<string> maxps{"-1"};
    for (int i=0; i<n; ++i) {
      string curr=p[i];
      int l=0, r=curr.size()-1;
      vector<string> found{};

      while (l<=r) {
        if (s.find(curr.substr(l, r-l+1))!=s.end()) found.push_back(curr.substr(l, r-l+1));
        ++l; --r;
      }

      if (found.size()>maxps.size() || (found.size()==maxps.size() && stoll(found[0])>stoll(maxps[0]))) maxps = found;
    }

    if (c==2) fout<<maxps.size();
    else {
      reverse(maxps.begin(), maxps.end());
      for (string v:maxps) fout<<v<<" ";
    }
  }
}