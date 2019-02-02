#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
vector<char> v;//a empty vector of characters 
vector<int> v1 = {10, 14, 32, 64, 16};//a vecton of integers

//adding/push a new char at the back of v
v.push_back('p');

//for loop to print vector v
cout<<"Vector v"<<endl;
for (unsigned int i = 0; i < v.size(); i++)
{

	cout<<v[i]<<" "<<endl;
}
		
//display elements in vector v1
cout<<"Vector v1"<<endl;
for  (unsigned int i = 0; i < v1.size(); i++)
{

	cout<<v1[i]<<" ";
}
cout<<endl;

//add push q at the back of p
v.push_back('q');
cout<<"Add/push q and the back of p"<<endl;
for (unsigned int i = 0; i < v.size(); i++)
{
	cout<<v[i]<<" ";
}
cout<<endl;

//remove/pop back the last 2 number on vevtor v1
cout<<"Remove/pop back last 2 number in vector v1"<<endl;
v1.pop_back();
v1.pop_back();
for (unsigned int i = 0; i < v1.size(); i++)
{
        cout<<v1[i]<<" ";
}
cout<<endl;

//add 4 zeros after number 32 in vector v1
cout<<"Add zeros after the number 32"<<endl;
for(unsigned int i = 0; i < 7; i++)
{
	v1.push_back(0);
	cout<<v1[i]<<" ";
}
cout<<endl;

//Strings

//declare variables
string str1 = "hello";
string str2 = str1 + " world";

cout<<"Working with string variables"<<endl;
//print to screen
cout<<"str1 = "<<str1<<endl;
cout<<"the 4th letter is "<<str1[3]<<endl;
cout<<"str1 has "<<str1.size()<<" letters"<<endl;

//comparison coperators
if (str1 == "hello")//==means equal too
{
	cout<<"hi there"<<endl;
}
if (str2 != "world")//means not equal too
{
	cout<<"out of this world"<<endl;
}

//appending to a string
str2 += "ly one";
cout<<str2<<endl;

return 0;
}//end of main
