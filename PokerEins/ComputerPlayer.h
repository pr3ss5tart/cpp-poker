#pragma once
#include "player.h"


class ComputerPlayer : public Player
{

public:
	ComputerPlayer(string playerName) : Player(playerName) {

	}

	~ComputerPlayer(void);


	// virtual see player 
	Actions playActionStep( Table * table ) ;

};

