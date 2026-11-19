#include<vector>
#include<unordered_map>
#include<string> 
#include<algorithm>
#include<iostream>

using namespace std;


class Something
{
public:
vector<vector<string>> get_group_anagram(vector<string> &strs)
{
unordered_map<string,vector<string>> m;
for(auto st:strs)
{
string key=st;
sort(key.begin(),key.end());
m[key].push_back(st);
}
vector<vector<string>> grps;
for(auto pr:m)
{
grps.push_back(pr.second);
}
return grps;
}
};




int main()
{
Something s;
vector<string> strs={"AB","BCD","BA","DBC","CBD"};
//vector<string> strs={"AB","BCD","BA","DBC","CBD","","A","PQR"};

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