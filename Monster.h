#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>
#include <iomanip>

using namespace std;
class Monster{
private:
        string name;
        double health;
        double attack;
        int exp;

public:
    Monster(){
    	name = " ";
    	health = 0;
    	attack = 0;
    	exp = 0;
	}
	Monster(string n, double h, double a, int e){
		name = n;
		health = h;
		attack = a;
		exp = e;
	}
    ~Monster(){}
    string getName(){
    	return name;
	}
	double getHealth(){
		return health;
	}
	double getAttack(){
		return attack;
	}
	int getExp(){
		return exp;
	}
    void display(){
    	cout << setw(10) << left << "Monster: " << setw(10) << left << name;
    	cout << setw(10) << left << "Health: " << setw(5) << left << health;
   		cout << setw(10) << left << "Attack: " << setw(5) << left <<  attack;
   		cout << setw(10) << left << "Experience: " << setw(5) << left << exp << endl;
	}
};

#endif
