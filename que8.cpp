#include<iostream>
using namespace std;
#include<vector>

int main()
{
  //system("cls");
  vector<int> v1={4,5,6,8,2,1};
  vector<int> v2={4,10,23,5,8,7};
  int i=0;

  for(i=0;i<v1.size();i++)
  {
     if(v1.at(i)==v2.at(i))
     {
         cout<<v1.at(i)<<" ";
     }
  }
  while(i<v1.size())
  {
      if(v1.at(i)==v2.at(i))
     {
         cout<<v1.at(i)<<" ";
     }
     i++; 
  }
    return 0;
}