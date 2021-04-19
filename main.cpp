#include <iostream>

#include "gameField.h"
#include "player.h"

using namespace std;

int main(){
    CGameField *cGameField;
    cGameField = new CGameField();
    // 盤面全体を表示
    cGameField->getField();
    delete cGameField;
}