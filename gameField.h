#ifndef GAMEFIELD_H_
#define GAMEFIELD_H_

#include <string>
#include <vector>
using namespace std;

class CGameField{
    private:
        string fieldBlocks;
    public:
        // コンストラクタ
        CGameField();
        // デストラクタ
        virtual ~CGameField();
        // 値の取得
        string getBlock();
};

#endif