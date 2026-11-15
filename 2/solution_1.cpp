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
sort(a.begin(),a.end());
sort(b.begin(),b.end());
return a==b;
}
};


int main()
{
string a="Hello";
string b="Heol0l";
Solution s;
if(s.is_anagram(a,b))
{
cout<<"Yes"<<endl;
}
else cout<<"No"<<endl;
return 0;
}