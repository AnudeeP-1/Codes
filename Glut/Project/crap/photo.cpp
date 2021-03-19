//#include<GL/Gl.h>
#include<GL/glu.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<stdio.h>
float i,j,k,l;
int qw=0;
int x,p=0,r=0,f=0;

void *currentfont;

void sun(void)
{
	int xm=100,ym=420,rm=30;
float theta;
    
	glBegin(GL_POLYGON);
	glColor3f(1.0f,1.0f,0.0f);
	for(theta=0;theta<360;theta++)
	{
		glVertex2f(xm+(rm*cos(theta)),ym+(rm*sin(theta)));
	}

	glEnd();
	glFlush();

}


void moon(void)
{
 int xm=480,ym=420,rm=30;
float theta;   
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	for(theta=0;theta<360;theta++)
	{
		glVertex2f(xm+(rm*cos(theta)),ym+(rm*sin(theta)));
	}

	glEnd();
	glFlush();

}
void circle(void)
{
 int xm=500,ym=430,rm=30;
float theta;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	for(theta=0;theta<360;theta++)
	{
		glVertex2f(xm+(rm*cos(theta)),ym+(rm*sin(theta)));
	}

	glEnd();
	glFlush();


}

void tree()
{
	glBegin(GL_POLYGON);
	glColor3f(0.65,0.50,0.39);
	

	glVertex2i(318,30);
	glVertex2i(318,200);
	glVertex2i(270,200);
	glVertex2i(270,100);
	glVertex2i(260,30);

	

	glEnd();
	glFlush();

	 int xm=270,ym=200,rm=25;
float theta;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(theta=0;theta<360;theta++)
	{
		glVertex2f(xm+(rm*cos(theta)),ym+(rm*sin(theta)));
	}

	glEnd();
	glFlush();

	 int xx=240,yy=220,rr=30;
	float theta1;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(theta1=0;theta1<360;theta1++)
	{
		glVertex2f(xx+(rr*cos(theta1)),yy+(rr*sin(theta1)));
	}

	glEnd();
	glFlush();

		 int xx2=240,yy2=250,rr2=30;
	float theta2;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(theta2=0;theta2<360;theta2++)
	{
		glVertex2f(xx2+(rr2*cos(theta2)),yy2+(rr2*sin(theta2)));
	}

	glEnd();
	glFlush();

	 int xx3=250,yy3=280,rr3=30;
	float theta3;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(theta3=0;theta3<360;theta3++)
	{
		glVertex2f(xx3+(rr3*cos(theta3)),yy3+(rr3*sin(theta3)));
	}

	glEnd();
	glFlush();

		 int xx4=270,yy4=310,rr4=30;
	float theta4;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(theta4=0;theta4<360;theta4++)
	{
		glVertex2f(xx4+(rr4*cos(theta4)),yy4+(rr4*sin(theta4)));
	}

	glEnd();
	glFlush();

			 int xx5=310,yy5=310,rr5=30;
	float theta5;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(theta5=0;theta5<360;theta5++)
	{
		glVertex2f(xx5+(rr5*cos(theta5)),yy5+(rr5*sin(theta5)));
	}

	glEnd();
	glFlush();

		 int xx6=340,yy6=280,rr6=30;
	float theta6;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(theta6=0;theta6<360;theta6++)
	{
		glVertex2f(xx6+(rr6*cos(theta6)),yy6+(rr6*sin(theta6)));
	}

	glEnd();
	glFlush();

	int xx7=350,yy7=250,rr7=30;
	float theta7;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(theta7=0;theta7<360;theta7++)
	{
		glVertex2f(xx7+(rr7*cos(theta7)),yy7+(rr7*sin(theta7)));
	}

	glEnd();
	glFlush();

	
	int xx8=340,yy8=220,rr8=30;
	float theta8;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(theta8=0;theta8<360;theta8++)
	{
		glVertex2f(xx8+(rr8*cos(theta8)),yy8+(rr8*sin(theta8)));
	}

	glEnd();
	glFlush();

	
	
	int xx9=300,yy9=200,rr9=30;
	float theta9;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(theta9=0;theta9<360;theta9++)
	{
		glVertex2f(xx9+(rr9*cos(theta9)),yy9+(rr9*sin(theta9)));
	}

	glEnd();
	glFlush();

	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	glVertex2i(270,200);
	glVertex2i(250,270);
	glVertex2i(280,300);
	glVertex2i(340,300);
	glVertex2i(320,220);
	glVertex2i(300,200);
	glEnd();
	glFlush();


	glBegin(GL_POLYGON);
	glColor3f(0.65,0.50,0.39);
	
	glVertex2i(270,190);
	glVertex2i(270,200);
	glVertex2i(230,230);
	glVertex2i(230,235);
	glVertex2i(260,210);
	glVertex2i(250,250);
	glVertex2i(255,255);
	glEnd();
	glFlush();
	
		glBegin(GL_POLYGON);
	glColor3f(0.65,0.50,0.39);
	glVertex2i(270,190);
	glVertex2i(275,230);
	glVertex2i(280,230);
	glVertex2i(280,190);
	glEnd();
	glFlush();
	glBegin(GL_POLYGON);
	glColor3f(0.65,0.50,0.39);
	glVertex2i(300,190);
	glVertex2i(320,240);
	glVertex2i(325,243);
	glVertex2i(305,190);
	glEnd();
	glFlush();

		glBegin(GL_POLYGON);
	glColor3f(0.65,0.50,0.39);
	glVertex2i(310,210);
	glVertex2i(290,245);
	glVertex2i(295,250);
	glVertex2i(315,215);
	glEnd();
	glFlush();

		glBegin(GL_POLYGON);
	glColor3f(0.65,0.50,0.39);
	glVertex2i(315,180);
	glVertex2i(330,220);
	glVertex2i(335,225);
	glVertex2i(320,185);
	glEnd();
	glFlush();

		glBegin(GL_POLYGON);
	glColor3f(0.65,0.50,0.39);
	glVertex2i(270,190);
	glVertex2i(318,190);
	glVertex2i(318,160);
	glVertex2i(270,160);
	glEnd();
	glFlush();
	
}

void tree1()
{
	
	glColor3f(0.65,0.50,0.39);
	glBegin(GL_POLYGON);
	glVertex2i(135,30);
	glVertex2i(135,120);
	glVertex2i(145,120);
	glVertex2i(150,30);
	glEnd();
	glFlush();
	
	
	int x1=130,y1=120,r1=10;
	float thet1;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(thet1=0;thet1<360;thet1++)
	{
		glVertex2f(x1+(r1*cos(thet1)),y1+(r1*sin(thet1)));
	}

	glEnd();
	glFlush();

	
	int x2=120,y2=130,r2=10;
	float thet2;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(thet2=0;thet2<360;thet2++)
	{
		glVertex2f(x2+(r2*cos(thet2)),y2+(r2*sin(thet2)));
	}

	glEnd();
	glFlush();
	
	int x3=120,y3=140,r3=10;
	float thet3;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(thet3=0;thet3<360;thet3++)
	{
		glVertex2f(x3+(r3*cos(thet3)),y3+(r3*sin(thet3)));
	}

	glEnd();
	glFlush();
	
	int x4=130,y4=150,r4=10;
	float thet4;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(thet4=0;thet4<360;thet4++)
	{
		glVertex2f(x4+(r4*cos(thet4)),y4+(r4*sin(thet4)));
	}

	glEnd();
	glFlush();

	
	int x5=143,y5=150,r5=10;
	float thet5;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(thet5=0;thet5<360;thet5++)
	{
		glVertex2f(x5+(r5*cos(thet5)),y5+(r5*sin(thet5)));
	}

	glEnd();
	glFlush();

	
	int x6=155,y6=140,r6=10;
	float thet6;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(thet6=0;thet6<360;thet6++)
	{
		glVertex2f(x6+(r6*cos(thet6)),y6+(r6*sin(thet6)));
	}

	glEnd();
	glFlush();

	
	int x7=155,y7=130,r7=10;
	float thet7;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(thet7=0;thet7<360;thet7++)
	{
		glVertex2f(x7+(r7*cos(thet7)),y7+(r7*sin(thet7)));
	}

	glEnd();
	glFlush();
	
	int x8=145,y8=120,r8=10;
	float thet8;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(thet8=0;thet8<360;thet8++)
	{
		glVertex2f(x8+(r8*cos(thet8)),y8+(r8*sin(thet8)));
	}

	glEnd();
	glFlush();
	
	
	int x9=135,y9=140,r9=15;
	float thet9;   
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.4,0.0);
	for(thet9=0;thet9<360;thet9++)
	{
		glVertex2f(x9+(r9*cos(thet9)),y9+(r9*sin(thet9)));
	}

	glEnd();
	glFlush();
}

void trees()
{	
	glTranslatef(0,0,0);
	tree1();
	glTranslatef(-100,10,0);
	tree1();
	glTranslatef(400,30,0);
	tree1();
	glTranslatef(500,30,0);
	tree1();
	
	glTranslatef(-400,-30,0);
	tree1();
	
	
}
void cloud()
{
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(550,420);
	glVertex2i(400,420);
	glVertex2i(402,425);
	glVertex2i(404,430);
	glVertex2i(410,432);
	glVertex2i(415,435);
	glVertex2i(417,434);

	glVertex2i(413,432);
	glVertex2i(413,438);
	glVertex2i(417,445);
	glVertex2i(425,448);
	glVertex2i(430,450);
	glVertex2i(435,451);
	glVertex2i(440,450);
	glVertex2i(445,455);
	
	
	glVertex2i(445,432);
	glVertex2i(446,438);
	glVertex2i(448,445);
	glVertex2i(455,448);
	glVertex2i(460,450);
	glVertex2i(465,451);
	glVertex2i(470,450);
	glVertex2i(475,445);


	

	glVertex2i(475,432);
	glVertex2i(476,438);
	glVertex2i(478,445);
	glVertex2i(485,448);
	glVertex2i(490,450);
	glVertex2i(495,451);
	glVertex2i(500,450);
	glVertex2i(505,445);

	glVertex2i(510,440);
	glVertex2i(515,445);
	glVertex2i(520,446);
	glVertex2i(525,448);
	glVertex2i(530,449);
	glVertex2i(535,447);
	glVertex2i(540,443);
	glVertex2i(542,440);
	glVertex2i(543,438);
	glVertex2i(545,425);
	glVertex2i(547,423);
	glVertex2i(549,420);


	
		
	glEnd();


}

void cloud1()
{
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(350,400);
	glVertex2i(200,400);
	glVertex2i(202,405);
	glVertex2i(204,410);
	glVertex2i(210,412);
	glVertex2i(215,405);
	glVertex2i(217,404);

	glVertex2i(213,412);
	glVertex2i(213,418);
	glVertex2i(217,425);
	glVertex2i(225,428);
	glVertex2i(230,430);
	glVertex2i(235,431);
	glVertex2i(240,430);
	glVertex2i(245,425);
	
	
	glVertex2i(245,412);
	glVertex2i(246,418);
	glVertex2i(248,425);
	glVertex2i(255,428);
	glVertex2i(260,430);
	glVertex2i(265,431);
	glVertex2i(270,430);
	glVertex2i(275,425);


	

	glVertex2i(275,412);
	glVertex2i(276,418);
	glVertex2i(278,425);
	glVertex2i(285,428);
	glVertex2i(290,430);
	glVertex2i(295,431);
	glVertex2i(300,430);
	glVertex2i(305,425);

	glVertex2i(310,420);
	glVertex2i(315,425);
	glVertex2i(320,426);
	glVertex2i(325,428);
	glVertex2i(330,429);
	glVertex2i(335,427);
	glVertex2i(340,423);
	glVertex2i(342,420);
	glVertex2i(343,418);
	glVertex2i(345,415);
	glVertex2i(347,413);
	glVertex2i(349,410);


	
		
	glEnd();


}

void cloud2()
{
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2i(150,380);
	glVertex2i(0,380);
	glVertex2i(2,385);
	glVertex2i(4,390);
	glVertex2i(10,392);
	glVertex2i(15,385);
	glVertex2i(17,384);

	glVertex2i(13,382);
	glVertex2i(13,388);
	glVertex2i(17,405);
	glVertex2i(25,408);
	glVertex2i(30,410);
	glVertex2i(35,411);
	glVertex2i(40,410);
	glVertex2i(45,405);
	
	
	glVertex2i(45,392);
	glVertex2i(46,398);
	glVertex2i(48,405);
	glVertex2i(55,408);
	glVertex2i(60,410);
	glVertex2i(65,411);
	glVertex2i(70,410);
	glVertex2i(75,405);


	

	glVertex2i(75,392);
	glVertex2i(76,398);
	glVertex2i(78,405);
	glVertex2i(85,408);
	glVertex2i(90,410);
	glVertex2i(95,411);
	glVertex2i(100,410);
	glVertex2i(105,405);

	glVertex2i(110,400);
	glVertex2i(115,405);
	glVertex2i(120,406);
	glVertex2i(125,408);
	glVertex2i(130,409);
	glVertex2i(135,407);
	glVertex2i(140,403);
	glVertex2i(142,400);
	glVertex2i(143,398);
	glVertex2i(145,395);
	glVertex2i(147,393);
	glVertex2i(149,390);


	
		
	glEnd();


}

float m=0;
void drop()
{
	glPointSize(1.5);
	m+=2.0;
	if(m<240)
	{   glColor3f(0.0,0.5,0.8);
		glBegin(GL_POINTS);
		glVertex2i(50,400-m);
	    glVertex2i(440,325-m);
		glVertex2i(140,400-m);
		glVertex2i(420,340-m);
		glVertex2i(380,420-m);
		glVertex2i(520,400-m);
		glVertex2i(535,400-m);
		glVertex2i(615,400-m);
		glVertex2i(360,400-m);
		glVertex2i(110,420-m);
		glVertex2i(600,380-m);
		glVertex2i(550,400-m);
		glVertex2i(580,380-m);
		glVertex2i(250,350-m);
		glVertex2i(500,340-m);
		glVertex2i(350,350-m);
		glVertex2i(550,355-m);
		glVertex2i(400,400-m);
		glVertex2i(120,345-m);
		glVertex2i(425,435-m);
		glVertex2i(605,430-m);
		glVertex2i(150,420-m);
		glVertex2i(450,415-m);
		glVertex2i(160,380-m);
		glVertex2i(260,375-m);
		glVertex2i(180,400-m);
		glVertex2i(580,405-m);
		glVertex2i(175,360-m);
		glVertex2i(195,355-m);
		glVertex2i(300,415-m);
		glVertex2i(200,410-m);
		glVertex2i(0,400-m);
		glVertex2i(10,350-m);
		glVertex2i(19,400-m);
		glVertex2i(26,400-m);
		glVertex2i(40,350-m);
		glVertex2i(56,400-m);
		glVertex2i(70,350-m);
		glVertex2i(50,280-m);
		glVertex2i(20,300-m);
		
		glEnd();
	}
	else
	{
		m=0;
	}
	
}


void drawplant(void)
{

	glBegin(GL_POLYGON);
glColor3f(0.0,2.3,3.0);
	glVertex2i(0,125);
	glVertex2i(640,125);
	glColor3f(0.0,2.3,3.0);
	glVertex2i(640,480);
		glColor3f(1.0,1.0,1.0);
	glVertex2i(0,480);
	glEnd();
	glFlush();

	 glBegin(GL_POLYGON);
	glColor3f(0.0f,4.0f,0.0f);
	glVertex2i(0,0);
	glVertex2i(640,0);
	glColor3f(0.0,0.8,0.0);
	glVertex2i(640,125);
	glVertex2i(0,125);
	glEnd();
	glFlush();
	
	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(500,40);
	glVertex2i(490,55);
	glEnd();
	glFlush();
		glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(500,40);
	glVertex2i(495,58);
	glEnd();
	glFlush();
	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(501,40);
	glVertex2i(500,62);
	glEnd();
	glFlush();
	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(502,40);
	glVertex2i(505,58);
	glEnd();
	glFlush();
	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(550,40);
	glVertex2i(543,55);
	glEnd();
	glFlush();
		glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(551,40);
	glVertex2i(547,58);
	glEnd();
	glFlush();
	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(552,40);
	glVertex2i(553,62);
	glEnd();
	glFlush();
	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(553,40);
	glVertex2i(558,58);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(450,40);
    glVertex2i(443,58);
    glVertex2i(451,40);
	glVertex2i(447,58);
    
    glVertex2i(452,40);
    glVertex2i(453,62);
    glVertex2i(453,40);
    glVertex2i(458,58);
    glEnd();
	glFlush();

	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(400,40);
    glVertex2i(393,58);
    glVertex2i(401,40);
	glVertex2i(397,58);
    
    glVertex2i(402,40);
    glVertex2i(403,62);
    glVertex2i(403,40);
    glVertex2i(408,58);
    glEnd();
	glFlush();

    glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(350,40);
    glVertex2i(343,58);
    glVertex2i(351,40);
	glVertex2i(347,58);
    
    glVertex2i(352,40);
    glVertex2i(353,62);
    glVertex2i(353,40);
    glVertex2i(358,58);
    glEnd();
	glFlush();

    glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(600,40);
    glVertex2i(593,58);
    glVertex2i(601,40);
	glVertex2i(597,58);
    
    glVertex2i(602,40);
    glVertex2i(603,62);
    glVertex2i(603,40);
    glVertex2i(608,58);
    glEnd();
	glFlush();

    glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(50,40);
    glVertex2i(43,58);
    glVertex2i(51,40);
	glVertex2i(47,58);
    
    glVertex2i(52,40);
    glVertex2i(53,62);
    glVertex2i(53,40);
    glVertex2i(58,58);
    glEnd();
	glFlush();


    glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(100,40);
    glVertex2i(93,58);
    glVertex2i(101,40);
	glVertex2i(97,58);
    
    glVertex2i(102,40);
    glVertex2i(103,62);
    glVertex2i(103,40);
    glVertex2i(108,58);
    glEnd();
	glFlush();

    glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(150,40);
    glVertex2i(143,58);
    glVertex2i(151,40);
	glVertex2i(147,58);
    
    glVertex2i(152,40);
    glVertex2i(153,62);
    glVertex2i(153,40);
    glVertex2i(158,58);
    glEnd();
	glFlush();

    glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(200,40);
    glVertex2i(193,58);
    glVertex2i(201,40);
	glVertex2i(197,58);
    
    glVertex2i(202,40);
    glVertex2i(203,62);
    glVertex2i(203,40);
    glVertex2i(208,58);
    glEnd();
	glFlush();

}
int x1=50,y=60,u=0,n=500;
int xa=75,yb=85,xc=67,yd=77,ia=0,ib=0,ic=0,angle=0;

//DRAW BIRDS
void bird()
{
	glLineWidth(3.0);
	
	glBegin(GL_LINE_STRIP);
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);
	glVertex2i(x1+ia,355);
	glVertex2i(55+ia,340);
    glVertex2i(y+ia,355);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(xa+ib,355);
	glVertex2i(80+ib,340);
    glVertex2i(yb+ib,355);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(xc+ic,335);
	glVertex2i(72+ic,320);
    glVertex2i(yd+ic,335);
	glEnd();
}


void birds(int g)
{
	ia+=3;
	ib+=6;
	ic+=4;
	if(ia>640)ia=0;
	if(ib>640)ib=50;
	if(ic>640)ic=0;
	x1--;
	y++;
	if(x1==40) x1=48;
	if(y==70) y=62;
	xa--;
	yb++;
	if(xa==65) xa=73;
	if(yb==95) yb=87;
	xc--;
	yd++;
	if(xc==57) xc=65;
	if(yd==87) yd=79;
	u+=5;
	if(u==500) u=-50;
	angle+=20;
	if(angle > 720)
    angle = 0;
	n-=20;
	if(n==0)n=480;
	glutPostRedisplay();
	glutTimerFunc(100, birds, 0);
}



void drawplant1(void)
{

		glBegin(GL_POLYGON);

    glColor3f(0.0,0.0,0.0);
	glVertex2i(0,125);
	glVertex2i(640,125);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(640,480);
	glVertex2i(0,480);
	glEnd();
	glFlush();

	 glBegin(GL_POLYGON);
	glColor3f(0.0f,0.4f,0.0f);
	glVertex2i(0,0);
	glVertex2i(640,0);
	glVertex2i(640,125);
	glVertex2i(0,125);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(500,40);
	glVertex2i(490,55);
	glEnd();
	glFlush();
		glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(500,40);
	glVertex2i(495,58);
	glEnd();
	glFlush();
	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(501,40);
	glVertex2i(500,62);
	glEnd();
	glFlush();
	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(502,40);
	glVertex2i(505,58);
	glEnd();
	glFlush();
	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(550,40);
	glVertex2i(543,55);
	glEnd();
	glFlush();
		glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(551,40);
	glVertex2i(547,58);
	glEnd();
	glFlush();
	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(552,40);
	glVertex2i(553,62);
	glEnd();
	glFlush();
	glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(553,40);
	glVertex2i(558,58);
	glEnd();
	glFlush();
	
	//glBegin(GL_LINES);
	//glColor3f(0.0,0.5,0.0);

//	glVertex2i(50,50);
	//glVertex2i(55,57);
	//glVertex2i(50,50);
	//glVertex2i(50,60);

	//glEnd();
	//glFlush();
     glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(450,40);
    glVertex2i(443,58);
    glVertex2i(451,40);
	glVertex2i(447,58);
    
    glVertex2i(452,40);
    glVertex2i(453,62);
    glVertex2i(453,40);
    glVertex2i(458,58);
    glEnd();
	glFlush();
    glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(400,40);
    glVertex2i(393,58);
    glVertex2i(401,40);
	glVertex2i(397,58);
    
    glVertex2i(402,40);
    glVertex2i(403,62);
    glVertex2i(403,40);
    glVertex2i(408,58);
    glEnd();
	glFlush();


    glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(350,40);
    glVertex2i(343,58);
    glVertex2i(351,40);
	glVertex2i(347,58);
    
    glVertex2i(352,40);
    glVertex2i(353,62);
    glVertex2i(353,40);
    glVertex2i(358,58);
    glEnd();
	glFlush();


    glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(600,40);
    glVertex2i(593,58);
    glVertex2i(601,40);
	glVertex2i(597,58);
    
    glVertex2i(602,40);
    glVertex2i(603,62);
    glVertex2i(603,40);
    glVertex2i(608,58);
    glEnd();
	glFlush();


    glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(50,40);
    glVertex2i(43,58);
    glVertex2i(51,40);
	glVertex2i(47,58);
    
    glVertex2i(52,40);
    glVertex2i(53,62);
    glVertex2i(53,40);
    glVertex2i(58,58);
    glEnd();
	glFlush();

    glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(100,40);
    glVertex2i(93,58);
    glVertex2i(101,40);
	glVertex2i(97,58);
    
    glVertex2i(102,40);
    glVertex2i(103,62);
    glVertex2i(103,40);
    glVertex2i(108,58);
    glEnd();
	glFlush();

    glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(150,40);
    glVertex2i(143,58);
    glVertex2i(151,40);
	glVertex2i(147,58);
    
    glVertex2i(152,40);
    glVertex2i(153,62);
    glVertex2i(153,40);
    glVertex2i(158,58);
    glEnd();
	glFlush();

   glBegin(GL_LINES);
	glColor3f(0.0f,0.5f,0.0f);
	glVertex2i(200,40);
    glVertex2i(193,58);
    glVertex2i(201,40);
	glVertex2i(197,58);
    
    glVertex2i(202,40);
    glVertex2i(203,62);
    glVertex2i(203,40);
    glVertex2i(208,58);
    glEnd();
	glFlush();

}

void star(void)
{
	glBegin(GL_POINTS);
	glColor3f(0.90,0.91,0.98);
	glVertex2i(380,425);
	glVertex2i(10,470);
	glVertex2i(30,400);
	glVertex2i(25,350);
	glVertex2i(40,378);
	glVertex2i(70,420);
	glVertex2i(18,462);
	glVertex2i(480,370);
	glVertex2i(400,390);
	glVertex2i(630,485);
	glVertex2i(600,400);
	glVertex2i(300,370);
	glVertex2i(275,400);
	glVertex2i(289,480);
	glVertex2i(100,380);
	glVertex2i(80,370);
	glVertex2i(210,375);
	glVertex2i(220,440);
	glVertex2i(150,470);
	glVertex2i(550,400);
	glVertex2i(130,300);
	glVertex2i(100,280);
	glVertex2i(50,250);
	glVertex2i(550,300);
	glVertex2i(570,250);
	glVertex2i(500,320);
	glEnd();
	glFlush();
}
void arrow(void)
{
	if(i<=640)
	{
		i+=0.5;
	glColor3f(0.6,0.5,0.6);
	if(i<150)
	{
		glBegin(GL_POLYGON);
		glVertex2i(10+i,210);
		glVertex2i(10+i,220);
		glVertex2i(30+i,220);
		glVertex2i(30+i,210);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(30+i,230);
		glVertex2i(60+i,215);
		glVertex2i(30+i,200);
		
	}

	glEnd();
	glFlush();

		i+=0.1;
	glColor3f(0.6,0.5,0.6);
	if(i<=640 && i>250)
	{
		glBegin(GL_POLYGON);
		glVertex2i(150+i,210);
		glVertex2i(150+i,220);
		glVertex2i(170+i,220);
		glVertex2i(170+i,210);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(170+i,230);
		glVertex2i(200+i,215);
		glVertex2i(170+i,200);
	
	//	glVertex2i(150+i,200);
	}
	}
	else
	{
		i=0;
	}
	glFlush();
	glEnd();

}

void setFont(void *font)
{
	currentfont=font;
}



void output(float x,float y,float z,char *string)
{

	char *c;
	glRasterPos3f(x,y,z);
 
	for(c=string;*c!='\0';c++)
	{	glColor3f(0.0,0.0,0.0);
		glutBitmapCharacter(currentfont,*c);
	}
	glPopMatrix();
}

void frontscreen()
{
	glClearColor(0.8,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1000,0,700);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,0.0);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	
 output(250.0,650.0,0.0,"SRINIVAS INSTITUTE OF TECHNOLOGY,VALACHIL ");
 glColor3f(0,0,1);
 output(230.0,600.0,0.0,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
 glColor3f(1,0.5,0);
 output(250,500,0.0,"COMPUTER GRAPHICS MINI PROJECT ON");
 glColor3f(1,0,0);
 output(250,450,0.0,"PHOTOSYNTHESIS AND RESPIRATION IN PLANT");
 glColor3f(1,0.5,0);
 output(210,350,0.0,"BY:");
 glColor3f(0.5,0,0.5);
 output(250,300,0.0,"RASHMI SHETTY.V           4SN10CS089");
 glColor3f(0.5,0,0.5);
 output(250,260,0.0,"SONA JOSEPH                    4SN10CS108");
 glColor3f(1,0.1,1);
 output(700,140,0.0,"P TO NEXT ");
 glColor3f(1,0.1,1);
 output(700,90,0.0," X TO EXIT ");
 glEnd();
 glFlush();
 //glutSwapBuffers();
 //glutPostRedisplay();
}

void text()
{
	
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	
 output(10.0,460.0,0.0," Photosynthesis in Plant ");
 glColor3f(0,0,0);
 glEnd();
 	
}

void text2()
{
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	
 output(10.0,450.0,0.0,"Respiration in Plant ");
 glColor3f(1.0,1.0,1.0);
 glEnd();
 //glFlush();
}

void text3()
{
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	
 output(160.0,210.0,0.0,"CO2 ");
 glColor3f(1.0,0.0,0.0);
 glEnd();
 //glFlush();
}

void text4()
{
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	
 output(380.0,210.0,0.0,"O2");
 glColor3f(1.0,0.0,0.0);
 glEnd();
}

void text5()
{
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	
 output(160.0,210.0,0.0,"O2");
 glColor3f(1.0,0.0,0.0);
 glEnd();
}

void text6()
{
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	
 output(380.0,210.0,0.0,"CO2");
 glColor3f(1.0,0.0,0.0);
 glEnd();
}


void text7()
{
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	
 output(420.0,20.0,0.0,"press R for respiration");
 glColor3f(1.0,0.0,0.0);
 glEnd();
}
void text8()
{
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	
 output(420.0,20.0,0.0,"press P for photosynthesis");
 glColor3f(1.0,0.0,0.0);
 glEnd();
}
void mount()
{
	glBegin(GL_POLYGON);
	glColor3f(0.4,0.1,0.0);
	glVertex2i(350,125);
	glVertex2i(450,180);
	glVertex2i(500,125);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.4,0.1,0.0);
	glVertex2i(460,125);
	glVertex2i(560,180);
	glVertex2i(610,125);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.4,0.1,0.0);
	glVertex2i(0,125);
	glVertex2i(100,180);
	glVertex2i(150,125);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.4,0.1,0.0);
	glVertex2i(110,125);
	glVertex2i(210,180);
	glVertex2i(260,125);
	glEnd();

}
	
/*void sprint(int x,int y,char *st)
{
	int l,i;
	l=strlen(st);
	glRasterPos2i(x,y);
	for(i=0;i<1;i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,st[i]);
}*/


void photo(void)
{ 
	glClearColor(0.0,2.3,3.0,0.0);
		glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(3.0);
	glPointSize(3.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,640.0,0.0,480.0);
	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();

//frontscreen();
	drawplant();
	glFlush();
	sun();
	mount();
	tree();
	//trees();
	bird();
	cloud();
	cloud1();
	cloud2();
	drop();
	arrow();
	text();

	text3();
    text4();
	text7();
	trees();

	//glutPostRedisplay();
	//glutSwapBuffers();
	f=0;
}

void resp(void)
{

	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(3.0);
	glPointSize(3.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,640.0,0.0,480.0);
	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();
	drawplant1();
	moon();
	mount();
	circle();
	tree();
	star();
	arrow();
	text2();
	text5();
	text6();
	text8();
	trees();
	//glutPostRedisplay();
	//glutSwapBuffers();
	f=1;
	
	
}

void bg()
{
	if(f==0)
		frontscreen();
	if(p==1)
	{
		photo();
	}
	if(r==1)
	{
		resp();
	}
	glFlush();
}


void keyboard(unsigned char key,int x,int y)
{	

	if(key=='p'||key=='P')
	{ 
		p=1;
		i=0;
	}
	if(key=='r'||key=='R')
	{ 
		p=2;
		k=0;
	}
	if(key=='x'||key=='X')
		exit(1);
	//glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

void disp(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	if(f==0)
		frontscreen();
	if(p==1)
		photo();

	if(p==2)
		resp();
	glFlush();
	glutPostRedisplay();
	glutSwapBuffers();
}

int main(int argc,char *argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(640,480);
	glutInitWindowPosition(0,0);
	glutCreateWindow("PHOTOSYNTHESIS AND RESPIRATION");
	glutDisplayFunc(disp);
	glutTimerFunc(200, birds, 2);
	glutKeyboardFunc(keyboard);

	glutMainLoop();
}
