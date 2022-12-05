
#include <iostream>
#include <stdalign.h>
using namespace std;

//variables
int gamemode; //seleccion para escojer singleplayer o localmode
//funciones para main

int main(){
    int num;

    // mostrar mensajes de bienvenida   
    cout << "\033[0;20m" << " \t \t ░██╗░░░░░░░██╗███████╗██╗░░░░░░█████╗░░█████╗░███╗░░░███╗███████╗ ████████╗░█████╗░ ████████╗██╗░░██╗███████╗" << "\033[0m" << endl;
    cout << "\033[0;20m" << " \t \t ░██║░░██╗░░██║██╔════╝██║░░░░░██╔══██╗██╔══██╗████╗░████║██╔════╝ ╚══██╔══╝██╔══██╗ ╚══██╔══╝██║░░██║██╔════╝" << "\033[0m" << endl;
    cout << "\033[0;20m" << " \t \t ░╚██╗████╗██╔╝█████╗░░██║░░░░░██║░░╚═╝██║░░██║██╔████╔██║█████╗░░ ░░░██║░░░██║░░██║ ░░░██║░░░███████║█████╗░░" << "\033[0m" << endl;   
    cout << "\033[0;20m" << " \t \t ░░████╔═████║░██╔══╝░░██║░░░░░██║░░██╗██║░░██║██║╚██╔╝██║██╔══╝░░ ░░░██║░░░██║░░██║ ░░░██║░░░██╔══██║██╔══╝░░" << "\033[0m" << endl;
    cout << "\033[0;20m" << " \t \t ░░╚██╔╝░╚██╔╝░███████╗███████╗╚█████╔╝╚█████╔╝██║░╚═╝░██║███████╗ ░░░██║░░░╚█████╔╝ ░░░██║░░░██║░░██║███████╗" << "\033[0m" << endl;
    cout << "\033[0;20m" << " \t \t ░░░╚═╝░░░╚═╝░░╚══════╝╚══════╝░╚════╝░░╚════╝░╚═╝░░░░░╚═╝╚══════╝ ░░░╚═╝░░░░╚════╝░ ░░░╚═╝░░░╚═╝░░╚═╝╚══════╝" << "\033[0m" << endl;


    cout << "\033[0;20m" << " \t \t ░██████╗░░█████╗░███╗░░░███╗███████╗░█████╗░░█████╗░███╗░░██╗███╗░░██╗███████╗░█████╗░████████╗░░██╗██╗" << "\033[0m" << endl;
    cout << "\033[0;20m" << " \t \t ██╔════╝░██╔══██╗████╗░████║██╔════╝██╔══██╗██╔══██╗████╗░██║████╗░██║██╔════╝██╔══██╗╚══██╔══╝░██╔╝██║" << "\033[0m" << endl;
    cout << "\033[0;20m" << " \t \t ██║░░██╗░███████║██╔████╔██║█████╗░░██║░░╚═╝██║░░██║██╔██╗██║██╔██╗██║█████╗░░██║░░╚═╝░░░██║░░░██╔╝░██║" << "\033[0m" << endl;
    cout << "\033[0;20m" << " \t \t ██║░░╚██╗██╔══██║██║╚██╔╝██║██╔══╝░░██║░░██╗██║░░██║██║╚████║██║╚████║██╔══╝░░██║░░██╗░░░██║░░ ███████║" << "\033[0m" << endl;
    cout << "\033[0;20m" << " \t \t ╚██████╔╝██║░░██║██║░╚═╝░██║███████╗╚█████╔╝╚█████╔╝██║░╚███║██║░╚███║███████╗╚█████╔╝░░░██║░░░╚════██║" << "\033[0m" << endl;
    cout << "\033[0;20m" << " \t \t ░╚═════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚══════╝░╚════╝░░╚════╝░╚═╝░░╚══╝╚═╝░░╚══╝╚══════╝░╚════╝░░░░╚═╝░░░░░░░░╚═╝" << "\033[0m" << endl;
    
   
    cout << "\033[0;32m" << " \t \t \t \t █▀▀ █▀▀ █░░ █▀▀ █▀▀ ▀▀█▀▀  █▀▀█  █▀▀▀ █▀▀█ █▀▄▀█ █▀▀ █▀▄▀█ █▀▀█ █▀▀▄ █▀▀ \n" << "\033[0m";
    cout << "\033[0;32m" << " \t \t \t \t ▀▀█ █▀▀ █░░ █▀▀ █░░ ░░█░░  █▄▄█  █░▀█ █▄▄█ █░▀░█ █▀▀ █░▀░█ █░░█ █░░█ █▀▀  \n" << "\033[0m";
    cout << "\033[0;32m" << " \t \t \t \t ▀▀▀ ▀▀▀ ▀▀▀ ▀▀▀ ▀▀▀ ░░▀░░  ▀░░▀  ▀▀▀▀ ▀░░▀ ▀░░░▀ ▀▀▀ ▀░░░▀ ▀▀▀▀ ▀▀▀░ ▀▀▀ \n" << "\033[0m";
    cout << "\033[0;31m" << " 1.- SinglePlayer \n 2.- Local Mode\n" << "\033[0m"; 
    cout << "GameMode : " ;
    cin >> gamemode;

   system ("clear"); //limpia pantalla del menu de elegir juego 

   //seleccionar modos de juego 

    if (gamemode == 1)
    {
        cout << "WELCOME TO SINGLE PLAYER ";
        cout << "You have to play vs player ";
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