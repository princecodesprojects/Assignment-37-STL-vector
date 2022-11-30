#include<iostream>
using namespace std;
#include<vector>


int main()
{
  system("cls");
  vector<int> v;
  v.insert(v.begin(),5);
  v.insert(v.begin()+1,10);
  for(int i=0;i<v.size();i++)
  {
     cout<<v[i]<<" ";
  }
    return 0;
}