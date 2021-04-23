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