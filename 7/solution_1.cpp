#include<iostream>
#include<vector>
using namespace std;



class Solution
{
public:
vector<int> prod_of_arr(vector<int> &nums)
{
auto sz=nums.size();
vector<int> res(sz);
int prod;
for(int i=0;i<sz;++i)
{
prod=1;
for(int j=0;j<sz;++j)
{
if(i!=j) prod*=nums[j];
}

res[i]=prod;
}
return res;
}
};


int main()
{
vector<int> v={2,3,5,4};
Solution s;
vector<int> res=s.prod_of_arr(v);
for(auto n:res)
{
cout<<n<<endl;
}

return 0;
}