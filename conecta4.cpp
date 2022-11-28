
#include <iostream>
#include <stdalign.h>
using namespace std;

//variables
int gamemode; //seleccion para escojer singleplayer o localmode
//funciones para main

int main(){
    int segundos;

    // mostrar mensajes de bienvenida   
    cout << "\033[0;35m" << "\t \t \t \t Welcome to the game CONNECT 4 \n" << "\033[0m";
    cout << "\033[0;29m" << " Please type a number to select a gamemode \n" << "\033[0m";
    cout << "\033[0;31m" << " 1.- SinglePlayer \n 2.- Local Mode\n" << "\033[0m"; 
    cout << "GameMode : " ;
    cin >> gamemode;

    for (int j = 0; j <=70; j++)
    {
        cout << "-";
    }

   system ("clear"); //limpia pantalla del menu de elegir juego 

   //seleccionar modos de juego 

    if (gamemode == 1)
    {
        cout << "WELCOME TO SINGLE PLAYER ";
        cout << "You have to play with a computer ";
    }
    else if (gamemode == 2)
    {
        cout << "WELCOME TO SINGLE PLAYER ";
        cout << "You have to play with a computer ";
        

    }
    else{
        cout << "please select a other number in the menu again";
    }


   return 0;
}