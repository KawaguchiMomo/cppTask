#include <iostream>
#include <stdlib.h>

#include "gameField.h"
#include "player.h"
#include "turn.h"

using namespace std;

int main(){
    // // 下記やり方とnewを使わないやり方は何が違うのか
    // CGameField *cGameField;
    // cGameField = new CGameField();

    CGameField cGameField;
    CPlayer cPlayer;
    CTurn cTurn;

    for(int i = 0;i<10;i++){
        // ターン数を表示
        cTurn.printTurn();

        // ターンプレイヤー表示
        cPlayer.printTarnPlayer(cTurn.getTurn());

        // 盤面全体を表示
        cGameField.printField();

        // 盤面に挿入
        
        cGameField.putSimbolToBlock(cGameField.inputSimbol(),cPlayer.getTarnPlayer(cTurn.getTurn()));

        // 勝利処理
        // todo: 他クラスに移動させるか、勝利、引き分け処理のクラスを作るか？
        if(cGameField.scanField()){
            cGameField.printField();
            cout << cPlayer.getTarnPlayer(cTurn.getTurn()) << "の勝利！" << endl;
            exit(0);
        }

        // ターンを進める
        cTurn.turnNext();
    }



}