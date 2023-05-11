#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>

// class myAdd
// {

// public:
//     int operator()(int v1,int v2)
//     {
//         return v1+v2;
//     }
// };

// class myPrint
// {
// public:

//     myPrint()
//     {
//         this->count=0;

//     }
//     void operator()(string test)
//     {
//         cout<<test<<endl;
//         count++;
//     }

//     int count;
// };
// void test02()
// {
//     myPrint mp;
//     mp("hello world");
//     mp("hello world");
//     mp("hello world");
//     mp("hello world");
//     cout<<mp.count<<endl;
// }
// void test01()
// {
//     myAdd ma;
//     cout<<ma(10,20)<<endl;
// }

// class greatFive
// {
// public:
//     bool operator()(int val)
//     {
//         return val>5;
//     }
// };
// void test01()
// {
//     vector<int>v;
//     // v.push_back(1);
//     // v.push_back(2);
//     // v.push_back(3);
//     // v.push_back(4);
//     // v.push_back(5);
//     // v.push_back(6);
//     // v.push_back(7);
//     // v.push_back(8);
//     for(int i=0;i<10;i++)
//     {
//         v.push_back(i);
//     }

//     greatFive gf;
//     //查找容器中有没有大于5的数
//     vector<int>::iterator it=find_if(v.begin(),v.end(),gf);
//     if(it=v.end())
//     {
//         cout<<"not find"<<endl;
//     }
//     else
//     {
//         cout<<*it<<endl;
//     }
    
// }

// class compare
// {
// public:
//     bool operator()(int v1,int v2)//二元谓词，因为有两个参数，有一个参数叫一元谓词
//     {
//         return v1>v2;
//     }
// };
// void test01()
// {
//     vector<int>v;
//     v.push_back(10);
//     v.push_back(40);
//     v.push_back(20);
//     v.push_back(60);
//     v.push_back(50);

//     sort(v.begin(),v.end(),compare());
//     for(vector<int>::iterator it=v.begin();it!=v.end();it++)
//     {
//         cout<<*it<<endl;
//     }
// }

//negate一元仿函数，取反仿函数
void test01()
{
    negate<int>n;
    cout<<n(50)<<endl;
}

//plus 二元仿函数，加法
void test02()
{
    plus<int>p;
    cout<<p(10,23)<<endl;

}
int main()
{
    //test01();
    test02();
    return 0;
}