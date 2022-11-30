#include<iostream>
using namespace std;
#include<vector>

int main()
{
  system("cls");
  vector<int> v;
 cout<<"Enter 10 values"<<endl;
  for(int i=0;i<10;i++)
  {
     int vd;
     cin>>vd;
     v.push_back(vd);

  }

  for(int i=0;i<v.size();i++)
  {
     cout<<v[i]<<" ";
  }

    return 0;
}