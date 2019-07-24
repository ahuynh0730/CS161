/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/18/2018
** Description:  Team hpp file
*******************************************************************************/

#ifndef TEAM_hpp
#define TEAM_hpp

#include "Player.hpp"
class Team {
private:
	Player pointGuard;
	Player shootingGuard;
	Player smallForward;
	Player powerForward;
	Player center;

public:
	Team(Player, Player, Player, Player, Player);
	void setPointGuard(Player);
	void setShootingGuard(Player);
	void setSmallForward(Player);
	void setPowerForward(Player);
	void setCenter(Player);
	Player getPointGuard();
	Player getShootingGuard();
	Player getSmallForward();
	Player getPowerForward();
	Player getCenter();
	int totalPoints();
};

#endif // !TEAM_hpp

