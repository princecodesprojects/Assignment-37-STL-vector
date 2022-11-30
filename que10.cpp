#include<iostream>
using namespace std;
#include<vector>
#include<iterator>
#include<bits/stdc++.h>

int main()
{
  system("cls");
  vector<int> v={1,2,3,4,5,6,7,8,9,10};
  
  int n,i;
  vector<int>::iterator it= find(v.begin(),v.end(),n);
  cout<<"Enter the element u want to search in vector : ";
  cin>>n;

//   for( i=0;i<v.size();i++)
//   {
//      if(v.at(i)==n)
//      {
//          cout<<"Element Found"<<endl;
//          return 0;
//      }
//   }
//   if(i==v.size())
//   {
//      cout<<"Element not found"<<endl;
//   }

  if(it!=v.end())
  {
     cout<<endl<<"Element "<<n<<" found at position : ";
     cout<<it-v.begin()+1<<endl;
  }
  else
  cout<<endl<<"Element "<<n<<"not found"<<endl;
    return 0;
}