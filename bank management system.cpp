#include<iostream>
#include<ctime>
#include<windows.h>
#include "bank.h"
using namespace std;

int main()
{
    menu:
        system("cls");
	    system("color 4");
	    cout<<"\t\t\t ---------------------"<<endl;
	    cout<<"\t\t\t| Welcome at our BANK |"<<endl;
	    cout<<"\t\t\t ---------------------"<<endl;
	    system("color 3");
	    cout<<"\n\n\t\t\t\t MENU\n";
	    cout<<"\n\t\t1. Employee ";
	    cout<<"\n\t\t2. Customer ";
	    cout<<"\n\t\t3. Exit ";
	    cout<<"\n\t\tEnter Your Choice: ";
        int choice;
	    cin>>choice;
	    switch(choice)
	    {
	    	case 1: employee();
	    			break;
	    	case 2: customer();
	    			break;
	    	case 3: close();
	    			break;
	    	default :	cout<<"Invalid Input! Try Again...\n";
					    Sleep(1000);
	    				goto menu;
	    }
}