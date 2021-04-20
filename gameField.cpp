#include <limits>
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
string CGameField::getBlock(int i) const
{
    return fieldBlocks[i];
}
// 盤面全体を表示
void CGameField::printField() const
{
    // イテレーター作成
    vector<string>::const_iterator i1;

    for(i1 = fieldBlocks.begin()+1; i1 != fieldBlocks.end(); i1++){
        cout << *i1;
        // begin()-現在のイテレーターで現在のイテレーターが何番目か取得できる
        int index = std::distance(fieldBlocks.begin(), i1);
        // 現在のイテレーターが3列目だったら改行
        if(index % 3 == 0){
            cout << endl;
        }
    }
}

void CGameField::putSimbol(int blockNumber, string player)
{
    // 入力させる
    cout << "書き込むマスを入力してください。(1~9)";
    // 整数以外はエラー、すでに書き込んである箇所はエラー
    for ( ;!blockNumber || getBlock(blockNumber) != "-"; ) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "入力が間違っています" << endl;
        cout << "書き込むマスを入力してください。(1~9)";
    }
    fieldBlocks[blockNumber] = player;
}