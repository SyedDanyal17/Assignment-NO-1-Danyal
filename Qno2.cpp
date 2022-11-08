/*Danyal Ahmad Shah
FA20BSCS102*/
#include<iostream>
#include<string.h>
using namespace std;
		string str;
		void Qno2()
		{
			cout<<"Enter String"<<endl;
			cin>>str;
			if(str[0]='0')
			{
			
			for(int i=0;  i<str.length();  i++)
		{
			if(str[i]=='0')
			{
				cout<<"String is RIGHT"<<endl;
				
			}
		}
	}
			
			
			else{
				cout<<"string is FALSE"<<endl;
			}
			
			
			if(str[0]='1')
			{
				cout<<"string is RIGHT"<<endl;
			}
		
		else
		{
			cout<<"string is False"<<endl;
		}
	}
		

int main()
{
	Qno2();
}