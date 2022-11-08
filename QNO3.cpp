/*Danyal Ahmad Shah
FA20BSCS102*/
#include<iostream>
#include<string.h>
using namespace std;


		void QNO3(string t)
		{
		
			
		
			for(int i=0;  i<t.length();  i++)
			if(t[0]=='a'  ||t[1]=='b')
			{
				if(t[1]=='a'  || t[1]=='b'||  t[1]=='c')
				
				cout<<"String is Right"<<endl;
				
			}
			else
			{
				cout<<"String is False:"<<endl;
			}
			if(t[0]=='c')
			{
				
				
				   if(t[1] == 'b' ||t[1] == 'c')
				   
				   
        {
            if(t[1] == 'a' || t[1] == 'b' || t[1] =='c')
                {
               
                }
                
                
                
            cout << "String is Right"<<endl;;
				
			}
			
			}
			
		}
		
			

int main()
{
	string t;
	cout<<"Enter String: " ;
	cin>>t;
QNO3(t);
}