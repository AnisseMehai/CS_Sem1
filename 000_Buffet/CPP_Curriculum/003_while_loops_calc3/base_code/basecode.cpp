// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	
	int x = 0;
	char quit = 'x';
	while (true){
	
		cout << "pee poo poo";
		cin >> quit;
	

		if(quit == 'q'){
			cout << "hogrider";
			break;
		}	
	
		if(x == 100){
			break;
		}
		x = x + 1;
		
	}
}
