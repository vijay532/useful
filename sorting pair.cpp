
/*
4
10 5
5 65
56 85
12 98
output:
5 65
10 5
12 98
56 85
*/
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
/*
4
10 75
5 65
56 85
12 98
output:
5 65
10 75
56 85
12 98
*/
/*sorting by second element
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sortbydec(pair<int,int>&p,pair<int,int>&q)
{
  return(p.second<q.second);
}
int main() 
{
  int k,n,m,i;
  vector<pair<int,int>>v;
  cin>>k;
  for(i=0;i<k;i++)
  {
    cin>>n>>m;
    v.push_back(make_pair(n,m));
  }
  sort(v.begin(),v.end(),sortbydec);
  for(i=0;i<k;i++)
  {
    cout<<v[i].first<<" "<<v[i].second<<endl;
  }
  
}*/

