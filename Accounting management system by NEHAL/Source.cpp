#include <iostream>
#include <string>
using namespace std;
struct account_info
{
	int number_of_account;
	string name_of_account;
	char type_of_account;
	int amount_of_account;
};
void new_acc(account_info costumer)
{
	int right_amount_S, right_amount_C;
	cout << "ENTER THE ACCOUNT NO. :";
	cin >> costumer.number_of_account;
	cout << endl << "ENTER THE NAME OF THE ACCOUNT HOLDER :";
	cin >> costumer.name_of_account;
	cout << endl << "ENTER THE TYPE OF ACOOUNT(C/S) : ";
	cin >> costumer.type_of_account;
	cout << endl << "ENTER THE INITIAL AMOUNT(>=500 FOR SAVIND & >=1000 FOR CUURENT) :";
	cin >> costumer.amount_of_account;
	if (costumer.type_of_account == 's' && costumer.amount_of_account < 500)
	{
		cout << "PLESE ENTER AN AMOUNT >=500" << endl;
		cin >> right_amount_S;
		costumer.amount_of_account = right_amount_S;
		cout << "THE AMOUNT IS : " << costumer.amount_of_account << endl;
	}
	else if (costumer.type_of_account == 'c' && costumer.amount_of_account < 1000)
	{
		cout << endl << "PLEASE ENTER AN AMOUNT >=1000" << endl;
		cin >> right_amount_C;
		costumer.amount_of_account = right_amount_C;
		cout << endl << "THE AMOUNT IS : " << costumer.amount_of_account << endl;
	}
}

void deposite(account_info costumer, int nu, int amont)
{
	
		if (nu == costumer.number_of_account)
		{
			costumer.number_of_account = costumer.number_of_account - amont;
		}
	
}
void withdraw(account_info costumer, int no, int amount)
{
	
		if (no == costumer.number_of_account)
		{
			costumer.number_of_account = costumer.number_of_account + amount;
		}
	
}
void details(account_info costumer,int z)
{
		if (z == costumer.number_of_account)
		{
			cout << "BALANCE DETAILS " << endl << "ACCOUNT NO. : " << costumer.number_of_account << endl;
			cout << "ACCOUNT HOLDER NAME : " << costumer.name_of_account << endl;
			cout << "TYPE OF ACCOUNT : " << costumer.type_of_account << endl << "BALANCE AMOUNT : " << costumer.amount_of_account << endl;
		}
}
void list(account_info costumer)
{
		cout << costumer.number_of_account << "     " << costumer.name_of_account << "    " << costumer.type_of_account << "   " << costumer.amount_of_account << endl;
}
//void delet(account_info costumer[3], int elem)
//{
//	int tot = 3, j, found = 0;
//	for (int i = 0; i < tot; i++)
//	{
//		for (int i = 0; i < tot; i++)
//		{
//			if (costumer[i].number_of_account == elem)
//			{
//				for (j = i; j < (3 - 1); j++)
//				{
//					costumer[j] = costumer[j + 1];
//					found++;
//					i--;
//					tot--;
//				}
//
//			}
//		}
//	}
//}
void modify(account_info costumer, int nm)
{
	
		if (nm == costumer.number_of_account)
		{
			cout << "ACCOUNT NO :" << costumer.number_of_account;
			cout << "MODIFY ACCOUNT HOLDER NAME :";
			cin >> costumer.name_of_account;
			cout << "MODIFY ACCOUNT TYPE OF ACCOUNT :";
			cin >> costumer.type_of_account;
			cout << "MODIFY BALANCE AMOUNT :";
			cin >> costumer.amount_of_account;
			cout << "          RECORD APDATED";
		}
	
}
void main()
{
	do
	{
		int x;
	    cout << "MAIN MENU" << endl << "01.NEW ACCOUNT" << endl << "02.DEPOSIT AMOUNT" << endl << "03.WITHDRAW AMOUNT" << endl << "04.BALANCE ENQUIRY" << endl;
		cout << "05.ALL ACCOUNT HOLDER LIST" << endl << "06.CLOSE AN ACCOUNT" << endl << "07.MODIFY AN ACCOUNT" << endl << "08.EXIT" << endl << "SELECT YOUR OPTION(1-8)";
		cin >> x;
		system("cls");
		if (x == 1)
		{
			    account_info costumer;
				new_acc(costumer);
				system("pause");
				
		}
		else if (x == 2)
		{
			int y,n;
			account_info costumer;
			cout << "ENTER THE ACCOUNT NO. :" << endl;
			cin >> y;
			details(costumer,y);
			cout << "           TO DEBOSITE AN AMOUNT" << endl << "ENTER THE AMOUNT TO BE DEBOSITED : ";
			cin >> n;
			deposite(costumer,y,n);
			cout << "     RECORD APDATED";
			system("pause");
			system("cls");
		}
		else if (x == 3)
		{
			int u, m;
			account_info costumer;
			cout << "ENTER THE ACCOUNT NO. :" << endl;
			cin >> u;
			details(costumer, u);
			cout << "           TO WITHDRAW AMOUNT" << endl << "ENTER THE AMOUNT TO BE WITHDRAWED : ";
			cin >> m;
			withdraw(costumer, u, m);
			cout << "     RECORD APDATED";
			system("pause");
			system("cls");
		}
		else if (x == 4)
		{
			account_info costumer;
			cout << "ENTER THE ACCOUNT NO. :" << endl;
			int n;
			cin>> n;
			details(costumer, n);
			system("pause");
			system("cls");
		}
		else if (x == 5)
		{
			account_info costumer;
			cout << "                ALL ACCOUNT HOLDER LIST"<<endl;
			cout << "================================================================================================" << endl;
			cout << "A\C NO           NAME           TYPE       BALANCE  " << endl;
			cout << "================================================================================================"<<endl;
			list(costumer);
			system("pause");
			system("cls");
		}
	/*	else if (x == 6)
		{
			account_info costumer[3];
			cout << "ENTER THE ACCOUNT NO. : ";
			int w;
			cin >> w;
			delet(costumer, w);
			system("pause");
			system("cls");
		}*/
		else if (x == 7)
		{
			account_info costumer;
			cout << "ENTER THE ACCOUNT NO. :" << endl;
			int o;
			cin >> o;
			details(costumer, o);
			cout << "ENTER THE NEW DETAILS OF ACCOUNT" << endl;
			modify(costumer,o);
			system("pause");
			system("cls");
		}
		else if (x == 8)
		{
			break;
		}
		else {
			cout << "WRONG NUMBER";
		}
	} while (true);
	

	system("pause");
}