#ifndef GAMEFIELD_H_
#define GAMEFIELD_H_

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
        string getBlock(int i) const;
        // 盤面全体を表示
        void printField() const;
        // 入力を受けつける
        int inputSimbol();
        // 入力を盤面に反映する
        void putSimbolToBlock(int i, const string player);
        // 盤面を走査する
        bool scanField() const;
        bool scan3Lines() const;
        bool scanRTopToLBottomLines() const;
        bool scanLTopToRBottomLines() const;
        bool scan3Columns() const;
        bool scanOneLine(int simbol, int nextSimbol, int nextNextSimbol) const;
};

#endif