#include <iostream>

#include "gameField.h"
#include "player.h"

using namespace std;

int main(){
    // // 下記やり方とnewを使わないやり方は何が違うのか
    // CGameField *cGameField;
    // cGameField = new CGameField();
    // // 盤面全体を表示
    // cGameField->getField();
    // delete cGameField;

    CGameField cGamefield;

    // 盤面全体を表示
    cGamefield.printField();

    CPlayer cplayer;
    cplayer.printTarnPlayer(0);


}