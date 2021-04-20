#ifndef CTURN_H_
#define CTURN_H_

class CTurn{
    private:
        int turn;
    public:
        // コンストラクタ
        CTurn();
        // デストラクタ
        virtual ~CTurn();
        //ターンを進める
        void turnNext();
        // 現在のターンを取得する
        int getTurn() const;
        // 現在のターンを表示する
        void printTurn() const;
        // ターン数が10になったら引き分けにしてゲームを終了する

};

#endif