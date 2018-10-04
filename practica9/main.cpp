#include <iostream>

using namespace std;

 void squareByPtr ( int * numPtr ) {
 * numPtr = * numPtr * * numPtr ;
 }

int str_len(char *cad){
    int res = 0;
    while(*cad++!= '\0')
        res++;
    return res;
}
void imprimir(char *arr, int tam){
 if(tam == 0)
        return;
 cout << *arr++ << " ";
 imprimir(arr, --tam);

}

bool palindrome(char *cad,int len){
    for(int i = 0;*(cad+i) !='\0' ;i++ , len--){
        char letra = *(cad + len - 1);
        if(*(cad+i)!=letra)
            return false;
    }
    return true;
}

int *getPtrTofive(){
    int *x = new int;
    *x = 5;
    return x;
}
bool invertir(char *cad,int tam){
    char fin[tam+1];
    char temp[tam+1];
    for(int i = 0;*(cad+i) !='\0' ;i++ , tam--){
    fin[tam-i]=*(cad + tam - 1);
    while(tam != 0){
        *temp = *cad;
        *(cad+i) = *fin;
        *(fin-i) = *temp;
    }}
    return *fin;
    }

 int main () {
 char cadena1[]="aallaa";
 char cadena2[]="loquesea";
 int x = 5;
 int *q = getPtrTofive();
 int y = str_len(cadena1);
  int a = str_len(cadena2);
 squareByPtr (&x);
 cout << x; // Prints 25
 cout << endl;
 cout << *q << endl;
 delete[]q;
cout << palindrome(cadena1, y) << endl;
invertir(cadena2,a);
imprimir(cadena2,a);
cout << cadena2 << endl;
 }
