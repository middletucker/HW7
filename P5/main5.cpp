/******************************************************************************
Description: Rock, Paper, Scissors, Lizard, Spock Game
This game is unfinished. Follow along with CSCI130_RockPaperScissors2.pdf to complete the game. 
Last Modified by: Lillian Tucker
Last Modified on: 10/2020
******************************************************************************/
// changed winner affirmations to incorporate arrays Celebrate();

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

//////////////////// Prototype Functions /////////////////////////////////////
void TranslatePick(int flag_who, char selection);
char ComputerSelectRPSLK();
char DetermineWinner(char userPick, char computerPick);
string Celebrate();

//////////////////// MAIN ////////////////////////////////////////////////////
int main() {
  // declare vars
  char userResult;
  char userPick; // user's selection for game
  bool valid_pick =
      false;         // flag controlled while loop for obtaining user input
  char computerPick; // randomly selected computer selection for game

  string CelebratoryPhrase;

  // Display rules of the game.
  cout << "It's time to play Rock, Paper, Scissors, Lizard, Spock!" << endl;
  cout << "Use R (for Rock), P (for Paper), S (for Scissors), ";
  cout << "L (for Lizard), and K (for Spock)." << endl;

  // Obtain userPick. Prompt until a valid selection is made.
  while (valid_pick == false) {
    cout << "You pick: ";
    cin >> userPick;

    if ((userPick == 'R') || (userPick == 'P') || (userPick == 'S') ||
        (userPick == 'L') || (userPick == 'K')) {
      valid_pick = true;
    } else
      cout << "Invalid Selection. Try again. " << endl;
  }

  // Repeat selection back to user.
  TranslatePick(0, userPick);

  // Obtain computer selection.
  computerPick = ComputerSelectRPSLK();
  TranslatePick(1, computerPick); // Inform user of computer selection

  // HANDOUT (PART A): Determine the winner of the game.
  // User picks R
  userResult = DetermineWinner(userPick, computerPick);

  // HANDOUT (PART B): Inform the user who won.
  if (userResult == 'W') {
    cout << "User Wins\n";
  } else if (userResult == 'L') {
    cout << "Computer Wins. Better luck next time! \n";
  } else if (userResult == 'T')
    cout << "Tie! \n";
  else
    cout << "Error \n";
  // HANDOUT (PART C): Randomly display celebratory messages if user won.
  // edited for array
  if (userResult == 'W') {
    CelebratoryPhrase = Celebrate();
    cout << CelebratoryPhrase << endl;
  }

  return 0;
}

/////////////// User-Created Functions ////////////////////////////////////////

/* Descprition: This function is used to translate the character selection to a
        statement which is displayed to the user.
   Parameters:  flag_who is an integer which is used to indicate if the computer
                         or the user made the choice.
                selection is one of the 5 valid character selections  */
void TranslatePick(int flag_who, char selection) {
  // declare local function variables
  string who_text;

  // identify which statements to insert into the output below
  if (flag_who == 0)
    who_text = "You";
  else
    who_text = "The Computer";

  // display output where the char selection is translated into words
  if (selection == 'R')
    cout << who_text << " selected Rock." << endl;
  else if (selection == 'P')
    cout << who_text << " selected Paper." << endl;
  else if (selection == 'S')
    cout << who_text << " selected Scissors." << endl;
  else if (selection == 'L')
    cout << who_text << " selected Lizard." << endl;
  else if (selection == 'K')
    cout << who_text << " selected Spock." << endl;
  else // something is wrong
    cout << "Check code for errors. Message from TranslatePick fcn." << endl;

  return;
}

/* Descprition: This function is used to make a random character selection in
   the game Rock, Paper, Scissors, Lizard, Spock Parameters:  there are no
   inputs */
char ComputerSelectRPSLK() {
  // declare local function variables
  char randPickChar;
  int randPick;

  // pick a random number from 0 to 4
  srand(time(NULL));     // initialize random seed.
  randPick = rand() % 5; // gives us 0 to 4
  // cout << randPick; // uncomment to debug

  // assign random number to letter
  switch (randPick) {
  case 0:
    randPickChar = 'R';
    break;
  case 1:
    randPickChar = 'P';
    break;
  case 2:
    randPickChar = 'S';
    break;
  case 3:
    randPickChar = 'L';
    break;
  case 4:
    randPickChar = 'K';
    break;
  default:
    cout << "Error in the function ComputerSelectRPSLK. " << endl;
  }

  return randPickChar;
}

char DetermineWinner(char userPick, char computerPick) {
  char userResult;
  if (userPick == 'R') {
    if (computerPick == 'R')
      userResult = 'T';
    else if (computerPick == 'S' || computerPick == 'L')
      userResult = 'W';
    else
      userResult = 'L';
  } else if (userPick == 'P') {
    if (computerPick == 'P')
      userResult = 'T';
    else if (computerPick == 'K' || computerPick == 'R')
      userResult = 'W';
    else
      userResult = 'L';
  } else if (userPick == 'S') {
    if (computerPick == 'S')
      userResult = 'T';
    else if (computerPick == 'L' || computerPick == 'P')
      userResult = 'W';
    else
      userResult = 'L';
  } else if (userPick == 'L') {
    if (computerPick == 'L')
      userResult = 'T';
    else if (computerPick == 'K' || computerPick == 'P')
      userResult = 'W';
    else
      userResult = 'L';
  } else if (userPick == 'K') {
    if (computerPick == 'K')
      userResult = 'T';
    else if (computerPick == 'S' || computerPick == 'R')
      userResult = 'W';
    else
      userResult = 'L';
  } else {
    userResult = 'E';
  }

  return userResult;
}

string Celebrate() // from ComputerSelectRPSLK()
{
  string randCelebrate;
  int randPick;

  // pick a random number from 0 to 4
  srand(time(NULL));     // initialize random seed.
  randPick = rand() % 5; // gives us 0 to 4
  // cout << randPick; // uncomment to debug

  string Celebrate[5] = {"Woohoo nice job!", "Great skill ;)", "Amazing!",
                         "Nice job winner! Keep the streak",
                         "Superb Performance :)"};

  // assign random number to letter
  cout << Celebrate[randPick];

  return randCelebrate;
}