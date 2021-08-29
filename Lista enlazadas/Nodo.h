template <class T>
class Nodo{
    private:
        T dato;
        Nodo<T> *siguiente;
        Nodo<T> *atras;
    public:
        Nodo(){
          dato = 10;   siguiente = NULL;  atras = NULL;
        }
        Nodo(T v){
          dato = v;   siguiente = NULL;  atras = NULL;
        }
        T RetDato()
        {
            return dato;
        }
        Nodo<T> *RetSig()
        {
            return siguiente;
        }
        
        void UnirDel(Nodo<T> *n)
        {
            siguiente = n;
        }
		//metedo para unir con atras
		Nodo<T> *RetAtr()
        {
            return atras;
        }
        void UnirAtra(Nodo<T> *n)
        {
            atras = n;
        }
};
