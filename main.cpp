#include <iostream>
#include "gameField.h"

using namespace std;

int main(){
    CGameField *cGameField;
    cGameField = new CGameField();
    
    cout << cGameField->getBlock() << endl;
    delete cGameField;
}