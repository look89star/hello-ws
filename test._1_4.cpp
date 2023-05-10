#include<iostream>
using namespace std;

#include<map>
#include<vector>
#include<ctime>

#define chehua 0
#define meigong 1
#define yanfa 2

// void test01()
// {
//     //插入方法
//     map<int,int>m;
//     m.insert(pair<int,int>(1,10));//第一种
//     m.insert(pair<int,int>(2,20));
//     m.insert(pair<int,int>(3,30));
//     m.insert(pair<int,int>(4,40));

//     m.insert(make_pair(5,123));//第二种
//     m.insert(map<int,int>::value_type(7,89));//第三种
//     m[6]=90;
//     //不建议用[]插入，因为当输出m[7]时，由于我们没有插入值，它会默认给m[7]赋值0；
//     //可以用key访问到value，cout<<m[6]<<endl;可以找到90

//     //删除操作
//     m.erase(m.begin());
//     m.erase(3);//删除key为3的值
//     m.erase(m.begin(),m.end());

//     m.clear();

//     if(m.empty())
//     {
//         cout<<"m is empty"<<endl;
//     }
//     else
//     {
//         cout<<"m is not empty"<<endl;
//         cout<<m.size()<<endl;
//     }
// }

// void printMap(map<int,int>&m)
// {
//     for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
//     {
//         cout<<"key "<<it->first<<" value "<<it->second<<endl;
//     }
// }
// void test02()
// {
//     map<int,int>m;
//     m.insert(pair<int,int>(1,10));
//     m.insert(pair<int,int>(2,20));
//     m.insert(pair<int,int>(3,30));
//     m.insert(pair<int,int>(4,40));

//     map<int,int>m2;
//     m2.insert(pair<int,int>(1,100));
//     m2.insert(pair<int,int>(2,200));
//     m2.insert(pair<int,int>(3,300));
//     m2.insert(pair<int,int>(4,400));
//     m2.swap(m);
//     printMap(m);
//     cout<<endl;
//     printMap(m2);


// }

class worker
{
public:

    string name;
    int salary;
};

void creatWorker(vector<worker>&v)
{
    for(int i=0;i<10;i++)
    {
        worker w;
        string nameseed="ABCDEFGHIJ";
        w.name="worker_";
        w.name+=nameseed[i];

        w.salary=rand()%10000+10000;

        v.push_back(w);
    }
}

void setGroup(vector<worker>&v,multimap<int,worker>&mw)
{
    for(vector<worker>::iterator it=v.begin();it!=v.end();it++)
    {
        int dipt=rand()%3;
        mw.insert(make_pair(dipt,*it));
    }
    
}

void showGroup(multimap<int,worker>&mw)
{
    cout<<"CHEHUA------------------"<<endl;
    multimap<int ,worker>::iterator pos =mw.find(chehua);
    int num=mw.count(chehua);
    int index=0;
    for(;index<num;pos++,index++)
    {
        cout<<"Name "<<(*pos).second.name<<" salary "<<pos->second.salary<<endl;
    }

    cout<<"MEIGONG------------------"<<endl;
    pos =mw.find(meigong);
    num=mw.count(meigong);
    index=0;
    for(;index<num;pos++,index++)
    {
        cout<<"Name "<<(*pos).second.name<<" salary "<<pos->second.salary<<endl;
    }

    cout<<"YANFA------------------"<<endl;
    pos =mw.find(yanfa);
    num=mw.count(yanfa);
    index=0;
    for(;index<num;pos++,index++)
    {
        cout<<"Name "<<(*pos).second.name<<" salary "<<pos->second.salary<<endl;
    }
}
void test01(vector<worker>&v)
{
    for(vector<worker>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<"Name "<<(*it).name<<" salary "<<it->salary<<endl;
    }
}
int main()
{
    srand((unsigned int)time(NULL));
   
    vector<worker>v;
    creatWorker(v);
    multimap<int,worker>mw;
    setGroup(v,mw);
    showGroup(mw);
    //test01(v);
    return 0;
}