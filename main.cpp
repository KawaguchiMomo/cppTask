#include <iostream>
#include <cstdlib>

#include "gameField.h"
#include "player.h"
#include "turn.h"
#include "gameManager.h"

using namespace std;

int main(){
    CGameField cGameField;
    CPlayer cPlayer;
    CTurn cTurn;
    CGameManager cGameManager;

    int turn = cTurn.getTurn();
    string turnPlayer = cPlayer.getTurnPlayer(turn);

    while(1){
        // 現在ターンとターンプレイヤーの取得
        turn = cTurn.getTurn();
        turnPlayer = cPlayer.getTurnPlayer(turn);

        // ターン数を表示
        cGameManager.printTurn(turn);

        // ターンプレイヤー表示
        cGameManager.printTurnPlayer(turnPlayer);

        // 盤面全体を表示
        cGameField.printField();

        // 入力キー見本表示
        cGameManager.printManual();

        // 入力受け付け
        int inputSymbol = cGameField.inputSymbol();

        // 盤面に挿入
        cGameField.putSymbolToBlock(inputSymbol,turnPlayer);

        cout << "-------------------------------------" << endl;

        // 勝利判定
        if(cGameField.scanField()){
            cGameField.printField();
            cGameManager.victory(turnPlayer);
        }

        // 引き分け判定
        if(!cGameField.existEmptyBlock()){
            cGameField.printField();
            cGameManager.draw();
        }

        // ターンを進める
        cTurn.turnNext();
    }



}