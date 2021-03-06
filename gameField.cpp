#include <limits>

#include "gameField.h"

// ゲーム盤の一列の長さ
const int MAXLINE = 3;

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
const string& CGameField::getBlock(const int blockNumber) const
{
    return fieldBlocks[blockNumber];
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
int CGameField::inputSymbol()
{
    int blockNumber;
    // 整数1~9以外はエラー、すでに書き込んである箇所はエラー
    while(1) {
        // 入力させる
        cout << "書き込むマスを入力してください。(1~9)";
        cin >> blockNumber;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if(!blockNumber){
            cout << "入力が間違っています。" << endl;
            continue;
        }
        if(!(1 <= blockNumber && blockNumber <= 9)){
            cout << "入力が間違っています。" << endl;
            continue;
        }
        if(getBlock(blockNumber) == "x" || getBlock(blockNumber) == "o"){
            cout << "既に埋まっています。" << endl;
            continue;
        }
        break;
    }
    return blockNumber;
}

// 入力を盤面に反映する
void CGameField::putSymbolToBlock(const int blockNumber, const string& player)
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
    for(int i = 1;i <= MAXLINE;i++){
        int line = 1;
        if(scanOneLine(line,line+1,line+2)) {return true;}
        line+=MAXLINE;
    }
    return false;
}

// 右上から左下の斜めを走査
bool CGameField::scanRTopToLBottomLines() const
{
    int line = MAXLINE;
    int shift=(MAXLINE-1);
    if(scanOneLine(line,line+shift,line+shift*2)) {return true;}
    return false;
}

// 3列を走査
bool CGameField::scan3Columns() const
{
    for(int i = 1;i <= MAXLINE;i+=MAXLINE){
        int line = 1;
        if(scanOneLine(line,line+MAXLINE,line+MAXLINE*2)) {return true;}
        line++;
    }
    return false;
}

// 左上から右下の斜めを走査
bool CGameField::scanLTopToRBottomLines() const
{
    int line = 1;
    int shift=(MAXLINE+1);
    if(scanOneLine(line,line+shift,line+shift*2)) {return true;}
    return false;
}

// 連なるマスを走査
bool CGameField::scanOneLine(const int block, const int nextBlock, const int nextNextBlock) const
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

