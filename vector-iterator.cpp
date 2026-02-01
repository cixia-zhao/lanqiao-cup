#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
vector<int> v;
int main(){
  
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.pop_back();
  v.resize(3);
  vector<int>::iterator p = v.begin();
  v.insert(v.begin()+1,5);
  v.erase(v.begin()+1);

  v.erase(v.begin()+1,v.begin()+2);
  for(;p != v.end();p++){

    cout << *p << endl;
  }
  vector<int> v1 = {1,1,1,2,2,3,4};
  v1.erase(unique(v1.begin(),v1.end()),v1.end());
  for(int x : v1){
    cout << x << endl;
  }
  
  return 0;
}
