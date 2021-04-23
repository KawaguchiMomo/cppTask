#include <iostream>
#include <cstdlib>
#include "gameManager.h"


// コンストラクタ
CGameManager::CGameManager(){}
// デストラクタ
CGameManager::~CGameManager(){}

// 現在のターンのプレイヤーネーム出力
void CGameManager::printTurnPlayer(const string& player) const
{
    cout << "ターンプレイヤー: " << player << endl;
    
}

// 現在のターンを表示する
void CGameManager::printTurn(const int turn) const
{
    cout << turn << " ターン目" << endl;
}

// 入力キー見本を表示
void CGameManager::printManual() const
{
    cout << "↓対応キー" << endl;
    cout << "123" << endl;
    cout << "456" << endl;
    cout << "789" << endl;
}


// 勝利表示、終了
void CGameManager::victory(const string& player) const
{
    cout << "プレイヤー " << player << " の勝利！" << endl;
    exit(0);
}

// 引き分け表示、終了
void CGameManager::draw() const
{
    cout << "引き分け！" << endl;
    exit(0);
}
