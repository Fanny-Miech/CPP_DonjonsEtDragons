#include <iostream>
#include <string>
#include "Personnage.h"
#include "display.h"
#include "playgame.h"

using namespace std;

int main() {
    PlayGame newPart;
    
    welcome();
    newPart.playGame();
    goodBye();
    return 0;
}