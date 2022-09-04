#include<iostream>
using namespace std;
class Strings{
    private:
    char *str;
    public:
    Strings(){
    }
    Strings( char* str){
        this->str=str;
    }
    friend Strings operator + (const Strings& s1, const Strings& s2){
        Strings tmp;
        tmp=s1;
        int res=0;
        while(tmp.str[res]!='\0'){
            res++;
        }
        for(int j=0; tmp.str[j]!='\0';j++){
            tmp.str[res]=s2.str[j];
            if(tmp.str[j]!='\0')
                 res++;
        }
         return tmp;
}
    friend istream& operator >>(istream &in, Strings &s){    
        char* str1=new char[20]; 
        in.get(str1,20);
      //  in.ignore();
        s.str=str1;
        in.ignore();
        return in;
    }
    friend ostream& operator <<(ostream &out, Strings s){
            out<<s.str;
            return out;
        }
};
int main(){
    Strings N;
    Strings M;
    cin>>N;
  //  cin.ignore();
    cin>>M;
    cout<<N<<endl;
    cout<<"***"<<endl;
    cout<<M<<endl;
    cout<<"**"<<endl;
     Strings tmp;
    tmp=N+M;
    cout<<tmp;
    return 0;
}
