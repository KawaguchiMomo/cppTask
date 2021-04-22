#include <iostream>
#include <stdlib.h>
#include "gameManager.h"


// コンストラクタ
CGameManager::CGameManager()
{
    victoryMessage = "の勝利";
}
// デストラクタ
CGameManager::~CGameManager(){}

// 現在のターンのプレイヤーネーム出力
void CGameManager::printTurnPlayer(string player) const
{
    cout << player << "のターンです。" << endl;
    
}

// 現在のターンを表示する
void CGameManager::printTurn(int turn) const
{
    cout << "現在" << turn << "ターン目です。" << endl;
}

// 入力キー見本を表示
void CGameManager::printManual() const
{
    cout << "対応キー" << endl;
    cout << "123" << endl;
    cout << "456" << endl;
    cout << "789" << endl;
}


// 勝利表示、終了
void CGameManager::victory(string player) const
{
    cout << player << "の勝利！" << endl;
    exit(0);
}

// 引き分け表示、終了
void CGameManager::draw() const
{
    cout << "引き分け！" << endl;
    exit(0);
}
