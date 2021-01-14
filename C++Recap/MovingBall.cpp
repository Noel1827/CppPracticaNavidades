#include <iostream>

using namespace std;

enum bDir{up,down,left,right};

class Ball{

    private:
    int x,y,OriginalX,OriginalY;

    public:

    Ball(int x, int y){
        this->x = x;
        this->y = y;
        OriginalX = x;
        OriginalY = y;
    }

    inline int getX(){return x;};
    inline int getY(){return y;};
    inline void reset(){x = OriginalY; y = OriginalY;};


};

int main(){


    return 0;
}