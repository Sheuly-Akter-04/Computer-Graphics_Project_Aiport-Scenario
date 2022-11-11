#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
# define PI           3.14159265358979323846

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 153.0f,255.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2.5);
         // Clear the color buffer (background)
    int i;


     //bulding

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 1.0f); // Paste colour
	glVertex2f(0.0f, 0.2f);    // x, y
	glVertex2f(0.0f, 0.4f);    // x, y
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.4f, 0.2f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(0.225f, 0.2f);    // x, y
	glVertex2f(0.225f, 0.3f);    // x, y
    glVertex2f(0.175f, 0.3f);
    glVertex2f(0.175f, 0.2f);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(204, 51, 0);  //Green
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.2f, 0.6f);
    glVertex2f(-0.1f, 0.4f);
    glEnd();




     //
     //tree

      glBegin(GL_QUADS);
      glColor3ub(102, 34, 0);

     glVertex2f(-.9f, -0.5f);
     glVertex2f(-.9f, -0.1f);// x, y
     glVertex2f(-.85f, -0.1f);
     glVertex2f(-.85f, -0.5f);// x, y
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(0, 255, 0);

     glVertex2f(-1.1f, -0.1f);
     glVertex2f(-.85f, .2f);// x, y
     glVertex2f(-.6f, -0.1f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(0, 255, 0);

     glVertex2f(-1.1f, -0.2f);
     glVertex2f(-.85f, .0f);// x, y
     glVertex2f(-.6f, -0.2f);
     glEnd();



    //Roads

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-1.0f, -0.6f);    // x, y
	glVertex2f(0.0f, -0.6f);    // x, y
	glVertex2f(0.0f, -0.6f);    // x, y
	glVertex2f(1.0f, -0.6f);    // x, y

	 glEnd();


     glBegin(GL_QUADS);
     glColor3ub(38, 38, 38);

     glVertex2f(-1.00f, -0.5f);
     glVertex2f(1.00f, -0.5f);// x, y
     glVertex2f(1.00f, -0.95f);
     glVertex2f(-1.00f, -0.95f);// x, y
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);

     glVertex2f(-0.7f, -0.65f);
     glVertex2f(-0.5f, -0.65f);// x, y
     glVertex2f(-0.5f, -0.75f);
     glVertex2f(-0.7f, -0.75f);// x, y
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);

     glVertex2f(-0.99f, -0.65f);
     glVertex2f(-0.9f, -0.65f);// x, y
     glVertex2f(-0.9f, -0.75f);
     glVertex2f(-0.99f, -0.75f);// x, y
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);

     glVertex2f(-0.3f, -0.65f);
     glVertex2f(-0.1f, -0.65f);// x, y
     glVertex2f(-0.1f, -0.75f);
     glVertex2f(-0.3f, -0.75f);// x, y
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);

     glVertex2f(0.1f, -0.65f);
     glVertex2f(0.3f, -0.65f);// x, y
     glVertex2f(0.3f, -0.75f);
     glVertex2f(0.1f, -0.75f);// x, y
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(255, 255, 255);

     glVertex2f(0.5f, -0.65f);
     glVertex2f(0.7f, -0.65f);// x, y
     glVertex2f(0.7f, -0.75f);
     glVertex2f(0.5f, -0.75f);// x, y
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(245, 245, 245);

     glVertex2f(0.9f, -0.65f);
     glVertex2f(0.99f, -0.65f);// x, y
     glVertex2f(0.99f, -0.75f);
     glVertex2f(0.9f, -0.75f);// x, y
     glEnd();

     //palne

     glBegin(GL_QUADS);
     glColor3ub(245, 245, 245);

     glVertex2f(-0.7f, -0.35f);
     glVertex2f(0.2f, -0.35f);// x, y
     glVertex2f(0.2f, -0.55f);
     glVertex2f(-0.7f, -0.55f);// x, y
     glEnd();


     glBegin(GL_TRIANGLES);
     glColor3ub(245, 245, 245);

     glVertex2f(0.2f, -0.35f);
     glVertex2f(0.4f, -0.55f);// x, y
     glVertex2f(0.2f, -0.55f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(245, 245, 245);

     glVertex2f(-0.7f, -0.45f);
     glVertex2f(-0.55f, -0.35f);// x, y
     glVertex2f(-0.7f, -0.15f);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(245, 245, 245);

     glVertex2f(-0.2f, -0.45f);
     glVertex2f(0.0f, -0.35f);// x, y
     glVertex2f(-0.2f, -0.15f);
     glEnd();


	 GLfloat x=-.5f; GLfloat y=-.6f; GLfloat radius =.05f;
	 int triangleAmount = 30; //# of triangles used to draw circle

	  //GLfloat radius = 0.8f; //radius
	 GLfloat twicePi = 2.0f * PI;

     glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,255);
     glVertex2f(x, y); // center of circle
     for(i = 0; i <= triangleAmount;i++)
            {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount)));
		    }
	 glEnd();

	 x=.25f; y=-.6f;radius =.05f;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,255);
     glVertex2f(x, y); // center of circle
     for(i = 0; i <= triangleAmount;i++)
            {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount)));
		    }

	 glEnd();

		 x=.15f; y=-.45f;radius =.02f;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,51,0);
		glVertex2f(x, y); // center of circle
	  	for(i = 0; i <= triangleAmount;i++)
            {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount)));
		    }

	 glEnd();

		 x=-.15f; y=-.45f;radius =.02f;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,51,0);
     glVertex2f(x, y); // center of circle
     for(i = 0; i <= triangleAmount;i++)
            {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount)));
		    }
	 glEnd();

		 x=-.35f; y=-.45f;radius =.02f;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,51,0);
     glVertex2f(x, y); // center of circle
     for(i = 0; i <= triangleAmount;i++)
            {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount)));
		    }
	 glEnd();

		 x=-.45f; y=-.45f;radius =.02f;
     glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,51,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++)
            {
			glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount)));
		    }
	glEnd();

	glFlush();  // Render now



}
	int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
