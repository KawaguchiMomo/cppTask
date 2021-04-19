#include <iostream>

#include "gameField.h"
#include "player.h"
#include "turn.h"

using namespace std;

int main(){
    // // 下記やり方とnewを使わないやり方は何が違うのか
    // CGameField *cGameField;
    // cGameField = new CGameField();
    // // 盤面全体を表示
    // cGameField->getField();
    // delete cGameField;

    CGameField cGamefield;
    CPlayer cplayer;
    CTurn cturn;

    for(int i = 0;i<3;i++){
        // ターン数を表示
        cturn.printTurn();

        // 盤面全体を表示
        cGamefield.printField();

        
        cplayer.printTarnPlayer(0);

        // ターンを進める
        cturn.turnNext();
    }



}