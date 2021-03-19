#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
//#include <random.h>
#include <time.h>
#include "Miki.h"

Miki::Miki(void)
{
  	  MickyRHand = 90; 
	MickyLHand = 90;
	 MickyRLeg = 90;
	 MickyLLeg = 90;

	 HandSpeed = 1.5;
	 LegSpeed = 0.6;

	 Rflag=1;
	 Lflag=0;
	 Speed = 100;
	 angleR=0.0;
	 angleD=0.0;

	 x=1.001;y=0.5;z=0.001;
	

	 ball_amb_diff[0]= .4;
	 ball_amb_diff[1]= .1;
	 ball_amb_diff[2]= .1;
	 ball_amb_diff[3]= .1;
	 ball_spec[0] = 0.005;
	 ball_spec[1] = 0.005;
	 ball_spec[2] = 0.005;
	 ball_spec[3] = 0.005;
	 ball_shine = 20;


	GLdouble equation[4] = {0.0, 0.0, -1.0,   0.0};

}
Miki::~Miki(void)
{
	GLfloat MickyRHand = 90; 
	GLfloat	MickyLHand = 90;
	GLfloat MickyRLeg = 90;
	GLfloat MickyLLeg = 90;
	GLint Rflag=1,Lflag=0;
	


}
void Miki::Show(void)
{	
glPushMatrix();
	
	GLdouble equation[4] = {0.0, 0.0, -1.0,   0.0};

	glTranslatef( 7+x,0.45,0+z );
 	glScalef(0.1,0.1,0.1);

	 //pants 
	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( 0,-.6, 0.1);
//	glColor3d( 1, 0, 0 );
		Setballambdiff(1, 0, 0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glScalef(1,1.4,1.2);
	glutSolidSphere(1,20,20); 
//	glColor3d( 1, 1,1 );
	
	Setballambdiff(1, 1, 1,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glTranslatef( 0.3,-0., 0.85 );
	glutSolidTorus( 0.15, 0.1, 20, 20 );
	glTranslatef( -0.6,-0.0, 0.0 );
	glutSolidTorus( 0.15, 0.1, 20, 20 );

	glPopMatrix();


	
	// body
	glPushMatrix();
	glRotatef(angleD,0,1,0);
//	glColor3d( 0, 0, 0 );
		Setballambdiff(0, 0, 0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glScalef(1,2,1);
	glutSolidSphere( 1, 20, 20 );
	glScalef(1,0.5,1);
	glTranslatef( 0,-0.2,0.2);
	glutSolidSphere( 1, 20, 20 );
	glPopMatrix();

	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( 0,2.6, 0.6);
	glRotatef( 135, 1., 0., 0 );
		Setballambdiff(0, 0, 0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
//	glColor3d( 0, 0, 0 );
	glScalef(2.2,1.4,1);
	gluCylinder(gluNewQuadric(), 0.4, 0.4, 0.1, 20, 20);
	glPopMatrix();

	//################### Head #####################//
	//front
	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( 0,3.3, 0.1 );
    //glRotatef( 90, 0., 1., 0. );
	//glColor3d( 1,1,0.6);
		Setballambdiff(1,1,0.6,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glutSolidSphere( 1.4, 20, 20 );
	glPopMatrix();

	//back
	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( 0,3.3, -0.2);
  //  glRotatef( 90, 0., 1., 0. );
	//glColor3d( 0,0, 0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glutSolidSphere( 1.5, 20, 20 );
	glPopMatrix();

	// right eye
	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( 0.2,3.8, 1.2 );
  //  glRotatef( 90, 0., 1., 0 );
	//glColor3d( 1,1, 1 );
		Setballambdiff(1,1,1,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glScalef(1.2,2.8,1);
	glutSolidSphere( 0.22, 20, 20 );
	glPopMatrix();

	//  right black eye
	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( 0.2,3.5, 1.4 );
   // glRotatef( 90, 0., 1., 0 );
	//glColor3d( 0,0, 0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glScalef(0.5,1.8,0.5);
	glutSolidSphere( 0.2, 20, 20 );
	glPopMatrix();

		// left eye
	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( -0.2,3.8, 1.2 );
   // glRotatef( 90, 0., 1., 0 );
	//glColor3d( 1,1, 1 );
		Setballambdiff(1,1,1,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glScalef(1,2.8,1);
	glutSolidSphere( 0.22, 20, 20 );//(radius, slices, stacks )
	glPopMatrix();

	// left black eye
	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( -0.2,3.5, 1.4 );
  //  glRotatef( 90, 0., 1., 0 );
	//glColor3d( 0,0, 0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glScalef(0.5,1.8,0.5);
	glutSolidSphere( 0.2, 20, 20 );
	glPopMatrix();

	//Rigth ear
	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( 1.6,4.9, 0. );
	//glColor3d( 0, 0, 0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glScalef(1,1,0.5);
	glutSolidTorus( 0.6, 0.5, 20, 20 );
	glPopMatrix();

	//Left ear
	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( -1.6,4.9, 0. );
	//glColor3d( 0, 0, 0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glScalef(1,1,0.5);
	glutSolidTorus( 0.6, 0.5, 20, 20 );
	glPopMatrix();

	//Nose
	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( 0,2.9,0.6);
	//glColor3d( 1,1,0.5);
		Setballambdiff(1,1,0.5,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	//glRotatef(90,0,1,0);
	glScalef(0.4,.4,1);
	glutSolidSphere( 1.5, 20, 20 );
	glPopMatrix();

	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( 0,3.2,2.2);
 //   glRotatef( 90, 0., 1., 0 );
	//glColor3d( 0,0, 0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glScalef(1,0.7,1.2);
	glutSolidSphere( 0.3, 20, 20 );
	glPopMatrix();

	//############# HANDS ####################//

	//Right Elbow
	glPushMatrix();   
	glRotatef(angleD,0,1,0);
	//glColor3d( 0, 0, 0 );
	    Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glTranslatef(1.5, 0.5, 0.0);    
    glRotatef(MickyRHand, 1.0, 0.0, 0.0);        
    gluCylinder(gluNewQuadric(), 0.2, 0.2, 1.3, 20, 20);
		//Glove
	glTranslatef(0, 0.0, 1.2);
	//glColor3d( 1, 1, 1 );
	    Setballambdiff(1,1,1,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glutSolidTorus( 0.15, 0.15, 20, 11 ); 
	glTranslatef(0, 0.0, 0.5);
	glScalef(0.8,0.5,1.2);
	glutSolidSphere( 0.5, 10, 10 );
		//Fingers
	glTranslatef(-0.2, 0, 0);
	glScalef(0.1,0.455,0.5);
	//glColor3d( 0,0,0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glutSolidSphere( 1, 10, 10 );
	glTranslatef(3, 0, 0);
	glScalef(1,1.1,1);
	glutSolidSphere( 1, 10, 10 );

	glPopMatrix();

	//Right Sholder    
	glPushMatrix();
	glRotatef(angleD,0,1,0);
	//glColor3d( 0, 0, 0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glRotatef(90, 1.0, 0.0, 0.0);

	glTranslatef(0.5, 0., -1.4);
    glRotatef(45, .0, 1.0, 0.0); 
    gluCylinder(gluNewQuadric(), 0.2, 0.2, 1.5, 20, 20);
    glPopMatrix();


	//Left Elbow
	glPushMatrix();   
	glRotatef(angleD,0,1,0);
	//glColor3d( 0, 0, 0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
    glTranslatef(-1.5, 0.5, 0.0);    
    glRotatef(MickyLHand, 1.0, 0.0, 0.0);        
    gluCylinder(gluNewQuadric(), 0.2, 0.2, 1.3, 20, 20);
		//Glove
	glTranslatef(0, 0.0, 1.2);
	//glColor3d( 1, 1, 1 );
		Setballambdiff(1,1,1,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glutSolidTorus( 0.15, 0.15, 20, 11 ); 
	glTranslatef(0, 0.0, 0.5);
	glScalef(0.8,0.5,1.2);
	glutSolidSphere( 0.5, 10, 10 );
	
		//Fingers
	glTranslatef(-0.2, 0, 0);
	glScalef(0.1,0.455,0.5);
	//glColor3d( 0,0,0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glutSolidSphere( 1, 10, 10 );
	glTranslatef(3, 0, 0);
	glScalef(1,1.1,1);
	glutSolidSphere( 1, 10, 10 );
	glPopMatrix();

	//Left Sholder    
	glPushMatrix();
	glRotatef(angleD,0,1,0);
	//glColor3d( 0, 0, 0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glRotatef(90, 1.0, 0.0, 0.0);
	glTranslatef(-1.5, 0., -0.4);
    glRotatef(135, .0, 1.0, 0.0); 
    gluCylinder(gluNewQuadric(), 0.2, 0.2, 1.5, 20, 20);
    glPopMatrix();
	
	//############# Legs ####################//


		///????//
	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( 0.7, -1.6,  0. );
	glRotatef( 90, 1., 1, 0. );
	//glColor3d( 1, 0, .0 );
		Setballambdiff(1,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glLineWidth(1.0);
	glutSolidTorus( 0.2, 0.2, 20, 11 );  

	glTranslatef( 0,0,-0.1 );
	//glColor3d( 0, 0, .0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glScalef(1,1,0.6);
	glutSolidTorus( 0.201, 0.201, 20, 11 );  
	glPopMatrix();            

	glPushMatrix();
	glRotatef(angleD,0,1,0);
	glTranslatef( -0.7, -1.6,  0. );
	glRotatef(90, 1.0, 0.0, 0.0);
	glRotatef(135, 0.0, 1.0, 0.0);
	//glColor3d( 1, 0, .0 );
		Setballambdiff(1,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glLineWidth(1.0);
	glutSolidTorus( 0.2, 0.2, 20, 11 ); 

	glTranslatef( 0,0,0.1 );
	//glColor3d( 0, 0, .0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glScalef(1,1,0.6);
	glutSolidTorus( 0.201, 0.201, 20, 11 );  
	glPopMatrix();            



		//#####left leg###
	//leg
	glPushMatrix();   
	glRotatef(angleD,0,1,0);
	//glColor3d( 0, 0, 0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glTranslatef(-0.9, -1.7, 0.0);      
    glRotatef(MickyRLeg, 1, 0.0, 0.0);       
    gluCylinder(gluNewQuadric(), 0.2, 0.2, 1.5, 20, 20);
	//knee
	glTranslatef(-0.06, 0.0, 0.15);      
    glRotatef(135, .0, 1.0, 0.0);         
    gluCylinder(gluNewQuadric(), 0.2, 0.2, 0.5, 20, 20);                       
    //shoe
	glRotatef(-135, .0, 1.0, 0.0); 
	glTranslatef(0,0.5,1.5);
	//glRotatef( 90, 1., 0., 0 );
	//glColor3d( 1, 1, 0 );
		Setballambdiff(1,1,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glScalef(1,2,0.5);
	glutSolidSphere( 0.5, 20, 20 );
	// shoe front ball
	glTranslatef(0.0,0.3,0);
	glScalef(1,0.5,2);
	glClipPlane(GL_CLIP_PLANE1,  equation);
	glEnable(GL_CLIP_PLANE1);
	glutSolidSphere( 0.4, 20, 20 );
	glDisable(GL_CLIP_PLANE1);
	// sock
	//glColor3d( 0.8, 0.9, 0. );
		Setballambdiff(0.8, 0.9, 0.,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glTranslatef(.0,-1.1,-0.2);
	glutSolidTorus( 0.2, 0.2, 20, 11 ); 

	//glColor3d( 0,0,0. );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glTranslatef(0,0,0.1);
	glScalef(1,1,0.6);
	glutSolidTorus( 0.201, 0.201, 20, 11 ); 

	glPopMatrix();


	//######right leg####
		//leg
	glPushMatrix();    
	glRotatef(angleD,0,1,0);
	//glColor3d( 0, 0, 0 );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glTranslatef(0.9, -1.7, 0.0);      
    glRotatef(MickyLLeg, 1, 0.0, 0.0);       
    gluCylinder(gluNewQuadric(), 0.2, 0.2, 1.5, 20, 20);
	//knee
	glTranslatef(-0.06, 0.0, 0.15);      
    glRotatef(-135, .0, 1.0, 0.0);         
    gluCylinder(gluNewQuadric(), 0.2, 0.2, 0.5, 20, 20);                       
    //shoe
		glRotatef(135, .0, 1.0, 0.0); 
		glTranslatef(0,0.5,1.5);
	//glRotatef( 90, 1., 0., 0 );
	//glColor3d( 1, 1, 0 );
		Setballambdiff(1,1,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glScalef(1,2,0.5);
	glutSolidSphere( 0.5, 20, 20 );
	// shoe front ball
	glTranslatef(0.0,0.3,0);
	glScalef(1,0.5,2);
	glClipPlane(GL_CLIP_PLANE0,  equation);
	glEnable(GL_CLIP_PLANE0);
	glutSolidSphere( 0.4, 20, 20 );
	glDisable(GL_CLIP_PLANE0);
	// sock
	//glColor3d( 0.8, 0.9, 0. );
		Setballambdiff(0.8,0.9,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glTranslatef(.0,-1.1,-0.2);
	glutSolidTorus( 0.2, 0.2, 20, 11 ); 

	//glColor3d( 0,0,0. );
		Setballambdiff(0,0,0,0); 
		Materialfv(ball_amb_diff,ball_spec,ball_shine);
	glTranslatef(0,0,0.1);
	glScalef(1,1,0.6);
	glutSolidTorus( 0.201, 0.201, 20, 11 ); 

	glPopMatrix();

	//printf("x=%f , z=%f",getx(),getz());

	glPopMatrix();
}
void Miki::Move(void)
{

	if(Rflag==1)
	{
		MickyRHand -= HandSpeed;
		if(MickyRHand<45)
			Rflag=0;
	}
	else if (Rflag==0)
	{
		MickyRHand += HandSpeed;
			if(MickyRHand>135)
				Rflag=1;
	}

	if(Lflag==0)
	{
		MickyLHand += HandSpeed;
		if(MickyLHand>135)
			Lflag=1;
	}
	else if (Lflag==1)
	{
		MickyLHand -= HandSpeed;
			if(MickyLHand<45)
				Lflag=0;
	}

	if(Rflag==1)
	{
		MickyRLeg -= LegSpeed;
	}
	else if (Rflag==0)
	{
		MickyRLeg += LegSpeed;
	}

	if(Lflag==0)
	{
		MickyLLeg += LegSpeed;
	}
	else if (Lflag==1)
	{
		MickyLLeg -= LegSpeed;
	}

}
void Miki::Go()
{
	z +=  (cos(angleR))/Speed;
	x +=  (sin(angleR))/Speed;
}
void Miki::RotateLeft()
{
	angleR += 3.1415*2/40;
	angleD += 9;
}
void Miki::RotateRight()
{
	angleR -= 3.1415*2/40;
	angleD -= 9;
}
void Miki::SpeedUp()
{
	if(Speed>20)
	{	Speed -= 5;
	
		HandSpeed = HandSpeed + 1;
		LegSpeed = LegSpeed+0.5;
	}
}
void Miki::SpeedDown()
{
	
		if(Speed<100)
	{		
		Speed += 5;
		HandSpeed = HandSpeed - 1;
		LegSpeed = LegSpeed -0.5 ;
	}

}
void Miki::Stop()
{
	 MickyRHand = 90; 
	MickyLHand = 90;
	 MickyRLeg = 90;
	 MickyLLeg = 90;
}

void Miki::Setballambdiff(float a,float b,float c,float d)
{
	 ball_amb_diff[0]= a;
	 ball_amb_diff[1]= b;
	 ball_amb_diff[2]= c;
	 ball_amb_diff[3]= d;
}
void Miki::Materialfv(GLfloat x[4], GLfloat b[4], GLfloat c )
{
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, ball_amb_diff);//Red home
	glMaterialfv(GL_FRONT, GL_SPECULAR, ball_spec);
	glMaterialf(GL_FRONT, GL_SHININESS, ball_shine);
	glMaterialfv(GL_FRONT, GL_EMISSION, ball_spec);

}

GLfloat Miki::getx()
{
	return 7+x;
}

GLfloat Miki::gety()
{
	return y;
}
GLfloat Miki::getz()
{
	return z;
}

GLfloat Miki::getD()
{
	return angleD;
}
