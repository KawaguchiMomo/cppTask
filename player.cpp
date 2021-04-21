#include "player.h"


// コンストラクタ
CPlayer::CPlayer()
{
    player.push_back("x");
    player.push_back("o");
}

// デストラクタ
CPlayer::~CPlayer()
{}

// プレイヤーネーム取得
string CPlayer::getPlayer(int i) const
{
    return player[i];
}

// 現在のターンのプレイヤーの取得
string CPlayer::getTurnPlayer(int turn) const
{
    return player[turn%2];
}

// 現在のターンのプレイヤーネーム出力
void CPlayer::printTurnPlayer(int turn) const{
    cout << getTurnPlayer(turn) << "のターンです。" << endl;
}