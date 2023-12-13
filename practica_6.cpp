#include <iostream>
#include <random>
#include <cmath>
#include <climits>


//VARIABLES GLOBALES 
const int TAM_MAX=100;
int TAM_LOG=0;
int vec[TAM_MAX];



using namespace std;


void Imprime_Menu(){
   
    cout<<"Para imprimir el vector introduzca                                        2" <<endl;
    cout<<"Para rellenar el Vector con números aleatorios introduca                  3"<<endl;
    cout<<"Para añadir un elemento al vector en una posición determinada introduzca  4"<<endl;
    cout<<"Para eliminar una determinada posición del vector introduzca              5 "<<endl;
    cout<<"Para ordenar el vector introduzca                                         6 "<<endl;
    cout<<"Para consultar el tamaño del vector introduzca                            7"<<endl;
    cout<<"Para borrar todo el vector introduzca                                     8"<<endl;

}
void Imprime_Vector(){
    cout<<endl;
    for (int i=0; i<TAM_LOG;i++){
        cout<<vec[i]<<"  ";
    }
    cout<<endl;
}

void Rellena_Vector(){
    int N;
    cout<<"Introduzca el numero de elementos a rellenar el vector"<<endl;
    cin>>N;
    if(N>100){
        while(N>100){
        cout<<"El número de elementos introducidos es superior al tamaño del vector"<<endl<<"Introduzca un número de elementos validos menor que 100"<<endl;
        }
    }

    TAM_LOG=N;
    for(int i=0; i<TAM_LOG; i++){
        vec[i]=rand() % 100;
    }
}

void Insertar_Elemento(){
    int n,
        pos;

    cout<<"Indique el elemento que desea introducir:"<<endl;
    cin>>n;

    cout<<"Indique la posición donde desea insertar el elemento"<<endl;
    cin>>pos;

    if(pos>100){
         while(pos>100){
        cout<<"La posición introducida es superior al tamaño del vector"<<endl<<"Introduzca una posición valida menor que 100"<<endl;
        }
    }

    if(pos==100){
        vec[pos]=n;
    }else{
        if(pos>TAM_LOG){
            TAM_LOG++;
            vec[TAM_LOG]=n;
        }else{
            for(int i=TAM_LOG; i>pos; i++){
                vec[i+1]=vec[i];
            }
            vec[pos]=n;
            TAM_LOG++;
        }

    }

}

void Eliminar_Elemento(){
    int pos;
    cout<<"Indique la posición donde desea eliminar el elemento"<<endl;
    cin>>pos;

    for(int i=pos; i<TAM_LOG-1; i++){
        vec[i]=vec[i+1];
    }
    TAM_LOG--;
}

void Ordenar_Vector(){

    bool flag = false;
    int i = 1, aux;
    while(i < TAM_LOG && !flag) {
        flag = true;
        for (int j = 0; j < TAM_LOG - i; j++) {
            if (vec[j] > vec[j + 1]) {
            aux = vec[j];
            vec[j] = vec[j + 1];
            vec[j + 1] = aux;
            flag = false;
            }
        }
        i++;
    }

    Imprime_Vector();

}

void Consultar_Tamaño(){

    cout<<"El tamaño del vector es: " <<TAM_LOG<<endl;

}

void Borrar_Vector(){

    TAM_LOG=0;

}


int main(){

  
    int entrada;
    char caracter;

    do{
    cout<<"Bienvenido a la práctica 6. Introduza la función que desea empelar, en caso de no saber introduzca 1 par desplegar el menu de opciones"<<endl;
    cin>>entrada;
    switch (entrada){

        case 1:

        Imprime_Menu();

        cin>>entrada;

        switch (entrada)
        {
        
            case 2:
                Imprime_Vector();
                break; 
            case 3:
                Rellena_Vector();
                break;
            case 4:
                Insertar_Elemento();
                break;
            case 5:
                Eliminar_Elemento();
                break;
            case 6:
                Ordenar_Vector();
                break;
            case 7:
                Consultar_Tamaño();
                break;
            case 8:
                Borrar_Vector();
                break;
        }
            
        
        default:
            break;
    }

    cout<<"¿Desea realizar alguna cosa más? (y/n)"<<endl;

    cin>>caracter;

    } while(caracter=='y' || caracter == 'Y');

    return 0;
}