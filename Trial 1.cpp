#include<iostream>
using namespace std;
float marks, total, avg;
char str[80];
int main(){
cout<<"Welcome Lol 500birr is not precious for me u know Im university student"<<endl;
cout<<"What is Your Name? "<<endl;
gets(str);
for(int i=1; i<=10; i++){
cout<<"Enter subject "<< i<<" marks: ";
cin>>marks;
total+=marks;
}
avg=(total/10);
cout<<"Average marks: "<<(total/10)<<endl;
if(avg>=90 && avg<=100)
        cout<<"A+"<<endl;
    else if(avg>=85 && avg<90)
        cout<<"A"<<endl;
    else if(avg>=80 && avg<85)
        cout<<"A-"<<endl;
    else if(avg>=75 && avg<80)
        cout<<"B+"<<endl;
    else if(avg>=70 && avg<75)
        cout<<"B"<<endl;
    else if(avg>=65 && avg<70)
        cout<<"B-"<<endl;
    else if(avg>=60 && avg<65)
        cout<<"C+"<<endl;
    else if(avg>=55 && avg<60)
        cout<<"C"<<endl;
    else if(avg>=50 && avg<55)
        cout<<"C-"<<endl;
    else if(avg>=45 && avg<50)
    cout<<"D"<<endl;
    else if(avg>40 && avg<45)
    cout<<"F"<<endl;
    else
        return 0;
}
