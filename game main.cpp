#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include "LinkedList.h"
#include "Move.h"
#include "Hero.h"
#include "Monster.h"
#include "Game.h"

using namespace std;


int main(){
    Game game;
    char choice;
    bool quit;
    int progress;
    while(!quit){
        cout << "===== Game Menu =====" << endl;
        cout << "1. Start New Game" << endl;
        cout << "2. Load Game" << endl;
        cout << "3. Quit" << endl;
        cout << "=====================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
		cout << endl;
        switch (choice){
	        case '1':
	            game.newGame();
	            progress = 0;
	            game.adventure(progress);
	            cout << endl;
	            break;
	        case '2':
	            game.loadGame(progress);
	            cout << endl;
	            break;
	        case '3':
	        	cout << endl;
	 			cout << "Exiting the game. Goodbye!" << endl;
	 			quit = true;
	            break;
	        default:
	            cout << "Invalid choice. Please enter a valid option." << endl;
	            cout << endl;
	            break;
	        }
	
    } 
    
	return 0;
}
