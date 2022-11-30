#include<iostream>
using namespace std;
#include<vector>

int main()
{
  system("cls");
  vector<float> v;
  v.push_back(1);
  v.push_back(10);
  v.push_back(100);
  for(int i=0;i<v.size();i++)
  {
     cout<<v.at(i)<<" ";
  }
    return 0;
}