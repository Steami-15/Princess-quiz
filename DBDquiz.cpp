#include<iostream>
using namespace std;

//Gabe 09/23/24 and i did the princess quiz project but instead its Dead By Daylight killers where you answer a set of questions to find out which DBD killer you are





int main() { // this is the module IT IS NEEDED for every single program
	int Trickster = 0; // these are the variables for the different killers you can be
	int Legion = 0;
	int Leather = 0;
	int Huntress = 0;
	int Blight = 0;
	int Dracula = 0;
	string answer; // this is for when someone answers a question


	cout << "whats your favorite weapon (crowbar, chainsaw, knife, hatchet, cards, hands)" << endl; // question 1
	cin >> answer;

	if (answer == "crowbar") // if you answer "crowbar" then the program will add to the blight character
		(Blight += 1);

	else if (answer == "chainsaw")
		(Leather += 1);

	else if (answer == "knife")
		(Legion += 1);

	else if (answer == "hatchet")
		(Huntress += 1);

	else if (answer == "cards")
		(Trickster == 1);

	else if (answer == "hands")
		(Dracula += 1);

	else
		cout << "sorry, not an option" << endl; // skips to the next question and doesnt add to any of the characters

	cout << " " << endl; // skips a line

	cout << "what food do you like (any, human, energydrink, deer, rice, blood)" << endl; // question 2
	cin >> answer;

	if (answer == "any")
		(Blight += 1);

	else if (answer == "human")
		(Leather += 1);

	else if (answer == "energydrink")
		(Legion += 1);

	else if (answer == "deer")
		(Huntress += 1);

	else if (answer == "rice")
		(Trickster += 1);

	else if (answer == "blood")
		(Dracula += 1);

	cout << "" << endl;


	cout << "what superpower do you wish you had (speed, balance, energy, aim, reaction, fire" << endl; // question 3
	cin >> answer;

	if (answer == "speed")
		(Blight += 1);

	else if (answer == "balance")
		(Leather += 1);

	else if (answer == "energy")
		(Legion += 1);

	else if (answer == "aim")
		(Huntress += 1);

	else if (answer == "reaction")
		(Trickster == 1);

	else if (answer == "fire")
		(Dracula += 1);

	else
		cout << "sorry, not an option" << endl;

	cout << " " << endl;

	cout << "whats your hair color (blonde, black, brown, red, orange, other)" << endl; // question 4
	cin >> answer;

	if (answer == "orange")
		(Blight += 1);

	else if (answer == "other")
		(Leather += 1);

	else if (answer == "black")
		(Legion += 1);

	else if (answer == "brown")
		(Huntress += 1);

	else if (answer == "blonde")
		(Trickster += 1);

	else if (answer == "red")
		(Dracula += 1);

	else
		cout << "sorry, not an option" << endl;

	cout << "" << endl;

	cout << "how dangerous do you think you are? (very, mid, nice)" << endl; // question 5
	cin >> answer;


	if (answer == "mid")
		(Leather += 1);

	else if (answer == "very")
		(Dracula += 1);

	else if (answer == "nice")
		(Legion += 1);

	

	else
		cout << "sorry, not an option" << endl;

	cout << " " << endl;

	cout << "do you like tea? (yes, no, idk)" << endl; // question 6
	cin >> answer;

	if (answer == "no")
		(Trickster += 1); // this adds to multiple characters if it applies to them

	else if (answer == "yes")
		(Huntress += 1);

	else if (answer == "idk")
		(Blight += 1);

	cout << "" << endl;

	cout << "whats your favorite color (green, orange, yellow, blue, red, pink)" << endl; // question 7
	cin >> answer;

	if (answer == "yellow")
		(Blight += 1);

	else if (answer == "orange")
		(Leather += 1);

	else if (answer == "green")
		(Legion += 1);

	else if (answer == "pink")
		(Huntress += 1);

	else if (answer == "blue")
		(Trickster += 1);

	else if (answer == "red")
		(Dracula += 1);

	else
		cout << "sorry, not an option" << endl;

	cout << " " << endl;

	cout << "how many siblings do you have (zero, one, two, three, four, more)" << endl; // question 8
	cin >> answer;

	if (answer == "more")
		(Blight += 1);

	else if (answer == "zero")
		(Leather += 1);

	else if (answer == "two")
		(Legion += 1);

	else if (answer == "one")
		(Huntress += 1);

	else if (answer == "three")
		(Trickster += 1);

	else if (answer == "four")
		(Dracula += 1);

	cout << "" << endl;


	cout << "how many friends do you have (none, one, two, three, four, more)" << endl; // question 9
	cin >> answer;

	if (answer == "one")
		(Blight += 1);

	else if (answer == "none")
		(Leather += 1);

	else if (answer == "three")
		(Legion += 1);

	else if (answer == "two")
		(Huntress += 1);

	else if (answer == "more")
		(Trickster += 1);

	else if (answer == "four")
		(Dracula += 1);

	else
		cout << "sorry, not an option" << endl;

	cout << " " << endl;

	cout << "whats your favorite drink (drpepper, sprite, pepsi, cocacola, rootbeer, water" << endl; // question 10 last question
	cin >> answer;

	if (answer == "cocacola")
		(Blight += 1);

	else if (answer == "drpepper")
		(Leather += 1);

	else if (answer == "sprite")
		(Legion += 1);

	else if (answer == "pepsi")
		(Huntress += 1);

	else if (answer == "water")
		(Trickster += 1);

	else if (answer == "rootbeer")
		(Dracula += 1);

	else
		cout << "sorry, not an option" << endl;

	if ((Trickster >= Legion) && (Trickster >= Leather) && (Trickster >= Huntress) && (Trickster >= Blight) && (Trickster >= Dracula)) { // the calculations needed to determine what character someone is at the end of the quiz
		cout << "you are a Trickster main which means you are sort of popular and friendly with others" << endl;
	}

	else if ((Legion >= Leather) && (Legion >= Huntress) && (Legion >= Blight) && (Legion >= Dracula)) {
		cout << "you are a Legion main which means you are energetic and quite clumsy but you are fun to be around" << endl;
	}

	else if ((Leather >= Huntress) && (Leather >= Blight) && (Leather >= Dracula)) {
		cout << "you are a leather face main which means you are weird but in a good way and you like interesting things" << endl;
	}

	else if ((Huntress >= Blight) && (Huntress >= Dracula)) {
		cout << "you are a huntress main which means whatever you do is mostly smart and accurate" << endl;
	}

	else if ((Blight >= Dracula)) {
		cout << "you are a blight main which means you are quick and decisive with choices" << endl;
	}

	else
		cout << "you are a Dracula main which means you can do things others cant and are usually the youngest in your friend group" << endl;

}
