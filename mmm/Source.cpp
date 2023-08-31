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
void new_acc(account_info costumer[],int lim)
{
	int right_amount_S, right_amount_C;
	for (int i = 0; i < lim; i++)
	{
		cout <<endl<< "ENTER THE ACCOUNT NO. :";
		cin >> costumer[i].number_of_account;
		cout << endl << "ENTER THE NAME OF THE ACCOUNT HOLDER :";
		cin >> costumer[i].name_of_account;
		cout << endl << "ENTER THE TYPE OF ACOOUNT(C/S) : ";
		cin >> costumer[i].type_of_account;
		cout << endl << "ENTER THE INITIAL AMOUNT(>=500 FOR SAVIND & >=1000 FOR CUURENT) :";
		cin >> costumer[i].amount_of_account;
		if (costumer[i].type_of_account == 's' && costumer[i].amount_of_account < 500)
		{
			cout << "PLESE ENTER AN AMOUNT >=500" << endl;
			cin >> right_amount_S;
			costumer[i].amount_of_account = right_amount_S;
			cout << "THE AMOUNT IS : " << costumer[i].amount_of_account << endl;
		}
		else if (costumer[i].type_of_account == 'c' && costumer[i].amount_of_account < 1000)
		{
			cout << endl << "PLEASE ENTER AN AMOUNT >=1000" << endl;
			cin >> right_amount_C;
			costumer[i].amount_of_account = right_amount_C;
			cout << endl << "THE AMOUNT IS : " << costumer[i].amount_of_account << endl;
		}
		system("cls");
	}

}
void deposite(account_info costumer[], int nu, int amont,int lim)
{
	for (int i = 0; i < lim; i++)
	{
		if (nu == costumer[i].number_of_account)
		{
			costumer[i].amount_of_account = costumer[i].amount_of_account - amont;
		}
	}

}
void withdraw(account_info costumer[],int no,int amount,int lim)
{
	for (int i = 0; i < lim; i++)
	{
		if (no == costumer[i].number_of_account)
		{
			costumer[i].amount_of_account = costumer[i].amount_of_account + amount;
		}
	}
}
void details(account_info costumer[], int z,int lim)
{
	for (int i = 0; i < lim; i++)
	{
		if (z == costumer[i].number_of_account)
		{
			cout << "BALANCE DETAILS " << endl << "ACCOUNT NO. : " << costumer[i].number_of_account << endl;
			cout << "ACCOUNT HOLDER NAME : " << costumer[i].name_of_account << endl;
			cout << "TYPE OF ACCOUNT : " << costumer[i].type_of_account << endl << "BALANCE AMOUNT : " << costumer[i].amount_of_account << endl;
		}
		else
		{
			cout << "     ACCOUNT NOT FOUND" << endl;
		}
	}
}
void list(account_info costumer[],int lim)
{
	for (int i = 0; i < lim; i++)
	{
		cout << costumer[i].number_of_account << "             " << costumer[i].name_of_account << "           " << costumer[i].type_of_account << "            " << costumer[i].amount_of_account << endl;
	}
}
void delet(account_info costumer[], int elem,int &lim)
{
	for (int i = 0; i < lim; i++)
	{
			if (costumer[i].number_of_account == elem)
			{
				for (int j = i; j < (lim - 1); j++)
				{
					costumer[j] = costumer[j + 1];
				}
				break;
			}
	}
	lim--;
}
void modify(account_info costumer[], int nm,int lim)
{
	for (int i = 0; i < lim; i++)
	{
		if (nm == costumer[i].number_of_account)
		{
			cout << "ACCOUNT NO :" << costumer[i].number_of_account << endl;
			cout << "MODIFY ACCOUNT HOLDER NAME :";
			cin >> costumer[i].name_of_account; cout << endl;
			cout << "MODIFY ACCOUNT TYPE OF ACCOUNT :";
			cin >> costumer[i].type_of_account; cout << endl;
			cout << "MODIFY BALANCE AMOUNT :";
			cin >> costumer[i].amount_of_account; cout << "\n\n";
			cout << "          RECORD APDATED"<<endl;
		}
	}

}
void main()
{
	account_info costumer[1000];
	int limit;
	do
	{
		int x;
		cout << "MAIN MENU" << endl << "01.NEW ACCOUNT" << endl << "02.DEPOSIT AMOUNT" << endl << "03.WITHDRAW AMOUNT" << endl << "04.BALANCE ENQUIRY" << endl;
		cout << "05.ALL ACCOUNT HOLDER LIST" << endl << "06.CLOSE AN ACCOUNT" << endl << "07.MODIFY AN ACCOUNT" << endl << "08.EXIT" << endl << "SELECT YOUR OPTION(1-8)";
		cin >> x;
		system("cls");
		if (x == 1)
		{
			cout << "PLEASE ENTER THE NUMBER OF ACCOUNTS YOU WANT TO ENTER ";
			cin >> limit;
			new_acc(costumer,limit);
			system("pause");
			system("cls");

		}
		else if (x == 2)
		{
			int y, n;

			cout << "ENTER THE ACCOUNT NO. :" << endl;
			cin >> y;
			details(costumer, y,limit);
			cout << "           TO DEBOSITE AN AMOUNT" << endl << "ENTER THE AMOUNT TO BE DEBOSITED : ";
			cin >> n;
			deposite(costumer, y, n,limit);
			cout << "     RECORD APDATED"<<endl;
			system("pause");
			system("cls");
		}
		else if (x == 3)
		{
			int u, m;

			cout << "ENTER THE ACCOUNT NO. :" << endl;
			cin >> u;
			details(costumer, u,limit);
			cout << "           TO WITHDRAW AMOUNT" << endl << "ENTER THE AMOUNT TO BE WITHDRAWED : ";
			cin >> m;
			withdraw(costumer, u, m,limit);
			cout << "     RECORD APDATED"<<endl;
			system("pause");
			system("cls");
		}
		else if (x == 4)
		{

			cout << "ENTER THE ACCOUNT NO. :" << endl;
			int n;
			cin >> n;
			details(costumer, n,limit);
			system("pause");
			system("cls");
		}
		else if (x == 5)
		{

			cout << "                ALL ACCOUNT HOLDER LIST" << endl;
			cout << "================================================================================================" << endl;
			cout << "A\C NO           NAME           TYPE       BALANCE  " << endl;
			cout << "================================================================================================" << endl;
			list(costumer,limit);
			system("pause");
			system("cls");
		}
			else if (x == 6)
			{
				cout << "ENTER THE ACCOUNT NO. : ";
				int w;
				cin >> w;
				delet(costumer, w,limit);
				system("pause");
				system("cls");
			}
		else if (x == 7)
		{
			cout << "ENTER THE ACCOUNT NO. :" << endl;
			int o;
			cin >> o;
			details(costumer, o,limit);
			cout << "ENTER THE NEW DETAILS OF ACCOUNT" << endl;
			modify(costumer, o,limit);
			cout << "      DETAILS APDATED " << endl;
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