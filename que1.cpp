#include<iostream>
using namespace std;
#include<vector>


int main()
{
  system("cls");
  vector<int> v;

  for(int i=0;i<3;i++)
  {
     v.push_back(i*100);
  }

  cout<<"size "<<v.size()<<endl;
  cout<<"capacity "<<v.capacity()<<endl;
  for(int i=0;i<v.size();i++)
  {
     cout<<v[i]<<" ";
  }
    return 0;
}