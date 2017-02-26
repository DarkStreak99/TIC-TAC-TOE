#include<iostream.h>
#include<conio.h>
#include<process.h>

void checkwin(char &a,char &b,char &c,char &d,char &e,char &f,char &g,char &h,char &i)
{
 if (a=='X'&&b=='X'&&c=='X')
  {
   cout << "player 1 wins" << endl;
   getch();
   exit(0);
  }
  if (d=='X'&&e=='X'&&f=='X')
  {
   cout << "player 1 wins" << endl;
   getch();
   exit(0);
  }
  if (g=='X'&&h=='X'&&i=='X')
  {
   cout << "player 1 wins" << endl;
   getch();
   exit(0);
  }
  if (a=='X'&&d=='X'&&g=='X')
  {
   cout << "player 1 wins" << endl;
   getch();
   exit(0);
  }
  if (b=='X'&&e=='X'&&h=='X')
  {
   cout << "player 1 wins" << endl;
   getch();
   exit(0);
  }
  if (c=='X'&&f=='X'&&i=='X')
  {
   cout << "player 1 wins" << endl;
   getch();
   exit(0);
  }
  if (a=='X'&&e=='X'&&i=='X')
  {
   cout << "player 1 wins" << endl;
   getch();
   exit(0);
  }
  if (c=='X'&&e=='X'&&g=='X')
  {
   cout << "player 1 wins" << endl;
   getch();
   exit(0);
  }
  if (a=='O'&&b=='O'&&c=='O')
  {
   cout << "player 2 wins" << endl;
   getch();
   exit(0);
  }
  if (d=='O'&&e=='O'&&f=='O')
  {
   cout << "player 2 wins" << endl;
   getch();
   exit(0);
  }
  if (g=='O'&&h=='O'&&i=='O')
  {
   cout << "player 2 wins" << endl;
   getch();
   exit(0);
  }
  if (a=='O'&&d=='O'&&g=='O')
  {
   cout << "player 2 wins" << endl;
   getch();
   exit(0);
  }
  if (b=='O'&&e=='O'&&h=='O')
  {
   cout << "player 2 wins" << endl;
   getch();
   exit(0);
  }
  if (c=='O'&&f=='O'&&i=='O')
  {
   cout << "player 2 wins" << endl;
   getch();
   exit(0);
  }
  if (a=='O'&&e=='O'&&i=='O')
  {
   cout << "player 2 wins" << endl;
   getch();
   exit(0);
  }
  if (c=='O'&&e=='O'&&g=='O')
  {
   cout << "player 2 wins" << endl;
   getch();
   exit(0);
  }
  if (a!=' '&&i!=' '&&h!=' '&&g!=' '&&f!=' '&&e!=' '&&d!=' '&&c!=' '&&b!=' ')
  {
   cout << "draw match" << endl;
   getch();
   exit(0);
  }
 }

void board(char a,char b,char c,char d,char e,char f,char g,char h,char i)
{
 clrscr();
 cout << "   |   |   " << endl;
 cout << " " << a << " | " << b << " | " << c << endl;
 cout << "___|___|___" << endl;
 cout << "   |   |   " << endl;
 cout << " " << d << " | " << e << " | " << f << endl;
 cout << "___|___|___" << endl;
 cout << "   |   |   " << endl;
 cout << " " << g << " | " << h << " | " << i << endl;
 cout << "   |   |   " << endl;
}

void player1(char &a,char &b,char &c,char &d,char &e,char &f,char &g,char &h,char &i)
{
 int n;
 A:cout << "player 1 enter a no" << endl;
 cin >> n;
 if (n==0)
  exit(0);
 else if (n==1&&a==' ')
    a='X';
 else if (n==2&&b==' ')
    b='X';
 else if (n==3&&c==' ')
    c='X';
 else if (n==4&&d==' ')
    d='X';
 else if (n==5&&e==' ')
    e='X';
 else if (n==6&&f==' ')
    f='X';
 else if (n==7&&g==' ')
    g='X';
 else if (n==8&&h==' ')
    h='X';
 else if (n==9&&i==' ')
    i='X';
 else
   {
    cout << "invalid no" << endl;
    goto A;
   }
 board(a,b,c,d,e,f,g,h,i);
 checkwin(a,b,c,d,e,f,g,h,i);
}

void player2(char &a,char &b,char &c,char &d,char &e,char &f,char &g,char &h,char &i)
{
 int n;
 B:cout << "player 2 enter a no" << endl;
 cin >> n;
 if (n==0)
  exit(0);
 else if (n==1&&a==' ')
    a='O';
 else if (n==2&&b==' ')
    b='O';
 else if (n==3&&c==' ')
    c='O';
 else if (n==4&&d==' ')
    d='O';
 else if (n==5&&e==' ')
    e='O';
 else if (n==6&&f==' ')
    f='O';
 else if (n==7&&g==' ')
    g='O';
 else if (n==8&&h==' ')
    h='O';
 else if (n==9&&i==' ')
    i='O';
 else
    {
     cout << "invalid no" << endl;
     goto B;
    }
 board(a,b,c,d,e,f,g,h,i);
 checkwin(a,b,c,d,e,f,g,h,i);
}

int main()
{
 clrscr();
 char a=' ',b=' ',c=' ',d=' ',e=' ',f=' ',g=' ',h=' ',i=' ';
 board(a,b,c,d,e,f,g,h,i);
 for (int z=1;z>0;z++)
 {
  player1(a,b,c,d,e,f,g,h,i);
  player2(a,b,c,d,e,f,g,h,i);
 }
 return 0;
}
