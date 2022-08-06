#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s)
{
  for (string value : s)
  {
    cout << value << endl;
  }
  for (auto it = s.begin(); it != s.end(); ++it)
  {
    cout << *it << endl;
  }
}
int main()
{
  set<string> s;
  s.insert("abc"); // log(n)
  s.insert("zsdf");
  s.insert("bdf");
  s.find("abc");
  auto it = s.find("abc");
  cout << *it << endl;
  print(s);
}
