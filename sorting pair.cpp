#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() 
{
  int k,i,n,m;
  vector<pair<int,int>>v;
  cin>>k;
  for(i=0;i<k;i++)
  {
    cin>>n>>m;
    v.push_back(make_pair(n,m));
  }
  sort(v.begin(),v.end());
  for(i=0;i<k;i++)
  {
    cout<<v[i].first<<" "<<v[i].second<<endl;
  }
  
}