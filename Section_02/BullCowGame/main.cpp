#include <iostream>
#include <string>

using namespace std;

//Declarations of functions
void PrintIntro();
void PlayGame();
string GetGuess(int attemp);
bool AskToPlayAgain();

//The entry point of our application
int main()
{	
	PrintIntro();
	PlayGame();
	AskToPlayAgain();

	return 0; //exit the application
}

void PlayGame()
{
	//Loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;

	for (int i = 1; i <= NUMBER_OF_TURNS; i++) {
		string guess = "";
		guess = GetGuess(i);
		//print the guess back
		cout << "Your guess was: " << guess;
		cout << "\n\n";
	}
	cout << "\n";
}

//Introduce the game
void PrintIntro() {
	
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game \n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";

	return;
}


string GetGuess(int attemp) {
	
	//Get a guess from the user
	cout << "Enter to guess " << attemp << " :";
	string guess = "";
	getline(cin, guess);
	return guess;
}

bool AskToPlayAgain()
{

	return false;
}
