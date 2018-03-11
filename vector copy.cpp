#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long 
using namespace std;
int main()
{
  
  ll t,n,i,l,q,j,m,p,r;
  cin>>n>>q;
  vector<int>v;
  for(i=0;i<n;i++)
  {
    cin>>m;
    v.push_back(m);
    //cout<<v[i]<<" ";
  }
  while(q--)
  {
    cin>>p>>l>>r;
    if(p==1)
    {
      v[l-1]=r;
    }
    else if(p==2)
    {
        ll flag=0;
        vector<unsigned int>v1(&v[l-1],&v[r]);
         sort(v1.begin(),v1.end(),greater<int>());
          /*for(i=0;i<v1.size();i++)
          {
              cout<<v1[i]<<" ";
          }*/
         //cout<<v1[v1.size()-1]+v1[v1.size()-2]+v1[v1.size()-3]<<endl;
         ll m=v1.size();
          //cout<<m<<endl;
         for(i=0;i<m-2;i++)
         {
             if(v1[i]<v1[i+1]+v1[i+2])
             {
                 cout<<v1[i]+v1[i+1]+v1[i+2]<<endl;
                 flag=1;
                 break;
             }
         }
        if(flag==0)
        {
            cout<<0<<endl;
        }
      }
    }
  }
 