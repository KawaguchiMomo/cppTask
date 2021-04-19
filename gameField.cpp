#include "gameField.h"

// コンストラクタ
CGameField::CGameField()
{
    fieldBlocks = "abbb";
    // fieldBlocks.push_back(1);
}
// デストラクタ
CGameField::~CGameField()
{}
string CGameField::getBlock()
{
    return fieldBlocks;
}