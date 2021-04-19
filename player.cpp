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

// プレイヤーネーム出力
void CPlayer::printTarnPlayer(int i){
    cout << getPlayer(i) << "のターンです。" << endl;
}