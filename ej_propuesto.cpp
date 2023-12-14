#include <iostream>
#include <cmath>
#include <climits>


using namespace std;
void Imprime_Matiz_NC(int array[], int tam_f, int tam_c ){
    cout<<endl;
   
    for (int i=0; i<(tam_f*tam_c);i++){
        if((i%tam_c)==0) cout<<endl;
        cout<<array[i]<<"  ";
    }
    cout<<endl;
}

int main(){
    int numero_clientes=4;
    int aux=0;

    for(int i=1; i<=numero_clientes; i++){
        aux+=i;
    }


    int C[numero_clientes][numero_clientes]={{0,10,15,9},{11,0,13,8},{17,21,0,15},{26,7,14,0}};
    const int TOTAL_CIUDADES=aux;

    int ciudad_inicial, 
        recorrido,
        coste, 
        posicion_menor,
        ciudad_siguiente, 
        voy_por=0,
        contador=1;

    int coste_menor=INT_MAX;
    ciudad_inicial=0;
    voy_por=ciudad_inicial;

    Imprime_Matiz_NC(C[0], numero_clientes, numero_clientes);

    cout<<endl<<TOTAL_CIUDADES<<endl;

    cout<<"Paso por las ciudades: ("<<" ";

    while (contador<TOTAL_CIUDADES){
        contador+=(voy_por+1);
        for(int j=0; j<numero_clientes; j++){

            if(coste_menor>C[voy_por][j] && C[voy_por][j]!=0){ 

                coste_menor=C[voy_por][j];
                posicion_menor=j;
                ciudad_siguiente=j;

            } 

        } 
        
        cout<<voy_por<<" ";
        voy_por=ciudad_siguiente;
        coste+=coste_menor;
        coste_menor=INT_MAX;
        
    }

    cout<<")"<<endl;


    return 0;
}