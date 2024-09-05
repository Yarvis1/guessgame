#include <iostream>
using namespace std;
int playerguess;
bool guessing;
int guesses;
int number;
char playAgain;
int main(){
  guessing=false;
  guesses=0;
  srand(time(NULL));
  number = rand() % 100-1;
  cout << "geuss a number";
  cin >> playerguess;
  guesses++;
  while(guessing== false){
    if(playerguess>number){
      cout<< "number too high";
      cin >> playerguess;
      guesses++;
    }
    if(playerguess==number){
      guessing=true;
      cout << "you guessed the number! it took you: " <<guesses <<" trys";
      cout<< "play again (y/n)";
      cin>>playAgain;
      if (playAgain=='y'){
	main();
      }
      else{
      }
    }
    if(playerguess<number){
      cout << "number too low";
      guesses++;
      cin >> playerguess;
    }
  }
}
