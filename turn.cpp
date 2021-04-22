#include "turn.h"

#include <string>
#include <iostream>
using namespace std;
// コンストラクタ
CTurn::CTurn()
{
    turn = 1;
}

// デストラクタ
CTurn::~CTurn(){}

//ターンを進める
void CTurn::turnNext()
{
    turn++;
}
// 現在のターンを取得する
int CTurn::getTurn() const
{
    return turn;
}
// ターン数が10になったら引き分けにしてゲームを終了する
bool CTurn::DrawJudge() const
{
    if(getTurn() <= 9) return false;
    return true;
}