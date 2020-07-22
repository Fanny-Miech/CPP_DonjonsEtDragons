#include <iostream>
#include <string>
#include "Personnage.h"
#include "display.h"
#include "playgame.h"


using namespace std;

int main() {

    PlayGame newPart;
    
    Display::welcome();
    newPart.playGame();
    Display::goodBye();

    return 0;
}