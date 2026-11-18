#include<iostream>
#include<vector>
using namespace std;


class Solution
{
public:
vector<int> twoSum(vector<int> &nums,int target)
{
vector<int> indexes;
size_t sz=nums.size();
for(int i=0;i<sz;++i)
{
for(int j=0;j<sz;++j)
{
if(i!=j)
{
if(nums[i]+nums[j]==target)
{
indexes.push_back(i);
indexes.push_back(j);
return indexes;
}
}
}
}
return indexes;
}
};


int main()
{
Solution s;
vector<int> v={2,5,3,4};
vector<int> indexes;
indexes=s.twoSum(v,8);
cout<<"8 is sum of number on index "<<indexes[0]<<" and "<<indexes[1]<<endl;
return 0;
}