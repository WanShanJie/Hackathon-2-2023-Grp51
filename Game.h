#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include "LinkedList.h"
#include "Move.h"
#include "Hero.h"
#include "Monster.h"

using namespace std;
class Game{
	private:
		Monster monster[26];
		Hero player;
		LinkedList<Move> availableMoves;
	public:
		Game(){}
		~Game(){}
		void generateMonster(){
			monster[0] = Monster("goblin", 60, 15, 15);
			monster[1] = Monster("zombie", 80, 25, 12);
			monster[2] = Monster("Werewolf", 90, 20, 14);
			monster[3] = Monster("Vampire", 105, 30, 15);
			monster[4] = Monster("Orc ", 110, 25, 17);
			monster[5] = Monster("Dragon", 135, 25, 18);
			monster[6] = Monster("Ghost", 150, 30, 20);
			monster[7] = Monster("Skeleton", 155, 42, 21);
			monster[8] = Monster("Witch ", 200, 35, 23);
			monster[9] = Monster("Slime ", 87, 21, 11);
			monster[10] = Monster("Troll", 95, 21, 13);
			monster[11] = Monster("Gargoyle", 102, 30, 14);
			monster[12] = Monster("Mummy", 113, 29, 16);
			monster[13] = Monster("Cyclops", 138, 31, 17);
			monster[14] = Monster("Specter", 144, 34,19);
			monster[15] = Monster("Imp", 147, 38, 20);
			monster[16] = Monster("Kraken", 152, 40,22);
			monster[17] = Monster("Serpent", 83, 23, 12);
			monster[18] = Monster("Minotaur", 84, 25,13);
			monster[19] = Monster("Giant", 111, 26, 16);
			monster[20] = Monster("Banshee", 115,25, 17);
			monster[21] = Monster("Wendigo", 141, 33, 18);
			monster[22] = Monster("Lich", 148, 36, 20);
			monster[23] = Monster("Succubus", 165, 40, 21);
			monster[24] = Monster("Yeti", 180, 38, 23);
			monster[25] = Monster("Centaur", 250, 50, 100);
		}
		
		void displayMonsterData(){
			for(int i=0;i<20;i++){
				monster[i].display();
			}
		}
		
		void displayPhrase(const string &phrase){
			double delayMilliseconds = 1000; 

    		for (char c : phrase) {
        		std::cout << c;
        		clock_t start_time = clock();
        		while (clock() < start_time + (delayMilliseconds * CLOCKS_PER_SEC / 1000));
   			}
		}
		
		void newGame(){
			int num;
			bool validChoice = false;
			cout << endl;
			cout << "In the realm of Everlund, " << endl;
			cout << "a nefarious creature known as Centaur, an ancient and malevolent monster wreaking havoc upon the land." << endl;
			cout << "The people suffered from the invasion of the monsters and seek help for the hero to rescue them and their land." << endl;
			displayPhrase("\n");
			cout << "There are 3 heroes in this realm..............................." << endl;
			cout << endl;
			cout << "First hero" << endl;
			cout << "-----------" << endl;
			cout << "Aiden hails from the peaceful elven city of Silverleaf, nestled deep within the enchanted forests of Everlund." << endl;
			cout << "He is a hero dwells within a modest wooden cabin on the outskirts of the city, " << endl; 
			cout << "spending most of his time honing his archery skills amidst the serene beauty of nature." << endl;
			displayPhrase("\n");
			cout << "Second hero" << endl;
			cout << "-----------" << endl;
			cout << "Mighty is a resident of Hammerfall, a thriving dwarven stronghold situated deep within the rugged mountains of Everlund" << endl;
			cout << "He is a hero with dons formidable and custom-forged plate armor." << endl;
			displayPhrase("\n");
			cout << "Third hero" << endl;
			cout << "-----------" << endl;
			cout << "Arcane located in the mystical realm of Everlund "<< endl;
			cout << "Her abode is filled with towering shelves of ancient tomes and flickering orbs of magical energy."<< endl;
			cout << "She dwells within a spartan study chamber, surrounded by scrolls and parchments detailing the secrets of magic." << endl;
			displayPhrase("\n");
			cout << "Now, choose your hero to start the battle:" << endl;
			cout << "1. Aiden" << endl;
			cout << "   Background:" << endl;
			cout << "   Aiden is a skilled archer known for his accuracy and agility." << endl;
			cout << "   He specializes in long-range combat," << endl;
			cout << "   using his bow and arrows to strike down enemies from a distance." << endl;
			cout << "   His keen eyes and precise shots make him an ideal choice for taking down elusive foes." << endl;
			cout << "   Level 1:" << endl;
			cout << setw(20) << left << "   Health: " << setw(5) << right <<"125"<< endl;
    		cout << setw(20) << left << "   Mana: " << setw(5) << right <<"90"<< endl;
    		cout << setw(20) << left << "   Signature Move: " << setw(10) << right <<"Multishot" ;
			displayPhrase("\n");
			cout << "\n2. Mighty" << endl;
			cout << "   Background:" << endl;
			cout << "   Mighty is a formidable fighter with unmatched strength and prowess in close-quarters combat." << endl;
			cout << "   Armed with a massive sword and clad in heavy armor." << endl;
			cout << "   He excels at overpowering enemies with his raw power and resilience." << endl;
			cout << "   Level 1:" << endl;
			cout << setw(20) << left << "   Health: " << setw(5) << right <<"135"<<endl;
    		cout << setw(20) << left << "   Mana: " << setw(5) << right <<"80"<<endl;
    		cout << setw(20) << left << "   Signature Move: " << setw(10) << right <<"Earthquake";
			displayPhrase("\n");
			cout << "\n3. Arcane" << endl;
			cout << "   Background:" << endl;
			cout << "   Arcane is a powerful mage who wields the forces of magic to devastating effect." << endl;
			cout << "   With her mastery of spells and arcane knowledge," << endl;
			cout << "   she can unleash powerful elemental attacks and control the flow of battle." << endl;
			cout << "   Level 1:" << endl;
			cout << setw(20) << left << "   Health: " << setw(5) << right <<"115"<< endl;
    		cout << setw(20) << left << "   Mana: " << setw(5) << right <<"85"<< endl;
    		cout << setw(20) << left << "   Signature Move: " << setw(10) << right <<"Fireball" ;
			displayPhrase("\n");
				
			while (!validChoice) {
	    		cout << "\nChoose a hero as your character(1-3): ";
	    		cin >> num;
	    		cout << endl;
	   			 switch (num) {
	    			case 1:
	           		 	player.setHero("Aiden", 125, 90, 5, 1);
	           		 	cout << "The Hero selected is: " << player.getName() << endl;
  			      		displayPhrase("\n");
	            		player.addMove("Multi-Shot", 25, 15, 1);
	        			player.addMove("Healing Touch", 40, 30, 2);
	        			player.addMove("Energy Revitalize", 65, 0, 5);
	            		validChoice = true;
	            		break;
	        		case 2:
	            		player.setHero("Mighty", 135, 80, 5, 1);
	            		cout << "The Hero selected is: " << player.getName() << endl;
	            		displayPhrase("\n");
	            		player.addMove("Eathquake", 20, 10, 1);
	            		player.addMove("Healing Touch", 40, 30, 2);
	        			player.addMove("Energy Revitalize", 65, 0, 5);
	            		validChoice = true;
	            		break;
	        		case 3:
	            		player.setHero("Arcane", 115, 85, 5, 1);
	            		cout << "The Hero selected is: " << player.getName() << endl;
	            		displayPhrase("\n");
	            		player.addMove("Fireball", 30, 20, 1);
	            		player.addMove("Healing Touch", 40, 30, 2);
	        			player.addMove("Energy Revitalize", 65, 0, 5);
	            		validChoice = true;
	            		break;
	        		default:
	            		cout << "Invalid choice. Please choose again." << endl;
	        	}

			}
		}
		
		void displayDestinationStory(int x){
			if (x == 0){
				cout << "The Crossroads of Shadows"<<endl;
				cout << "At the onset of your journey, you reach a crossroads where the path split into two. "<< endl;
				cout << "Here, you face a crucial decision. To your left, a menacing Zombie, stealthy and quick, await you." << endl;
				cout << "To your right, a formidable Werewolf, armored and powerful, stand in your way." << endl;
				cout << "You have the option to chooce between these two monsters. "<<endl;
				displayPhrase("\n");
				cout << endl;
			}
        		
    		else if (x == 1){
    			cout << "The Glade of Serenity"<<endl;
    			cout << "Continuing your path, you arrived at a serene glade bathed in soft sunlight." << endl;
				cout << "Here, you face another crossroads. On one side, a cunning Vampire, mischievous and agile, beckon you for a duel." << endl;
				cout << "On the other side, a massive Orc, resilient and mighty, challenge you. " << endl;
				cout << "You have to decide whether to face Vampire or Orc." << endl;
				displayPhrase("\n");
				cout << endl; 
			}
    		else if (x == 2){
    			cout << "The Haunted Hollows"<<endl;
    			cout << "Moving deeper into the Whispering Woods, you enter the Haunted Hollows, " << endl;
				cout << "a place shrouds in mist and haunts by ethereal spirits. At this destination, you encounter a new pair of adversaries." << endl;
				cout << "On one side, a fearsome Dragon, driven by primal instincts, prepare to clash." <<endl;
				cout << "On the other side,  a spectral Ghost, capable of draining life energy, await you." << endl;
				cout << "Once again, you have to choose between these two monsters. "<<endl;
				displayPhrase("\n");
				cout << endl; 
			}
    		else if (x == 3){
    			cout << "The Grove of Shadows"<<endl;
    			cout << "Finally, you arrive at the Grove of Shadows, a place where darkness reigns supreme." <<endl;
				cout << "Here, you confront the last pair of adversaries. On one side, a cunning Skeleton, wielding dark magic, challenge you." << endl;
				cout << "On the other side, a monstrous Witch, colossal and relentless, stand in your path." << endl;
				cout << "You have to decide whether to face Skeleton or Witch." << endl;
				displayPhrase("\n");
				cout << endl; 
			}
    		else if (x == 4){
    			cout << "The Icy Caverns"<<endl;
    			cout << "As you venture into the heart of the Frostbite Peaks, you reach the entrance of the Icy Caverns." << endl;
				cout << "Here, you face a critical decision. On one side, a swift and elusive Slime prowled, ready to strike with icy precision. "<< endl;
				cout << "On the other side, a colossal Troll, armed with brute strength, await you. " << endl;
				cout << "You have the choice to challenge the Slime or Troll" << endl;
				displayPhrase("\n");
				cout << endl; 
			}
    		else if (x == 5){
    			cout << "The Frozen Waterfalls"<<endl;
    			cout << "Continuing your ascent through the frozen peaks, you arrive at the majestic Frozen Waterfalls." << endl;
				cout << "Here, you encounter another crossroads. On one side, a nimble Gargoyle, adept at freezing its foes, stand defiantly." << endl;
				cout << "On the other side, a mighty Mummy, towering and relentless, await you. " << endl; 
				cout << "You have to decide whether to face the Gargoyle or Mummy" << endl;
				displayPhrase("\n");
				cout << endl; 
			}
    		else if (x == 6){
    			cout << "The Avalanche Pass"<<endl;
    			cout << "Navigating through treacherous avalanches, you enter the perilous Avalanche Pass, where danger lurked at every turn. " << endl;
				cout << "At this destination, you confront a new pair of adversaries. " << endl;
				cout << "On one side, a ferocious Cyclops, known for its brute strength and primal rage, await you. " << endl;
				cout << "On the other side, a cunning Specter, capable of casting deadly spells, challeng you." << endl;
				cout << "Once again, you have to choose between the Cyclops or Specter" << endl;
				displayPhrase("\n");
				cout << endl; 
			}
    		else if (x == 7){
    			cout << "The Summit of Frost"<<endl;
    			cout << "As you near the pinnacle of the Frostbite Peaks, you reach the Summit of Frost, " << endl;
				cout << "a place where blizzards raged and the cold was unforgiving. Here, you confront the last pair of adversaries. " << endl;
				cout << "On one side, a skilled Imp, adept at manipulating ice and frost, challeng you. " << endl;
				cout << "On the other side, an ancient Kraken, colossal and fierce, await your arrival." << endl;
				cout << "You have to decide whether to face the Imp or Kraken " << endl;
				displayPhrase("\n");
				cout << endl; 
			}
    		else if (x == 8){
    			cout << "The Scorched Ruins"<<endl;
    			cout << "Your journey through the Volcanic Abyss begin at the desolate Scorched Ruins, " << endl;
				cout << "where remnants of a once-great civilization lay in ashes. " << endl;
				cout << "Here, you face a crucial decision. " << endl;
				cout << "On one side, a relentless Serpent, wreathed in fire and fury, await you. " << endl;
				cout << "On the other side, a nimble Minotaur, capable of unleashing molten attacks, challenge you. " << endl;
				cout << "You have the option to face the Serpent or Minotaur" << endl;
				displayPhrase("\n");
				cout << endl; 
			}
    		else if (x == 9){
    			cout << "The Inferno Caves"<<endl;
    			cout << "Continuing your trek through the Volcanic Abyss, you descend into the fiery depths of the Inferno Caves, " << endl;
				cout << "where magma flow like rivers. Here, you encounter another crossroads. " << endl;
				cout << "On one side, a swift Giant, master of fire magic, await you. " << endl;
				cout << "On the other side, a colossal Banshee, imbued with the raw power of the volcano, stand in your path." << endl;
				cout << "You have to decide whether to face the Giant or Banshee" << endl;
				displayPhrase("\n");
				cout << endl; 
			}
    		else if (x == 10){
    			cout << "The Blazing Chasm"<<endl;
    			cout << "Venturing deeper into the Volcanic Abyss, you arrive at the Blazing Chasm, " << endl;
				cout << "a place where the ground crackle with heat and flames dance in the air." << endl;
				cout << "At this destination, you confront a new pair of adversaries. " << endl;
				cout << "On one side, a fearsome Wendigo, wreathed in scorching flames, await you." << endl;
				cout << "On the other side, a relentless Lich, fueled by volcanic fury, challenge you." << endl;
				cout << "Once again, you have to choose between the Wendigo and Lich" << endl;
				displayPhrase("\n");
				cout << endl; 
			}
    		else if (x == 11){
    			cout << "The Abyssal Forge"<<endl;
    			cout << "Finally, you reache the treacherous Abyssal Forge, " << endl;
				cout << "a place where the very essence of the volcano is harnessed for nefarious purposes. " << endl;
				cout << "Here, you confront the last pair of adversaries." << endl;
				cout << "On one side, a cunning Succubus, skilled in the arts of pyromancy, stand defiantly. " << endl;
				cout << "On the other side, a monstrous Yeti, forged from the volcanic rock itself, await your arrival." << endl;
				cout << "You have to decide whether to face the Succubus or Yeti" << endl;
				displayPhrase("\n");
				cout << endl;
			}			
		}
		
		void progressDecision(int &progress,int &destination){
			int monsterChoice;
			int choose;
			if(progress==0){
				destination=0;
				cout << "Centaur have been sealed away in a dimensional rift, guarded by his loyal minions and powerful monsters." << endl;
				cout << "To lead to the dimensional rift, you have 3 paths to choose."<<endl;
				cout << "Each imbue with its own unique challenges and guardians. " << endl;
				displayPhrase("\n");
				cout << endl;
				cout << "Path 1: Whispering Woods" << endl;
				cout << "A place where shadows danced and whispers echoed through the trees." << endl;
				cout << "Here, the monsters employ tactics like ambushes, draining life force, " << endl;
				cout << "and overwhelming you with their numbers, making every step perilous." << endl;
				cout << "You must contend with treacherous paths, hidden traps, and deceptive illusions." << endl;
				cout << "In this path, 4 stations that awaited you namely: " << endl;
				cout << "1) The Crossroads of Shadows" << endl;
				cout << "2) The Glade of Serenity" << endl;
				cout << "3) The Haunted Hollows" << endl;
				cout << "4) The Grove of Shadows" << endl;
				displayPhrase("\n");
				cout << endl;
				cout << "Path 2: Frostbite Peaks" << endl;
				cout << "A land of icy cliffs and biting winds." << endl;
				cout << "Here, the monsters possess icy attacks, heightened agility, and the ability to conjure blizzards, " << endl;
				cout << "making it crucial for you to withstand their assaults and endure the physical strain of the harsh environment. " << endl;
				cout << "You must navigate treacherous icy caverns, frozen waterfalls, and perilous cliffs, " << endl;
				cout << "all while battling resilient monsters adapted to the extreme cold." << endl;
				cout << "In this path, 4 stations that awaited you namely: " << endl;
				cout << "1) The Icy Caverns" << endl;
				cout << "2) The Frozen Waterfalls" << endl;
				cout << "3) The Avalanche Pass" << endl;
				cout << "4) The Summit of Frost" << endl;
				displayPhrase("\n");
				cout << endl;
				cout << "Path 3: Volcanic Abyss" << endl;
				cout << "A realm of searing lava and volcanic eruptions." << endl;
				cout << "Here, the monsters that dwell within these fiery depths have adapted to the extreme conditions, " << endl;
				cout << "exhibiting fire resistance, powerful flame-based attacks, and the ability to manipulate molten rock. " << endl;
				cout << "You must withstand the scorching heat and avoid being consumed by the relentless infernos in order to press forward." << endl;
				cout << "In this path, 4 stations that awaited you namely: " << endl;
				cout << "1) The Scorched Ruins" << endl;
				cout << "2) The Inferno Caves" << endl;
				cout << "3) The Blazing Chasm" << endl;
				cout << "4) The Abyssal Forge" << endl;
				cout << endl;
				displayPhrase("\n");
	        	cout << "Choose which path do you want(1-3): ";
	        	cin >> choose;
	        	cout << endl;
				if(choose==1){
					displayDestinationStory(destination);
					progress =1;
				}
				else if (choose==2){
					displayDestinationStory(destination+4);
					progress =9;
				}
				else if(choose==3){
					displayDestinationStory(destination+8);
					progress=17;
				}
				
				do{
					cout<<"Choose first or second monster: ";
			    	cin >> monsterChoice;

			    	if(monsterChoice==2){
			   		 	progress +=1 ;
					}
					else if(monsterChoice!=1 && monsterChoice!=2)
						cout<<"Invalid Choice. Pick again!"<<endl;	
				}while(monsterChoice!=1 && monsterChoice!=2);	
				return;
			}
			
			else if(progress==7 ||progress==8 ||progress==15 ||progress==16 || progress==23 ||progress==24){
				cout << "You have defeated all the monsters!"<<endl;
				cout << "Go ahead, you will meet the Centaur" << endl;
				cout << "It's time to bring peace back to the realm of Everlund and vanquish the ancient menace once and for all." << endl;
				cout << endl;
				cout << "Final Boss: " << monster[25].getName() <<endl;
				progress = 25;
				return;
			}
			else{
					destination++;
					displayDestinationStory(destination);
				do{		
			    	cout<<"Choose first or second monster: ";
			    	cin >> monsterChoice;
			    	if(monsterChoice==1){
			    		if(progress%2!=0){
			   		 		progress +=2;
						}
						else{
							progress +=1;
						}
					}
			    	else if(monsterChoice==2){
						if(progress%2!=0){
			   		 		progress +=3;
						}
						else{
							progress +=2;
						}
					}
					else
						cout<<"Invalid Choice. Pick again!"<<endl;
				 
				}while( monsterChoice!=1 && monsterChoice!=2);
			}
		}
		
		void generateMoves(){
			Move list[12];
			list[0] = Move("Luminous Nova", 54, 55, 1);
			list[1] = Move("Guardian's Hammer", 47, 40, 1);
			list[2] = Move("Radiant Blast", 42, 30, 1);
			list[3] = Move("Justice's Judgment", 35, 22, 1);
			list[4] = Move("Heroic Strike", 30, 15, 1);
			list[5] = Move("Renewed Spirit", 80, 80, 2);
			list[6] = Move("Regeneration", 65, 65, 2);
			list[7] = Move("Divine Blessing", 50, 45, 2);
			list[8] = Move("Elemental Barrage", 60, 40, 3);
			list[9] = Move("Rampage", 35, 20, 3);
			list[10] = Move("Deflecting Aura", 40, 60, 4);
			list[11] = Move("Eternal Ward", 25, 40, 4);
			
			for(int i=0;i<12;i++){
				availableMoves.insertNode(list[i]);
			}              				
		}
		
		void adventure(int &progress){
			generateMoves();
			generateMonster();
			bool result = false;
			bool quit = false;
			cout << endl;
			char choice;
			int monsterChoice;
			int destination;
			while (!quit){				
        		if(progress==25&&result){
        			cout << "Victory..." <<endl;
        			displayPhrase("\n");
        			cout << "You finally confront the fearsome Centaur " <<endl;
        			cout << "In the wake of your victory, the realm of Everlund experience a newfound era of peace and prosperity. " << endl;
					cout << "The people rebuilt their lives, their homes, and their communities, " << endl;
					cout << "knowing that they are safe from the ancient menace that have once threatened their existence." << endl;
					displayPhrase("\n");
        			return;
				}
				displayPhrase("\n");
				cout << "-------------------------------"<<endl;
        		cout << "What would you like to do next?" << endl;
        		cout << "1. Continue the adventure" << endl;
        		cout << "2. Show player's information" << endl;
        		cout << "3. Add new moves" << endl;
        		cout << "4. Save your progress" << endl;
        		cout << "5. Quit"<< endl;
        		cout << "-------------------------------"<<endl;
        		cout << "Enter your choice: ";
        		cin >> choice;
        		cout << endl;
				
        		switch (choice) {
            		case '1':
						if(result){
							if(progress>=0 && progress<=24){
								progressDecision(progress,destination);
							}
							else
								cout << "Invalid choice. Please try again." << endl;
						}

						if(progress==0){
    						cout << "Your adventure begins here..............." << endl;
    						cout << endl;
    						cout << "As you begin your quest in the realm of Everlund, you venture into a dense forest, " << endl;
							cout << "uncertain of what lay ahead. It is within these mysterious woods that you encounter a mischievous Goblin, " << endl;
							cout << "lurking in the shadows. The Goblin challenge you for a duel."<< endl;
    						cout << endl;
						}
						result = battle(progress);
                		break;
           			case '2':
						cout << "Player Info" <<endl;
						cout << "--------------------"<< endl;
						player.displayInfo();
						cout << "--------------------"<< endl;
						displayPhrase("\n");
                		player.displayMoves();
                		break;
                	case '3':
						learnMove();
						break;	
            		case '4':
            			cout <<"Saving your game..........." << endl;
        				saveGame(progress);
                		break;
                	case '5':
                		quit = true;
                		player.clearMove();
                		break;
            		default:
                		cout << "Invalid choice. Please try again." << endl;
               		break;
        		}
			}
		}
		
		void learnMove(){
			Move newMove;
			int newChoice;
			cout << "Max moves : 5 "<< "            Moves to add: "<< (player.getLevel()-player.getMoveLevel())/3 << endl;
			cout << "Available new moves: "<<endl;
			cout << "-------------------------------------------------------------"<< endl;
			availableMoves.displayList();
			cout << "-------------------------------------------------------------"<< endl;
			cout << "-1. Return and not add moves" <<endl;
			displayPhrase("\n");
			if(player.getLevel()-3>=player.getMoveLevel()){;
				do{
					cout << "Which move do you want to add? (1-"<<availableMoves.getNum()<<") : ";					
					cin >> newChoice;
					if(newChoice == -1){
						cout << "Back to the game....." << endl;
						return;
					}
					else if(newChoice>=0&&newChoice<=availableMoves.getNum()){
						// Add the selected move to the player's move list
						newMove = availableMoves.getMove(newChoice); 
						player.addMove(newMove.getName(), newMove.getValue(), newMove.getMana(), newMove.getType());
						// Remove the added move from the available moves list
						player.addMoveLevel();
					}
					else{
						cout << "Invalid Choice. Try again."<< endl;
						cout << endl;
					}
				}while(newChoice!=-1 && (newChoice<=0||newChoice>availableMoves.getNum()));
				
			}
			else{
				cout << "No moves to add. Level up and then come back."<<endl;
			}
		}
		
		bool battle(int i){
			string mName = monster[i].getName();
			double mHealth = monster[i].getHealth();
			double mAttack = monster[i].getAttack();
			int mExp = monster[i].getExp();
			
			double health = player.getHealth();
			double mana = player.getMana();
			
			double attBuff = 1;
			double dfsBuff = 1;
	 // Display battle information
    		cout << "Prepare for battle against "<< mName <<"!" << endl;
   			cout << endl;
			
    // Battle loop
   			while (health > 0 && mHealth > 0){
        // Display player and monster information
        		cout << "---------------------------------------------------------------------------------------------"<<endl;
       			cout << "Hero: " << player.getName() << " | Health: " << health <<"/"<<player.getHealth()
				<< " | Mana: "<<mana<<"/"<< player.getMana() <<" | Attacking Buff: "<< (attBuff-1)*100 <<"% | Defensive Buff: "<< (1-dfsBuff)*100 <<"%"<< endl;
        		cout << "Monster: "<<mName << " | Health: " << mHealth <<endl;
        		cout << "---------------------------------------------------------------------------------------------"<<endl;
        		displayPhrase("\n");

        // Player's turn
        		int moveChoice;
        		cout << "Choose a move to attack: " << endl;
        		cout << "------------------------------------------------------------"<<endl;
        		player.displayMoves();
        		cout << "------------------------------------------------------------"<<endl;
        		cout << "Your move: ";
        		cin >> moveChoice;
        		cout << endl;

        // Validate move choice
        		if (moveChoice < 1 || moveChoice > player.countMove()){
            		cout << "Invalid move choice. Please try again." << endl;
            		continue;
        		}
        // Get the chosen move
        		Move playerMove = player.currentMove(moveChoice);
				if(playerMove.getMana()>mana){
					cout<<"Mana not enough. Please select another move."<<endl;
					continue;
				}
				mana -= playerMove.getMana();
        
        		if(playerMove.getType()==1){ // Inflict damage on the monster
        			double prevHealth = mHealth;
					mHealth -= playerMove.getValue()*attBuff;
        			cout<< player.getName() <<" attacks with " << playerMove.getName() << " for " << playerMove.getValue()*attBuff << " damage!" << endl;
					if (mHealth<0)
						cout << "Player Health: "<<prevHealth<<" --> 0" << endl;
					else
						cout << "Monster Health: "<<prevHealth<<" --> "<< mHealth <<endl;
				}
				else if(playerMove.getType()==2){ // Heal player's health
					double prevHealth = health;
					health += (playerMove.getValue()/100) * player.getHealth();
					if(health>=player.getHealth()){
						health = player.getHealth();
					}
					cout << player.getName() <<" heals himself with " << playerMove.getName() << " to regain " << health-prevHealth << " health!" << endl;
					cout << "Player Health: "<< prevHealth <<" --> "<< health <<endl;
				}
				else if(playerMove.getType()==3){ // Gain attacking buff
					double prevABuff = attBuff;
					attBuff += (playerMove.getValue()/100);
					cout << player.getName() <<" uses " << playerMove.getName() << " to gain " << playerMove.getValue() << "% attacking buff!" << endl;
					cout << "Attacking buff: "<< prevABuff <<" --> "<< attBuff <<endl;
				}
				else if(playerMove.getType()==4){ // Gain defense buff
					double prevDBuff = dfsBuff;
					dfsBuff -= (playerMove.getValue()/100);
					cout << player.getName() <<" uses " << playerMove.getName() << " to gain " << playerMove.getValue() << "% defensive buff!" << endl;
					if(dfsBuff<=0.4){
						cout << "Defense buff is limited at 0.4 "<< endl;
						dfsBuff = 0.4;
					}
					cout << "Defensive buff: "<< prevDBuff <<" --> "<< dfsBuff <<endl;
				}
				else if(playerMove.getType()==5){
					double prevMana = mana;
					mana += playerMove.getValue();
					if(mana >= player.getMana()){
						mana = player.getMana();
					}
					cout << player.getName() <<" uses "<<playerMove.getName() << "to regain "<< mana-prevMana << " mana!"<<endl;
				}				
					displayPhrase("\n");
        		// Check if the monster is defeated
        		if (mHealth <= 0){
            		cout << "You defeated " << mName << "!" << endl;
            		cout << player.getName()<<" gained "<< mExp <<" exp."<<endl;
            		player.addExp(mExp);
            		cout << "Moves to add: "<< (player.getLevel()-player.getMoveLevel())/3;
            		displayPhrase("\n");		
      				return true;
        		}

       			// Monster's turn
        		double prevHealth = health;
				health -= mAttack*dfsBuff;
				cout << mName <<" hits "<< player.getName() << " for "<<mAttack*dfsBuff<<" damage!" << endl;
				if (health<0)
					cout << "Health: "<<prevHealth<<" --> 0" << endl;
				else
					cout << "Health: "<<prevHealth<<" --> "<< health <<endl;

        		// Check if the player is defeated
		        if (health <= 0){
		            cout << "You have been defeated. Try again later!" << endl;
		            cout << "Maybe try to learn more powerful moves before coming back."<< endl;
		            return false;
		        }	
		        displayPhrase("\n");
		        double prevMana = mana;
		        mana += 5;
		        if(mana>=player.getMana()){
							  mana = player.getMana();
				}

      		}
      		return false;
    	}
    	
    	void saveGame(int progress){
    		ofstream outFile ("Progress.txt");
    		if (outFile.is_open()) {
	            cout << "Progress saved successfully." << endl;

	            outFile << progress << endl;
	            outFile << player.getName() << endl;
	            outFile << player.getHealth() << endl;
	            outFile << player.getMana() << endl;
	            outFile << player.getExp() << endl;
	            outFile << player.getLevel() << endl;
	            outFile << player.getMoveLevel() << endl;
	            
				outFile << player.countMove() << endl;
				
				for(int i=0;i<player.countMove();i++){
					Move playerMove = player.currentMove(i+1);
					outFile << playerMove.getName() << endl;
					outFile << playerMove.getValue() << endl;
					outFile << playerMove.getMana() << endl;
					outFile << playerMove.getType() << endl;
				}
	            // Close the file
	            outFile.close();
				cout << endl;
	        } else {
	            cout << "Error: Unable to save progress." << endl;
	        }
		}
    	
   		void loadGame(int &progress) {
	        ifstream inFile("Progress.txt");
	
	        if (inFile.is_open()) {
	
	            string name;
	            double health;
	            double mana;
	            int exp;
	            int level;
	            int moveLevel;
	            int prog;
				
				inFile >> prog;
				progress = prog;
				
				inFile >> name;
	            inFile >> health;
	            inFile >> mana;
	            inFile >> exp;
	            inFile >> level;
	            inFile >> moveLevel;
	
				player.setHero(name, health, mana, exp, level, moveLevel);
				int count;
				inFile >> count;
				
				for(int i=0;i<count;i++){
					string name;
					double value;
					double mana;
					int type;
					inFile.ignore();
					getline(inFile,name);
					inFile >> value;
					inFile >> mana;
					inFile >> type;
					player.addMove(name, value, mana, type);
				}
				cout << endl;
	            // Close the file
	            inFile.close();
	
	            cout << "Progress loaded successfully." << endl;
	            adventure(progress);
	        } 
			else {
            	cout << "Error: Unable to load progress." << endl;
       		}	
    	}
};

#endif
