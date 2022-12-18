// https://www.nerdarena.ro/problema/nrcuv
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("nrcuv.in");
ofstream fout("nrcuv.out");

bool smaller(string a, string b) {
  if (a.size()<b.size()) return true;
  else if (a.size()>b.size()) return false;
  for (int i=a.size()-1; i>=0; --i) {
    if ((int)a[i]-'0' < (int)b[i]-'0') return true;
  }
  return false;
}

string add(string a, string b) {
  if (smaller(a, b)) swap(a, b);

  int carry=0;
  string c="";
  for (int i=0; i<a.size(); ++i) {
    int s=a[i]-'0'+carry;
    if (i<b.size()) s += b[i]-'0';
    carry = s/10;
    c.push_back((char)s%10+'0');
  }
  if (carry) c.push_back('1');
  return c;
}

string sub(string a, string b) {
  if (smaller(a, b)) swap(a,b);
  
  int carry=0;
  string c="";
  for (int i=0; i<a.size(); ++i) {
    int s=a[i]-'0'-carry;
    if (i<b.size()) s -= b[i]-'0';
    if (s<0) {
      s += 10;
      carry = 1;
    } else carry = 0;
    c.push_back((char)s%10+'0');
  }
  while (c[c.size()-1]=='0') c.pop_back();
  return c;
}

string mult(string a, string b) {
  if (smaller(a, b)) swap(a, b);

  string m="0";
  for (int i=0; i<b.size(); ++i) {
    int carry=0;
    string c="";
    for (int j=0; j<i; ++j) c.push_back('0');
    for (int j=0; j<a.size(); ++j) {
      int x=((int)a[j]-'0') * ((int)b[i]-'0') + carry;
      carry = x/10;
      c.push_back((char)x%10+'0');
    }
    if (carry) c.push_back((char)carry+'0');
    m = add(m, c);
  }
  while (m[m.size()-1]=='0') m.pop_back();
  return m;
}

int main() {
  int n;
  fin>>n;

  string x=to_string(n), total="1", same="1", distinct;
  reverse(x.begin(), x.end());
  for (int i=1; i<=n; ++i) {
    string fact=to_string(i);
    reverse(fact.begin(), fact.end());
    total = mult(total, x);
    same = mult(same, fact);
  }
  distinct = sub(total, same);
  reverse(distinct.begin(), distinct.end());
  fout<<distinct;
}