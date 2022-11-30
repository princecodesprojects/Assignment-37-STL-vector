#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>

int main()
{
  system("cls");
   vector<int> v={1,2,3,4,5,6};
   int i,sum=0;

   for(i=0;i<v.size();i++)
   {
      sum=sum+v.at(i);
   }
    
   cout<<"Sum is : "<<sum;
  
    return 0;
}