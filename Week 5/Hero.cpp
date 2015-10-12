/********************
 * Name: John R Toth
 * Date: 2/4/15
 * Description: Hero exercise, hero.cpp file
 *******************/

#include "Hero.hpp"

Hero::Hero() {
	newStrength = 1;
	newHitPoints = 1;
	newSpeed = 1;
	newMoney = 1;
}
//destructor fn
Hero::~Hero() {

}
//accessor fn 'getStrength'
int Hero::getStrength() const {
	return newStrength;
}
//accessor fn 'getHitPoints'
int Hero::getHitPoints() const {
	return newHitPoints;
}
//accessor fn 'getSpeed'
int Hero::getSpeed() const {
	return newSpeed;
}
//acessor fn 'getMoney'
int Hero::getMoney() const {
	return newMoney; 
}
//member variable newStrength gets changed to the input param, strength 
void Hero::setStrength(int strength) {
	newStrength = strength;
}
//member variable newHitPoints gets changed to the input param, hitpoints

void Hero::setHitPoints(int hitpoints) {
	newHitPoints = hitpoints;
//void Hero::setHitPoints(int hitpoints, int takedamage) {
//	newHitPoints = hitpoints - takedamage;
}
//member variable newSpeed gets changed to the input param, speed
void Hero::setSpeed(int speed) {
	newSpeed = speed;
}
//member variable newMoney gets changed to the input param, money
void Hero::setMoney(int money) {
	newMoney = money;
}
//damage fn
//int  Hero::takeDamage(int& ) {
//	newDamage = takedamage;

/****************************************************
 *			Main			    *	
 *			 Fn			    *	
 ***************************************************/

int main()
{
	//main fn variable definitions
	int i;
	int strength;
	int hitpoints;
	int speed;
	int money;
	int takedamage;
	
	cout <<"How much strength does the hero have? \n";
	cin  >>strength;

	cout <<"How many hit points should the hero have? \n";
	cin  >>hitpoints;
	cout <<"How much speed should the hero have? \n";
	cin  >>speed;
	cout <<"How much money should the hero have? \n$";
	cin  >>money;
do{
	//sets user input to mutator fns
Hero Life_1;
	Life_1.setStrength(strength);
	Life_1.setHitPoints(hitpoints);
	Life_1.setSpeed(speed);
	Life_1.setMoney(money);

	cout <<"How much damage?\n";
	cin  >>takedamage;
	
	i = (Life_1.getHitPoints() - takedamage); 

cout	<<"Your Hero's attributes:\n"
	<<"Strength: "<< Life_1.getStrength() <<endl<<"HitPoints: "<< i
	<<endl<<"Speed: "<<Life_1.getSpeed() <<endl<<"Money: "
	<<Life_1.getMoney()<<endl;
	//decrement hitpoints, based on user input
	hitpoints--;

	if (i >=1)
		
		cout <<"The Hero survived the blow!\n";
}
while(i > 0);
	cout <<"The Hero perished in honor\n";
return 0;
}
