#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class CPlayer{
    private:
        vector<string> player;
    public:
        // コンストラクタ
        CPlayer();
        // デストラクタ
        virtual ~CPlayer();
        // プレイヤーの取得
        const string& getPlayer(const int i) const;
        // 現在のターンのプレイヤーの取得
        const string& getTurnPlayer(const int turn) const;
};

#endif