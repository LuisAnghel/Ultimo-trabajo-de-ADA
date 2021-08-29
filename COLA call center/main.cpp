#include <iostream>
#define MAXTAMQ 50
using namespace std;
#include "Cola.h"


int main(int argc, char** argv){
	
	bool A,B,C;
	
    Cola<int> col;
    
    col.Enqueque(5);
    col.Enqueque(6);
    col.Enqueque(7);
    col.Enqueque(8);
    col.Enqueque(9);
    col.Enqueque(10);
    col.Dequeque();
    col.Mostrar();
		
	system("PAUSE");
	return 0;
}
