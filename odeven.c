#include <stdio.h>
int odevent (int number){
      
            if (number%2 != 0) return 1;
            else return 0;
}
int main (){
    if (odevent(6)==1)printf("Odd");
    else printf("Even");

    return 0;
}