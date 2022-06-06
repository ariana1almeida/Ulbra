#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SYSTEMTIME tm;
    GetSystemTime(&tm);
    int w=20,i,dia,mes,ano=0;
    char dias;
    do{
        GetSystemTime(&tm);
        cout<<"Dia:"<<tm.wDay<<"/"<<tm.wMonth<<"/"<<tm.wYear<<endl;
        cout<<"Hora:"<<tm.wHour-3<<":"<<tm.wMinute<<endl;
        Sleep(999);
        system("cls");
        w--;
    }while(w);
}
