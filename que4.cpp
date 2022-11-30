#include<iostream>
using namespace std;
#include<vector>

int main()
{
  system("cls");
   vector<int> v1={1,2,3,4,5};
   vector<int> v2(v1);//={2,4,7,9};
   //v2.assign(v1.begin(),v1.end());
   int i;
   cout<<"First"<<endl;
   for(int i=0;i<v1.size();i++)
   {
      cout<<v1[i]<<" ";
   }
   cout<<v2.size()<<endl;
   cout<<endl;
   //copy(v1.begin(), v1.end(), back_inserter(v2)); 
   cout<<"Second"<<endl;
   for(i=0;i<v2.size();i++)
   {
      cout<<v2[i]<<" ";
   }
   //v2.assign();
    return 0;
}