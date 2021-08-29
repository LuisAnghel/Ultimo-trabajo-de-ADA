template <class T>
class Lista{
private:
    Nodo<T> *ini;
    Nodo<T> *fin;
    int tam;
public:
    Lista(){
        tam = 0;
       ini = NULL;
       fin = NULL;
    }
    
    ~Lista(){}
    
    void InsertarIni(T dato){
        Nodo<T> *nuevo = new Nodo<T>(dato);
        if(ini == NULL ){
            ini = fin = nuevo;
        }else{
            nuevo->UnirDel(ini);
            ini->UnirAtra(nuevo);  
            ini=nuevo;
        }
        tam++;
    }
    void InsertarFin(T dato){
        Nodo<T> *nuevo = new Nodo<T>(dato);
        if(ini == NULL ){
            ini = fin = nuevo;
        }else{
            fin->UnirDel(nuevo);
            nuevo->UnirAtra(fin);
			fin = nuevo;
        }
        tam++;
    }
	
	void Buscar(T dato){
    	Nodo<T> *nuevo = new Nodo<T>(dato);
    	if(ini != NULL){
    		Nodo<T> *Temp = ini;
    		
    		while(Temp->RetDato() != dato){
				Temp = Temp->RetSig();
			}
			cout<<"\nla musica ha sido encontrado\n";
			cout<<"\nReproduciendo "<<Temp->RetDato()<<"..."<<endl;
		}
		else
			cout<<"\nla lista esta vacia!!\n";
	}
	
    int CantDatos(){
        return tam;
    }
    T RetIni(){
        return ini->RetDato();
    }
    T RetFin(){
        return fin->RetDato();
    }
    bool ListaVacia(){
        return (ini == NULL);
    }
    
    void SigTema(){
    	if(ini != NULL){
    		Nodo<T> *Temp = ini;
    		
    		Temp = Temp->RetSig();
    		
			cout<<"\nReproduciendo "<<Temp->RetDato()<<"..."<<endl;
		}
		else
			cout<<"\nNo hay musicas!!\n";	
	}
	Nodo<T> SigTema2(Nodo<T> *M){
		
    	Nodo<T> *Temp = M;
    		
    	Temp = Temp->RetSig();
    	
		return Temp;	
	}
	void AtrasTema(){
    	if(ini != NULL){
    		Nodo<T> *Temp = fin;
    		
    		if(Temp->RetAtr() != NULL)
    			Temp = Temp->RetAtr();
    			
			cout<<"\nReproduciendo "<<Temp->RetDato()<<"..."<<endl;
		}
		else
			cout<<"\nNo hay musicas!!\n";	
	}
    
};
