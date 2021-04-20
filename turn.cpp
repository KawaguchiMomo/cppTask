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
CTurn::~CTurn()
{}

//ターンを進める
void CTurn::turnNext()
{
    turn++;
}
// 現在のターンを取得する
int CTurn::getTurn()
{
    return turn;
}
// 現在のターンを表示する
void CTurn::printTurn()
{
    cout << "現在" << getTurn() << "ターン目です。" << endl;
}
// ターン数が10になったら引き分けにしてゲームを終了する