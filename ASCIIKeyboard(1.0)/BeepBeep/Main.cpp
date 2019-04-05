#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>

using namespace std;


int main()
{
	char input;
	int time = 500;

	cout << "****************************\n";
	cout << "ASCII Keyboard 1.0\n";
	cout << "By: Keegan 	4/5/19\n";
	cout << "Please distribute and modify to your hearts content!\n";
	cout << "Thank you for checking it out! :)\n";
	cout << "\n";
	cout << "Backspace: Modify amount of time sounds play.\n";
	cout << "Enter: Jumps one line down.\n";
	cout << "****************************\n";

	



	while (true)
	{
		input = _getch();
		if (input == 0 || input == 0xE0)
		{
			input = _getch();
		}
		if (input == 27) //ESC 
			break;


		else if (input == 97)
		{
			Beep(250, time);
			printf("a");
		}
		else if (input == 98)
		{
			Beep(300, time);
			printf("b");
		}
		else if (input == 99)
		{
			Beep(350, time);
			printf("c");
		}
		else if (input == 100)
		{
			Beep(400, time);
			printf("d");
		}
		else if (input == 101)
		{
			Beep(450, time);
			printf("e");
		}
		else if (input == 102)
		{
			Beep(500, time);
			printf("f");
			
		}
		else if (input == 103)
		{
			Beep(550, time);
			printf("g");
		}
		else if (input == 104)
		{
			Beep(600, time);
			printf("h");
		}
		else if (input == 105)
		{
			Beep(650, time);
			printf("i");
		}
		else if (input == 106)
		{
			Beep(700, time);
			printf("j");
		}
		else if (input == 107)
		{
			Beep(750, time);
			printf("k");
		}
		else if (input == 108)
		{
			Beep(800, time);
			printf("l");
		}
		else if (input == 109)
		{
			Beep(850, time);
			printf("m");
		}
		else if (input == 110)
		{
			Beep(900, time);
			printf("n");
		}
		else if (input == 111)
		{
			Beep(950, time);
			printf("o");
		}
		else if (input == 112)
		{
			Beep(1000, time);
			printf("p");
		}
		else if (input == 113)
		{
			Beep(1050, time);
			printf("q");
		}
		else if (input == 114)
		{
			Beep(1100, time);
			printf("r");
		}
		else if (input == 115)
		{
			Beep(1150, time);
			printf("s");
		}
		else if (input == 116)
		{
			Beep(1200, time);
			printf("t");
		}
		else if (input == 117)
		{
		Beep(1250, time);
		printf("u");
		}
		else if (input == 118)
		{
		Beep(1300, time);
		printf("v");
		}
		else if (input == 119)
		{
		Beep(1350, time);
		printf("w");
		}
		else if (input == 120)
		{
		Beep(1400, time);
		printf("x");
		}
		else if (input == 121)
		{
		Beep(1450, time);
		printf("y");
		}
		else if (input == 122)
		{
		Beep(1500, time);
		printf("z");
		}

		//space
		else if (input == 32)
		{
			Beep(225, 250);
			printf(" ");
		}
		// enter
		else if (input == 13)
		{
			printf("\n");
		}

		else if (input == 8)
		{
			int tempTime;
			cout << "\nPlease enter a number you'd like for the amount of time you want the sound to last (in milliseconds)" << endl;
			cin >> tempTime;
			time = tempTime;
			cout << "New Time: " << time <<" milliseconds" << endl;
		}
		
		else
		{
			printf("Please enter a letter from a - z to make a sound (make sure caps lock is off).\n");
			printf("ASCII Code of the character you just entered: %d", (int)input);
		}
			
	}
	return 0;
}

/* ASCII Codes for letters a - z (lowercase)

97		a	
98		b	
99		c	
100		d	
101		e	
102		f	
103		g	
104		h	
105		i	
106		j	
107		k	
108		l	
109		m	
110		n	
111		o	
112		p	
113		q	
114		r	
115		s	
116		t	
117		u	
118		v	
119		w	
120		x	
121		y	
122		z	


*/