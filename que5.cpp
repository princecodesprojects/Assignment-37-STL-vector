#include<iostream>
using namespace std;
#include<vector>
#include<iterator>
#include<algorithm>

int main()
{
   system("cls");
   vector<int> v={4,5,6,1,2,7,10,11,8,9,0};
   cout<<"Largest Element given in vector is = ";
   cout<<*max_element(v.begin(),v.end())<<endl;
   cout<<"Small Element given in vector is = ";
   cout<<*min_element(v.begin(),v.end())<<endl;
    return 0;
}