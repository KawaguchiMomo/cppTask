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
        // 値の取得
        string getBlock(int i);
        // 盤面全体を表示
        void getField();
};

#endif