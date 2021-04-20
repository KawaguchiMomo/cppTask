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
        // 入力を盤面に反映する
        void putSimbol(int i, const string player);
};

#endif