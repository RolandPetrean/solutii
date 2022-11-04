// https://www.pbinfo.ro/probleme/1706/stele
#include <bits/stdc++.h>
using namespace std;

ifstream fin("stele.in");
ofstream fout("stele.out");

array<int,26> p2;
void calcp2() {
  int x=1;
  for (int i=0; i<26; ++i) {
    p2[i] = x;
    x *= 2;
  }
}

inline int cti(char c) {
  return (int)c-'0';
}
inline char itc(int n) {
  return '0'+(char)n;
}

string to_big(long long n) {
  string r=to_string(n);
  reverse(r.begin(), r.end());
  return r;
}
void afis(string n) {
  reverse(n.begin(), n.end());
  fout<<n;
}

string sum(string a, string b) {
  string r="";
  int carry=0;
  for (int i=0; i<a.size() || i<b.size() || carry; ++i) {
    int aux=carry;
    if (i<a.size()) aux += cti(a[i]);
    if (i<b.size()) aux += cti(b[i]);
    r.push_back(itc(aux%10));
    carry = aux/10;
  }
  return r;
}

string mult(string a, string b) {
  if (a.size()<b.size()) swap(a, b);

  string r="";
  for (int i=0; i<b.size(); ++i) {
    int carry=0;
    string curr="";
    for (int j=0; j<a.size() || carry; ++j) {
      int aux=carry;
      if (j<a.size()) aux += cti(b[i])*cti(a[j]);
      carry = aux/10;
      curr.push_back(itc(aux%10));
    }
    for (int j=0; j<i; ++j) curr = '0'+curr;
    r = sum(r, curr);
  }
  return r;
}

int main() {
  int c;
  fin>>c;

  calcp2();

  if (c==1) {
    int s;
    fin>>s;

    array<bool,26> cod{};
    for (int i=25; i>=0; --i) {
      if (s>=p2[i]) {
        s -= p2[i];
        cod[i] = true;
      }
    }

    for (int i=0; i<26; ++i) {
      if (cod[i]) fout<<(char)(i+'a');
    }

    return 0;
  }

  int g;
  fin>>g;

  array<string,26> cod{};
  for (int i=0; i<g; ++i) {
    string x;
    fin>>x;

    string t="";
    long long n=0;
    for (int j=0; j<x.size(); ++j) {
      if (isdigit(x[j])) n = 10*n+(int)x[j]-'0';
      else {
        if (n==0) n = 1;

        int aux=(int)x[j]-'a';
        cod[aux] = sum(cod[aux], to_big(n));
        n = 0;
      }
    }
  }

  string res="";
  for (int i=0; i<26; ++i) {
    if(cod[i] != "\0") res = sum(res, mult(cod[i], to_big(p2[i])));
  }
  afis(res);
}