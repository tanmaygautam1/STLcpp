#include <bits/stdc++.h>
using namespace std;
int main()
{
  map<int, string> m;
  m[1] = "abc"; // O(log(n))
  m[5] = "cdc";
  m[3] = "acd";
  m.insert({4, "afg"});
  // Maps store values in sorted order
  //  map<int, string> :: iterator it;
  //  for(it =m.begin(); it!=m.end(); it++){
  //    cout<<(*it).first<<" "<<(*it).second<<endl;
  //  }
  //  X-X-X-X-X-X-X-X-X-X-X-X-X-X
  for (auto &pr : m)
  {
    cout << pr.first << " " << pr.second << endl;
  }
  auto it = m.find(3); // O(log(n))
  m.erase(it); // log(n)
  if (it == m.end())
  {
    cout << "No Value";
  }
  else
  {
    cout << (*it).first << " " << (*it).second;
  }
}
