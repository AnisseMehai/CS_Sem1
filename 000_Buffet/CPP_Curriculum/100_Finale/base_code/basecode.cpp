// base code file
#include "./hfiles/poole.h"

int main()
{
	int i, j;
	
	
	for(j = 1; j <= 5; j++)
	{
	   for(i = 1; i <= 5; i++)
	   {
	      cout << " ";
	   }
	   
	   for(i = 1; i <= j; i++)
	   {
		  cout << "*";
	   }
	    
	   cout << endl;
	}
}