template <class T>
class Cola{
private:
    int Frente;
    int Final;
    T newCola[MAXTAMQ];
public:
    Cola();
    void Enqueque(T dato);
    T Dequeque();
    void BorrarCola();
    T FrenteCola();
    bool ColaVacia();
    bool ColaLlena();
    void Mostrar();
};
template <class T>
Cola<T>::Cola()
{
    Frente = 0;
    Final = -1;
}
template <class T>
void Cola<T>::Enqueque(T elemento){
    if(!ColaLlena()){
        newCola[++Final] = elemento;
    }else{
        cout<<"Desbordamiento en la cola";
    }
}
template <class T>
T Cola<T>::Dequeque(){
    if(!ColaVacia())
        return newCola[Frente++];
    else
        cout <<"Cola vacia";
}
template <class T>
void Cola<T>::BorrarCola(){
    Frente = 0;
    Final = -1;
}
template <class T>
T Cola<T>::FrenteCola(){
    if(!ColaVacia())
        return newCola[Frente];
    else
        cout<<"Cola vacia";
}
template <class T>
bool Cola<T>::ColaVacia(){
    return Frente > Final;
}
template <class T>
bool Cola<T>::ColaLlena(){
    return Final == MAXTAMQ - 1;
}
template <class T>
void Cola<T>::Mostrar(){
    cout<<endl;
    cout<<"Elementos de la cola"<<endl;
    cout<<"--------------------"<<endl;
    cout<<endl;
    for(int i=Frente; i <= Final; i++){
        cout<<"Elemento ["<<i+1<<"] = "<<newCola[i]<<endl;
    }
}
