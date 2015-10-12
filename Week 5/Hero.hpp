/*********************
 * Name: John R Toth
 * Date: 2/4/15
 * Description: Hero exercise, hero.hpp file
 ********************/

//header file --> Fn declarations

#include <iostream>

using namespace std; 

#ifndef Hero_H
#define Hero_H

class Hero{
public: 

	//default constructor
	Hero();
	
	//destructor fn
	~Hero();

	//accessor fns
	int getStrength() const;
	//getStrength - returns strength of hero
	
	int getHitPoints() const;
	//getHitPoints - return Hit Points of hero
	
	int getSpeed() const;
	//getSpeed - return Speed of hero
	
	int getMoney() const;
	//getMoney - return value of hero's money
	
	int getDamage() const;
	//getDamage - return damage
	
	//mutator fns - fns that allow us to edit member variables
	void setStrength(int);
	//setStrength - sets hero's strength
	//@param int - hero's strength
	void setHitPoints(int);
	//setHitPoints - sets hit points
	void setSpeed(int);
	//setSpeed - sets speed of hero
	//@param int - speed of hero
	void setMoney(int);
	//setMoney - sets hero's money
	//@param int - hero's money
	void settakeDamage(int);
	//calculate damage hero sustains 
	//@param int - hero's damage

private: 
	//member variables
	int newStrength;
	int newHitPoints;
	int newSpeed;
	int newMoney;
};
#endif
