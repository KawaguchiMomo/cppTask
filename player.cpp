#include <iostream>
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
const string& CPlayer::getPlayer(int i) const
{
    return player[i];
}

// 現在のターンのプレイヤーの取得
const string& CPlayer::getTurnPlayer(int turn) const
{
    return player[turn%2];
}