#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;

int main() 
{
  int n,i,m,c,j;
  cin>>n;
  vector<int>v;
  for(i=0;i<n;i++)
  {
    cin>>m;
    v.push_back(m);
  }
  int max_so_far=v[0];
  c=v[0];
  for(i=1;i<n;i++)
  {
    c=max(v[i],c+v[i]);
    max_so_far=max(max_so_far,c);
  }
  cout<<max_so_far<<endl;
}