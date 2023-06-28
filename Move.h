#ifndef MOVE_H
#define MOVE_H
#include <iostream>
#include <iomanip>

using namespace std;
class Move{
	private:
    	string name;
    	double value;
    	double mana;
		int type;
		
	public:
   		Move(){
   			name = "";
   			value = 0;
   			mana = 0;
   			type = 1;
		   }
		Move(string n, double v, double m, int t){
    		name = n;
    		value = v;
    		mana = m;
    		type = t;
		}
		~Move(){}

    	string getName() const {
        	return name;
    	}

    	double getValue() const {
        	return value;
    	}
    	double getMana() const {
			return mana;
		}
		int getType() const {
			return type;
		}

		void display() const {
    		if (type == 1)
        		cout << setw(20) << left << name << "Mana: " << setw(8) << mana << "Damage: " <<  value << endl;
    		else if (type == 2)
        		cout << setw(20) << left << name << "Mana: " << setw(8) << mana << "Heal: " << value << "%" << endl;
   		 	else if (type == 3)
        		cout << setw(20) << left << name << "Mana: " << setw(8) << mana << "Attacking Buff: +" << value << "%" << endl;
    		else if (type == 4)
       			cout << setw(20) << left << name << "Mana: " << setw(8) << mana << "Defensive Buff: +" << value << "%" << endl;
       		else if (type ==5)
       			cout << setw(20) << left << name << "Mana: " << setw(8) << mana << "Mana regeneration: +" << value << endl;
		}

};



#endif
