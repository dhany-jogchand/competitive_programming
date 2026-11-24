#include<iostream>
#include<vector>
using namespace std;



class Solution
{
public:
vector<int> prod_of_arr(vector<int> &nums)
{
auto sz=nums.size();
vector<int> product(sz);

int left=1;
int i=0;
while(i<sz)
{
product[i]=left;
left*=nums[i];
++i;
}
int right=1;
i=sz-1;
while(i>=0)
{
product[i]*=right;
right*=nums[i];
--i;
}
return product;
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