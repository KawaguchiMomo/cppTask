#include "gameField.h"

// コンストラクタ
CGameField::CGameField()
{
    for(int i = 0; i <= 9; i++){
        fieldBlocks.push_back("-");
    }
}
// デストラクタ
CGameField::~CGameField()
{}
// マスにアクセス
string CGameField::getBlock(int i)
{
    return fieldBlocks[i];
}
// 盤面全体を表示
void CGameField::getField()
{
    // イテレーター作成
    vector<string>::iterator i1;

    for(i1 = fieldBlocks.begin()+1; i1 != fieldBlocks.end(); i1++){
        cout << *i1;
        // begin()-現在のイテレーターで現在のイテレーターが何番目か取得できる
        int index = fieldBlocks.begin()-i1;
        // 現在のイテレーターが3列目だったら改行
        if(index % 3 == 0){
            cout << endl;
        }
    }
}