#include<iostream>
using namespace std;
class CFraction{
    private:
    int num, den;
    public:
    CFraction(){
        num=den=0;
    }
    CFraction(int num, int den){
        this->num=num;
        this->den= den;
    }
    void InPut(){
        cout<<this->num<<" "<<this->den;
    }
    friend CFraction operator +(const CFraction&, const CFraction&);
    friend CFraction operator -(const CFraction&, const CFraction&);
    friend CFraction operator *(const CFraction&, const CFraction&);
    friend CFraction operator /(const CFraction&, const CFraction&);
};
CFraction operator +(const CFraction& x, const CFraction& y){

        CFraction plus;
        plus.num=x.num+y.num;
        plus.den=x.den+y.den;
        return plus;
    }
CFraction operator -(const CFraction& x, const CFraction& y){

        CFraction minus;
        minus.num=x.num-y.num;
        minus.den=x.den-y.den;
        return minus;
    }
CFraction operator *(const CFraction& x, const CFraction& y){

        CFraction multy;
        multy.num=x.num*y.num;
        multy.den=x.den*y.den;
        return multy;
    }
CFraction operator /(const CFraction& x, const CFraction& y){

        CFraction devide;
        devide.num=x.num/y.num;
        devide.den=x.den/y.den;
        return devide;
    }
int main(){
    int tmpx,tmpx1,tmpy,tmpy1;
    cin>>tmpx>>tmpx1>>tmpy>>tmpy1;
    CFraction Point1(tmpx,tmpy);
    CFraction Point2(tmpx1,tmpy1);
    CFraction Point3;
    Point3=Point1+Point2;
    // Point3=Point1-Point2;
    // Point3=Point1*Point2;
    Point3.InPut();
    return 0;
}