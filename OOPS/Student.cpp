#include<iostream>
using namespace std;
class student
{
private:
    int roll;
    string name;
    int physicsmarks;
    int chemsmarks;
    int mathsmarks;
public:
student (int r, string n, int p, int c, int m)
{
    roll=r;
    name=n;
    physicsmarks=p;
    chemsmarks=c;
    mathsmarks=m;
}
int total ()
{
    return physicsmarks+chemsmarks+mathsmarks;
}
char grade()
{
    float average=total()/3;
    if(average>60)
    return 'A';
    else if(average >=40 && average<60)
    return 'B';
    else
    return 'F';
}
};
int main()
{
    int roll;
    string name;
    int p,c,m;
    cout<<"Enter roll number of the student: ";
    cin>>roll;
    cout<<"Enter name of the student: ";
    cin>>name;
    cout<<"Enter marks in Physics subjects: ";
    cin>>p;
    cout<<"Enter marks in Chemistry subjects: ";
    cin>>c;
    cout<<"Enter marks in Maths subjects: ";
    cin>>m;
    student s(roll,name,p,c,m);
    cout<<"Total marks: "<<s.total()<<endl;
    cout<<"Grade of the Student: "<<s.grade()<<endl;
    return 0;
}