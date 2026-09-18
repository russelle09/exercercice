#include <iostream>
#include <cstdlib>
#include <ctime>
int main() { 
   
    int nombre;
   srand(time(NULL));

   int nombresecret = rand()% 100 + 1;
   std::cout<<"un nombre aleatoire :"<<nombresecret;
   return 0;
   }
