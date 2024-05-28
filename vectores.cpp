#include<iostream>
#include<string>
using namespace std;
void mostrar(string vector[4][4]){
	for(int i = 0; i<4; i++){
		for(int j = 0; j<4; j++){
			cout << vector[i][j] << "\t";
		}
		cout << "\n";
	}
}
int main(){
	
	// We put "1" to indicate there is a ship.
bool ships[4][4] = {
  { 0, 1, 0, 1 },
  { 0, 0, 0, 0 },
  { 1, 0, 0, 0 },
  { 0, 0, 1, 0 }
};
string ships2[4][4] = {
	{"_", "_", "_", "_"},
	{"_", "_", "_", "_"},
	{"_", "_", "_", "_"},
	{"_", "_", "_", "_"}
};

// Keep track of how many hits the player has and how many turns they have played in these variables
int hits = 0;
int numberOfTurns = 0;

// Allow the player to keep going until they have hit all four ships
while (hits < 4) {
  int row, column;

  cout << "Selecting coordinates\n";

  // Ask the player for a row
  cout << "Choose a row number between 0 and 3: ";
  cin >> row;

  // Ask the player for a column
  cout << "Choose a column number between 0 and 3: ";
  cin >> column;

  // Check if a ship exists in those coordinates
  if (ships[row][column]) {
    // If the player hit a ship, remove it by setting the value to zero.
    ships[row][column] = 0;

    // Increase the hit counter
    hits++;

    // Tell the player that they have hit a ship and how many ships are left
    cout << "Hit! " << (4-hits) << " left.\n\n";
    ships2[row][column] = "O";
    mostrar(ships2);
  } else {
    // Tell the player that they missed
    cout << "Miss\n\n";
    ships2[row][column] = "X";
    mostrar(ships2);
  }

  // Count how many turns the player has taken
  numberOfTurns++;
}

cout << "Victory!\n";
cout << "You won in " << numberOfTurns << " turns";
}
