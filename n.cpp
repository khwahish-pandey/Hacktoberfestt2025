#include<iostream>
#include<string>
using namespace std;
class binary{
    string s;
    void ck(void);
    public:
    void read(void);
    void cpl_bin(void);
    
};
void binary::read(void){
    cout<<"the binary input is"<<endl;
    cin>>s;

}
void binary:: ck(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!=0 && s.at(i)!=1){
        cout<<"not a binary no"<<endl;
        exit(0);
        }
        else{
            cout<<"the no is binary ";
        }
    }
    

}
void binary::cpl_bin(void){
    ck();
    int i;
    for (int i = 0; i < s.length(); i++)
    {
    if(s.at(i)=1){
        s.at(i)=0;
    }

    else{
        s.at(i)=1;
    }
    }
    cout<<s.at(i);
    
}
int main(){
    binary b;
    b.read();
    b.cpl_bin();

return 0;
}
