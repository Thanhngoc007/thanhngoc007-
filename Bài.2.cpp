#include<iostream>
using namespace std;
float plus (float a, float b){
    return a+b;
}
float minus (float a, float b){
    return a-b;
}
float multiply (float a, float b){
    return a*b;
}
float devide (float a, float b){
    if(b!=0){
        return a/b;
    }
}
void operation (float a, float b, float (*p2Func)(float, float)){
    float tmp=(*p2Func)(a,b);
    cout<<tmp;
}
int main(){
    float a,b;
    cin>>a>>b;
    operation(a,b,&plus);
    // operation(a,b,&minus)<<endl;
    // operation(a,b,&multiply)<<endl;
    // operation(a,b,&devide)<<endl;
}