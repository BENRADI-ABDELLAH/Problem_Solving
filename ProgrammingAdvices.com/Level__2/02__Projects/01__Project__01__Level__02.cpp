#include<iostream>
#include<cstdlib>
using namespace std;

enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3 };
enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

struct stRoundInfo {

	short RoundNumber = 0;
	enGameChoice Player1Choice;
	enGameChoice ComputerChoice;
	enWinner Winner;
	string WinnerName;

};
struct stGameResults {

	short GameRounds = 0;
	short Player1WinTimes = 0;
	short Computer2WinTimes = 0;
	short DrawTimes = 0;
	enWinner GameWinner;
	string WinnerName = "";

};
int RandomNumber(int From, int To) {
	//Function to generate a random number 
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}
string WinnerName(enWinner Winner) {

	string arrWinnerName[3] = { "Player1","Computer","No Winner" };

	return arrWinnerName[Winner - 1];

}
enWinner WhoWonTheRound(stRoundInfo RoundInfo) {

	if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice) {
		return enWinner::Draw;
	}

	switch (RoundInfo.Player1Choice) {
	case enGameChoice::Stone:
		if (RoundInfo.ComputerChoice == enGameChoice::Paper) {
			return enWinner::Computer;
		}
		break;
	case enGameChoice::Paper:
		if (RoundInfo.ComputerChoice == enGameChoice::Scissors) {
			return enWinner::Computer;
		}
		break;
	case enGameChoice::Scissors:
		if (RoundInfo.ComputerChoice == enGameChoice::Stone) {
			return enWinner::Computer;
		}
		break;
	}

	return enWinner::Player1;
}

