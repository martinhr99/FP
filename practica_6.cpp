#include <iostream>
#include <random>
#include <cmath>
#include <climits>


//VARIABLES GLOBALES 




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
void Imprime_Vector(const int vec[], const int &tl){
    cout<<endl;
    for (int i=0; i<tl;i++){
        cout<<vec[i]<<"  ";
    }
    cout<<endl;
}

void Rellena_Vector(int vec[], int &tl){
    int N;
    cout<<"Introduzca el numero de elementos a rellenar el vector"<<endl;
    cin>>N;
    if(N>100){
        while(N>100){
        cout<<"El número de elementos introducidos es superior al tamaño del vector"<<endl<<"Introduzca un número de elementos validos menor que 100"<<endl;
        }
    }

    ;
    for(int i=0; i<N; i++){
        vec[i]=rand() % 100;
    }
    tl=N;
}

void Insertar_Elemento(int vec[], int &tl){
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
        if(pos>tl){
            tl=pos;
            vec[tl-1]=n;
        }else{
           
            for(int i=tl; i>=pos; i--){
                vec[i+1]=vec[i];
            }
            vec[pos]=n;
            tl++;
        }

    }
    cout<<tl<<endl;

}

void Eliminar_Elemento(int vec[], int &tl){
    int pos;
    cout<<"Indique la posición donde desea eliminar el elemento"<<endl;
    cin>>pos;

    for(int i=pos; i<tl-1; i++){
        vec[i]=vec[i+1];
    }
    tl--;
}

void Ordenar_Vector(int vec[], const int &tl){

    bool flag = false;
    int i = 1, aux;
    while(i < tl && !flag) {
        flag = true;
        for (int j = 0; j < tl - i; j++) {
            if (vec[j] > vec[j + 1]) {
            aux = vec[j];
            vec[j] = vec[j + 1];
            vec[j + 1] = aux;
            flag = false;
            }
        }
        i++;
    }

    Imprime_Vector(vec, tl );

}

void Consultar_Tamaño(const int &tl){

    cout<<"El tamaño del vector es: " <<tl<<endl;

}

void Borrar_Vector(int &tl){

    tl=0;

}


int main(){
    
    const int TAM_MAX=100;
    int TAM_LOG=0;
    int vec[TAM_MAX];
  
    int entrada;
    char caracter;
    cout<<"Bienvenido a la práctica 6."<<endl<<endl;
    do{
    cout<<"Introduza la función que desea emplear"<<endl<<"Introduzca 1 para desplegar el menu de opcione"<<endl<<endl;
    cin>>entrada;
    switch (entrada){

        case 1:

        Imprime_Menu();

        cin>>entrada;

        switch (entrada)
        {
        
            case 2:
                Imprime_Vector(vec, TAM_LOG);
                break; 
            case 3:
                Rellena_Vector(vec, TAM_LOG);
                break;
            case 4:
                Insertar_Elemento(vec, TAM_LOG);
                break;
            case 5:
                Eliminar_Elemento(vec, TAM_LOG);
                break;
            case 6:
                Ordenar_Vector(vec, TAM_LOG);
                break;
            case 7:
                Consultar_Tamaño(TAM_LOG);
                break;
            case 8:
                Borrar_Vector(TAM_LOG);
                break;
        }
        case 2:
                Imprime_Vector(vec, TAM_LOG);
                break; 
            case 3:
                Rellena_Vector(vec, TAM_LOG);
                break;
            case 4:
                Insertar_Elemento(vec, TAM_LOG);
                break;
            case 5:
                Eliminar_Elemento(vec, TAM_LOG);
                break;
            case 6:
                Ordenar_Vector(vec, TAM_LOG);
                break;
            case 7:
                Consultar_Tamaño(TAM_LOG);
                break;
            case 8:
                Borrar_Vector(TAM_LOG);
                break;    
        
        default:
            break;
    }

    cout<<"¿Desea realizar alguna cosa más? (y/n)"<<endl<<endl;

    cin>>caracter;

    } while(caracter=='y' || caracter == 'Y');

    return 0;
}