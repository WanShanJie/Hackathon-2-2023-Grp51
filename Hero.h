#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <iomanip>

using namespace std;

class Hero{
	private:
		string name;
		double health;
		double attack;
		double mana;
		int exp;
		int level;
		int moveLevel;
		LinkedList<Move> moveList;
	public:
		Hero(){
			name = "";
			health = 0;
			mana = 0;
			exp = 5;
			level = 1;	
			moveLevel = 0;
		}
		void setHero(string n, double h, double m, int e, int l){
			name = n;
			health = h;
			mana = m;
			exp = e;
			level = l;
			moveLevel = 1;
		}
		void setHero(string n, double h, double m, int e, int l, int ml){
			name = n;
			health = h;
			mana = m;
			exp = e;
			level = l;
			moveLevel = ml;
		}
		string getName(){
			return name;
		}
		double getHealth(){
			return health;
		}
		double getMana(){
			return mana;
		}
		int getExp(){
			return exp;
		}
		
		void calcLevel(){
			int oldLevel = level;
			level = exp/5;
			if(level > oldLevel){
				cout<<name<<" has leveled up to level "<<level<<"!"<<endl;
				health += 3*(level-oldLevel);
				mana += 2*(level-oldLevel);
			}
		}
		
		void addExp(int add){
			exp+=add;
			calcLevel();
		}
		
		int getLevel(){
			return level;
		}
		int getMoveLevel(){
			return moveLevel;
		}
		void addMoveLevel(){
			moveLevel+=3;
		}
		void displayInfo(){
			calcLevel();
			cout << "Hero Name: " << name << endl;
            cout << "Health: " << health << endl;
            cout << "Mana: " << mana << endl;
            cout << "Level: "<< level << endl;
            cout << "Exp: "<< exp % 5 <<"/5" << endl;
		}
		void displayMoves(){
			moveList.displayList();
		}
		void addMove(string name, double value, double mana, int type){
			Move newMove(name, value, mana, type);
			int deleteChoice;
			if(!moveList.searchNode(newMove)){
				if(moveList.getNum()==5){
					do{
						cout << "You are only allowed to have 5 moves." <<endl;
						cout << "You need to drop one move in order to learn the new move." <<endl;
						cout << "Which moves you wish to drop? "<<endl;
						cout << endl;
						moveList.displayList();
						cout << "6. Give up learning "<<newMove.getName()<<endl;
						cout << "Select 1-4 : ";
						cin >> deleteChoice;
						cout << endl;
						if(deleteChoice>=1 && deleteChoice<=4){
							Move deleteMove = moveList.getMove(deleteChoice);
							moveList.deleteNode(deleteMove);
							cout << deleteMove.getName() << " is deleted from your move list. "<< endl;
						}
						else if(deleteChoice == 6){
							cout << "You give up learning this new move. Don't regret it!!!" <<endl;
							return;
						}
						else{
							cout<<"Invalid choice. Please try again."<<endl;
						}
					}while( deleteChoice<1 || deleteChoice>6 );
						
				}
				moveList.insertNode(newMove);
				cout<< newMove.getName() <<" added to your move list."<<endl;
			}
			else
			cout<<"Move already exist..."<<endl;
		}
		void clearMove(){
			for(int i=0;i<countMove();i++){
				Move deleteMove = moveList.getMove(i+1);
				moveList.deleteNode(deleteMove);
			}
		}
		int countMove(){
			return moveList.getNum();
		}
		Move currentMove(int i){
			return moveList.getMove(i);
		}
};
#endif
