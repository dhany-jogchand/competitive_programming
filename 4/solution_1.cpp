#include<vector>
#include<unordered_set>
#include<string> 
#include<iostream>

using namespace std;

bool is_anagram(string &s,string &p)
{
if(s.length()!=p.length()) return false;
size_t sz=s.length();
vector<int> arr(255,0);
for(int i=0;i<sz;++i)
{
++arr[s[i]];
--arr[p[i]];
}
for(int j=0;j<255;++j) if(arr[j]!=0) return false;
return true;
}


class Something
{
public:
vector<vector<string>> get_group_anagram(vector<string> &strs)
{
unordered_set<string> handled;
vector<vector<string>> grps;
size_t sz=strs.size();
for(int i=0;i<sz;++i)
{
if(handled.count(strs[i])>0) continue;
handled.insert(strs[i]);
vector<string> v;
v.push_back(strs[i]);
for(int j=0;j<sz;++j)
{
if(i!=j && handled.count(strs[j])==0 && is_anagram(strs[i],strs[j]))
{
handled.insert(strs[j]);
v.push_back(strs[j]);
}
}
grps.push_back(v);
}
return grps;
}
};




int main()
{
Something s;
//vector<string> strs={"AB","BCD","BA","DBC","CBD"};
vector<string> strs={"AB","BCD","BA","DBC","CBD","","A","PQR"};

vector<vector<string>> result;
result=s.get_group_anagram(strs);
/*
for(auto &gr:result)
{
for(auto str:gr)
{
cout<<str<<" ";
}
cout<<endl;
}
*/
for(int i=0;i<result.size();++i)
{
vector<string> st=result[i];
for(auto str:st)
{
cout<<str<<" ";
}
cout<<endl;
}
return 0;
}