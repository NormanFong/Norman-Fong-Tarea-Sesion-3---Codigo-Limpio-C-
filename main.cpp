#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <time.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int fact)
{
     if (fact>0) {
            int valor=fact * factorial(fact-1);
            return valor;
        } else{
	        return 1;
  
		}
          
}


int main(int argc, char** argv) {
	
    int numero =5;
   int f=factorial(numero);
   	cout<<"El factorial de "<< numero <<" es "<<f<<"\n"; 
    
	return EXIT_SUCCESS;
}

