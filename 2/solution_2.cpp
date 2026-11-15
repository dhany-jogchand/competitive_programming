#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution
{
public:
bool is_anagram(string a,string b)
{
if(a.length()!=b.length()) return false;
int arr[255]={};
int i;
size_t sz=a.length();
for(i=0;i<sz;++i)
{
++arr[(int)a[i]];
--arr[(int)b[i]];
}
for(i=0;i<255;++i) if(arr[i]!=0) return false;
return true;
}
};


int main()
{
string a="Hello";
string b="Hello";
Solution s;
if(s.is_anagram(a,b))
{
cout<<"Yes"<<endl;
}
else cout<<"No"<<endl;
return 0;
}