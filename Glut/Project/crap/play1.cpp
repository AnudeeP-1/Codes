#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>

int i,j,spaceCount=0;

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	glFlush();
}

void init() {
	glClearColor(0.1,0.8,0.1,1.0);
	glMatrixMode(GL_MODELVIEW);
	gluOrtho2D(0,1000,0,500);
}

void delay(float secs)
{
	float end = clock()/CLOCKS_PER_SEC + secs;
	while((clock()/CLOCKS_PER_SEC) < end);
}

void NormalKey(GLubyte key, GLint x, GLint y)
{	int m;
    switch ( key )    {
     case 27 : printf("Escape pressed. exit.\n");
	               exit(0);
                   break;

	 case ' ': delay(0.3);
				spaceCount++;
				if(spaceCount==1){
				   tCount = 0;
				   display2();
			   }
			   if(spaceCount==2){
				   display();
			   }
			   if(spaceCount==3){
				   display3();
			   }
			   
                   break;
	 case 'f':
	 case 'F': glutFullScreen();	
		 spaceCount = 0; tCount = 0; break;
	 case 's':
	 case 'S': 
		 if(spaceCount==1) {
		 tCount++;
		 switch(tCount) {
		 case 1: display_string(580,360,"I am the fastest animal in the whole wide world.",2); break;
		 case 2: display_string(80,330,"All Lies!!!",2);
				 display_string(80,310,"Stop Boasting, If you are not careful then you will meet your",2);
				 display_string(80,290,"end.",2); break;
		 case 3: display_string(580,280,"I will prove to you all that Im the fastest animal",2);
				 display_string(580,260,"in the whole World.",2); break;
		 case 4: display_string(80,240,"OK! I'll race you then...",2); break;
		 case 5: display_string(580,210,"* Laughs Heavily *",2); break;
		 case 6: display_string(80,180,"You just Wait and See...",2); break;
		 case 7: display_string(300,90,"PRESS SPACE BAR TO PROCEED TO THE RACE",2); break;
		 } 
		 glFlush(); }break;
	 case 'o':	
	 case 'O':
				for(m=0;m<25;m++) {
					movement(); 
					delay(0.05);
				}
				hareScene();
				delay(1);
				delay(1);
				display_string(330,320,"He is somewhere far away so",2);
				display_string(330,300,"I can sleep for a while",2);
				glFlush();
				delay(1);
				delay(1);
				hareScene();
				delay(1);
				glColor3f(1.0,1.0,1.0);
				glPointSize(4);
				glBegin(GL_POINTS);
				glVertex2i(278,273);
				glEnd();
				glFlush();
				delay(1);
				display_string(310,310,"Z",2);
				display_string(300,290,"Z",2);
				glFlush();
				delay(1);
				display_string(300,180,"(Tortoise continues to run slowly and steadily.)",2);
				glFlush();
				delay(1);
				delay(1);
				for(m=0;m<28;m++) {
					tortoiseraces(); 
					delay(0.05);
					glutSwapBuffers();
				}

				delay(1);
				display_string(750,230,"I Win!!!",2);
				glFlush();
				delay(1);
				display_string(300,200,"(The Hare was over confident",2);
				display_string(300,180,"and- that lead to his failure ) ",2);
				glFlush();
				break;
	}
}

void display_string(int x, int y, char *string, int font)
{
    int len,i;
	glColor3f(1.0,1.0,1.0);
	glRasterPos2f(x, y);
    len = (int) strlen(string);
    for (i = 0; i < len; i++) {
    if(font==1)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
	if(font==2)
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
	if(font==3)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
	if(font==4)
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);
	}

}

void display1() {
	//This is the First Screen
	glClearColor(0,0.5,0.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	display_string(300,440,"",1);
	display_string(300,400,"COMPUTER GRAPHICS MINI PROJECT",1);
	display_string(390,360,"Hare and Tortoise Storyline",2);
	display_string(40,200,"",2);
	display_string(40,160,"()",2);
	display_string(750,180,"Data Structure: Stack",3);
	display_string(750,160,"Description: To graphically represent a tale ",3);
	display_string(750,140,"that depicts the race between a hare and a ",3);
	display_string(750,120,"Tortoise ",3);
	display_string(450,20,"ESCAPE TO EXIT",3);
	display_string(445,50,"F TO FULLSCREEN",3);
	display_string(435,75,"S TO MAKE THEM CONVERSE",3); // Press S to make them converse in the second screen.
	display_string(370,250,"PRESS SPACE BAR TO ENTER",2);
	//glutPostRedisplay();
	glutSwapBuffers();
	glFlush();
}

int main(int argc,char** argv) {
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1000,500);
	glutCreateWindow("Hare and Tortoise");
	glutPositionWindow(50,50);
	init();
	glutDisplayFunc(display1);
	glutKeyboardFunc(NormalKey);
	glutMainLoop();
}
