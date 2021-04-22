#ifndef GAME_FIELD_H_
#define GAME_FIELD_H_

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class CGameField{
    private:
        vector<string> fieldBlocks;
    public:
        // コンストラクタ
        CGameField();
        // デストラクタ
        virtual ~CGameField();
        //  マスにアクセス
        const string& getBlock(const int blockNumber) const;
        // 盤面全体を表示
        void printField() const;
        // 入力を受けつける
        int inputSymbol();
        // 入力を盤面に反映する
        void putSymbolToBlock(const int blockNumber, const string& player);
        // 盤面を走査する
        bool scanField() const;
        bool scan3Lines() const;
        bool scanRTopToLBottomLines() const;
        bool scanLTopToRBottomLines() const;
        bool scan3Columns() const;
        bool scanOneLine(const int symbol, const int nextSymbol, const int nextNextSymbol) const;
};

#endif