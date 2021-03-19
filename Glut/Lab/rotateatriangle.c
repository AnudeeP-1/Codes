#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
float h=0.0,k=0.0,theta;
int choice;
void rotate_origin()
{glRotatef(theta,0,0,1);
}
void rotate_fixed_point()
{
glTranslatef(h,k,0);
glRotatef(theta,0,0,1);
glTranslatef(-h,-k,1);
}
void draw_triangle()
{
glColor3f(0.0,0.0,1.0);
glBegin(GL_LINE_LOOP);
glVertex2f(100,100);
glVertex2f(400,100);
glVertex2f(250,350);
glEnd();
}
void display_about_origin()
{
glClear(GL_COLOR_BUFFER_BIT);
draw_triangle();
rotate_origin();
draw_triangle();
glLoadIdentity();
glFlush();
}
void display_about_fixed_point()
{
glClear(GL_COLOR_BUFFER_BIT);
draw_triangle();
rotate_fixed_point();
draw_triangle();
glLoadIdentity();
glFlush();
}
void myinit()
{
glClearColor(1.0,1.0,1.0,1.0);
glColor3f(1.0,1.0,0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-500.0,500.0,-500.0,500.0);
glMatrixMode(GL_MODELVIEW);
}
int main(int argc,char **argv)
{
printf("Enter your Choice: 1-> rotation about origin\n");
printf("Enter your Choice: 2-> rotation about fixed point\n");
scanf("%d",&choice);
printf("Enter the rotation angle\n");
scanf("%f",&theta);
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);glutInitWindowSize(500,500);
glutInitWindowPosition(0,0);
if(choice==1)
{
glutCreateWindow("Rotation Triangle:4SN17CS005: Anudeep G.P");
glutDisplayFunc(display_about_origin);
}
else if(choice==2)
{
printf("enter the pivot(x,y)point\n");
scanf("%f%f",&h,&k);
glutCreateWindow("Rotation Triangle:4SN17CS005: Anudeep G.P");
glutDisplayFunc(display_about_fixed_point);
}
else
printf("wrong choice\n");
myinit();
glutMainLoop();
}
