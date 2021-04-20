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

    CGameField cGameField;
    CPlayer cPlayer;
    CTurn cTurn;

    for(int i = 0;i<3;i++){
        // ターン数を表示
        cTurn.printTurn();

        // ターンプレイヤー表示
        cPlayer.printTarnPlayer(cTurn.getTurn());

        // 盤面全体を表示
        cGameField.printField();

        // 盤面に挿入
        int blockNumber;
        cin >> blockNumber;
        cGameField.putSimbol(blockNumber,cPlayer.getTarnPlayer(cTurn.getTurn()));

        // ターンを進める
        cTurn.turnNext();
    }



}