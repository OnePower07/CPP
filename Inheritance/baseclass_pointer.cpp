#include<iostream>
using namespace std;
class basecar
{
    public:
    void start()
    {
        cout<<"car started"<<endl;
    }
};
class advancecar: public basecar
{
    public:
    void playmusic()
    {
        cout<<"Music started"<<endl;
    }
};
int main()
{
    advancecar a;
    // basecar *p=&a; this is wrong
    a.start();
    a.playmusic();
}