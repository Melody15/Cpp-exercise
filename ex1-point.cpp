#include <iostream>

class point{
private:
    int x, y;

public:
    //构造函数
    point(int xx, int yy){
        x = xx;
        y = yy;
    }
    //析构函数
    ~point(){}
    //移动操作
    void move(int offsetX, int offsetY){
        x += offsetX;
        y += offsetY;
    }
    //显示坐标
    void show(){
        std::cout << "x="<<x<<",y="<<y<<std::endl;
    }
    
};

int main(int argc, char const *argv[])
{
    point pt(100, 200);
    pt.show();

    pt.move(50, -100);
    pt.show();

    return 0;
}