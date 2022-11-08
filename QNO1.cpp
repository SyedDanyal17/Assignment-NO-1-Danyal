/*Danyal Ahmad Shah
FA20BSCS102*/
#include<iostream>
#include<string.h>
using namespace std;
void Qno1(){

       string str;
		
		{
			cout<<"Enter String"<<endl;
			cin>>str;
			
			int c1;
			int c2;
			for(int i=0;  i<str.length();   i++)
			{
				if(str[i]=='1')
		{
						c1++;
				}
		if(str[i]=='1')
		{
		
			c2++;
				}
			}
			
			if(c1%2==0  ||  c2%2==0)
			{
				cout<<"String is True:"<<endl;
			}
			else 
			{
				cout<<"String is False:"<<endl;
			}
		}
		
}
int main()
{
	Qno1();
}