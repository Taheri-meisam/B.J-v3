#include <conio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <time.h> 



int main() {
    
    char c; // This is for the yes or no question
    char a = 2; // this is to try to get the loop going if c changes to N a should change to 1 and therefor end the loop.
    double manoJ = 0; //players hand
    double manoC = 0; // house hand
    double dineroJ = 100; //players money (not used jet)
    double dineroC = 100; //houses money (not on use yet)
    short e = 0; //number to get the 1= 1 or 11 to work
    short d = 1; // as I dont manage to get e to be only 1 or 11 nor to make it so it does no get aded to the rand() I'm tring to get there by other means
    short f = 11; 
    long r = 0; //round
    int nr = 0;
    long b = 0; // the amound taken away on the bet
    long p = 0;
    using namespace std;
    

    std::cout << "Welcome to mu blackJack\n" << '\n';

inicio:

    std::cout << "Round " << r + 1 << endl << "Your curent saldo is: " << dineroJ << "\nThe houses curent saldo is: " << dineroC << endl;
    std::cout << "how much do you wish to bet? (minimal 10): ";
    std::cin >> b;
    dineroJ - b;
    dineroC - b;
    p = 2 * b;

    std::cout << "\nThe pot has: " << p << endl;

    //Mano jugador
    while (a == 2)
    {


        srand(time(0));   //esto dice al programa donde empezar a generar los numeros, la semilla
       // srand() = nr;


        for (int i = 0; i < 1; i++) //esto especifica los numero de repeticiones i = 0 asta que i = 3, y cada numero hace +1 a i. Si hago que i = 1 i >1 eso me dara solo un numero.
           


          manoJ = manoJ + rand() % 10 + 1; // without the +1 there is a chance to get 0
            // esta es la primera carta


          if (nr == 1) { //si rand() % 1 == 0 siempre pregunta y no modifica nada, si rand() % 1 == 1 ni pregunta ni modifica
              std::cout << "Chose balue of card. 1 or 11.\n";
              std::cin >> e;
                 if (e = d) {
                     manoJ = manoJ + 1;
                 }

            else if (e = f) {
             manoJ = manoJ + 11;
            }

          }

            

       

          std::cout << "Your hand is " << manoJ << '\n';

        if (manoJ > 21) {
            std::cout << "You lose this round\n";
            dineroC + p;
            goto inicio;
        }

        std::cout << '\n' << "Do you want to get another card?\n" << "Yes (Y) or No (N)\n";
        std::cin >> c;

        switch (c) {
        case 'y': case 'Y':
            a = 2;
            break;
        case 'n': case 'N':
            a = 1;
            break;

        } 

           

    } //ahoramismo esto esta programado par que se repita asta que el jugador decida, o manoJ > 21. 

    //Mano casa
    std::cout << "The house turn\n";

    while (manoC < manoJ)
    {

        srand(time(0));   //esto dice al programa donde empezar a generar los numeros, la semilla
        for (int i = 0; i < 1; i++) //esto especifica los numero de repeticiones i = 0 asta que i = 3, y cada numero hace +1 a i. Si hago que i = 1 i >1 eso me dara solo un numero.
           // cout << (rand() % 10) << " "; // esto especifica los numeros que pueden ser elegidos 

        manoC = manoC + rand() % 10 + 1; // without the +1 there is a chance to get 0
            
        std::cout << "The house hand is " << manoC << '\n';

        if (manoC > 21) {
            std::cout << "You win this round\n";
            
            goto inicio;
        }
        if (manoC >= manoJ) {
            std::cout << "You lose this round\n";
            
            goto inicio;
        }

    }



    if (dineroJ = 0) {
        std::cout << "You lose";
        return 0;
    }
    else if (dineroC = 0) {
        std::cout << "You lose";
        return 0;
    }
   
}


