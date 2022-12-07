<h1 align="center"> Connect 4</h1>

<div align="center">

<img src="./imagenes/giphy1.gif">

</div align="center">

<div align="center">

##  __📌&nbsp;Index__

</div align="center">

[Explanation of the game](#explanation-of-the-game)   
[Instructions for execution and use](#instructions-for-execution-and-use)   
[Flowchart](#flowchart)   
[Tests of the game](#tests-of-the-game)   
[Conclusion](#conclusion)

<div align="center">

##  __🎲&nbsp;Explanation of the Game__

</div align="center">

It's a C++ game, it has 2 modes of playing whether player vs player or player vs computer. For 2 players mode it will directly take the input from users on which position they want to mark and directly add their mark in the game board. For 1 player vs Computer mode it will take input from user and for computer turn it will use a random function and will check wheather the number is repeated or not, if repeated it will call the random function again and take new value as the computer mark.

[Index](#index)

<div align="center">


## __📓&nbsp;Instructions for execution and use__

</div align="center">


In order to enjoy the single player and multiplayer game modes, you first need to follow the steps below depending on the operating system.
<h2> Windox </h2>

1. Download or clone my repo with the following command in the terminal:
   
~~~
git clone https://github.com/up210305/Conecta-4.git
~~~

2. Download and install the compiler in this link https://sourceforge.net/projects/mingw/files/OldFiles/ 

3. Open the terminal at the direction of the file with the command:

~~~
cd C:\Documents\...
~~~

4. To compile use command:

~~~
gcc  connect4.cpp -o connect4.exe
~~~

5. To run type this code:

~~~
connect4.exe
~~~

<h2> Linux (Ubuntu)</h2>

1. Download or clone my repo with the following command in the terminal:
   
~~~
"git clone https://github.com/up210305/Conecta-4.git"
~~~

2. Install GNU c/c++ compiler, open the terminal and type:

~~~
$ sudo apt-get update
$ sudo apt-get install build-essential manpages-dev
~~~

3. To compile this program, type:

~~~
gcc connect4.c -o connect4
~~~

4. To run this program, type:
   
~~~
./connect4
~~~

[Index](#index)

<div align="center">

## __🌐&nbsp;Flowchart__

</div align="center">

<img src="./imagenes/DIAGRAMA.jpg" align="center">

[Index](#index)

<div align="center">

## __🎮&nbsp;Tests of the game__

</div align="center">

<h2>Things to consider</h2>

- Don't write numbers with decimal point or letters when the game ask you for a move in the board.  
- You can't choose which figure you want beetween "X" and "O".
- In single player mode the player is "O" and the computer is "X".  
- In multiplayer mode, player 1 is "O" and player two is "X".

<h2 align="center"> Player 1 vs Player 2</h2>

<div align="center">

First, the program shows you an animation that simulate a loading screen in a game. 

<img src="./imagenes/cp1.png" align="center"/>

Second, When the time finished, the program shows you a menu with the existing game modes that you can play. 

<img src="./imagenes/cp2.png" align="center"/>

After selecting the first option, a board will appear where we can enter the moves. 

<img src="./imagenes/cp3.png"  align="center"/>

Then a game will start. First the player starts on square 1.

<img src="./imagenes/cp4.png" align="center"/>

Then in the second move the player 2 chose square 2.  

<img src="./imagenes/cp5.png" align="center"/>

After several moves as you can see the player 1 wons the game. 

<img src="./imagenes/cp6.png" align="center"/>



</div align="center">

[Index](#index)


##  __📝&nbsp;Conclusion__

</div align="center">

I think that this project was complicated in several very important aspects that had to be implicit in the program for it to go well. The project became difficult for me each time we advanced, for example at the beginning I had complications with the board, how to create and develop it but both no cause the board is similar to the game tic tac toe , another difficult point was the use of matrices in the code that I still do not understand 100 percent.
The most complicated part was the implementation of the artificial intelligence function for the "player vs computer" mode, because although I could imagine how I could do it in my mind, I couldn't get my thoughts into a functional code for the artificial intelligence.
Finally the front-end part was slow because we want to add an animation of a screen loading like a real game. We can't do much maybe more than add colors and banner but it's was delay because the banner sometimes move all the texts or parts of the code, so that was annoying, We think we would like to add more things to the game to make more simple and stetic.

[Index](#index)
