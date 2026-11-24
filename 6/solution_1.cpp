#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Solution
{
public:
string encode(vector<string> strs)
{
int memory_required=0;
for(auto str:strs)
{
memory_required+=str.length();
}
string encoded;
encoded.reserve((strs.size()*20)+memory_required);
string header;
header.reserve(20);

for(auto str:strs)
{
header=to_string(str.length());
header.resize(20,' ');
encoded+=header;
encoded+=str;
header.clear()
}
return encoded;
}

vector<string> decode(string &encoded)
{
vector<string> decoded;
auto sz=encoded.length();
int i=0;
int len;
while(i<sz)
{
len=stoi(encoded.substr(i,20));
decoded.push_back(encoded.substr(i+20,len));
i+=20+len;
}
return decoded;
}
};



int main()
{
vector<string> strs={"Raju","Kalu","","Mohan"};
Solution s;
string encoded=s.encode(strs);
//cout<<"Encoded string: "<<encoded<<endl;

vector<string> decoded=s.decode(encoded);
cout<<"----------Decoded strings---------"<<endl;
for(auto str:decoded)
{
cout<<str<<" ";
}
cout<<endl;

return 0;
}



