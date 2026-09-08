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
        cin>>acc_no;
        cout<<"Enter Name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Account Type: ";
        cin>>acc_type;
        cout<<"Enter Initial Balance: ";
        cin>>acc_bal;
        if(acc_bal<0){
            acc_bal=0;
            cout<<"Enter Valid amount!"<<endl;
        }
        else{
            cout<<"Initial Deposit Successful!"<<endl;
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
        cout<<"Balance: "<<acc_bal<<endl;
        cout<<"Account Type: "<<acc_type<<endl;
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
        cout<<"ENTER\n1.CREATE NEW ACCOUNT\n2.DEPOSIT\n3.WITHDRAW\n4.CHECK INTEREST\n5.DISPLAY ACCOUNT DETAILS\n6.EXIT\n"<<endl;
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
                cout<<"Enter Account Number: ";
                int p;
                cin>>p;
                accs[p].display();
            }
            break;
            case 6:exit(1);
            }
        }while(ch!=6);
    }



