
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
char Feld[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
bool Feld2[10] = {false,false,false,false,false,false,false,false,false,false};
int Win();
int Ausgabe();
int Eingabe();
int Computer();
int Spieler = 'X';
int Computer2 = 'O';
int Beginnen =1;
int b;


int main()
{

	setlocale(LC_ALL, "German"); 
	
	cout<<"Wer soll beginnen ?"<<endl<<"<CPU(1)>"<<"  "<<"<Spieler(2)>";
	cin>>Beginnen;
	
	if (Beginnen=1)
	  b=1;
	if (Beginnen=2)
	  b=3;
	 
	
    Ausgabe();
    while (1)  //Schleife 1 ist immer erfüllt
    {  
        
        if (b==1)
        {
		Computer();
		
        b=0;
        
		}
		
        Eingabe();
        Computer();
        Ausgabe();
        
        
        if (Win() == 'X')
        {	system("color 0A");
            cout << "X wins!" <<endl<<endl;
            system("Pause");
            return 0;
        }
        if (Win() == 'O')
        {	system("color 0C");
            cout << "O wins!" <<endl<<endl;
            system("Pause");
            return 0;

        }
        int Computer();
    }
    system("Pause");
    return 0;
    
}


int Ausgabe()
{
    system("cls");
    cout << "Tic Tac Toe"  << endl<<endl;
   
    
	cout<<Feld[0][0]<<" | "<<Feld[0][1]<<" | "<<Feld[0][2]<<endl;
	cout<<"----------"<<endl;
	cout<<Feld[1][0]<<" | "<<Feld[1][1]<<" | "<<Feld[1][2]<<endl;
	cout<<"----------"<<endl;
	cout<<Feld[2][0]<<" | "<<Feld[2][1]<<" | "<<Feld[2][2]<<endl<<endl;
	
}

int Eingabe()
{
    int a;
    system("color 0A");
    
    cout << "Wählen sie ein Feld aus ";
    cin>> a;
    
    	while(Feld2[a]==true)
    	{	
    
   
		cout << "Wählen sie ein neues Feld aus ";
    	cin>> a;
	
    
		}

	
	
	
	
 
    if (a == 1)
        {
		Feld[0][0] = Spieler;
		Feld2[1]=true;
		}
	if (a == 2)
		{
        Feld[0][1] = Spieler;
		Feld2[2]=true;    
		}
	if (a == 3)
		{
        Feld[0][2] = Spieler;
        Feld2[3]=true;
    	}
	if (a == 4)
		{
        Feld[1][0] = Spieler;
        Feld2[4]=true;
    	}
	if (a == 5)
		{
        Feld[1][1] = Spieler;
		Feld2[5]=true;
		}
	if (a == 6)
		{
        Feld[1][2] = Spieler;
		Feld2[6]=true;
		}
	if (a == 7)
		{
        Feld[2][0] = Spieler;
		Feld2[7]=true;
		}
	if (a == 8)
		{
        Feld[2][1] = Spieler;
        Feld2[8]=true;
    	}
	if (a == 9)
		{
        Feld[2][2] = Spieler;
		Feld2[9]=true;
		}

}

int Computer()
{ 
   	 system("color 0C");
	int a=0;
	srand(time(NULL));
	
cout << "Wählen sie ein Feld aus ";
a = (rand() %10);

    
    	while(Feld2[a]==true)
    	{	
    
   
        a = (rand() %10);
		
    	
	
    
		}

	

	
	 if (a == 1)
     {
		Feld[0][0] = Computer2;
		Feld2[1]=true;
	 }
	if (a == 2)
		{
        Feld[0][1] = Computer2;
		Feld2[2]=true;    
		}
	if (a == 3)
		{
        Feld[0][2] = Computer2;
        Feld2[3]=true;
    	}
	if (a == 4)
		{
        Feld[1][0] = Computer2;
        Feld2[4]=true;
    	}
	if (a == 5)
		{
        Feld[1][1] = Computer2;
		Feld2[5]=true;
		}
	if (a == 6)
		{
        Feld[1][2] = Computer2;
		Feld2[6]=true;
		}
	if (a == 7)
		{
        Feld[2][0] = Computer2;
		Feld2[7]=true;
		}
	if (a == 8)
		{
        Feld[2][1] = Computer2;
        Feld2[8]=true;
    	}
	if (a == 9)
		{
        Feld[2][2] = Computer2;
		Feld2[9]=true;
		}


}

int Win()
{
    
    if (Feld[0][0] == 'X' && Feld[0][1] == 'X' && Feld[0][2] == 'X')
        return 'X';
    if (Feld[1][0] == 'X' && Feld[1][1] == 'X' && Feld[1][2] == 'X')
        return 'X';
    if (Feld[2][0] == 'X' && Feld[2][1] == 'X' && Feld[2][2] == 'X')
        return 'X';
    if (Feld[0][0] == 'X' && Feld[1][0] == 'X' && Feld[2][0] == 'X')
        return 'X';
    if (Feld[0][1] == 'X' && Feld[1][1] == 'X' && Feld[2][1] == 'X')
        return 'X';
    if (Feld[0][2] == 'X' && Feld[1][2] == 'X' && Feld[2][2] == 'X')
        return 'X';
    if (Feld[0][0] == 'X' && Feld[1][1] == 'X' && Feld[2][2] == 'X')
        return 'X';
    if (Feld[2][0] == 'X' && Feld[1][1] == 'X' && Feld[0][2] == 'X')
        return 'X';
 

    if (Feld[0][0] == 'O' && Feld[0][1] == 'O' && Feld[0][2] == 'O')
        return 'O';
    if (Feld[1][0] == 'O' && Feld[1][1] == 'O' && Feld[1][2] == 'O')
        return 'O';
    if (Feld[2][0] == 'O' && Feld[2][1] == 'O' && Feld[2][2] == 'O')
        return 'O';
    if (Feld[0][0] == 'O' && Feld[1][0] == 'O' && Feld[2][0] == 'O')
        return 'O';
    if (Feld[0][1] == 'O' && Feld[1][1] == 'O' && Feld[2][1] == 'O')
        return 'O';
    if (Feld[0][2] == 'O' && Feld[1][2] == 'O' && Feld[2][2] == 'O')
        return 'O';
    if (Feld[0][0] == 'O' && Feld[1][1] == 'O' && Feld[2][2] == 'O')
        return 'O';
    if (Feld[2][0] == 'O' && Feld[1][1] == 'O' && Feld[0][2] == 'O')
        return 'O';
 

}


