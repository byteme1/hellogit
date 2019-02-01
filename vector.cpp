#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
vector<char> v;
vector<int> v1 = {10, 14, 32, 64, 16};

for (int i = 0; i < v1.size(); i++)
{

	cout<<v1[i]<<" ";
}

v.push_back('p');

for (int i = 0; i <v.size(); i++)
{

	cout<<v[i]<<" ";
}


return 0;

