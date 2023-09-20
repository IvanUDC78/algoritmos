
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int sumaSubMax1(int v[], int n){

    int sumaMax=0;
    for(int i=0;i<n;i++){    
        int estaSuma=0;
        for(int j=i;j<n;j ++){
                estaSuma = estaSuma + v[j];
                if(estaSuma>sumaMax)
                    sumaMax=estaSuma;
            }
        }
    return sumaMax;
}



int sumaSubMax2(int v[],int n){
    int estaSuma = 0,sumaMax = 0;
    for (int j = 0; j < n; ++j) {
        estaSuma = estaSuma + v[j];
        if (estaSuma > sumaMax){
            sumaMax = estaSuma;
        }else if(estaSuma < 0 ) {
            estaSuma = 0;
        }
        }
    return sumaMax;
}

void inicializar_semilla() {
    srand(time(NULL));
        /* se establece la semilla de una nueva serie de enteros pseudo-aleatorios */
}

void aleatorio(int v [], int n) {
    int i, m=2*n+1;
    for (i=0; i < n; i++)
        v[i] = (rand() % m) - n;
        /* se generan números pseudoaleatorio entre -n y +n */
}

void listar_vector(int v[], int n){
    for(int i=0;i<n;i++){
        if (v[i]<0)
            printf("%d",v[i]);
        else
            printf(" %d",v[i]);
    }
}
void test1() {
/* ... */
}
void test2() {
    int i, a, b;
    int v[9];
    printf("test\n");
    printf("%33s%15s%15s\n", "", "sumaSubMax1", "sumaSubMax2");
    for (i=0; i<10; i++) {
        aleatorio(v, 9);
        listar_vector(v, 9);
        a = sumaSubMax1(v, 9);
        b = sumaSubMax2(v, 9);
        printf("             %15d%15d\n", a, b);
    }
}
int main() {
    inicializar_semilla();
    test1();
    test2();
    return 0;
}



/*
int main(){
    
    int n=20;      //aqí se hace la guarrada de decirle el string
    int v[20];
    inicializar_semilla();
    aleatorio(v,n);
    printf("*%d*\n",sumaSubMax1(v,n));

    return 0;
}
*/