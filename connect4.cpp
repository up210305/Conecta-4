
#include <iostream>
#include <stdalign.h>
using namespace std;

//variables
int gamemode; //seleccion para escojer singleplayer o localmode

char board[9][8] ;
int row, col ;
int turn, counter ;
bool colfilled[8] ;
char marker ;
int choice ;

//funciones para main
void print_board();
void drawing_board();

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
        cout << "WELCOME TO MULTIPLAYER ";
        cout << "You have to player vs player \n\n\n";

        print_board();
        drawing_board();
        cout << " " << " " << "1" << " " << " "  << " " << "2" << " " << " " << " "  << "3" << " " << " " << " "  << "4" << " " << " " << " "  << "5" << " " << " " << " "  << "6" << " " << " " << " "  << "7" ;
        cout << endl;

        cout << "This is Connect 4." << endl ;      //INSTRUCTIONS
        cout << "Type the column you want your piece to go into, then press enter." << endl ;
        cout << "If you can make 4 in a row vertically, horizontally, or diagonally, you win!" << endl << endl ;


        for ( ; 1 == 1; )             //main game loop
        {
        
            if (turn % 2 == 0)          //determining the turn
            {
                cout << "It's Player1's turn!" << endl ;
                marker = 'O' ;          //determining the marker
            }
            if (turn % 2 == 1)
            {
                cout << "It's Player2's turn!" << endl ;
                marker = 'X' ;
            }
            //--------------------------------------------------------------------------------------------
            choice = 0 ;
            bool onboard = false ;
            while((choice<1 || choice > 8) || onboard == false )
            {
                onboard = true;
                cin >>  choice ;              //player makes a move
                if (choice < 1 || choice > 8)
                {
                    cout << "Nope. Pick a number between 1 - 7." << endl ;
                    onboard = false ;
                }
                col = choice ;
                if (colfilled[7-col])
                {
                    cout << "Don't go over the board" << endl ;
                    onboard = false;
                }
            }
        
            //-------------------------------------------------------------------------------------
            for (row = 0; row <= 7; row++)      //trying to input move
            {
                if (board[row][7 - col] == ' ')
                {
                    board[row][7 - col] = marker ;
                    if (board[6][7-col] != ' ') colfilled[7-col] = true ;
                    break ;
                }
            
            }
            //------------------------------------------------------------------------------------------
            for (row = 6; row != -1; row--)          // drawing the board
            {
                for (col = 6; col != -1; col--)
                {
                    cout  << "|" << " " << board[row][col] << " " ;
                }
                cout << "|" ;
                cout << endl ;
                for (col = 6; col != -1; col--)
                {
                cout << "|" << "_" << "_" << "_" ;
                }
                cout << "|" ;
                cout << endl ;
            }
            cout << " " << " " << "1" << " " << " "  << " " << "2" << " " << " " << " "  << "3" << " " << " " << " "  << "4" << " " << " " << " "  << "5" << " " << " " << " "  << "6" << " " << " " << " "  << "7" ;
            cout << endl  ;
            //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            for (row = 7; row != -1; row--)         //TO DETERMINE IF IT IS A WINNING BOARD
            {
                for (col = 6; col != -1 ; col--)
                {
                    if (board[row][col] == marker && board[row][col - 1] == marker  && board[row][col - 2] == marker && board[row][col - 3] == marker) //HORIZONTAL WIN
                    {
                        if ( turn % 2 == 0)       //declaring winner
                        {
                            cout << "Player 1 has won!" << endl ;
                        }
                        else
                        {
                            cout << "Player 2 has won!" << endl ;
                        }
                        return(0) ;
                    }
                    else if (board[row][col] == marker && board[row + 1][col] == marker && board[row + 2][col] == marker && board[row + 3][col] == marker) //VERTICAL WIN
                    {
                        if ( turn % 2 == 0)       //declaring winner
                        {
                            cout << "Player 1 has won!" << endl ;
                        }
                        else
                        {
                            cout << "Player 2 has won!" << endl ;
                        }
                        return(0) ;
                    }
                
                    else if (board[row][col] == marker && board[row + 1][col + 1] == marker && board[row + 2][col + 2] == marker && board[row + 3][col + 3] == marker) //UPPER DIAGONAL # 1 WIN
                    {
                        if ( turn % 2 == 0)       //declaring winner
                        {
                            cout << "Player 1 has won!" << endl ;
                        }
                        else
                        {
                            cout << "Player 2 has won!" << endl ;
                        }
                        return(0) ;
                    }
                
                    else if (board[row][col] == marker && board[row + 1][col - 1] == marker && board[row + 2][col - 2] == marker && board[row + 3][col - 3] == marker) //UPPER DIAGONAL # 2WIN
                    {
                        if ( turn % 2 == 0)       //declaring winner
                        {
                            cout << "Player 1 has won!" << endl ;
                        }
                        else
                        {
                            cout << "Player 2 has won!" << endl ;
                        }
                        return(0) ;
                    }
                }
            }
            //-------------------------------------------------------------------------
            turn++ ; // new turn
        }
    }
    else if (gamemode == 2)
    {
        cout << "WELCOME TO SINGLE PLAYER ";
        cout << "You have to player with a computer ";
        

    }
    else{
        cout << "please select a other number in the menu again";
    }


   return 0;
}

void print_board()
{
    for (col = 0; col <= 6; col++)          // making the board
    {
        for (row = 0; row <= 7; row++)
        {
            board[row][col] = ' ' ;
        }
    }
}

void drawing_board()
{
    for (row = 6; row != -1; row--)          // drawing the board
    {
        for (col = 6; col != -1; col--)
        {
            cout  << "|" << " " << board[row][col] << " " ;
        }
        cout << "|" ;
        cout << endl ;
        for (col = 6; col != -1; col--)
        {
            cout << "|" << "_" << "_" << "_" ;
        }
        cout << "|" ;
        cout << endl ;
    }
}