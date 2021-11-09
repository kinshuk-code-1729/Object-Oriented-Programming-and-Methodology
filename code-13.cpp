// Program to show the virtual base class
#include<iostream>
using namespace std;
class Student{
    protected:
    int r_no;
    public:
    void get_n(int a){
        r_no=a;
    }
    void put_n(void){
        cout<<"Roll No. : "<<r_no<<endl;
    }
};
class Test:virtual public Student{
    protected:
    int part1,part2;
    public:
    void get_m(int x,int y){
        part1=x;part2=y;
    }
    void put_m(void){
        cout<<"Marks Obtained : "<<endl;
        cout<<"Part 1 = "<<part1<<endl;
        cout<<"Part 2 = "<<part2<<endl;
    }
};
class Sports:public virtual Student{
    protected:
    int score;
    public:
    void get_s(int a){
        score=a;
    }
    void put_s(void){
        cout<<"Sports wt. :  "<<score<<endl;
    }
};
class result:public Test,public Sports{
    private:int total;
    public:
    void show(void);
};
void result::show(void){
    total=part1+part2+score;
    put_n();
    put_m();
    put_s();
    cout<<"Total Score : "<<total<<endl;
}
int main(){
    result s1;
    s1.get_n(678);
    s1.get_m(30,35);
    s1.get_s(7);
    s1.show();
    return 0;
}