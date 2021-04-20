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
        string getPlayer(int i) const;
        // 現在のターンのプレイヤーの取得
        string getTarnPlayer(int turn) const;
        // 現在のターンのプレイヤーを表示
        void printTarnPlayer(int turn) const;
};

#endif