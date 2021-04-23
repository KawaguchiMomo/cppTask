#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include <string>
using namespace std;

class CGameManager{
    private:
        string victoryMessage;
    public:
        // CPlayer* cPlayer;

        // コンストラクタ
        CGameManager();
        // デストラクタ
        virtual ~CGameManager();
        // 現在のターンのプレイヤーを表示
        void printTurnPlayer(const string& player) const;
        // 現在のターンを表示する
        void printTurn(const int turn) const;
        // 入力キー見本を表示
        void printManual() const;
        // 勝利表示、終了
        void victory(const string& player) const;
        // 引き分け表示、終了
        void draw() const;
};

#endif