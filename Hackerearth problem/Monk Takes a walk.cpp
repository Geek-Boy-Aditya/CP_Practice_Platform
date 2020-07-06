#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	char str [100000];
	for(int i=0;i<t;i++)
	{
	
   
   int v=0;
   cout<<endl;
   cin>>str;
   
   for (int i = 0; str[i]!='\0'; ++i)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            v++;
   
    }
cout<<v;
}
 
}
