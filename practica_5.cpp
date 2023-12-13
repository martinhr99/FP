#include <iostream>
#include <random>
#include <cmath>
#include <climits>


using namespace std;

void Imprime_Matriz(int array[], int tam ){
    cout<<endl;
    int tam_fila=sqrt(tam);
    for (int i=0; i<tam;i++){
        if((i%tam_fila)==0) cout<<endl;
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void Imprime(int array[], int tam ){
    cout<<endl;
    int tam_fila=sqrt(tam);
    for (int i=0; i<tam;i++){
       
        cout<<array[i]<<"  ";
    }
    cout<<endl;
}

void Imprime_Matiz_NC(int array[], int tam_f, int tam_c ){
    cout<<endl;
   
    for (int i=0; i<(tam_f*tam_c);i++){
        if((i%tam_c)==0) cout<<endl;
        cout<<array[i]<<"  ";
    }
    cout<<endl;
}


void ej1(){
    //suponemos que los datos son de tipo entero
    int N,
        aux=0,
        entrada, 
        posicion, 
        punto_fin_L,
        punto_ini_L;

    cout<<"Introduzca el tamaño del vector a insertar"<<endl;
    cin>>N;

    int vec_p[N],
        vec_G[100]={0};

    cout<<"Intrduzca los datos del vector"<<endl;
    for(int i=0; i<N; i++){
        cin>>entrada;
        vec_p[i]=entrada;
    }

    cout<<"Introduzca al posición donde lo desea insertar"<<endl;
    cin>>posicion;
    punto_ini_L=posicion;
    punto_fin_L=punto_ini_L+N;
    

    for(int i=posicion; aux<punto_fin_L; i++){
        vec_G[i]=vec_p[aux];
        aux++;

    }

    Imprime(vec_G, 100);


}
void ej2(){
    const int N=20;

    int vec[N],
        buscar; 

    bool encontrado;
    
    for(int i=0; i<N; i++){
        vec[i]=rand() % 100;
    }

    Imprime(vec, N);

    cout<<"¿Qué número desea buscar?"<<endl;
    cin>>buscar;

    for(int i=0; i<N && !encontrado; i++){
        if(vec[i]==buscar){
            encontrado =true;
            cout<<"Encontrado en el número en la posición: " << i<<endl;
        } 
    }

    if (encontrado!=true) cout<<"El número no esta en el el vector"<<endl;


    
}
void ej3(){

    const int N=6;
    int n,
        begin=0,
        end=N-1,
        mitad=end/2,
        entrada;
    bool encontrado;
   
    
    /*
    cout<<"Introduzca el tamaño del vector a insertar"<<endl;
    cin>>N;

    int vec_p[N]=;
    
    cout<<"Intrduzca los datos del vector"<<endl;
    for(int i=0; i<N; i++){
        cin>>entrada;
        vec_p[i]=entrada;
    }
    */
   cout<<"Introduzca el número a buscar"<<endl;
   cin>>entrada;
   
   int vec_p[N]={1,2,3,4,5,6};

    mitad=end/2;


    while(!encontrado && end>=begin){

        if(vec_p[mitad]>entrada){

            end=mitad-1;

        }else if(vec_p[mitad]<entrada){

            begin=mitad+1;

        }else if(vec_p[mitad]==entrada){

            encontrado=true;
        }
        mitad=(begin + end)/2;
    }

    if(encontrado){

        cout<<"Valor encontrado en la posición: "<<mitad<<endl;

    }else{

        cout<<"Valor no encontrado"<<endl;
    }

}
void ej4(){
    int tam=10,
        x,
        y;
    bool encontrado=false;
    int matriz[tam][tam];
    // preguntar si puedo inicializar lamatriz de forma aleatoria
    cout<<"voy por"<<endl;
    float aux;
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam;j++){
            aux=rand()%10;
            aux/=10;

            matriz[i][j]=round(aux) ;
        }
    }
    
    Imprime_Matriz(matriz[0], tam*tam);

    cout<<"Introduzca la coordenada "<<endl;
    cin>>x>>y;

    if(matriz[x][y]==1){
        cout<<"La ciudad mas cercana coincide con las coordenadas introducidas"<<endl;
    }else{
        cout<<"Coordenada/s de la/s ciudad/es más cercana/s: "<<endl;
        int pos=1;

        while(!encontrado && (pos<tam)){
            if(matriz[x][y-pos]==1){
                encontrado=true;
                cout<<"   - Al Norte con coordenadas ("<<x-pos<<","<<y<<")"<<endl; 
            }
            if(matriz[x][y+pos]==1){
                encontrado=true;
                cout<<"   - Al Sur con coordenadas ("<<x+pos<<","<<pos<<")"<<endl; 
            }
            if(matriz[x-pos][y]==1){
                encontrado=true;
                cout<<"   - Al Oeste con coordenadas ("<<x<<","<<y-pos<<")"<<endl; 
            }
            if(matriz[x+pos][y]==1){
                encontrado=true;
                cout<<"   - Al Este con coordenadas ("<<x<<","<<y+pos<<")"<<endl; 
            }
            pos++;
        }
   
    }

}
void ej5(){
    int
        entrada,
        tam_N_f=4,
        tam_N_c=3,
        tam_M_f=4,
        tam_M_c=3;
/*
    cout<<"Introduzca el tamaño de la 1ª Matriz, fila y columna"<<endl;
    cin>>tam_N_f>>tam_N_c;

    int N[tam_N_f][tam_N_c];

    cout<<"Introduzca los datos de la matruiz"<<endl;
    for(int i=0; i<tam_N_f; i++){
        for (int j=0; j<tam_N_c; j++){
            cin>>entrada;
            N[i][j]=entrada;
        }
    }

    cout<<"Introduzca el tamaño de la 2ª Matriz, fila y columna"<<endl;

    cin>>tam_M_f>>tam_M_c;

    while(tam_N_f!= tam_M_f && tam_M_c!=tam_N_c){
        cout<<"Los parámetros de la 2ª matriz no coinciden con los de la 1ª Matriz, vuelva a introducir los parámetros"<<endl;
        cin>>tam_M_f>>tam_M_c;
    }

    int M[tam_M_f][tam_M_c];

    cout<<"Introduzca los datos de la matruiz"<<endl;

    for(int i=0; i<tam_M_f; i++){
        for (int j=0; j<tam_M_c; j++){
            cin>>entrada;
            M[i][j]=entrada;
        }
    }
    
    int M_N[tam_M_f][tam_M_c];
    */

   int M[4][3]={{1,1,1},{1,1,1},{1,1,1},{1,1,1}};
   int N[4][3]={{1,1,1},{1,1,1},{1,1,1},{1,1,1}};
   int M_N[4][3];


   for(int i=0; i<tam_M_f; i++){
        for (int j=0; j<tam_M_c; j++){
          
            M_N[i][j]=M[i][j]+N[i][j];
        }
    }

    Imprime_Matiz_NC(M_N[0], tam_M_f, tam_M_c);
 
 
}

void ej6(){
    int elemento= INT_MAX,
        entrada,
        menor,
        tam_N_f,
        tam_N_c;
        
    /*
    cout<<"Introduzca el tamaño de la 1ª Matriz, fila y columna"<<endl;
    cin>>tam_N_f>>tam_N_c;

    int N[tam_N_f][tam_N_c];

    cout<<"Introduzca los datos de la matruiz"<<endl;
    for(int i=0; i<tam_N_f; i++){
        for (int j=0; j<tam_N_c; j++){
            cin>>entrada;
            N[i][j]=entrada;
        }
    }

    */
    tam_N_f=9;
    tam_N_c=11;
    int N[tam_N_f][tam_N_c];
    for(int i=0; i<tam_N_f; i++){
        for (int j=0; j<tam_N_c; j++){
                
            N[i][j]=rand()%100;

        }
    }
 



   for(int i=0; i<tam_N_f; i++){
        for (int j=0; j<tam_N_c; j++){
            
            elemento=N[i][j];
            if(elemento<menor){
                menor=elemento;
            }
        }
    } 

    Imprime_Matiz_NC(N[0],tam_N_f,tam_N_c);
    cout<<"El menor es: "<<menor<<endl;

}


void ej7(){

    int tam_M_f,
        tam_M_c,
        tam_N_f,
        tam_N_c;
    bool encontrado;

   

/*
    int N [tam_N_f][tam_N_c],
        M [tam_M_f][tam_M_c];


    for(int i=0; i<tam_N_f; i++){
        for (int j=0; j<tam_N_c; j++){
                
            N[i][j]=rand()%10;

        }
    }


    
 
    for(int i=0; i<tam_M_f; i++){
        for (int j=0; j<tam_M_c; j++){
                
            M[i][j]=rand()%10;

        }
    }
*/

   int M[2][1]={{1},{1}};   
   int N[5][5]={{1,0,0,0,0},{0,0,0,0,1},{0,0,0,0,1},{0,0,0,0,0},{0,0,0,0,0}};
    tam_N_f=5;
    tam_N_c=5;
    tam_M_f=2;
    tam_M_c=1;

    
    int j=0;
    for (int i=0 ; i<tam_N_f && ! encontrado; i++){
        for(; j<tam_N_c && ! encontrado; j++){
            
            if(N[i][j]==M[0][0]){
                int pos_x_M=0;
                int pos_y_M=0;
                int pos_y_N=j;
                int pos_x_N=i;
                bool iguales=true;
          

                while(pos_x_M<tam_M_f && pos_x_N<tam_N_f && iguales){

                    while(pos_y_M<tam_M_c && pos_y_N<tam_N_c && iguales){
                    
                        if (N[pos_x_N][pos_y_N] != M[pos_x_M][pos_y_M]) iguales=false;
                       
                        pos_y_N++;
                        pos_y_M++;
                    
                    }

                    
                    pos_x_M++;
                    pos_x_N++;

                    pos_y_M=0;
                    pos_y_N=j;
                    

                }

                if(iguales)encontrado=true;


            }
        }

        if(j>=tam_N_c-1) j=0;
    }

    if (encontrado){ cout<<"La Matriz:", Imprime_Matiz_NC(M[0], tam_M_f,tam_M_c), cout <<"está contenida en ", Imprime_Matiz_NC(N[0], tam_N_f, tam_N_c);
    } else cout<<"La Matriz no está contenida"<<endl, Imprime_Matiz_NC(M[0], tam_M_f,tam_M_c), Imprime_Matiz_NC(N[0], tam_N_f, tam_N_c);
     
}
int main(){
    cout<<"Introduzca un número para indicar que ejercicio desea realizar"<<endl;

    int entrada;
    cin>>entrada;

    switch (entrada)
    {
    case 1:
        ej1();
        break;
    case 2:
        ej2();
        break; 
    
    case 3:
        ej3();
        break;
    case 4:
        ej4();
        break;
    case 5:
        ej5();
        break;
    case 6:
        ej6();
        break;
    case 7:
        ej7();
        break;
    default:
        ej1();
        ej2();
        ej3();
        ej4();
        ej5();
        ej6();

        break;
    }

    return 0;
}
