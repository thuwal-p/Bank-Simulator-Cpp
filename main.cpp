#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class account{
private:
    double acc_bal;
    char acc_type;
    string name;
    int acc_no;

public:
    float int_rate;
    void create_acc(){
        cout<<"Enter acc. Number: ";
        void setnum(int n){
            num=n;
        }
        cout<<"Enter Name: ";
        void setname(string n){
            name=n;
        }
        cout<<"Enter Account Type: ";
        void settype(char t){
            acc_type=t;
        }
        cout<<"Enter Intial Balance: ";
        void setbal(double bal){
            if(bal<0){
                cout<<"enter valid balance!"<<endl;
            }
            else
            acc_bal=bal;
        }
    }
    void deposit(){
        cout<<"Enter amount you want to deposit: ";
        double amt;
        cin>>amt;
        if(amt<0){
            cout<<"Enter Valid amount!";
        }
        else{
            acc_bal+= amt;
            cout<<"Deposit Successful !"<<endl;
        }    }
    void withdraw(){
        cout<<"Enter the amount you want to withdraw: ";
        double amt;
        cin>>amt;
        if(amt>acc_bal){
            cout<<"Insufficient Balance! "<<endl;
        }
        else{
            acc_bal-=amt;
            cout<<"withdraw of RS."<<amt<<"successful!"<<endl;
        }
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<acc_no<<endl;
        cout<<"Balance: "<<endl;
        cout<<"Account Type: "<<endl;
    }
    void apply_int(){
        cout<<"Enter interest rate: ";
        float rate;
        cin>>rate;
        cout<<"Interest on your balance is: "<<(rate/100)*acc_bal;
    }
};

int main(){
    account accs[10];
    int ch,count=0;
    do{
        cout<<"ENTER\n 1.CREATE NEW ACCOUNT\n2.DEPOSIT\n3.WITHDRAW\n4.CHECK INTEREST\n5.DISPLAY ALL ACCOUNTS\n6.EXIT\n"<<endl;
        cin>>ch;
        switch(ch){
            case 1:{
                if(count>10){
                    cout<<"Account limit exceeded!"<<endl;
                }
                accs[count].create_acc();
                count++;
            }              
            break;
            case 2:{
                cout<<"Enter account number: ";
                int num;
                cin>>num;
                if(num>count&&num<0){
                    cout<<"Enter valid account number! "<<endl;
                }
                else{
                    accs[num].deposit();
                }
            }
            break;
            case 3:{
                cout<<"Enter account number: ";
                int num;
                cin>>num;
                if(num>count&&num<0){
                    cout<<"Enter valid account number! "<<endl;
                }
                else{
                    accs[num].withdraw();
                }
            }
            break;
            case 4:{
                cout<<"Enter account number: ";
                int num;
                cin>>num;
                if(num>count&&num<0){
                    cout<<"Enter valid account number! "<<endl;
                }
                else{
                    accs[num].apply_int();
                }
            }
            break;
            case 5:{
                for(int i=0;i<count;i++){
                    accs[i].display();
                }
            }
            break;
            case 6:exit(1);
            }
        }while(ch!=6);
    }



