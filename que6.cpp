#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>

int main()
{
  system("cls");
   vector<int> v={1,2,3,4,5,6};
   int i;

   for(i=0;i<v.size();i++)
   {
      cout<<v.at(i)<<" ";
   }
    reverse(v.begin(),v.end());
   cout<<endl;
   for(i=0;i<v.size();i++)
   {
      cout<<v.at(i)<<" ";
   }
    return 0;
}