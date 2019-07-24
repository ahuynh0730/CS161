/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/18/2018
** Description:  Box cpp file
*******************************************************************************/

#include <iostream>
#include "Player.hpp"
#include "Team.hpp"

using std::cout;
using std::endl;

int main()
{
	//Player player1("joe",2,3,4);
	//cout << player1.getPoints();
	Player p1("Charlotte", 24, 10, 7);
	Player p2("Emily", 21, 13, 9);
	Player p3("Anne", 20, 10, 8);
	Player p4("Jane", 19, 10, 10);
	Player p5("Mary", 18, 11, 8);
	p5.setRebounds(12);

	Team team1(p1, p2, p3, p4, p5);

	Player p = team1.getShootingGuard();
	cout << p.getName() << endl;
	return 0;
}