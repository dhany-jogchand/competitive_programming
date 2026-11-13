#include<iostream>
#include<vector>
#include<cstdint>
using namespace std;

class solution
{
public:
bool contains_duplicate(vector<int> &nums)
{
uint64_t sz=nums.size();
uint64_t i,j;
for(i=0;i<sz;++i)
{
for(j=0;j<i;++j)
{
if(nums[j]==nums[i]) return true;
}
}
return false;
}
};

int main()
{
vector<int> nums={10,20,4,50,20,30,505,33,535,666,354};
solution s;
if(s.contains_duplicate(nums))
{
cout<<"Yes ,contains duplicate"<<endl;
}
else
{
cout<<"No does not contains duplicate"<<endl;
}
return 0;
}