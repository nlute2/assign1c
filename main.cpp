#include <iostream>

using namespace std;

int main()
{
  int teaspoons;
  cout << "Enter the number of teaspoons: "; //user inputs an integer number of teaspoons
  cin >> teaspoons;

  int tablespoons = teaspoons / 3; //do conversions
  teaspoons = teaspoons % 3;
  int cups = tablespoons / 16;
  tablespoons = tablespoons % 16;
  int quarts = cups / 4;
  cups = cups % 4;


  cout << quarts << " quart(s)" << cups << " cup(s)" << tablespoons << " tablespoons(s)" ;
}
