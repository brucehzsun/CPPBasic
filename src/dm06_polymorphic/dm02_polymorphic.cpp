//
// Created by bruce sun on 2022/12/6.
//
#include "iostream"

using namespace std;

class EnemyFighter {
public:
    int attack() {
        return 15;
    }
};

class HeroFighter {
public:
    virtual int power() {
        return 10;
    }

    ~HeroFighter(){
        cout <<"析构函数" << endl;
    }
};

class AdvHeroFighter : public HeroFighter {
public:
    int power() {
        return 20;
    }

    ~AdvHeroFighter(){
    }
};

void play(HeroFighter &hero,EnemyFighter fighter){
    if (hero.power() > fighter.attack()) {
        cout << "主角赢了" << endl;
    } else {
        cout << "主角挂了" << endl;
    }
}

int main() {
    EnemyFighter ef;
    HeroFighter hf;
    AdvHeroFighter ahf;

    play(hf,ef);
    play(ahf,ef);
}

