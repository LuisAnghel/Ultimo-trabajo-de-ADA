#include <iostream>
using namespace std;
#include "Nodo.h"
#include "Lista.h"


int main(){
	
	Lista<char> *L;
	
	L = new Lista<char>();
	
	L->InsertarIni('a');
	L->InsertarFin('b');
	L->InsertarFin('c');
	L->InsertarFin('d');
	L->InsertarFin('e');
	
	int opc;
	char n1;
    do{
        cout<<"\t--MENU--\t"<<endl;
        cout<<"1. Siguiente"<<endl;
        cout<<"2. Atras"<<endl;
        cout<<"3. Buscar musica"<<endl;
        cout<<"4. Reproducir automaticamente"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Opcion: ";
        cin>>opc;
        switch(opc){
            case 1:cout<<"....Reproductor....\n";
                    L->SigTema();
                    system("PAUSE");
                    break;
            case 2:cout<<"....Reproductor....\n";
                    L->AtrasTema();
                    system("PAUSE");
                    break;
            case 3:cout<<"....Reproductor....\n\n";
            		cout<<"Buscar: "; cin>>n1;
                    L->Buscar(n1);
                    system("PAUSE");
                    break;
            case 4:cout<<"....Reproductor....\n\n";
            		cout<<"\nReproduciendo "<<L->RetIni()<<"..."<<endl;
                    system("PAUSE");
                    break;
    	}
    	system("cls");
	}while(opc!=5);

		
	return 0;
}
