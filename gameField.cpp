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

// 入力を受け付ける
// todo:一度入力を間違えると以降聞き返されても代入がきかなくなるので修正必要
int CGameField::inputSymbol()
{
    // 入力させる
    cout << "書き込むマスを入力してください。(1~9)";
    int blockNumber;
    cin >> blockNumber;
    // 整数以外はエラー、すでに書き込んである箇所はエラー
    for ( ;!blockNumber || getBlock(blockNumber) != "-"; ) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if(!blockNumber){
            cout << "入力が間違っています。" << endl;
        }else if(getBlock(blockNumber) != "-"){
            cout << "既に埋まっています。" << endl;
        }
        cout << "書き込むマスを入力してください。(1~9)";
        cin >> blockNumber;
    }
    return blockNumber;
}

// 入力を盤面に反映する
void CGameField::putSymbolToBlock(int blockNumber, string player)
{
    fieldBlocks[blockNumber] = player;
}

// 盤面を走査する
bool CGameField::scanField() const
{
    if(scan3Lines()) {return true;}
    if(scanRTopToLBottomLines()) {return true;}
    if(scan3Columns()) {return true;}
    if(scanLTopToRBottomLines()) {return true;}
    return false;
}

// 3行を走査
bool CGameField::scan3Lines() const
{
    for(int line = 1;line <= 7;line+=3){
        if(scanOneLine(line,line+1,line+2)) {return true;}
    }
    return false;
}

// 右上から左下の斜めを走査
bool CGameField::scanRTopToLBottomLines() const
{
    int line = 3;
    if(scanOneLine(line,line+2,line+4)) {return true;}
    return false;
}

// 3列を走査
bool CGameField::scan3Columns() const
{
    for(int line = 1;line < 3;line++){
        if(scanOneLine(line,line+3,line+6)) {return true;}
    }
    return false;
}

// 左上から右下の斜めを走査
bool CGameField::scanLTopToRBottomLines() const
{
    int line = 1;
    if(scanOneLine(line,line+4,line+8)) {return true;}
    return false;
}

// 連なるマスを走査
bool CGameField::scanOneLine(int block, int nextBlock, int nextNextBlock) const
{
    if(nextBlock == 0) { return true; } // 2個目と3個目のブロックを走査したら完了

    string preSymbol;
    // 今の記号を記録
    preSymbol = getBlock(block);
    // 未入力であれば走査中止
    if(preSymbol == "-") { return false; }
    // 前の記号と今の記号が異なっていれば走査中止
    if(preSymbol != getBlock(nextBlock)){ return false; }

    return scanOneLine(nextBlock,nextNextBlock,0);
}

