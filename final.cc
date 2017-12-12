///@file final.cc
///@brief Counts characters entered by a user
///@author Mackenzie Schnaekel


#include<iostream>
#include<string.h>
using namespace std;
int countLine(char* pName);
int countChar(char* pName);

int main()
{
	///@brief Main function
	///@param none

	string str;
	char c;
	char* pName;
	cout<<"Enter your sentance followed by : to continue. An example (Hello:)"<<endl<<"Please enter your sentance: ";
	while(c != ':')
	{	
		cin>>c;
		if(c != ':')
		{
			str+=c;
		}
	}		
	pName = new char[str.length()+1];
	strcpy(pName,str.c_str());

	//cout<<pName<<endl;

	countChar(pName);
	countLine(pName);
	delete pName;

}


int countLine(char* pName)
{
	///@brief Counts newline
	///@param char* pName
	
}

int countChar(char* pName)
{
	///@brief Counts characters input
	///@param char* pName


	string str(pName);
	int charcount = str.length();
	cout<<"The sentance "<<str<<" has "<<charcount<<" characters."<<endl;

}
