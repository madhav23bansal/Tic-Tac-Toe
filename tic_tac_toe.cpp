#include<iostream>
using namespace std;
char arr[3][3]={'1','2','3','4','5','6','7','8','9'};
char player = 'X';
int count;
void draw()
{
	
	system("cls");
	cout<<"Tic-Tac-Toe V1.0"<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
void input()
{
	int a;
	cout<<"\nIt is "<<player<<"'s turn. Press the number of the field\n";
	cin>>a;
	if(a>9)
	{
		cout<<"Please enter a valid number of the field\n";
		input();
	}
	if(a == 1)
	{
		if(arr[0][0]=='1')
			arr[0][0] = player;
		else
		{
			cout<<"Field already in use, Please try again!\n";
			input();
		}
	}
	else if(a == 2)
	{
		if(arr[0][1]=='2')
			arr[0][1] = player;
		else
		{
			cout<<"Field already in use, Please try again!\n";
			input();
		}
	}
	else if(a == 3)
	{
		if(arr[0][2]=='3')
			arr[0][2] = player;
		else
		{
			cout<<"Field already in use, Please try again!\n";
			input();
		}
	}
	else if(a == 4)
	{
		if(arr[1][0]=='4')
			arr[1][0] = player;
		else
		{
			cout<<"Field already in use, Please try again!\n";
			input();
		}
	}
	else if(a == 5)
	{
		if(arr[1][1]=='5')
			arr[1][1] = player;
		else
		{
			cout<<"Field already in use, Please try again!\n";
			input();
		}
	}
	else if(a == 6)
	{
		if(arr[1][2]=='6')
			arr[1][2] = player;
		else
		{
			cout<<"Field already in use, Please try again!\n";
			input();
		}
	}
	else if(a == 7)
	{
		if(arr[2][0]=='7')
			arr[2][0] = player;
		else
		{
			cout<<"Field already in use, Please try again!\n";
			input();
		}
	}
	else if(a == 8)
	{
		if(arr[2][1]=='8')
			arr[2][1] = player;
		else
		{
			cout<<"Field already in use, Please try again!\n";
			input();
		}
	}
	else if(a == 9)
	{
		if(arr[2][2]=='9')
			arr[2][2] = player;
		else
		{
			cout<<"Field already in use, Please try again!\n";
			input();
		}
	}		
}
void toggle()
{
	if(player == 'X')
		player = 'O';
	else
		player = 'X';
}
char win()
{
	// If X wins:
	if(arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X')
		return 'X';
	if(arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X')
		return 'X';
	if(arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X')
		return 'X';
	if(arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X')
		return 'X';
	if(arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X')
		return 'X';	
	if(arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X')
		return 'X';
	if(arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X')
		return 'X';
	if(arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X')
		return 'X';
		
	//If O wins:
	if(arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O')
		return 'O';
	if(arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O')
		return 'O';
	if(arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O')
		return 'O';
	if(arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O')
		return 'O';
	if(arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O')
		return 'O';	
	if(arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O')
		return 'O';
	if(arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O')
		return 'O';
	if(arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O')
		return 'O';
	
	return '/';		
}
int main()
{
	count=0;
	draw();
	while(1)
	{
		count++;
		input();
		draw();
		if(win() == 'X')
		{
			cout<<"\nX wins!! Congratulations\n";
			break;
		}
		else if(win() == 'O')
		{
			cout<<"\nO Wins!! Congratulations\n";
			break;
		}
		else if((win() == '/') && count==9)
		{
			cout<<"\nIt's a draw\n";
			break;
		}
		toggle();
	}
	return 0;
}
