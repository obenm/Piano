#include <graphics.h>
#include <process.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream.h>
#include <dos.h>

class piano
{
	public:
		void inicio() // metodo para iniciar graficos
		{
			int gdriver=DETECT, gmode, errorcode;
			initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
			errorcode=graphresult();
			if(errorcode != grOk)
			{
				cout<<" ERROR DE GRAFICOS "<<endl;
				getch();
				exit(1);
			}
		} // llave de fin de un metodo (inicializacion de graficos)

		void pintar_piano()
		{
			setfillstyle(SOLID_FILL, WHITE);
			bar(0, 0, 640, 480);

			settextstyle(DEFAULT_FONT, HORIZ_DIR, 12);
			setcolor(CYAN);
			outtextxy(90, 30, "PIANO");
			settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
			setcolor(BLACK);
			outtextxy(200, 125, "Pulsa la tecla correspondiente");

			setfillstyle(SOLID_FILL, BLACK);
			bar(95, 145, 550, 305);
			setfillstyle(SOLID_FILL, WHITE);
			bar(100, 150, 545, 300);
			setfillstyle(SOLID_FILL, BLACK);
			bar(130, 150, 130, 300);
			bar(160, 150, 160, 300);
			bar(190, 150, 190, 300);
			bar(220, 150, 220, 300);
			bar(250, 150, 250, 300);
			bar(280, 150, 280, 300);
			bar(310, 150, 310, 300);
			bar(340, 150, 340, 300);
			bar(370, 150, 370, 300);
			bar(400, 150, 400, 300);
			bar(430, 150, 430, 300);
			bar(460, 150, 460, 300);
			bar(490, 150, 490, 300);
			bar(520, 150, 520, 300);
			setfillstyle(SOLID_FILL, BLACK);
			bar(120, 150, 140, 225);
			bar(150, 150, 170, 225);

			bar(210, 150, 230, 225);
			bar(240, 150, 260, 225);
			bar(270, 150, 290, 225);

			bar(330, 150, 350, 225);
			bar(360, 150, 380, 225);

			bar(420, 150, 440, 225);
			bar(450, 150, 470, 225);
			bar(480, 150, 500, 225);

			setcolor(BLACK);
			outtextxy(112, 250, "A");
			outtextxy(142, 250, "S");
			outtextxy(172, 250, "D");
			outtextxy(202, 250, "F");
			outtextxy(232, 250, "G");
			outtextxy(262, 250, "H");
			outtextxy(292, 250, "J");
			outtextxy(322, 250, "K");
			outtextxy(352, 250, "L");
			outtextxy(382, 250, "Z");
			outtextxy(412, 250, "X");
			outtextxy(442, 250, "C");
			outtextxy(472, 250, "V");
			outtextxy(502, 250, "B");
			outtextxy(532, 250, "N");

			setcolor(WHITE);
			outtextxy(127, 185, "Q");
			outtextxy(157, 185, "W");
			outtextxy(217, 185, "E");
			outtextxy(247, 185, "R");
			outtextxy(277, 185, "T");
			outtextxy(337, 185, "Y");
			outtextxy(367, 185, "U");
			outtextxy(427, 185, "I");
			outtextxy(457, 185, "O");
			outtextxy(487, 185, "P");
		}

		void pintar_tecla(char tecla, int color)
		{
			switch(tecla)
			{
				case 'a':
					setfillstyle(SOLID_FILL, color);
					bar(100, 150, 129, 300);
					setcolor(BLACK);
					outtextxy(112, 250, "A");
					setfillstyle(SOLID_FILL, BLACK);
					bar(120, 150, 140, 225);
					setcolor(WHITE);
					outtextxy(127, 185, "Q");
					break;
				case 's':
					setfillstyle(SOLID_FILL, color);
					bar(131, 150, 159, 300);
					setcolor(BLACK);
					outtextxy(142, 250, "S");
					setfillstyle(SOLID_FILL, BLACK);
					bar(150, 150, 170, 225);
					bar(120, 150, 140, 225);
					setcolor(WHITE);
					outtextxy(157, 185, "W");
					outtextxy(127, 185, "Q");
					break;
			case 'd':
					setfillstyle(SOLID_FILL, color);
					bar(161, 150, 189, 300);
					setcolor(BLACK);
					outtextxy(172, 250, "D");
					setfillstyle(SOLID_FILL, BLACK);
					bar(150, 150, 170, 225);
					setcolor(WHITE);
					outtextxy(157, 185, "W");
					break;
			case 'f':
					setfillstyle(SOLID_FILL, color);
					bar(191, 150, 219, 300);
					setcolor(BLACK);
					outtextxy(202, 250, "F");
					setfillstyle(SOLID_FILL, BLACK);
					bar(210, 150, 230, 225);
					setcolor(WHITE);
					outtextxy(217, 185, "E");
					break;
			case 'g':
					setfillstyle(SOLID_FILL, color);
					bar(221, 150, 249, 300);
					setcolor(BLACK);
					outtextxy(232, 250, "G");
					setfillstyle(SOLID_FILL, BLACK);
					bar(240, 150, 260, 225);
					bar(210, 150, 230, 225);
					setcolor(WHITE);
					outtextxy(247, 185, "R");
					outtextxy(217, 185, "E");
					break;
			case 'h':
					setfillstyle(SOLID_FILL, color);
					bar(251, 150, 279, 300);
					setcolor(BLACK);
					outtextxy(262, 250, "H");
					setfillstyle(SOLID_FILL, BLACK);
					bar(270, 150, 290, 225);
					bar(240, 150, 260, 225);
					setcolor(WHITE);
					outtextxy(277, 185, "T");
					outtextxy(247, 185, "R");
					break;
			case 'j':
					setfillstyle(SOLID_FILL, color);
					bar(281, 150, 309, 300);
					setcolor(BLACK);
					outtextxy(292, 250, "J");
					setfillstyle(SOLID_FILL, BLACK);
					bar(270, 150, 290, 225);
					setcolor(WHITE);
					outtextxy(277, 185, "T");
					break;
			case 'k':
					setfillstyle(SOLID_FILL, color);
					bar(311, 150, 339, 300);
					setcolor(BLACK);
					outtextxy(322, 250, "K");
					setfillstyle(SOLID_FILL, BLACK);
					bar(330, 150, 350, 225);
					setcolor(WHITE);
					outtextxy(337, 185, "Y");
					break;
			case 'l':
					setfillstyle(SOLID_FILL, color);
					bar(341, 150, 369, 300);
					setcolor(BLACK);
					outtextxy(352, 250, "L");
					setfillstyle(SOLID_FILL, BLACK);
					bar(330, 150, 350, 225);
					bar(360, 150, 370, 225);
					setcolor(WHITE);
					outtextxy(337, 185, "Y");
					outtextxy(367, 185, "U");
					break;
			case 'z':
					setfillstyle(SOLID_FILL, color);
					bar(371, 150, 399, 300);
					setcolor(BLACK);
					outtextxy(382, 250, "Z");
					setfillstyle(SOLID_FILL, BLACK);
					bar(360, 150, 380, 225);
					setcolor(WHITE);
					outtextxy(367, 185, "U");
					break;
			case 'x':
					setfillstyle(SOLID_FILL, color);
					bar(401, 150, 429, 300);
					setcolor(BLACK);
					outtextxy(412, 250, "X");
					setfillstyle(SOLID_FILL, BLACK);
					bar(420, 150, 440, 225);
					setcolor(WHITE);
					outtextxy(427, 185, "I");
					break;
			case 'c':
					setfillstyle(SOLID_FILL, color);
					bar(431, 150, 459, 300);
					setcolor(BLACK);
					outtextxy(442, 250, "C");
					setfillstyle(SOLID_FILL, BLACK);
					bar(420, 150, 440, 225);
					bar(450, 150, 470, 225);
					setcolor(WHITE);
					outtextxy(427, 185, "I");
					outtextxy(457, 185, "O");
					break;
			case 'v':
					setfillstyle(SOLID_FILL, color);
					bar(461, 150, 489, 300);
					setcolor(BLACK);
					outtextxy(472, 250, "V");
					setfillstyle(SOLID_FILL, BLACK);
					bar(480, 150, 500, 225);
					bar(450, 150, 470, 225);
					setcolor(WHITE);
					outtextxy(487, 185, "P");
					outtextxy(457, 185, "O");
					break;
			case 'b':
					setfillstyle(SOLID_FILL, color);
					bar(491, 150, 519, 300);
					setcolor(BLACK);
					outtextxy(502, 250, "B");
					setfillstyle(SOLID_FILL, BLACK);
					bar(480, 150, 500, 225);
					setcolor(WHITE);
					outtextxy(487, 185, "P");
					break;
			case 'n':
					setfillstyle(SOLID_FILL, color);
					bar(521, 150, 545, 300);
					setcolor(BLACK);
					outtextxy(532, 250, "N");
					break;
			case 'q':
					setfillstyle(SOLID_FILL, color);
					bar(120, 150, 140, 225);
					setcolor(WHITE);
					outtextxy(127, 185, "Q");
					break;
			case 'w':
					setfillstyle(SOLID_FILL, color);
					bar(150, 150, 170, 225);
					setcolor(WHITE);
					outtextxy(157, 185, "W");
					break;
			case 'e':
					setfillstyle(SOLID_FILL, color);
					bar(210, 150, 230, 225);
					setcolor(WHITE);
					outtextxy(217, 185, "E");
					break;
			case 'r':
					setfillstyle(SOLID_FILL, color);
					bar(240, 150, 260, 225);
					setcolor(WHITE);
					outtextxy(247, 185, "R");
					break;
			case 't':
					setfillstyle(SOLID_FILL, color);
					bar(270, 150, 290, 225);
					setcolor(WHITE);
					outtextxy(277, 185, "T");
					break;
			case 'y':
					setfillstyle(SOLID_FILL, color);
					bar(330, 150, 350, 225);
					setcolor(WHITE);
					outtextxy(337, 185, "Y");
					break;
			case 'u':
					setfillstyle(SOLID_FILL, color);
					bar(360, 150, 380, 225);
					setcolor(WHITE);
					outtextxy(367, 185, "U");
					break;
			case 'i':
					setfillstyle(SOLID_FILL, color);
					bar(420, 150, 440, 225);
					setcolor(WHITE);
					outtextxy(427, 185, "I");
					break;
			case 'o':
					setfillstyle(SOLID_FILL, color);
					bar(450, 150, 470, 225);
					setcolor(WHITE);
					outtextxy(457, 185, "O");
					break;
			case 'p':
					setfillstyle(SOLID_FILL, color);
					bar(480, 150, 500, 225);
					setcolor(WHITE);
					outtextxy(487, 185, "P");
					break;
			}
		}

		void sonidos()
		{
			nosound();
			char tecla;
			do
			{
				tecla = getch();
				switch(tecla)
				{
					case 'a': case 'A':
						sound(100);
						pintar_tecla('a', CYAN);
						delay(100);
						nosound();
						pintar_tecla('a', WHITE);
						break;
					case 's': case 'S':
						sound(300);
						pintar_tecla('s', CYAN);
						delay(100);
						nosound();
						pintar_tecla('s', WHITE);
						break;
					case 'd': case 'D':
						sound(500);
						pintar_tecla('d', CYAN);
						delay(100);
						nosound();
						pintar_tecla('d', WHITE);
						break;
					case 'f': case 'F':
						sound(700);
						pintar_tecla('f', CYAN);
						delay(100);
						nosound();
						pintar_tecla('f', WHITE);
						break;
					case 'g': case 'G':
						sound(900);
						pintar_tecla('g', CYAN);
						delay(100);
						nosound();
						pintar_tecla('g', WHITE);
						break;
					case 'h': case 'H':
						sound(1100);
						pintar_tecla('h', CYAN);
						delay(100);
						nosound();
						pintar_tecla('h', WHITE);
						break;
					case 'j': case 'J':
						sound(1300);
						pintar_tecla('j', CYAN);
						delay(100);
						nosound();
						pintar_tecla('j', WHITE);
						break;
					case 'k': case 'K':
						sound(1500);
						pintar_tecla('k', CYAN);
						delay(100);
						nosound();
						pintar_tecla('k', WHITE);
						break;
					case 'l': case 'L':
						sound(1700);
						pintar_tecla('l', CYAN);
						delay(100);
						nosound();
						pintar_tecla('l', WHITE);
						break;
					case 'z': case 'Z':
						sound(1900);
						pintar_tecla('z', CYAN);
						delay(100);
						nosound();
						pintar_tecla('z', WHITE);
						break;
					case 'x': case 'X':
						sound(2100);
						pintar_tecla('x', CYAN);
						delay(100);
						nosound();
						pintar_tecla('x', WHITE);
						break;
					case 'c': case 'C':
						sound(2300);
						pintar_tecla('c', CYAN);
						delay(100);
						nosound();
						pintar_tecla('c', WHITE);
						break;
					case 'v': case 'V':
						sound(2500);
						pintar_tecla('v', CYAN);
						delay(100);
						nosound();
						pintar_tecla('v', WHITE);
						break;
					case 'b': case 'B':
						sound(2700);
						pintar_tecla('b', CYAN);
						delay(100);
						nosound();
						pintar_tecla('b', WHITE);
						break;
					case 'n': case 'N':
						sound(2900);
						pintar_tecla('n', CYAN);
						delay(100);
						nosound();
						pintar_tecla('n', WHITE);
						break;

					case 'q': case 'Q':
						sound(3100);
						pintar_tecla('q', CYAN);
						delay(100);
						nosound();
						pintar_tecla('q', BLACK);
						break;
					case 'w': case 'W':
						sound(3300);
						pintar_tecla('w', CYAN);
						delay(100);
						nosound();
						pintar_tecla('w', BLACK);
						break;
					case 'e': case 'E':
						sound(3500);
						pintar_tecla('e', CYAN);
						delay(100);
						nosound();
						pintar_tecla('e', BLACK);
						break;
					case 'r': case 'R':
						sound(3700);
						pintar_tecla('r', CYAN);
						delay(100);
						nosound();
						pintar_tecla('r', BLACK);
						break;
					case 't': case 'T':
						sound(3900);
						pintar_tecla('t', CYAN);
						delay(100);
						nosound();
						pintar_tecla('t', BLACK);
						break;
					case 'y': case 'Y':
						sound(4100);
						pintar_tecla('y', CYAN);
						delay(100);
						nosound();
						pintar_tecla('y', BLACK);
						break;
					case 'u': case 'U':
						sound(4300);
						pintar_tecla('u', CYAN);
						delay(100);
						nosound();
						pintar_tecla('u', BLACK);
						break;
					case 'i': case 'I':
						sound(4500);
						pintar_tecla('i', CYAN);
						delay(100);
						nosound();
						pintar_tecla('i', BLACK);
						break;
					case 'o': case 'O':
						sound(4700);
						pintar_tecla('o', CYAN);
						delay(100);
						nosound();
						pintar_tecla('o', BLACK);
						break;
					case 'p': case 'P':
						sound(4900);
						pintar_tecla('p', CYAN);
						delay(100);
						nosound();
						pintar_tecla('p', BLACK);
						break;

					//default:
					//case 'm': case 'M':
					case 27:
						exit(1);
						break;
				}
			}while(tecla > 0);
			nosound();
		}
};

void main()
{
	piano p;
	p.inicio();
	cleardevice();
	p.pintar_piano();
	p.sonidos();
	getch();
}