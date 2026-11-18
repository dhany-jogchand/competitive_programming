#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution
{
public:
vector<int> twoSum(vector<int> &nums,int target)
{
vector<int> indexes;
size_t sz=nums.size();
vector<pair<int,int>> p;
for(int i=0;i<sz;++i)
{
p.push_back({nums[i],i});
}
sort(p.begin(),p.end());
int left=0;
int right=sz-1;
int sum;
while(left<right)
{
sum=p[left].first+p[right].first;
if(sum==target)
{
indexes.push_back(p[left].second);
indexes.push_back(p[right].second);
return indexes;
}
if(sum<target) ++left;
else --right;
}
return indexes;
}
};


int main()
{
Solution s;
vector<int> v={2,5,3,4};
vector<int> indexes;
indexes=s.twoSum(v,9);
cout<<"9 is sum of number on index "<<indexes[0]<<" and "<<indexes[1]<<endl;
return 0;
}