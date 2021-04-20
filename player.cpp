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
string CPlayer::getPlayer(int i)
{
    return player[i];
}

// 現在のターンのプレイヤーの取得
string CPlayer::getTarnPlayer(int turn)
{
    return player[turn%2];
}

// 現在のターンのプレイヤーネーム出力
void CPlayer::printTarnPlayer(int turn){
    cout << getTarnPlayer(turn) << "のターンです。" << endl;
}