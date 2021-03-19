#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
int bird1();
float i=0.0,j=0.0,ib=0.0,ic=0.0,ia=0.0, s=6,id=0,ie=0,if1=0,ig=0,l=0.0,i1=0,w1=0,w11=0,w22=0,w2=0,id1=0,ie1=0,i11=0,i22=0,i2=0,id2=0,ie2=0,i21=0,i32=0,w111=0,w222=0; 
float i31=0,id3=0,ie3=0,i42=0,w1111=0,w2222=0,id4=0,ie4=0,i41=0,i52=0,w11111=0,w22222=0;
int angle3=0,cvar=0;
int x=50,y=60,u=0,n=500;
int xa=75,yb=85,xc=67,yd=77,stonepick=1,ww=0;
int ia1=0,ib1=0,ic1=0,ia11=0,ib11=0,ic11=0,sto=0;
int start=0,m=0,ddd;
int w,h;
int ps,qs;
float iaw=0,ibw=0,icw=0,iaw11=0,ibw11=0,icw11=0;
void action1();
void stand();
void *font = GLUT_BITMAP_TIMES_ROMAN_24;
void *font1 = GLUT_BITMAP_HELVETICA_18;
GLfloat c[3][3] = {{1.0, 0.0, 0.0}, {0.0, 1.0, 0.0}, {0.0, 0.0, 1.0}};
GLfloat d[3][3] = {{1.0, 1.0, 0.0}, {1.0, 1.0, 0.0}, {0.9,0.5, 0.0}};
GLfloat e[3][3] = {{1.0, 0.7, 0.0}, {1.0, 0.8, 0.0}, {0.9,0.8, 0.0}};
int upbird();
void stonefall(float s);
int up();
void drink();
void action();
void action2();
void action3();
void action4();
void circle11(int x,int y)
{
	float r=40,i=0;
	glColor3f(0.1,1,0.1);
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.1,1,0.0);
	for(i=0;i<=360;i++)
	{	
		glColor3f(0,0.7,0.2);
		glVertex2i(cos(i)*r+x,sin(i)*r+y);
		glColor3f(1,0,0);
	}
	glEnd();
	glFlush();
}
void draw_birds()
{
	glLineWidth(4.0);
	iaw+=0.8,ibw+=0.8,icw+=0.8;
	if(iaw<590&&ibw<900&&icw<900)
	{
	glBegin(GL_LINE_STRIP);
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);
	glVertex2i(50+iaw,450);
	glVertex2i(55+iaw,440);
    glVertex2i(60+iaw,450);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(75+ibw,450);
	glVertex2i(80+ibw,440);
    glVertex2i(85+ibw,450);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(67+icw,430);
	glVertex2i(72+icw,420);
    glVertex2i(77+icw,430);
	glEnd();
	}
	else 
	{
		iaw=0,ibw=0,icw=0;
		draw_birds();
	}
}
void land()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,1.0,0.0);//land
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.8,0.5);
	glVertex2f(0,0);
	glVertex2f(680,0);
	glVertex2f(680,20);
	glVertex2f(10,20);
	glEnd();
	glFlush();
}
void output(int x, int y, char *string)
{
    int len,siz;
    glRasterPos2f(x, y);
    len = (int) strlen(string);
	for (siz = 0; siz < len; siz++) 
	{
		glutBitmapCharacter(font,string[siz]);
	}
}
void keyboard(unsigned char key, int x, int y)
{
	switch(key)
	{
		case 'a':
			start=1;
			glutPostRedisplay();
			PlaySound("cra.wav",NULL,SND_ASYNC);
			break;
		case 'f':
			 glutFullScreen();
			 break;
		case 27:
			exit (0);	
			glutPostRedisplay();
			break;
	}
}
void disp_start()
{
	
    glColor3f(0.5,1.5,0.6);
	output(0,460,"Press 'Esc' to quit"); 
	output(480,455,"Press 'f' for fullscreen");
   	glColor3fv(c[cvar]);
	output(280,375,"Mangalore");
	glColor3fv(c[cvar]);
	output(280,368,"-------");
	output(195,340,"COMPUTER GRAPHICS AND VISUALIZATION");
	glColor3f(0.9,0.9,0.0);
	output(260,300,"MINI PROJECT ON");
	output(270,260,"THIRSTY CROW");
	glColor3fv(c[cvar]);
	output(210,400,"SRINIVAS INSTITUTE OF TECHNOLOGY");
	glColor3fv(c[cvar]);
	output(210,392,"--------------------------------");
	glColor3f(0.6,0.4,0.6);
	output(10,150,"TEAM MEMBERS");
	glColor3f(0.5,0.6,0.8);
	output(10,100,"MADHAVI"); 
	output(200,100,"4SN10CS064");
	output(10,70,"POOJA A R");
	output(200,70,"4SN10CS083");
	glColor3f(0.5,1.5,0.6);
	output(5,20,"Press 'a' to continue");
}
void grass()
{
	glLineWidth(2);
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(10,0);
	glVertex2f(5,25);
	glVertex2f(10,0);
	glVertex2f(15,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(25,0);
	glVertex2f(20,25);
	glVertex2f(25,0);
	glVertex2f(30,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(40,0);
	glVertex2f(35,25);
	glVertex2f(40,0);
	glVertex2f(45,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(55,0);
	glVertex2f(50,25);
	glVertex2f(55,0);
	glVertex2f(60,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(597,0);
	glVertex2f(585,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(597,0);
	glVertex2f(587,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(598,0);
	glVertex2f(590,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(598,0);
	glVertex2f(593,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(599,0);
	glVertex2f(595,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(599,0);
	glVertex2f(597,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(599,0);
	glVertex2f(600,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(600,0);
	glVertex2f(603,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(600,0);
	glVertex2f(605,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(600,0);
	glVertex2f(607,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(600,0);
	glVertex2f(610,25);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(600,0);
	glVertex2f(613,25);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);
	glPointSize(1.0);
	glVertex2f(5,25);
	glEnd();
	glBegin(GL_POINTS);
	glPointSize(1.0);
	glVertex2f(15,25);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);
	glPointSize(1.0);
	glVertex2f(20,25);
	glEnd();
	glBegin(GL_POINTS);
	glPointSize(1.0);
	glVertex2f(30,25);
	glEnd();
	glBegin(GL_POINTS);
	glPointSize(1.0);
	glVertex2f(35,25);
	glEnd();
	glBegin(GL_POINTS);
	glPointSize(1.0);
	glVertex2f(45,25);
	glEnd();
	glBegin(GL_POINTS);
	glPointSize(1.0);
	glVertex2f(50,25);
	glEnd();
	glBegin(GL_POINTS);
	glPointSize(1.0);
	glVertex2f(60,25);
	glEnd();
}
void pot()
{
	glColor3f(1,0,0);
	glLineWidth(4);
	glColor3f(0,0.5,0.5);
	glColor3f(0,0,0.9);
	glBegin(GL_POLYGON);//environ
	glColor3f(0.2,0.5,0.5);
	glVertex2f(680,12.5);
	glVertex2f(555,12.5);	
	glVertex2f(559,25);
	glVertex2f(558,37.5);
	glVertex2f(555,50);
	glVertex2f(550,62.5);
	glVertex2f(548,68.5);
	glVertex2f(550,75);
	glVertex2f(555,87.5);
	glVertex2f(550,91);
	glVertex2f(540,95);
	glVertex2f(530,97);
	glVertex2f(525,98.5);
	glVertex2f(520,97);
	glVertex2f(510,95);
	glVertex2f(500,91);
	glVertex2f(495,87.5);
	glVertex2f(500,75);
	glVertex2f(502,68.5);
	glVertex2f(500,62.5);
	glVertex2f(495,50);
	glVertex2f(492,37.5);
	glVertex2f(491,25);
	glVertex2f(495,12.5);
	glVertex2f(10,12.5);
	glVertex2f(10,480);
	glColor3f(0,0.5,0.9);
	glVertex2f(680,480);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(0,0);
	glVertex2f(10,12.5);
	glVertex2f(10,480);
	glVertex2f(0,480);
	glEnd();
	glBegin(GL_LINE_LOOP);//pot
	glColor3f(0.5,0.5,0.5);
	glVertex2f(500,0);
	glVertex2f(550,0);
	glVertex2f(555,12.5);	
	glVertex2f(559,25);
	glVertex2f(558,37.5);
	glVertex2f(555,50);
	glVertex2f(550,62.5);
	glVertex2f(548,68.5);
	glVertex2f(550,75);
	glVertex2f(555,87.5);
	glVertex2f(550,91);
	glVertex2f(540,95);
	glVertex2f(530,97);
	glVertex2f(525,98.5);
	glVertex2f(520,97);
	glVertex2f(510,95);
	glVertex2f(500,91);
	glVertex2f(495,87.5);
	glVertex2f(500,75);
	glVertex2f(502,68.5);
	glVertex2f(500,62.5);
	glVertex2f(495,50);
	glVertex2f(492,37.5);
	glVertex2f(491,25);
	glVertex2f(495,12.5);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(555,87.5);//pot top
	glVertex2f(550,91);
	glVertex2f(540,95);
	glVertex2f(530,97);
	glVertex2f(525,98.5);
	glVertex2f(520,97);
	glVertex2f(510,95);
	glVertex2f(500,91);
	glVertex2f(495,87.5);
	glVertex2f(500,84);
	glVertex2f(510,80);
	glVertex2f(520,78);
	glVertex2f(525,77.5);
	glVertex2f(530,78);
	glVertex2f(540,80);
	glVertex2f(550,84);
	glEnd();
	glFlush();
}
void water(void)
{
	glColor3f(0.0,0.7,1);
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.6,0.8);
	glVertex2f(500,2);
	glVertex2f(550,2);
	glColor3f(0.0,0.5,0.5);
	glVertex2f(554,12.5);
	glColor3f(0.0,0.5,0.8);
	glVertex2f(558,25);
	glVertex2f(557,37.5);
	glVertex2f(553,50);
	glVertex2f(497,50);
	glVertex2f(493,37.5);
	glColor3f(0.0,0.7,0.5);
	glVertex2f(492,25);
	glColor3f(0.0,0.5,0.9);
	glVertex2f(496,12.5);
	glEnd();
	glFlush();
}
void stones(int x,int r1,int y)
{
	float r=4,i=0,n=1;
	glColor3f(0.2,0.1,0.1);
	for(n=1;n<=r1;n++)
	{
	glBegin(GL_POLYGON);
	for(i=0;i<=360;i++)
	{	
		glColor3f(0.4,0.1,0);
		glVertex2i(cos(i)*r+x,sin(i)*r+y);
		
	}
	glEnd();
	x=x+9;
	}
	glFlush();
}
void tree(void)
{
	glLineWidth(4);
	glColor3f(0.2f,0.1f,0.0f);
	glBegin(GL_LINE_LOOP);
	glVertex2f(136,0);//root of the tree
	glVertex2f(154,35);
	glVertex2f(154,185);
	glVertex2f(154,285);//first branch
	glVertex2f(150,295);
	glVertex2f(145,305);
	glVertex2f(135,325);
	glVertex2f(120,345);
	glVertex2f(125,345);
	glVertex2f(146,325);
	glVertex2f(150,315);//end of first branch
	glVertex2f(152,325);//second branch//'''''''''
	glVertex2f(153,345);
	glVertex2f(155,365);
	glVertex2f(154,385);
	glVertex2f(153,405);
	glVertex2f(152,415);
	glVertex2f(148,425);
	glVertex2f(140,440);
	glVertex2f(147,440);
	glVertex2f(157,425);
	glVertex2f(160,405);
	glVertex2f(164,435);
	glVertex2f(168,435);
	glVertex2f(165,415);
	glVertex2f(166,405);//===========================
	glVertex2f(167,385);
	glVertex2f(170,365);
	glVertex2f(175,360);//end of second branch
	glVertex2f(184,365);//third branch
	glVertex2f(200,385);
	glVertex2f(210,395);
	glVertex2f(220,405);
	glVertex2f(225,415);
	glVertex2f(231,415);
	glVertex2f(220,390);
	glVertex2f(245,405);
	glVertex2f(265,420);
	glVertex2f(269,421);
	glVertex2f(255,405);
	glVertex2f(230,385);//subbranch
	glVertex2f(210,365);//------------------------------------------
	glVertex2f(208,345);
	glVertex2f(210,337);
	glVertex2f(221,330);//end of third branch
	glVertex2f(280,345);//fourth 
	glVertex2f(320,365);
	glVertex2f(327,365);
	glVertex2f(300,345);
	glVertex2f(330,355);
	glVertex2f(330,345);
//	glVertex2f(300,325);
	glVertex2f(226,305);
	glVertex2f(222,297);//end of fourth branch
	glVertex2f(220,285);
	glVertex2f(220,185);
	glVertex2f(220,35);
	glVertex2f(235,0);//root
	glVertex2f(232,0);
	glVertex2f(214,15.5);
	glVertex2f(211,15.6);
	glVertex2f(215,0);
	glVertex2f(212,0);
	glVertex2f(202,15.5);
	glVertex2f(199,15.5);
	glVertex2f(197,0);
	glVertex2f(196,0);
	glVertex2f(187,15.5);
	glVertex2f(185,15.5);
	glVertex2f(178,0);
	glVertex2f(175,0);
	glVertex2f(172,15.5);
	glVertex2f(170,15.6);
	glVertex2f(153,1);
	glVertex2f(150,0);
	glVertex2f(160,15.6);
	glVertex2f(157,15.5);
	glVertex2f(139,0);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glVertex2f(155,35);
	glVertex2f(155,285);		
	glVertex2f(220,285);
	glVertex2f(219.05,35);
	glEnd();
	glBegin(GL_POLYGON);
   	glVertex2f(160,15.6);
	glVertex2f(157,15.5);
	glVertex2f(139,0);
	glVertex2f(136,0);
	glVertex2f(154,35);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(160,15.6);
	glVertex2f(150,0);
	glVertex2f(153,1);
	glVertex2f(172,15.6);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(170,15.6);
	glVertex2f(175,0);
	glVertex2f(178,0);		
	glVertex2f(185,15.6);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(187,15.6);
	glVertex2f(197,0);
	glVertex2f(196,0);
	glVertex2f(199,15.6);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(202,15.6);
	glVertex2f(212,0);
	glVertex2f(215,0);
	glVertex2f(214,15.6);		
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(211,15.6);
	glVertex2f(232,0);
	glVertex2f(235,0);
	glVertex2f(220,35);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(154,35);
	glVertex2f(157,15.5);
	glVertex2f(170,15.6);
	glVertex2f(187,15.6);
	glVertex2f(199,15.6);
	glVertex2f(214,15.6);	
	glVertex2f(220,35);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(226,305);
	glVertex2f(330,345);
	glVertex2f(330,355);
	glVertex2f(300,345);
	glVertex2f(327,365);
	glVertex2f(320,365);
	glVertex2f(280,345);
	glVertex2f(221,330);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(210,365);
	glVertex2f(230,385);
	glVertex2f(255,405);
	glVertex2f(269,421);
	glVertex2f(265,420);
	glVertex2f(245,405);
	glVertex2f(220,390);
	glVertex2f(231,415);
	glVertex2f(225,415);
	glVertex2f(220,405);
	glVertex2f(210,395);
	glVertex2f(200,385);
	glVertex2f(184,365);
	glVertex2f(175,360);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(175,360);
	glVertex2f(170,365);
	glVertex2f(167,385);
	glVertex2f(166,405);
	glVertex2f(165,415);
	glVertex2f(168,435);
	glVertex2f(164,435);
	glVertex2f(160,405);
	glVertex2f(157,425);                	
	glVertex2f(147,440);		
	glVertex2f(140,440);
	glVertex2f(148,425);
	glVertex2f(152,415);
	glVertex2f(153,405);
	glVertex2f(154,385);
	glVertex2f(155,365);
	glVertex2f(153,345);//second branch
	glVertex2f(152,325);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(150,315);
	glVertex2f(146,325);
	glVertex2f(125,345);
	glVertex2f(120,345);
	glVertex2f(135,325);
	glVertex2f(145,305);
	glVertex2f(150,295);
	glVertex2f(154,285);//first branch
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(154,285);
	glVertex2f(155,285);
	glVertex2f(219.05,285);
	glVertex2f(226,305);
	glVertex2f(221,330);
	glVertex2f(210,337);
	glVertex2f(208,345);
	glVertex2f(210,365);
	glVertex2f(175,360);
	glVertex2f(152,325);
	glVertex2f(150,315);
	glVertex2f(154,285);
	glEnd();
} 
void flower(int x,int y)
{
	float r=2,i=0;
	glColor3f(0.5,0.1,0.1);
	glBegin(GL_POLYGON);
	glColor3f(0.8,0.1,0.1);
	for(i=0;i<=360;i++)
	{	
		glColor3f(1.9,0.7,0.2);
		glVertex2i(cos(i)*r+x,sin(i)*r+y);
		glColor3f(1,0,0);
	}
	glEnd();
	glFlush();
}
void circle(int x,int y)
{
	float r=40,i=0;
	glColor3f(0.6,0.1,0.1);
	glBegin(GL_POLYGON);
	glColor3f(0.8,0.1,0.1);
	for(i=0;i<=360;i++)
	{	
		glColor3f(1.9,0.7,0.2);
		glVertex2i(cos(i)*r+x,sin(i)*r+y);
		glColor3f(1,0,0);
	}
	glEnd();
	glFlush();
}
void branchleaves(void)
{	
	circle11(100,310);//branch
	circle11(85,340);
	circle11(80,380);
	circle11(100,410);
	circle11(140,430);
	circle11(180,435);
	circle11(230,440);
	circle11(280,440);
	circle11(310,420);
	circle11(330,390);
	circle11(340,330);
	circle11(300,300);
	circle11(130,290);
	circle11(170,280);
	circle11(200,270);
	circle11(240,285);
	circle11(155,360);
	circle11(212,379);
	circle11(240,365);
	circle11(290,385);
}
void sit1()
{
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);//the bird
	glVertex2f(280,375);
	glVertex2f(279,365);
	glVertex2f(276,360);
	glVertex2f(270,358);
	glVertex2f(250,355);
	glVertex2f(225,347);
	glVertex2f(217,350);
	glVertex2f(247,365);
	glVertex2f(250,375);
	glVertex2f(255,378);
	glVertex2f(265,380);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);//head of the bird
	glVertex2f(280,375);
	glVertex2f(281,380);
	glVertex2f(288,383);
	glVertex2f(280,385);
	glVertex2f(278,392);
	glVertex2f(275,393);
	glVertex2f(271,392);
	glVertex2f(265,380);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(265,380);//bird wing
	glVertex2f(260,356);
	glVertex2f(250,346);
	glVertex2f(255,378);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);//bird eye
	glVertex2f(275,386);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);//first leg
	glVertex2f(263,357);
	glVertex2f(263,347);
	glVertex2f(263,347);
	glVertex2f(259,342);
	glVertex2f(263,347);
	glVertex2f(267,342);
	glEnd();
	glFlush();
	glBegin(GL_LINES);//second leg
	glVertex2f(269,358);
	glVertex2f(269,348);
	glVertex2f(269,348);
	glVertex2f(265,343);
	glVertex2f(269,348);
	glVertex2f(273,343);
	glEnd();
	glFlush();
}
int bird(void)
{
	float r=4,q1=0.0,q2=0.0,s=0;
	if(u<15)
	{
		sit1();
		Sleep(40);
		u++;
	}
	else
	{
		for(sto=0;sto<5;sto++)
		{
		i+=0.2;
		ia+=0.6;
		if(i<350&&ia<350&&j!=1)
		{
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);//the bird
			glVertex2f(280+i,375-ia);
			glVertex2f(279+i,365-ia);
			glVertex2f(276+i,360-ia);
			glVertex2f(270+i,358-ia);
			glVertex2f(250+i,355-ia);
			glVertex2f(225+i,347-ia);
			glVertex2f(217+i,350-ia);
			glVertex2f(247+i,365-ia);
			glVertex2f(250+i,375-ia);
			glVertex2f(255+i,378-ia);
			glVertex2f(265+i,380-ia);
			glEnd();
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);//head of the bird
			glVertex2f(280+i,375-ia);
			glVertex2f(281+i,380-ia);
			glVertex2f(288+i,383-ia);
			glVertex2f(280+i,385-ia);
			glVertex2f(278+i,392-ia);
			glVertex2f(275+i,393-ia);
			glVertex2f(271+i,392-ia);
			glVertex2f(265+i,380-ia);
			glEnd();
			/*glBegin(GL_POLYGON);
			glVertex2f(265+i,380-ia);//bird wing
			glVertex2f(260+i,356-ia);
			glVertex2f(250+i,346-ia);
			glVertex2f(255+i,378-ia);
			glEnd();*/
			glColor3f(1.0,0.0,0.0);
			glBegin(GL_POINTS);//bird eye
			glVertex2f(275+i,386-ia);
			glEnd();
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_LINES);//first leg
			glVertex2f(263+i,357-ia);
			glVertex2f(263+i,347-ia);
			glVertex2f(263+i,347-ia);
			glVertex2f(259+i,342-ia);
			glVertex2f(263+i,347-ia);
			glVertex2f(267+i,342-ia);
			glEnd();
			glFlush();
			glBegin(GL_LINES);//second leg
			glVertex2f(269+i,358-ia);
			glVertex2f(269+i,348-ia);
			glVertex2f(269+i,348-ia);
			glVertex2f(265+i,343-ia);
			glVertex2f(269+i,348-ia);
			glVertex2f(273+i,343-ia);
			glEnd();
			glFlush();
		
		}
	else
	{
	
		action();
	}
}
}
	glutPostRedisplay();
	glutSwapBuffers();
	return 1;
}
void action()
{
		
	id+=0.3,ie+=0.3,l=0;
	if(id<120&&ie<100&&l!=1)
	{
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//the bird
		glVertex2f(395+id,35+ie);
		glVertex2f(394+id,25+ie);
		glVertex2f(391+id,20+ie);
		glVertex2f(385+id,18+ie);
		glVertex2f(365+id,15+ie);
		glVertex2f(340+id,7+ie);
		glVertex2f(332+id,10+ie);
		glVertex2f(362+id,25+ie);
		glVertex2f(365+id,35+ie);
		glVertex2f(370+id,38+ie);
		glVertex2f(380+id,40+ie);
		glEnd();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//head of the bird
		glVertex2f(395+id,35+ie);
		glVertex2f(396+id,40+ie);
		glVertex2f(403+id,43+ie);
		glVertex2f(395+id,45+ie);
		glVertex2f(393+id,52+ie);	
		glVertex2f(390+id,53+ie);
		glVertex2f(386+id,52+ie);
		glVertex2f(380+id,40+ie);
		glEnd();
		glFlush();
		glColor3f(1.0,0.0,0.0);
		glBegin(GL_POINTS);//bird eye
		glVertex2f(390+id,46+ie);
		glEnd();
		glFlush();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);//first leg
		glVertex2f(378+id,17+ie);
		glVertex2f(378+id,7+ie);
		glVertex2f(378+id,7+ie);
		glVertex2f(374+id,2+ie);
		glVertex2f(378+id,7+ie);
		glVertex2f(382+id,2+ie);
		glEnd();
		glFlush();
		glBegin(GL_LINES);//second leg
		glVertex2f(384+id,18+ie);
		glVertex2f(384+id,8+ie);
		glVertex2f(384+id,8+ie);
		glVertex2f(380+id,3+ie);
		glVertex2f(384+id,8+ie);
		glVertex2f(388+id,3+ie);
		glEnd();
		glBegin(GL_POLYGON);
		for(i=0;i<=360;i++)
		{	
			glColor3f(0.4,0.1,0);
			glVertex2f(cos(i)*4+403+id,sin(i)*4+42+ie);
		
		}
		glEnd();
		glFlush();
		}
		else
		{
			i1+=0.3,i2+=0.3,m=0;
			if(i1<1.2&&i2<0.6&&m!=1)
			{
				glColor3f(0,0,0);
				glBegin(GL_POLYGON);//the bird
				glVertex2f(510+i1,120+i2);
				glVertex2f(509+i1,110+i2);
				glVertex2f(506+i1,105+i2);
				glVertex2f(500+i1,103+i2);
				glVertex2f(480+i1,100+i2);
				glVertex2f(455+i1,92+i2);
				glVertex2f(447+i1,95+i2);
				glVertex2f(477+i1,110+i2);
				glVertex2f(480+i1,120+i2);
				glVertex2f(485+i1,123+i2);
				glVertex2f(495+i1,125+i2);
				glEnd();
				glFlush();
				glColor3f(0.0,0.0,0.0);
				glBegin(GL_POLYGON);//head of the bird
				glVertex2f(510+i1,120+i2);
				glVertex2f(511+i1,125+i2);
				glVertex2f(518+i1,128+i2);
				glVertex2f(510+i1,130+i2);
				glVertex2f(508+i1,137+i2);	
				glVertex2f(505+i1,138+i2);
				glVertex2f(501+i1,137+i2);
				glVertex2f(495+i1,125+i2);
				glEnd();
				glColor3f(1.0,0.0,0.0);
				glBegin(GL_POINTS);//bird eye
				glVertex2f(505+i1,131+i2);
				glEnd();
				glColor3f(0.0,0.0,0.0);
				glBegin(GL_LINES);//first leg
				glVertex2f(493+i1,103+i2);
				glVertex2f(493+i1,93+i2);
				glVertex2f(493+i1,93+i2);
				glVertex2f(489+i1,88+i2);
				glVertex2f(493+i1,93+i2);
				glVertex2f(497+i1,88+i2);
				glEnd();
				glFlush();
				glBegin(GL_LINES);//second leg
				glVertex2f(499+i1,103+i2);
				glVertex2f(499+i1,93+i2);
				glVertex2f(499+i1,93+i2);
				glVertex2f(495+i1,88+i2);
				glVertex2f(499+i1,93+i2);
				glVertex2f(503+i1,88+i2);
				glEnd();
				glFlush();
			}
			else
			{
				glColor3f(0.0,0.7,1);
				glBegin(GL_POLYGON);
				glColor3f(0.0,0.6,0.8);
				glVertex2f(554,50);
				glColor3f(0.0,0.5,0.5);
				glVertex2f(496,50);
				glVertex2f(498,55);
				glColor3f(0.0,0.7,0.5);
				glVertex2f(552,55);
				glColor3f(0.0,0.5,0.9);
				glEnd();
				glFlush();
				w1+=0.2,w2+=0.3,n=0;
				if(w1<300&&w2<100&&n!=1)
				{
				
					glColor3f(0,0,0);
					glBegin(GL_POLYGON);//the bird
					glVertex2f(480-w1,120-w2);
					glVertex2f(481-w1,110-w2);
					glVertex2f(484-w1,105-w2);
					glVertex2f(490-w1,103-w2);
					glVertex2f(510-w1,100-w2);
					glVertex2f(535-w1,92-w2);
					glVertex2f(543-w1,95-w2);
					glVertex2f(513-w1,110-w2);
					glVertex2f(510-w1,120-w2);
					glVertex2f(505-w1,123-w2);
					glVertex2f(495-w1,125-w2);
					glEnd();
					glFlush();
					glColor3f(0.0,0.0,0.0);
					glBegin(GL_POLYGON);//head of the bird
					glVertex2f(480-w1,120-w2);
					glVertex2f(479-w1,125-w2);
					glVertex2f(472-w1,124-w2);
					glVertex2f(480-w1,130-w2);
					glVertex2f(482-w1,137-w2);	
					glVertex2f(485-w1,138-w2);
					glVertex2f(489-w1,137-w2);
					glVertex2f(495-w1,120-w2);
					glEnd();
					glColor3f(1.0,0.0,0.0);
					glBegin(GL_POINTS);//bird eye
					glVertex2f(485-w1,131-w2);
					glEnd();
					glColor3f(0.0,0.0,0.0);
					glBegin(GL_LINES);//first leg
					glVertex2f(493-w1,103-w2);
					glVertex2f(493-w1,93-w2);
					glVertex2f(493-w1,93-w2);
					glVertex2f(489-w1,88-w2);
					glVertex2f(493-w1,93-w2);
					glVertex2f(497-w1,88-w2);
					glEnd();
					glFlush();
					glBegin(GL_LINES);//second leg
					glVertex2f(499-w1,103-w2);
					glVertex2f(499-w1,93-w2);
					glVertex2f(499-w1,93-w2);
					glVertex2f(495-w1,88-w2);
					glVertex2f(499-w1,93-w2);
					glVertex2f(503-w1,88-w2);
					glEnd();
					glFlush();
				}
				else
					action1();
				glBegin(GL_POLYGON);
				for(i=0;i<=360;i++)
				{	
					glColor3f(0.4,0.1,0);
					glVertex2f(cos(i)*4+520,sin(i)*4+10);
				}
					glEnd();
			}
	
		}
	
}
void action1()
{
		id1+=0.3,ie1+=0.3,l=0;
		if(id1<120&&ie1<100&&l!=1)
		{
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);//the bird
			glVertex2f(395+id1,35+ie1);
			glVertex2f(394+id1,25+ie1);
			glVertex2f(391+id1,20+ie1);
			glVertex2f(385+id1,18+ie1);
			glVertex2f(365+id1,15+ie1);
			glVertex2f(340+id1,7+ie1);
			glVertex2f(332+id1,10+ie1);
			glVertex2f(362+id1,25+ie1);
			glVertex2f(365+id1,35+ie1);
			glVertex2f(370+id1,38+ie1);
			glVertex2f(380+id1,40+ie1);
			glEnd();
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);//head of the bird
			glVertex2f(395+id1,35+ie1);
			glVertex2f(396+id1,40+ie1);
			glVertex2f(403+id1,43+ie1);
			glVertex2f(395+id1,45+ie1);
			glVertex2f(393+id1,52+ie1);	
			glVertex2f(390+id1,53+ie1);
			glVertex2f(386+id1,52+ie1);
			glVertex2f(380+id1,40+ie1);
			glEnd();
			glFlush();
			glColor3f(1.0,0.0,0.0);
			glBegin(GL_POINTS);//bird eye
			glVertex2f(390+id1,46+ie1);
			glEnd();
			glFlush();
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_LINES);//first leg
			glVertex2f(378+id1,17+ie1);
			glVertex2f(378+id1,7+ie1);
			glVertex2f(378+id1,7+ie1);
			glVertex2f(374+id1,2+ie1);
			glVertex2f(378+id1,7+ie1);
			glVertex2f(382+id1,2+ie1);
			glEnd();
			glFlush();
			glBegin(GL_LINES);//second leg
			glVertex2f(384+id1,18+ie1);
			glVertex2f(384+id1,8+ie1);
			glVertex2f(384+id1,8+ie1);
			glVertex2f(380+id1,3+ie1);
			glVertex2f(384+id1,8+ie1);
			glVertex2f(388+id1,3+ie1);
			glEnd();
			glBegin(GL_POLYGON);
			for(i=0;i<=360;i++)
			{	
				glColor3f(0.4,0.1,0);
				glVertex2f(cos(i)*4+403+id1,sin(i)*4+42+ie1);
			
			}
			glEnd();
			glFlush();
		}
		else
		{
			i11+=0.3,i22+=0.3,m=0;
			if(i11<0.6&&i22<0.6&&m!=1)
			{
				glColor3f(0,0,0);
				glBegin(GL_POLYGON);//the bird
				glVertex2f(510+i11,120+i22);
				glVertex2f(509+i11,110+i22);
				glVertex2f(506+i11,105+i22);
				glVertex2f(500+i11,103+i22);
				glVertex2f(480+i11,100+i22);
				glVertex2f(455+i11,92+i22);
				glVertex2f(447+i11,95+i22);
				glVertex2f(477+i11,110+i22);
				glVertex2f(480+i11,120+i22);
				glVertex2f(485+i11,123+i22);
				glVertex2f(495+i11,125+i22);
				glEnd();
				glFlush();
				glColor3f(0.0,0.0,0.0);
				glBegin(GL_POLYGON);//head of the bird
				glVertex2f(510+i11,120+i22);
				glVertex2f(511+i11,125+i22);
				glVertex2f(518+i11,128+i22);
				glVertex2f(510+i11,130+i22);
				glVertex2f(508+i11,137+i22);	
				glVertex2f(505+i11,138+i22);
				glVertex2f(501+i11,137+i22);
				glVertex2f(495+i11,125+i22);
				glEnd();
				glColor3f(1.0,0.0,0.0);
				glBegin(GL_POINTS);//bird eye
				glVertex2f(505+i11,131+i22);
				glEnd();
				glColor3f(0.0,0.0,0.0);
				glBegin(GL_LINES);//first leg
				glVertex2f(493+i11,103+i22);
				glVertex2f(493+i11,93+i22);
				glVertex2f(493+i11,93+i22);
				glVertex2f(489+i11,88+i22);
				glVertex2f(493+i11,93+i22);
				glVertex2f(497+i11,88+i22);
				glEnd();
				glFlush();
				glBegin(GL_LINES);//second leg
				glVertex2f(499+i11,103+i22);
				glVertex2f(499+i11,93+i22);
				glVertex2f(499+i11,93+i22);
				glVertex2f(495+i11,88+i22);
				glVertex2f(499+i11,93+i22);
				glVertex2f(503+i11,88+i22);
				glEnd();
				glFlush();
		}
		else
		{
			glColor3f(0.0,0.7,1);
			glBegin(GL_POLYGON);
			glColor3f(0.0,0.6,0.8);
			glVertex2f(552,55);
			glColor3f(0.0,0.5,0.5);
			glVertex2f(498,55);
			glVertex2f(500,60);
			glColor3f(0.0,0.7,0.5);
			glVertex2f(550,60);
			glColor3f(0.0,0.5,0.9);
			glEnd();
			glFlush();
			w11+=0.2,w22+=0.3,n=0;
			if(w11<300&&w22<100&&n!=1)
			{
				glColor3f(0,0,0);
				glBegin(GL_POLYGON);//the bird
				glVertex2f(480-w11,120-w22);
				glVertex2f(481-w11,110-w22);
				glVertex2f(484-w11,105-w22);
				glVertex2f(490-w11,103-w22);
				glVertex2f(510-w11,100-w22);
				glVertex2f(535-w11,92-w22);
				glVertex2f(543-w11,95-w22);
				glVertex2f(513-w11,110-w22);
				glVertex2f(510-w11,120-w22);
				glVertex2f(505-w11,123-w22);
				glVertex2f(495-w11,125-w22);
				glEnd();
				glFlush();
				glColor3f(0.0,0.0,0.0);
				glBegin(GL_POLYGON);//head of the bird
				glVertex2f(480-w11,120-w22);
				glVertex2f(479-w11,125-w22);
				glVertex2f(472-w11,124-w22);
				glVertex2f(480-w11,130-w22);
				glVertex2f(482-w11,137-w22);	
				glVertex2f(485-w11,138-w22);
				glVertex2f(489-w11,137-w22);
				glVertex2f(495-w11,125-w22);
				glEnd();
				glColor3f(1.0,0.0,0.0);
				glBegin(GL_POINTS);//bird eye
				glVertex2f(485-w11,131-w22);
				glEnd();
				glColor3f(0.0,0.0,0.0);
				glBegin(GL_LINES);//first leg
				glVertex2f(493-w11,103-w22);
				glVertex2f(493-w11,93-w22);
				glVertex2f(493-w11,93-w22);
				glVertex2f(489-w11,88-w22);
				glVertex2f(493-w11,93-w22);
				glVertex2f(497-w11,88-w22);
				glEnd();
				glFlush();
				glBegin(GL_LINES);//second leg
				glVertex2f(499-w11,103-w22);
				glVertex2f(499-w11,93-w22);
				glVertex2f(499-w11,93-w22);
				glVertex2f(495-w11,88-w22);
				glVertex2f(499-w11,93-w22);
				glVertex2f(503-w11,88-w22);
				glEnd();
				glFlush();
			}
			else 
				action2();
			glBegin(GL_POLYGON);
			for(i=0;i<=360;i++)
			{	
				glColor3f(0.4,0.1,0);
				glVertex2f(cos(i)*4+510,sin(i)*4+10);
			}
			glEnd();
		}
	}

}
void action2()
{
		id2+=0.3,ie2+=0.3,l=0;
		if(id2<120&&ie2<100&&l!=1)
		{
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);//the bird
			glVertex2f(395+id2,35+ie2);
			glVertex2f(394+id2,25+ie2);
			glVertex2f(391+id2,20+ie2);
			glVertex2f(385+id2,18+ie2);
			glVertex2f(365+id2,15+ie2);
			glVertex2f(340+id2,7+ie2);
			glVertex2f(332+id2,10+ie2);
			glVertex2f(362+id2,25+ie2);
			glVertex2f(365+id2,35+ie2);
			glVertex2f(370+id2,38+ie2);
			glVertex2f(380+id2,40+ie2);
			glEnd();
		
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_POLYGON);//head of the bird
			glVertex2f(395+id2,35+ie2);
			glVertex2f(396+id2,40+ie2);
			glVertex2f(403+id2,43+ie2);
			glVertex2f(395+id2,45+ie2);
			glVertex2f(393+id2,52+ie2);	
			glVertex2f(390+id2,53+ie2);
			glVertex2f(386+id2,52+ie2);
			glVertex2f(380+id2,40+ie2);
			glEnd();
			glFlush();
			glColor3f(1.0,0.0,0.0);
			glBegin(GL_POINTS);//bird eye
			glVertex2f(390+id2,46+ie2);
			glEnd();
			glFlush();
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_LINES);//first leg
			glVertex2f(378+id2,17+ie2);
			glVertex2f(378+id2,7+ie2);
			glVertex2f(378+id2,7+ie2);
			glVertex2f(374+id2,2+ie2);
			glVertex2f(378+id2,7+ie2);
			glVertex2f(382+id2,2+ie2);
			glEnd();
			glFlush();
			glBegin(GL_LINES);//second leg
			glVertex2f(384+id2,18+ie2);
			glVertex2f(384+id2,8+ie2);
			glVertex2f(384+id2,8+ie2);
			glVertex2f(380+id2,3+ie2);
			glVertex2f(384+id2,8+ie2);
			glVertex2f(388+id2,3+ie2);
			glEnd();
			glBegin(GL_POLYGON);
			for(i=0;i<=360;i++)
			{	
				glColor3f(0.4,0.1,0);
				glVertex2f(cos(i)*4+403+id2,sin(i)*4+42+ie2);
			}
			glEnd();
			glFlush();
		}
		else
		{
			i21+=0.3,i32+=0.3,m=0;
			if(i21<0.6&&i32<0.6&&m!=1)
			{
				glColor3f(0,0,0);
				glBegin(GL_POLYGON);//the bird
				glVertex2f(510+i21,120+i32);
				glVertex2f(509+i21,110+i32);
				glVertex2f(506+i21,105+i32);
				glVertex2f(500+i21,103+i32);
				glVertex2f(480+i21,100+i32);
				glVertex2f(455+i21,92+i32);
				glVertex2f(447+i21,95+i32);
				glVertex2f(477+i21,110+i32);
				glVertex2f(480+i21,120+i32);
				glVertex2f(485+i21,123+i32);
				glVertex2f(495+i21,125+i32);
				glEnd();
				glFlush();
				glColor3f(0.0,0.0,0.0);
				glBegin(GL_POLYGON);//head of the bird
				glVertex2f(510+i21,120+i32);
				glVertex2f(511+i21,125+i32);
				glVertex2f(518+i21,128+i32);
				glVertex2f(510+i21,130+i32);
				glVertex2f(508+i21,137+i32);	
				glVertex2f(505+i21,138+i32);
				glVertex2f(501+i21,137+i32);
				glVertex2f(495+i21,125+i32);
				glEnd();
				glColor3f(1.0,0.0,0.0);
				glBegin(GL_POINTS);//bird eye
				glVertex2f(505+i21,131+i32);
				glEnd();
				glColor3f(0.0,0.0,0.0);
				glBegin(GL_LINES);//first leg
				glVertex2f(493+i21,103+i32);
				glVertex2f(493+i21,93+i32);
				glVertex2f(493+i21,93+i32);
				glVertex2f(489+i21,88+i32);
				glVertex2f(493+i21,93+i32);
				glVertex2f(497+i21,88+i32);
				glEnd();
				glFlush();
				glBegin(GL_LINES);//second leg
				glVertex2f(499+i21,103+i32);
				glVertex2f(499+i21,93+i32);
				glVertex2f(499+i21,93+i32);
				glVertex2f(495+i21,88+i32);
				glVertex2f(499+i21,93+i32);
				glVertex2f(503+i21,88+i32);
				glEnd();
				glFlush();
		}
		else
		{
			glColor3f(0.0,0.7,1);
			glBegin(GL_POLYGON);
			glColor3f(0.0,0.6,0.8);
			glVertex2f(500,60);
			glColor3f(0.0,0.5,0.5);
			glVertex2f(550,60);
			glVertex2f(548,65);
			glColor3f(0.0,0.7,0.5);
			glVertex2f(502,65);
			glColor3f(0.0,0.5,0.9);
			glEnd();
			glFlush();	
			w111+=0.2,w222+=0.3,n=0;
			if(w111<300&&w222<100&&n!=1)
			{
				glColor3f(0,0,0);
				glBegin(GL_POLYGON);//the bird
				glVertex2f(480-w111,120-w222);
				glVertex2f(481-w111,110-w222);
				glVertex2f(484-w111,105-w222);
				glVertex2f(490-w111,103-w222);
				glVertex2f(510-w111,100-w222);
				glVertex2f(535-w111,92-w222);
				glVertex2f(543-w111,95-w222);
				glVertex2f(513-w111,110-w222);
				glVertex2f(510-w111,120-w222);
				glVertex2f(505-w111,123-w222);
				glVertex2f(495-w111,125-w222);
				glEnd();
				glFlush();
				glColor3f(0.0,0.0,0.0);
				glBegin(GL_POLYGON);//head of the bird
				glVertex2f(480-w111,120-w222);
				glVertex2f(479-w111,125-w222);
				glVertex2f(472-w111,124-w222);
				glVertex2f(480-w111,130-w222);
				glVertex2f(482-w111,137-w222);	
				glVertex2f(485-w111,138-w222);
				glVertex2f(489-w111,137-w222);
				glVertex2f(495-w111,125-w222);
				glEnd();
				glColor3f(1.0,0.0,0.0);
				glBegin(GL_POINTS);//bird eye
				glVertex2f(485-w111,131-w222);
				glEnd();
				glColor3f(0.0,0.0,0.0);
				glBegin(GL_LINES);//first leg
				glVertex2f(493-w111,103-w222);
				glVertex2f(493-w111,93-w222);
				glVertex2f(493-w111,93-w222);
				glVertex2f(489-w111,88-w222);
				glVertex2f(493-w111,93-w222);
				glVertex2f(497-w111,88-w222);
				glEnd();
				glFlush();
				glBegin(GL_LINES);//second leg
				glVertex2f(499-w111,103-w222);
				glVertex2f(499-w111,93-w222);
				glVertex2f(499-w111,93-w222);
				glVertex2f(495-w111,88-w222);
				glVertex2f(499-w111,93-w222);
				glVertex2f(503-w111,88-w222);
				glEnd();
				glFlush();
		}
		else 
			action3();
	glBegin(GL_POLYGON);
	for(i=0;i<=360;i++)
	{	
	
		glColor3f(0.4,0.1,0);
		glVertex2f(cos(i)*4+530,sin(i)*4+10);
		
		}
	glEnd();
	
	}
	}
}
void action3()
{
		id3+=0.3,ie3+=0.3,l=0;
		if(id3<120&&ie3<100&&l!=1)
		{
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//the bird
		glVertex2f(395+id3,35+ie3);
		glVertex2f(394+id3,25+ie3);
		glVertex2f(391+id3,20+ie3);
		glVertex2f(385+id3,18+ie3);
		glVertex2f(365+id3,15+ie3);
		glVertex2f(340+id3,7+ie3);
		glVertex2f(332+id3,10+ie3);
		glVertex2f(362+id3,25+ie3);
		glVertex2f(365+id3,35+ie3);
		glVertex2f(370+id3,38+ie3);
		glVertex2f(380+id3,40+ie3);
		glEnd();
	
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//head of the bird
		glVertex2f(395+id3,35+ie3);
		glVertex2f(396+id3,40+ie3);
		glVertex2f(403+id3,43+ie3);
		glVertex2f(395+id3,45+ie3);
		glVertex2f(393+id3,52+ie3);	
		glVertex2f(390+id3,53+ie3);
		glVertex2f(386+id3,52+ie3);
		glVertex2f(380+id3,40+ie3);
		glEnd();
		glFlush();
			glColor3f(1.0,0.0,0.0);
		glBegin(GL_POINTS);//bird eye
		glVertex2f(390+id3,46+ie3);
		glEnd();
		glFlush();
				glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);//first leg
		glVertex2f(378+id3,17+ie3);
		glVertex2f(378+id3,7+ie3);
		glVertex2f(378+id3,7+ie3);
		glVertex2f(374+id3,2+ie3);
		glVertex2f(378+id3,7+ie3);
		glVertex2f(382+id3,2+ie3);
		glEnd();
		glFlush();
		glBegin(GL_LINES);//second leg
		glVertex2f(384+id3,18+ie3);
		glVertex2f(384+id3,8+ie3);
		glVertex2f(384+id3,8+ie3);
		glVertex2f(380+id3,3+ie3);
		glVertex2f(384+id3,8+ie3);
		glVertex2f(388+id3,3+ie3);
		glEnd();

	

		glBegin(GL_POLYGON);
		for(i=0;i<=360;i++)
		{	
			glColor3f(0.4,0.1,0);
			glVertex2f(cos(i)*4+403+id3,sin(i)*4+42+ie3);
		
		}
		glEnd();

		glFlush();

		}
		
		else
		{
				i31+=0.3,i42+=0.3,m=0;
		if(i31<0.6&&i42<0.6&&m!=1)
		{
		glColor3f(0,0,0);
		glBegin(GL_POLYGON);//the bird
		glVertex2f(510+i31,120+i42);
		glVertex2f(509+i31,110+i42);
		glVertex2f(506+i31,105+i42);
		glVertex2f(500+i31,103+i42);
		glVertex2f(480+i31,100+i42);
		glVertex2f(455+i31,92+i42);
		glVertex2f(447+i31,95+i42);
		glVertex2f(477+i31,110+i42);
		glVertex2f(480+i31,120+i42);
		glVertex2f(485+i31,123+i42);
		glVertex2f(495+i31,125+i42);
		glEnd();
	    glFlush();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//head of the bird
		glVertex2f(510+i31,120+i42);
		glVertex2f(511+i31,125+i42);
		glVertex2f(518+i31,128+i42);
		glVertex2f(510+i31,130+i42);
		glVertex2f(508+i31,137+i42);	
		glVertex2f(505+i31,138+i42);
		glVertex2f(501+i31,137+i42);
		glVertex2f(495+i31,125+i42);
		glEnd();
		glColor3f(1.0,0.0,0.0);
		glBegin(GL_POINTS);//bird eye
		glVertex2f(505+i31,131+i42);
		glEnd();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);//first leg
		glVertex2f(493+i31,103+i42);
		glVertex2f(493+i31,93+i42);
		glVertex2f(493+i31,93+i42);
		glVertex2f(489+i31,88+i42);
		glVertex2f(493+i31,93+i42);
		glVertex2f(497+i31,88+i42);
		glEnd();
		glFlush();
		glBegin(GL_LINES);//second leg
		glVertex2f(499+i31,103+i42);
		glVertex2f(499+i31,93+i42);
		glVertex2f(499+i31,93+i42);
		glVertex2f(495+i31,88+i42);
		glVertex2f(499+i31,93+i42);
		glVertex2f(503+i31,88+i42);
		glEnd();
		glFlush();
	
		}
		else
		{
				glColor3f(0.0,0.7,1);
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.6,0.8);
	glVertex2f(548,65);
	glColor3f(0.0,0.5,0.5);
	glVertex2f(502,65);
//	glColor3f(0.0,0.5,0.8);
	glVertex2f(503,70);
	glColor3f(0.0,0.7,0.5);
		glVertex2f(547,70);
	glColor3f(0.0,0.5,0.9);
	
	glEnd();
	glFlush();
				
		w1111+=0.2,w2222+=0.3,n=0;
	if(w1111<300&&w2222<100&&n!=1)
	{
	
		glColor3f(0,0,0);
		glBegin(GL_POLYGON);//the bird
		glVertex2f(480-w1111,120-w2222);
		glVertex2f(481-w1111,110-w2222);
		glVertex2f(484-w1111,105-w2222);
		glVertex2f(490-w1111,103-w2222);
		glVertex2f(510-w1111,100-w2222);
		glVertex2f(535-w1111,92-w2222);
		glVertex2f(543-w1111,95-w2222);
		glVertex2f(513-w1111,110-w2222);
		glVertex2f(510-w1111,120-w2222);
		glVertex2f(505-w1111,123-w2222);
		glVertex2f(495-w1111,125-w2222);
		glEnd();
	    glFlush();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//head of the bird
		glVertex2f(480-w1111,120-w2222);
		glVertex2f(479-w1111,125-w2222);
		glVertex2f(472-w1111,124-w2222);
		glVertex2f(480-w1111,130-w2222);
		glVertex2f(482-w1111,137-w2222);	
		glVertex2f(485-w1111,138-w2222);
		glVertex2f(489-w1111,137-w2222);
		glVertex2f(495-w1111,125-w2222);
		glEnd();
			glColor3f(1.0,0.0,0.0);
		glBegin(GL_POINTS);//bird eye
		glVertex2f(485-w1111,131-w2222);
		glEnd();
				glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);//first leg
	glVertex2f(493-w1111,103-w2222);
	glVertex2f(493-w1111,93-w2222);
	glVertex2f(493-w1111,93-w2222);
	glVertex2f(489-w1111,88-w2222);
	glVertex2f(493-w1111,93-w2222);
	glVertex2f(497-w1111,88-w2222);
	glEnd();
	glFlush();
	glBegin(GL_LINES);//second leg
	glVertex2f(499-w1111,103-w2222);
	glVertex2f(499-w1111,93-w2222);
	glVertex2f(499-w1111,93-w2222);
	glVertex2f(495-w1111,88-w2222);
	glVertex2f(499-w1111,93-w2222);
	glVertex2f(503-w1111,88-w2222);
	glEnd();
	glFlush();
	}
		
	else
		action4();

	
	glBegin(GL_POLYGON);
	for(i=0;i<=360;i++)
	{	
	
		glColor3f(0.4,0.1,0);
		glVertex2f(cos(i)*4+540,sin(i)*4+10);
		
		}
	glEnd();
	
	}
	}
	}
void action4()
{
		id4+=0.3,ie4+=0.3,l=0;
		if(id4<120&&ie4<100&&l!=1)
		{
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//the bird
		glVertex2f(395+id4,35+ie4);
		glVertex2f(394+id4,25+ie4);
		glVertex2f(391+id4,20+ie4);
		glVertex2f(385+id4,18+ie4);
		glVertex2f(365+id4,15+ie4);
		glVertex2f(340+id4,7+ie4);
		glVertex2f(332+id4,10+ie4);
		glVertex2f(362+id4,25+ie4);
		glVertex2f(365+id4,35+ie4);
		glVertex2f(370+id4,38+ie4);
		glVertex2f(380+id4,40+ie4);
		glEnd();
	
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//head of the bird
		glVertex2f(395+id4,35+ie4);
		glVertex2f(396+id4,40+ie4);
		glVertex2f(403+id4,43+ie4);
		glVertex2f(395+id4,45+ie4);
		glVertex2f(393+id4,52+ie4);	
		glVertex2f(390+id4,53+ie4);
		glVertex2f(386+id4,52+ie4);
		glVertex2f(380+id4,40+ie4);
		glEnd();
		glFlush();
			glColor3f(1.0,0.0,0.0);
		glBegin(GL_POINTS);//bird eye
		glVertex2f(390+id4,46+ie4);
		glEnd();
		glFlush();
				glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);//first leg
		glVertex2f(378+id4,17+ie4);
		glVertex2f(378+id4,7+ie4);
		glVertex2f(378+id4,7+ie4);
		glVertex2f(374+id4,2+ie4);
		glVertex2f(378+id4,7+ie4);
		glVertex2f(382+id4,2+ie4);
		glEnd();
		glFlush();
		glBegin(GL_LINES);//second leg
		glVertex2f(384+id4,18+ie4);
		glVertex2f(384+id4,8+ie4);
		glVertex2f(384+id4,8+ie4);
		glVertex2f(380+id4,3+ie4);
		glVertex2f(384+id4,8+ie4);
		glVertex2f(388+id4,3+ie4);
		glEnd();

	

		glBegin(GL_POLYGON);
		for(i=0;i<=360;i++)
		{	
			glColor3f(0.4,0.1,0);
			glVertex2f(cos(i)*4+403+id4,sin(i)*4+42+ie4);
		
		}
		glEnd();

		glFlush();

		}
		
		else{
				i41+=0.3,i52+=0.3,m=0;
		if(i41<0.6&&i52<0.6&&m!=1)
		{
		glColor3f(0,0,0);
		glBegin(GL_POLYGON);//the bird
		glVertex2f(510+i41,120+i52);
		glVertex2f(509+i41,110+i52);
		glVertex2f(506+i41,105+i52);
		glVertex2f(500+i41,103+i52);
		glVertex2f(480+i41,100+i52);
		glVertex2f(455+i41,92+i52);
		glVertex2f(447+i41,95+i52);
		glVertex2f(477+i41,110+i52);
		glVertex2f(480+i41,120+i52);
		glVertex2f(485+i41,123+i52);
		glVertex2f(495+i41,125+i52);
		glEnd();
	    glFlush();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//head of the bird
		glVertex2f(510+i41,120+i52);
		glVertex2f(511+i41,125+i52);
		glVertex2f(518+i41,128+i52);
		glVertex2f(510+i41,130+i52);
		glVertex2f(508+i41,137+i52);	
		glVertex2f(505+i41,138+i52);
		glVertex2f(501+i41,137+i52);
		glVertex2f(495+i41,125+i52);
		glEnd();
			glColor3f(1.0,0.0,0.0);
		glBegin(GL_POINTS);//bird eye
		glVertex2f(505+i41,131+i52);
		glEnd();
				glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);//first leg
	glVertex2f(493+i41,103+i52);
	glVertex2f(493+i41,93+i52);
	glVertex2f(493+i41,93+i52);
	glVertex2f(489+i41,88+i52);
	glVertex2f(493+i41,93+i52);
	glVertex2f(497+i41,88+i52);
	glEnd();
	glFlush();
	glBegin(GL_LINES);//second leg
	glVertex2f(499+i41,103+i52);
	glVertex2f(499+i41,93+i52);
	glVertex2f(499+i41,93+i52);
	glVertex2f(495+i41,88+i52);
	glVertex2f(499+i41,93+i52);
	glVertex2f(503+i41,88+i52);
	glEnd();
	glFlush();
	
		}
		else
		{

			
			if(ww<35)
			{
				
		//leep(10);
				drink();
			if(ww!=0)
				Sleep(35);
				ww++;
			}
			else
			{

		w11111+=0.3,w22222+=0.3,m=0;
			if(w11111<500&&w22222<300&&m!=1)
			{
		glColor3f(0,0,0);
		glBegin(GL_POLYGON);//the bird
		glVertex2f(510+w11111,120+w22222);
		glVertex2f(509+w11111,110+w22222);
		glVertex2f(506+w11111,105+w22222);
		glVertex2f(500+w11111,103+w22222);
		glVertex2f(480+w11111,100+w22222);
		glVertex2f(455+w11111,92+w22222);
		glVertex2f(447+w11111,95+w22222);
		glVertex2f(477+w11111,110+w22222);
		glVertex2f(480+w11111,120+w22222);
		glVertex2f(485+w11111,123+w22222);
		glVertex2f(495+w11111,125+w22222);
		glEnd();
	    glFlush();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//head of the bird
		glVertex2f(510+w11111,120+w22222);
		glVertex2f(511+w11111,125+w22222);
		glVertex2f(518+w11111,128+w22222);
		glVertex2f(510+w11111,130+w22222);
		glVertex2f(508+w11111,137+w22222);	
		glVertex2f(505+w11111,138+w22222);
		glVertex2f(501+w11111,137+w22222);
		glVertex2f(495+w11111,125+w22222);
		glEnd();
			glColor3f(1.0,0.0,0.0);
		glBegin(GL_POINTS);//bird eye
		glVertex2f(505+w11111,131+w22222);
		glEnd();
				glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);//first leg
	glVertex2f(493+w11111,103+w22222);
	glVertex2f(493+w11111,93+w22222);
	glVertex2f(493+w11111,93+w22222);
	glVertex2f(489+w11111,88+w22222);
	glVertex2f(493+w11111,93+w22222);
	glVertex2f(497+w11111,88+w22222);
	glEnd();
	glFlush();
	glBegin(GL_LINES);//second leg
	glVertex2f(499+w11111,103+w22222);
	glVertex2f(499+w11111,93+w22222);
	glVertex2f(499+w11111,93+w22222);
	glVertex2f(495+w11111,88+w22222);
	glVertex2f(499+w11111,93+w22222);
	glVertex2f(503+w11111,88+w22222);
	glEnd();
	glFlush();
	
			}
	
	}
		

	
	glBegin(GL_POLYGON);
	for(i=0;i<=360;i++)
	{	
	
		glColor3f(0.4,0.1,0);
		glVertex2f(cos(i)*4+545,sin(i)*4+10);
		
		}
	glEnd();
glColor3f(0.0,0.7,1);
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.6,0.8);
	glVertex2f(547,70);
	glColor3f(0.0,0.5,0.5);
	glVertex2f(503,70);
//	glColor3f(0.0,0.5,0.8);
	glVertex2f(499,80);
	glColor3f(0.0,0.7,0.5);
		glVertex2f(551,80);
	glColor3f(0.0,0.5,0.9);
	
	glEnd();
	glFlush();
	}}
}
void drink()
{
			
		glColor3f(0,0,0);
		glBegin(GL_POLYGON);//the bird
	//glVertex2f(504,120);
		glVertex2f(506,110);
		glVertex2f(504,105);
		glVertex2f(500,103);
		glVertex2f(480,100);
		glVertex2f(455,92);
		glVertex2f(447,95);
		glVertex2f(477,110);
		glVertex2f(480,120);
		glVertex2f(485,123);
		glVertex2f(495,125);
		glVertex2f(505,126);
		glVertex2f(507,125);
		glEnd();
	    glFlush();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//head of the bird
		glVertex2f(507,125);
		glVertex2f(508,127);
		glVertex2f(515,130);
		glVertex2f(516,130);
		glVertex2f(518,130);
		glVertex2f(521,128);

	//	glVertex2f(526,115);
		glVertex2f(523,120);
		glVertex2f(519,109);
		glVertex2f(516,105);

		glVertex2f(513,90);
		glVertex2f(510,105);
			//	glVertex2f(516,94);
		glVertex2f(502,105);
	///	glVertex2f(501,110);
	//glVertex2f(495,111);
		glEnd();
		glColor3f(1.0,0.0,0.0);
		glBegin(GL_POINTS);//bird eye
		glVertex2f(515,115);
		glEnd();
				glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);//first leg
	glVertex2f(493,103);
	glVertex2f(493,93);
	glVertex2f(493,93);
	glVertex2f(489,88);
	glVertex2f(493,93);
	glVertex2f(497,88);
	glEnd();
	glFlush();
	glBegin(GL_LINES);//second leg
	glVertex2f(499,103);
	glVertex2f(499,93);
	glVertex2f(499,93);
	glVertex2f(495,88);
	glVertex2f(499,93);
	glVertex2f(503,88);
	glEnd();
	glFlush();
	glColor3f(0.0,0.7,1);
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.6,0.8);
	glVertex2f(548,65);
	glColor3f(0.0,0.5,0.5);
	glVertex2f(502,65);
//	glColor3f(0.0,0.5,0.8);
	glVertex2f(503,70);
	glColor3f(0.0,0.7,0.5);
		glVertex2f(547,70);
	glColor3f(0.0,0.5,0.9);
	glEnd();
	glFlush();
			}
void stand(void)
{
	float q1=0.0,s=0,s1=0;
		s+=0.3;
	if(s<100&&s!=1)
	{
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);//the bird
		glVertex2f(510,120);
		glVertex2f(509,110);
		glVertex2f(506,105);
		glVertex2f(500,103);
		glVertex2f(480,100);
		glVertex2f(455,92);
		glVertex2f(447,95);
		glVertex2f(477,110);
		glVertex2f(480,120);
		glVertex2f(485,123);
		glVertex2f(495,125);
		glEnd();
	    glFlush();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//head of the bird
		glVertex2f(510,120);
		glVertex2f(511,125);
		glVertex2f(518,128);
		glVertex2f(510,130);
		glVertex2f(508,137);	
		glVertex2f(505,138);
		glVertex2f(501,137);
		glVertex2f(495,125);
		glEnd();
			glColor3f(1.0,0.0,0.0);
		glBegin(GL_POINTS);//bird eye
		glVertex2f(505,131);
		glEnd();
				glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);//first leg
	glVertex2f(493,103);
	glVertex2f(493,93);
	glVertex2f(493,93);
	glVertex2f(489,88);
	glVertex2f(493,93);
	glVertex2f(497,88);
	glEnd();
	glFlush();
	glBegin(GL_LINES);//second leg
	glVertex2f(499,103);
	glVertex2f(499,93);
	glVertex2f(499,93);
	glVertex2f(495,88);
	glVertex2f(499,93);
	glVertex2f(503,88);
	glEnd();
	stonefall(s);

//glutPostRedisplay();
//	glutSwapBuffers();
	}

	


}
void stonefall(float s)
{
	glBegin(GL_POLYGON);
	for(i=0;i<=360;i++)
	{	
	
		glColor3f(0.4,0.1,0);
		glVertex2f(cos(i)*4+403+115,sin(i)*4+42+85-s);
		
	}
	glEnd();
}
int up()
{


			id+=0.2;
	ie+=0.6;
	if(id<500&&ie<190&&j!=1)
	{
	//	delay(10);
		glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);//the bird
	glVertex2f(280+id,375+ie);
	glVertex2f(279+id,365+ie);
	glVertex2f(276+id,360+ie);
	glVertex2f(270+id,358+ie);
	glVertex2f(250+id,355+ie);
	glVertex2f(225+id,347+ie);
	glVertex2f(217+id,350+ie);
	glVertex2f(247+id,365+ie);
	glVertex2f(250+id,375+ie);
	glVertex2f(255+id,378+ie);
	glVertex2f(265+id,380+ie);
	glEnd();
//	glDrawBuffer(GL_FRONT_AND_BACK);
//glutTimerFunc(100,myTimer,s);
//upbird();
	glFlush();
	}
	glutPostRedisplay();
	glutSwapBuffers();
	return 0;
}
int bird1()
{	
	
//glClear(GL_COLOR_BUFFER_BIT);
		id+=0.3,ie+=0.3,l=0;
	
		if(id<110&&ie<105&&l!=1)
		{
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//the bird
		glVertex2f(395+id,35+ie);
		glVertex2f(394+id,25+ie);
		glVertex2f(391+id,20+ie);
		glVertex2f(385+id,18+ie);
		glVertex2f(365+id,15+ie);
		glVertex2f(340+id,7+ie);
		glVertex2f(332+id,10+ie);
		glVertex2f(362+id,25+ie);
		glVertex2f(365+id,35+ie);
		glVertex2f(370+id,38+ie);
		glVertex2f(380+id,40+ie);
		glEnd();
	
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//head of the bird
		glVertex2f(395+id,35+ie);
		glVertex2f(396+id,40+ie);
		glVertex2f(403+id,43+ie);
		glVertex2f(395+id,45+ie);
		glVertex2f(393+id,52+ie);	
		glVertex2f(390+id,53+ie);
		glVertex2f(386+id,52+ie);
		glVertex2f(380+id,40+ie);
		glEnd();
		glFlush();
			glColor3f(1.0,0.0,0.0);
		glBegin(GL_POINTS);//bird eye
		glVertex2f(390+id,46+ie);
		glEnd();
		glFlush();
				glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);//first leg
	glVertex2f(378+id,17+ie);
	glVertex2f(378+id,7+ie);
	glVertex2f(375+id,7+ie);
	glVertex2f(374+id,2+ie);
	glVertex2f(378+id,7+ie);
	glVertex2f(382+id,2+ie);
	glEnd();
	glFlush();
	glBegin(GL_LINES);//second leg
	glVertex2f(384+id,18+ie);
	glVertex2f(384+id,8+ie);
	glVertex2f(384+id,8+ie);
	glVertex2f(380+id,3+ie);
	glVertex2f(384+id,8+ie);
	glVertex2f(388+id,3+ie);
	glEnd();
	glFlush();
		}

else 
	{
	if1+=200,ig+=68.0,id=0,l=1,ie=0;
		glBegin(GL_POLYGON);//the bird
		glVertex2f(395+if1,35+ig);
		glVertex2f(394+if1,25+ig);
		glVertex2f(391+if1,20+ig);
		glVertex2f(385+if1,18+ig);
		glVertex2f(365+if1,15+ig);
		glVertex2f(340+if1,7+ig);
		glVertex2f(332+if1,10+ig);
		glVertex2f(362+if1,25+ig);
		glVertex2f(365+if1,35+ig);
		glVertex2f(370+if1,38+ig);
		glVertex2f(380+if1,40+ig);
		glEnd();
	    glFlush();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//head of the bird
		glVertex2f(395+if1,35+ig);
		glVertex2f(396+if1,40+ig);
		glVertex2f(403+if1,43+ig);
		glVertex2f(395+if1,45+ig);
		glVertex2f(393+if1,52+ig);	
		glVertex2f(390+if1,53+ig);
		glVertex2f(386+if1,52+ig);
		glVertex2f(380+if1,40+ig);
		glEnd();
			glColor3f(1.0,0.0,0.0);
		glBegin(GL_POINTS);//bird eye
		glVertex2f(390+if1,46+ig);
		glEnd();
				glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);//first leg
	glVertex2f(378+if1,17+ig);
	glVertex2f(378+if1,7+ig);
	glVertex2f(375+if1,7+ig);
	glVertex2f(374+if1,2+ig);
	glVertex2f(378+if1,7+ig);
	glVertex2f(382+if1,2+ig);
	glEnd();
	glFlush();
	glBegin(GL_LINES);//second leg
	glVertex2f(384+if1,18+ig);
	glVertex2f(384+if1,8+ig);
	glVertex2f(384+if1,8+ig);
	glVertex2f(380+if1,3+ig);
	glVertex2f(384+if1,8+ig);
	glVertex2f(388+if1,3+ig);
	glEnd();
	//	glFlush();
}
	

	glutPostRedisplay();
	glutSwapBuffers();
	return 1;
//	birdrotate();
//	glFlush();
}
int upbird()
{	
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);//the bird
	glVertex2f(280,375);
	glVertex2f(279,365);
	glVertex2f(276,360);
	glVertex2f(270,358);
	glVertex2f(250,355);
	glVertex2f(225,347);
	glVertex2f(217,350);
	glVertex2f(247,365);
	glVertex2f(250,375);
	glVertex2f(255,378);
	glVertex2f(265,380);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);//head of the bird
	glVertex2f(280,375);
	glVertex2f(281,380);
	glVertex2f(288,383);
	glVertex2f(280,385);
	glVertex2f(278,392);
	glVertex2f(275,393);
	glVertex2f(271,392);
	glVertex2f(265,380);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);//bird eye
	glVertex2f(275,386);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);//first leg
	glVertex2f(263,357);
	glVertex2f(263,347);
	glVertex2f(263,347);
	glVertex2f(259,342);
	glVertex2f(263,347);
	glVertex2f(267,342);
	glEnd();
	glFlush();
	glBegin(GL_LINES);//second leg
	glVertex2f(269,358);
	glVertex2f(269,348);
	glVertex2f(269,348);
	glVertex2f(265,343);
	glVertex2f(269,348);
	glVertex2f(273,343);
	glEnd();
	glFlush();
/*	}
	else{
		glColor3f(0,0,0);
		glBegin(GL_POLYGON);//the bird
		glVertex2f(280,375);
		glVertex2f(279,365);
		glVertex2f(276,360);
		glVertex2f(270,358);
		glVertex2f(250,355);
		glVertex2f(225,347);
		glVertex2f(217,350);
		glVertex2f(247,365);
		glVertex2f(250,375);
		glVertex2f(255,378);
		glVertex2f(265,380);
		glEnd();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//head of the bird
		glVertex2f(280,375);
		glVertex2f(281,380);
		glVertex2f(288,383);
		glVertex2f(280,385);
		glVertex2f(278,392);
		glVertex2f(275,393);
		glVertex2f(271,392);
		glVertex2f(265,380);
		glEnd();
			glColor3f(1.0,0.0,0.0);
		glBegin(GL_POINTS);//bird eye
		glVertex2f(275,386);
		glEnd();
	
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINES);//first leg
		glVertex2f(263,357);
		glVertex2f(263,347);
		glVertex2f(263,347);
		glVertex2f(259,342);
		glVertex2f(263,347);
		glVertex2f(267,341);
		glEnd();
		glFlush();
		glBegin(GL_LINES);//second leg
		glVertex2f(269,358);
		glVertex2f(269,348);
		glVertex2f(269,348);
		glVertex2f(265,343);
		glVertex2f(269,348);
		glVertex2f(273,343);
		glEnd();
		glFlush();
	}
*/	glutPostRedisplay();
	glutSwapBuffers();

	//glFlush();
//	glClear(GL_COLOR_BUFFER_BIT);
//	glutPostRedisplay();
	return 0;

}
void birdrotate()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	
	glTranslatef(5,50,0);
	glRotatef(-20,0,0,1);
	glTranslatef(-5,-50,0);
	bird1();		
	glRotatef(20,0,0,1);
}
void myTimer(int v)
{
	int s=0;
	s+=0.3;
	if(s<200){ }
	s++;
	glutTimerFunc(100,myTimer,0);
}
void sit()
{
		glColor3f(0,0,0);
		glBegin(GL_POLYGON);//the bird
		glVertex2f(480,120);
		glVertex2f(481,110);
		glVertex2f(484,105);
		glVertex2f(490,103);
		glVertex2f(510,100);
		glVertex2f(535,92);
		glVertex2f(543,95);
		glVertex2f(513,110);
		glVertex2f(510,120);
		glVertex2f(505,123);
		glVertex2f(495,125);
		glEnd();
	    glFlush();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_POLYGON);//head of the bird
		glVertex2f(480,120);
		glVertex2f(479,125);
		glVertex2f(472,128);
		glVertex2f(480,130);
		glVertex2f(482,137);	
		glVertex2f(485,138);
		glVertex2f(489,137);
		glVertex2f(495,125);
		glEnd();
			glColor3f(1.0,0.0,0.0);
		glBegin(GL_POINTS);//bird eye
		glVertex2f(485,131);
		glEnd();
				glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);//first leg
	glVertex2f(493,103);
	glVertex2f(493,93);
	glVertex2f(493,93);
	glVertex2f(489,88);
	glVertex2f(493,93);
	glVertex2f(497,88);
	glEnd();
	glFlush();
	glBegin(GL_LINES);//second leg
	glVertex2f(499,103);
	glVertex2f(499,93);
	glVertex2f(499,93);
	glVertex2f(495,88);
	glVertex2f(499,93);
	glVertex2f(503,88);
	glEnd();
	glFlush();
	

}
void display(void)
{
	int s=60;
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	if(start==1)
	{
		land();
		pot();
		stones(0,29,4);
		stones(240,29,4);
		stones(282,29,10);
		stones(380,12,16);
		stones(390,9,18);
		stones(400,6,22);
		circle(590,440);
		grass();
		water();
		branchleaves();
		tree();
		draw_birds();
		bird();
		glutPostRedisplay();	
		glutSwapBuffers();
	}
	else
		disp_start();
	glutSwapBuffers();
	glFlush();
}
void myreshape(int w,int h)
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,0,w,h);
	glMatrixMode(GL_MODELVIEW);

}
void mouse(int btn,int state,int x,int y)
{
	if(btn==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)
	
	{
		glTranslatef(230,0,0);
		upbird();
		glTranslatef(-230,-0,0);
	}
	
}
void myInit(void)
{
	glClearColor(0.0,0.0,0.0,.0);
	glColor3f(0.0f,0.0f,0.0f);
	glPointSize(3.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,640.0,0.0,480.0);
	glMatrixMode(GL_MODELVIEW);
}


int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1000,480);
	glutInitWindowPosition(100,150);
	glutCreateWindow("My project");
	glutDisplayFunc(display);
	glutReshapeFunc(myreshape);
	glutTimerFunc(200,myTimer,1);
	glutKeyboardFunc(keyboard);
	myInit();
	glutMainLoop();
}

