// #include<iostream>
// using namespace std;

// const double PI=3.14;
// //设计一个圆类，求圆的周长
// //圆求周长的公式：2*PI=半径

// //class代表设计一个类，类后面是类名称
//   class Circle{
//    //访问权限
//    //公共权限
//    public:

//    //属性
//    //半径
//     int m_r;
//    //行为
//    //获取圆的周长
//    double calculateZC(){
//     return 2*PI*m_r;
//    }
//   };
// int main(){
//     //通过圆类，创建具体的圆（对象）
//     //实例化
//     Circle c1;
//     //给圆对象的属性进行赋值
//     c1.m_r=10;
//     cout<<"圆的周长："<<c1.calculateZC()<<endl;
//     system("pause");
// }

// #include<iostream>
// #include<string>
// using namespace std;

// //设计一个学生类，属性有姓名何学号，
// //可以给姓名和学号赋值，可以显示学生的姓名和学号
// //行为 成员函数 成员方法

// class Student{
//   public://公共权限

//   //类中的属性和行为称为成员
//   //属性 又称 成员属性 成员变量
//   //行为 成员函数 成员方法

//   //属性
//   string m_Name;//姓名
//   int m_Id;//学号

//   //行为
//   void showStudent()
//   {
//     cout<<"姓名："<<m_Name
//     <<"  学号："<<m_Id<<endl;
//   }

//   //给姓名赋值
//   void setName(string name){
//     m_Name=name;

//   }
// //给学号赋值
//   void setId(int id)
//   {
//      m_Id=id;
//   }
// };

// int main(){
//   //创建一个具体学生，实例化对象
//   Student s1;
//   //给s1对象，进行属性赋值操作
//   //s1.m_Name="张三";
//   s1.setName("张三");
//   //s1.m_Id=1;
//   s1.setId(1);

//   //显示学生信息
//   s1.showStudent();
//   system("pause");

// }

// #include<iostream>
// #include<string>
// using namespace std;
// //访问权限
//     //三种
// //公共权限public  成员类内可以访问  类外可以访问
// //保护权限protected  成员类内可以访问  类外不可以访问
// //私有权限private  成员类内可以访问  类外不可以访问

// class Person{
//     public:
//     //公共权限
//     string m_Name;//姓名

//     protected:
//     //保护权限
//     string m_Car;//汽车

//     private:
//     //私有权限
//     int m_Password;//银行卡密码

//     public:
//     void func()
//     {
//       m_Name="张三";
//       m_Car="拖拉机";
//       m_Password=123456;
//     }

// };

// int main(){
//     //实例化具体对象
//     Person p1;
//     p1.m_Name="李四";
//    // p1.m_Car="";  不可访问
//    //p1.m_password="";不可访问

//     system("pause");
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class c1{
//     int m_A;//默认权限是 私有private
// };
// struct C2{
//     int m_A;//默认权限是公共public
// };

// int main(){
//     //struct 和class区别
//     //struct默认权限是公共public
//     //class默认权限是 私有private

//     c1 C1;//C1.m_A=100;
//     C2 c2; c2.m_A=100;
//     system("pause");
// }

// #include<iostream>
// #include<string>
// using namespace std;

// //成员属性设置为私有
// //1、可以自己控制读写权限
// //2、对于写可以检测数据的有效性

// //设计人类
// class Person{
//     private:
//     //姓名 可读可写
//     string m_Name;
//     //年龄 只读
//     int m_Age;
//     //情人 只写
//     string m_Lover;

//     public:
//     //写姓名 设置姓名
//     void setName(string name){
//         m_Name=name;
//     }
//     //读姓名  获取姓名
//     string getName(){
//         return  m_Name;
//     }

//     //获取年龄 只读
//     int getAge(){
//         m_Age=15;//初始化为0
//         return m_Age;
//     }

//     //设置情人 只写
//     void setLover(string lover){
//         m_Lover=lover;
//     }

// };
// int main(){

//     Person p;
//     p.setName("张三");
//     cout<<"姓名为："<<p.getName()<<endl;

//     // p.m_Age=18;
//     // p.setAge(18);//不可修改
//     cout<<"年龄为："<<p.getAge()<<endl;

//     p.setLover("梦生");
//     //cout<<""<<""<<p.getlover()<<endl;//不可以访问
//     system("pause");
//     return 0;
// }

//求立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等
//     #include<iostream>
//     using namespace std;

// //立方体类设计
// //1、创建立方体类
// //2、设计属性
// //3、设计行为 获取立方体面积和体积
// //4、分别用全局函数和成员函数判断两个立方体是否相等

// class Cube{
// public:
//       //设置长
//       void setL(int l)
//       {
//         m_L=l;
//       }
//       //获取长
//        int getL()
//        {
//         return m_L;
//        }
//       //设置宽
//       void setW(int w)
//       {
//         m_W=w;
//       }
//       //获取宽
//     int getW()
//        {
//         return m_W;
//        }
//       //设置高
//        void setH(int h)
//       {
//         m_H=h;
//       }
//       //获取高
//     int getH()
//        {
//         return m_H;
//        }
//       //获取立方体面积
//         int calculateS()
//         {
//             return 2*m_L*m_W+2*m_W*m_H+2*m_L*m_H;
//         }
//       //获取立方体体积
//     int calculateV()
//     {
//         return m_L*m_W*m_H;
//     }

//     //不懂
//     //利用成员函数判断两个立方体是否相等
//     bool isSameByClass(Cube &c)
//     {
//      if(m_L==c.getL()&&m_W==c.getW()&&m_H==c.getH())
//      return true;
//      return false;
//     }
//    private:
//    int m_L;//长
//    int m_W;//宽
//    int m_H; //高
// };

//      //用全局函数判断两个立方体是否相等
//     bool isSame(Cube &c1,Cube &c2)   //Cube？？
//     {
//         if(c1.getL()==c2.getL()&&c1.getW()==c2.getW()&&c1.getH()==c2.getH())
//         return true;
//         return false;
//     }

//         int main()
//         {
//             //创建立方体对象
//             Cube c1;
//             c1.setL(10);
//             c1.setW(10);
//             c1.setH(10);
//             cout<<"c1的面积为:"<<c1.calculateS()<<endl;
//             cout<<"c1的体积为:"<<c1.calculateV()<<endl;

//             //创建第二个立方体
//             Cube c2;
//             c2.setL(10);
//             c2.setW(10);
//             c2.setH(10 );

//             //全局函数
//             bool ret =isSame(c1,c2);
//             if(ret)
//             {
//                cout<<"c1和c2是相等"<<endl;
//             }
//             else
//             {
//                cout<<"c1和c2是不相等"<<endl;
//             }

//             //成员函数
//             ret=c1.isSameByClass(c2);
//             if(ret)
//             {
//                cout<<"成员函数:c1和c2是相等"<<endl;
//             }
//             else
//             {
//                cout<<"成员函数:c1和c2是不相等"<<endl;
//             }

//             system("pause");
//         }

//点与圆的关系
#include <iostream>
using namespace std;

//点类
class Point
{
public:
    //设置x
    void setX(int x)
    {
        m_X = x;
    }
    //获取x
    int getX()
    {
        return m_X;
    }
    //设置y
    void setY(int y)
    {
        m_Y = y;
    }
    //获取y
    int getY()
    {
        return m_Y;
    }

private:
    int m_X;
    int m_Y;
};

//圆类
class Circle
{
public:
    //设置半径
    void setR(int r)
    {
        m_R = r;
    }
    //获取半径
    int getR()
    {
        return m_R;
    }
    //设置圆心
    void setCenter(Point center)
    {
        m_Center = center;
    }
    //获取圆心
    Point getCenter()
    {
        return m_Center;
    }

private:
    int m_R; //半径
    //在类中可以让另一个类 作为本来中的成员
    Point m_Center;
};

//判断点和圆关系
void isIncircle(Circle &c, Point &p)
{
    //计算两点之间距离 平方
    int distance =
        (c.getCenter().getY() - p.getX()) * (c.getCenter().getX() - p.getX()) +
        (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
    //计算半径平方
    int rDistance = c.getR() * c.getR();
    //判断关系
    if (distance == rDistance)
        cout << "点在圆上" << endl;
    else if (distance > rDistance)
        cout << "点在圆外" << endl;
    else
        cout << "点在圆内" << endl;
}

int main()
{
    //创建圆
    Circle c;
    c.setR(10);
    Point center; //圆点
    center.setX(10);
    center.setY(10);
    c.setCenter(center);
    //创建点
    Point p;
    p.setX(10);
    p.setY(10);

    //判断关系
    isIncircle(c, p);

    system("pause");
}
