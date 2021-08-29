#include <iostream>
using namespace std;

class Pila{
	private:
		static const int MAX = 1000;
		int tope;
		int valores[MAX];
		int canI;
		int canB;
	public:
		Pila(){
			tope = -1;
			canI = 0;
			canB = 0;
		}
		
		int Vacio(){
			if(tope == -1) 
				return 1;
			else
				return 0;
		}
		
		int Lleno(){
			if (tope == MAX-1)
				return 1;
			else 
				return 0;
		}
		
		void Push(int v){
			if(! Lleno()){
				valores[++tope] = v;
				canI++;
			}
			else{
				cout<<"No es posible agregar un elemento"<<endl;
			}
		}
		
		void Pop(){
			if(! Vacio()){
				tope--;
				canB++;
			}
			else{
				cout<<"No es posible extraer un elemento"<<endl;
			}
		}
		
		void Mostrar(){
			for(int i = tope; i >= 0; i--){
				cout<< valores[i];
			}
		}
		
		void CtrlZ(){
			if(canB > 0){
				tope++;
				canB--;
			}
			else if(canI > 0){
				tope--;
				canI--;
			}
			else if(tope == -1){
				cout<<"No se pude regresas mas";
			}
		}	
};

int main(int argc, char** argv) {
	
	Pila p;
	
	int opc,n1;
    do{
        cout<<"\t--MENU--\t"<<endl;
        cout<<"1. Insertar elementos a la Pila"<<endl;
        cout<<"2. Mostrar elementos de la pila"<<endl;
        cout<<"3. Borrar elemento de la pila"<<endl;
        cout<<"4. Ctrl+Z"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Opcion: ";
        cin>>opc;
        switch(opc){
            case 1:cout<<"Digite el elemento: ";
                    cin>>n1;
                    p.Push(n1);
                    system("PAUSE");
                    break;
            case 2:cout<<"Mostrando elementos de la Pila\n"<<endl;
                    p.Mostrar();
                    cout<<"\n\n";
                    system("PAUSE");
                    break;
            case 3: cout<<"\nUn elemento borrado";
                    p.Pop();
                    cout<<"\n\n";
                    system("PAUSE");
                    break;
            case 4: cout<<"\nCtrl+Z\n";
                    p.CtrlZ();
                    cout<<"\n\n";
                    system("PAUSE");
                    break;
    	}
    	system("cls");
	}while(opc!=5);
		
	system("PAUSE");
	return 0;
}
