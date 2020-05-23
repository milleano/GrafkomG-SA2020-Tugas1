#include <iostream>
#include <GL/freeglut.h>

void Kapak() {

	//warna kapak 
	glColor3ub(0, 34, 34);
	glBegin(GL_POLYGON);
	glVertex2f(115, 36);
	glVertex2f(145, 44);
	glVertex2f(218, 60);
	glVertex2f(218, 92);
	glVertex2f(190, 96);
	glVertex2f(145, 104);
	glVertex2f(115, 135);
	glVertex2f(115, 135);
	glVertex2f(115, 36);
	glEnd();

	//garis kapak
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(115, 36);
	glVertex2f(145, 44);
	glVertex2f(218, 60);
	glVertex2f(218, 92);
	glVertex2f(190, 96);
	glVertex2f(145, 104);
	glVertex2f(115, 135);
	glVertex2f(115, 135);
	glVertex2f(115, 36);
	glEnd();

	//warna mata kapak
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2f(115, 36);
	glVertex2f(145, 44);
	glVertex2f(145, 104);
	glVertex2f(115, 135);
	glEnd();

	//warna mata kapak
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(115, 36);
	glVertex2f(145, 44);
	glVertex2f(145, 104);
	glVertex2f(115, 135);
	glEnd();

	//warna gagang kapak 
	glColor3ub(0, 0, 205);
	glBegin(GL_POLYGON);
	glVertex2f(190, 96);
	glVertex2f(190, 256);
	glVertex2f(218, 256);
	glVertex2f(218, 94);
	glEnd();

	//garis gagang kapak 
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(190, 96);
	glVertex2f(190, 256);
	glVertex2f(218, 256);
	glVertex2f(218, 94);
	glEnd();
	glFlush();

}

void Rumah() {

	glColor3ub(0, 128, 0);
	//warna dasar hijau rumah
	glBegin(GL_POLYGON);
	glVertex2f(788, 291);
	glVertex2f(1077, 291);
	glVertex2f(1175, 434);
	glVertex2f(1175, 607);
	glVertex2f(871, 607);
	glVertex2f(700, 607);
	glVertex2f(700, 434);
	glVertex2f(788, 291);
	glEnd();

	glColor3ub(0, 0, 0);
	//garis rumah
	glBegin(GL_LINE_LOOP);
	glVertex2f(788, 291);
	glVertex2f(1077, 291);
	glVertex2f(1175, 434);
	glVertex2f(1175, 607);
	glVertex2f(871, 607);
	glVertex2f(700, 607);
	glVertex2f(700, 434);
	glVertex2f(788, 291);
	glEnd();

	//genteng coklat
	glColor3ub(210, 105, 30);
	glBegin(GL_POLYGON);
	glVertex2f(788, 291);
	glVertex2f(1077, 291);
	glVertex2f(1175, 434);
	glVertex2f(872, 434);
	glEnd();

	//garis genteng coklat
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(788, 291);
	glVertex2f(1077, 291);
	glVertex2f(1175, 434);
	glVertex2f(872, 434);
	glEnd();

	// jendela 1
	glColor3ub(173, 216, 230);
	glBegin(GL_POLYGON);
	glVertex2f(920, 469);
	glVertex2f(1024, 469);
	glVertex2f(1024, 529);
	glVertex2f(921, 529);
	glVertex2f(921, 469);
	glEnd();

	// garis jendela 1
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(920, 469);
	glVertex2f(1024, 469);
	glVertex2f(1024, 529);
	glVertex2f(921, 529);
	glVertex2f(921, 469);
	glEnd();

	// jendela 2
	glColor3ub(173, 216, 230);
	glBegin(GL_POLYGON);
	glVertex2f(1066, 469);
	glVertex2f(1131, 469);
	glVertex2f(1131, 530);
	glVertex2f(1066, 530);
	glVertex2f(1066, 469);
	glEnd();

	// garis jendela 2
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(1066, 469);
	glVertex2f(1131, 469);
	glVertex2f(1131, 530);
	glVertex2f(1066, 530);
	glVertex2f(1066, 469);
	glEnd();

	// pintu
	glColor3ub(128, 128, 0);
	glBegin(GL_POLYGON);
	glVertex2f(769, 531);
	glVertex2f(804, 531);
	glVertex2f(804, 600);
	glVertex2f(769, 600);
	glVertex2f(769, 531);
	glEnd();

	// garis pintu
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(769, 531);
	glVertex2f(804, 531);
	glVertex2f(804, 600);
	glVertex2f(769, 600);
	glVertex2f(769, 531);
	glEnd();
	// titik buka pintu 
	glPointSize(3.0);
	glBegin(GL_POINTS);
	glColor3ub(0, 0, 0);
	glVertex2f(796, 575);
	glEnd();

	//garis atap bawah
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(700, 435);
	glVertex2f(872, 435);
	glVertex2f(872, 607);
	glVertex2f(700, 607);
	glVertex2f(700, 435);
	glEnd();

	//atap
	glColor3ub(102, 205, 170);
	glBegin(GL_POLYGON);
	glVertex2f(788, 291);
	glVertex2f(872, 434);
	glVertex2f(700, 434);
	glVertex2f(788, 291);
	glEnd();

	//garis atap atas
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(788, 291);
	glVertex2f(872, 434);
	glVertex2f(700, 434);
	glVertex2f(788, 291);
	glEnd();

	glFlush();
}

void TV() {

	//TV
	glColor3ub(220, 220, 220);
	glBegin(GL_POLYGON);
	glVertex2f(443, 52);
	glVertex2f(734, 52);
	glVertex2f(734, 220);
	glVertex2f(713, 235);
	glVertex2f(685, 235);
	glVertex2f(685, 251);
	glVertex2f(442, 251);
	glVertex2f(442, 235);
	glVertex2f(417, 235);
	glVertex2f(416, 69);
	glVertex2f(443, 52);
	glEnd();

	//Layar
	glColor3ub(255, 255, 240);
	glBegin(GL_POLYGON);
	glVertex2f(436, 82);
	glVertex2f(695, 82);
	glVertex2f(695, 187);
	glVertex2f(436, 187);
	glVertex2f(436, 82);
	glEnd();

	//tombol di TV
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(557, 201);
	glVertex2f(583, 201);
	glVertex2f(583, 221);
	glVertex2f(557, 221);
	glVertex2f(557, 201);
	glEnd();

	//garis layar
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(436, 82);
	glVertex2f(695, 82);
	glVertex2f(695, 187);
	glVertex2f(436, 187);
	glVertex2f(436, 82);
	glEnd();

	//titik di TV
	glPointSize(4.0);
	glBegin(GL_POINTS);
	glColor3ub(0, 0, 0);
	glVertex2f(529, 212);
	glVertex2f(613, 212);
	glEnd();

	//garis
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(443, 52);
	glVertex2f(734, 52);
	glVertex2f(734, 220);
	glVertex2f(713, 235);
	glVertex2f(685, 235);
	glVertex2f(685, 251);
	glVertex2f(442, 251);
	glVertex2f(443, 236);
	glVertex2f(416, 235);
	glVertex2f(416, 69);
	glVertex2f(443, 52);
	glEnd();

	//garis
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(416, 69);
	glVertex2f(713, 68);
	glVertex2f(713, 235);
	glVertex2f(713, 68);
	glEnd();

	//garis
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(713, 235);
	glVertex2f(442, 235);
	glVertex2f(685, 235);
	glVertex2f(443, 235);
	glVertex2f(416, 235);
	glVertex2f(713, 235);
	glEnd();
	glFlush();

}

void Pagar() {

	//warna gradasi pagar 1 tegak
	glColor3ub(255, 69, 0);
	glBegin(GL_POLYGON);
	glVertex2f(840, 57);
	glVertex2f(872, 57);
	glVertex2f(872, 239);
	glVertex2f(838, 238);
	glVertex2f(838, 198);
	glVertex2f(838, 171);
	glVertex2f(838, 57);
	glEnd();

	//warna gradasi pagar 2 tegak
	glColor3ub(255, 69, 0);
	glBegin(GL_POLYGON);
	glVertex2f(948, 57);
	glVertex2f(981, 57);
	glVertex2f(982, 236);
	glVertex2f(949, 236);
	glEnd();

	//warna gradasi pagar 3 tegak
	glColor3ub(255, 69, 0);
	glBegin(GL_POLYGON);
	glVertex2f(1047, 60);
	glVertex2f(1082, 60);
	glVertex2f(1082, 237);
	glVertex2f(1046, 237);
	glVertex2f(1047, 60);
	glEnd();

	//warna gradasi pagar 1 mendatar
	glColor3ub(255, 69, 0);
	glBegin(GL_POLYGON);
	glVertex2f(791, 95);
	glVertex2f(1127, 92);
	glVertex2f(1127, 118);
	glVertex2f(793, 122);
	glVertex2f(791, 95);
	glEnd();

	//warna gradasi pagar 2 mendatar
	glColor3ub(255, 69, 0);
	glBegin(GL_POLYGON);
	glVertex2f(791, 171);
	glVertex2f(1126, 166);
	glVertex2f(1127, 196);
	glVertex2f(791, 198);
	glVertex2f(791, 171);
	glEnd();

	//titik di pagar
	glPointSize(4.0);
	glBegin(GL_POINTS);
	glColor3ub(255, 255, 255);
	glVertex2f(855, 109);
	glVertex2f(965, 107);
	glVertex2f(1066, 106);
	glVertex2f(1066, 182);
	glVertex2f(966, 183);
	glVertex2f(855, 185);
	glEnd();
	glFlush();
}

void Lemari() {

	glColor3ub(218, 165, 32);
	//lemari
	glBegin(GL_POLYGON);
	glVertex2f(60, 318);
	glVertex2f(87, 305);
	glVertex2f(272, 305);
	glVertex2f(272, 581);
	glVertex2f(237, 604);
	glVertex2f(60, 604);
	glVertex2f(60, 318);
	glEnd();

	//garis
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(60, 318);
	glVertex2f(87, 305);
	glVertex2f(272, 305);
	glVertex2f(272, 581);
	glVertex2f(237, 604);
	glVertex2f(60, 604);
	glVertex2f(60, 318);
	glEnd();
	// garis
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(60, 318);
	glVertex2f(145, 319);
	glVertex2f(145, 606);
	glVertex2f(145, 319);
	glEnd();
	// garis
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(145, 319);
	glVertex2f(238, 318);
	glVertex2f(238, 604);
	glVertex2f(238, 318);
	glEnd();
	// garis
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(238, 318);
	glVertex2f(272, 305);
	glVertex2f(238, 318);
	glEnd();
	//titik di lemari
	glPointSize(7.0);
	glBegin(GL_POINTS);
	glColor3ub(0, 0, 0);
	glVertex2f(130, 468);
	glVertex2f(161, 468);
	glEnd();
	glFlush();

}

void Kotakamal() {

	//warna kotak amal
	glColor3ub(139, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(421, 410);
	glVertex2f(572, 410);
	glVertex2f(572, 543);
	glVertex2f(527, 581);
	glVertex2f(371, 581);
	glVertex2f(371, 440);
	glVertex2f(421, 410);
	glEnd();

	//garis kotak amal
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(421, 410);
	glVertex2f(572, 410);
	glVertex2f(572, 543);
	glVertex2f(527, 581);
	glVertex2f(371, 581);
	glVertex2f(371, 440);
	glVertex2f(421, 410);
	glEnd();

	//garis dalam kotak amal
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(371, 441);
	glVertex2f(527, 441);
	glVertex2f(572, 411);
	glVertex2f(527, 441);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(527, 441);
	glVertex2f(527, 581);
	glVertex2f(527, 441);
	glEnd();

	//garis lubang kotak amal
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(447, 426);
	glVertex2f(493, 426);
	glEnd();
	glFlush();

}

void Menampilkan_Program()
{
	glClearColor(50, 100, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	Kapak();
	Rumah();
	TV();
	Pagar();
	Lemari();
	Kotakamal();

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 700);
	glutCreateWindow("Milleano Jody Alfredo Walimema 672018141");
	glutDisplayFunc(Menampilkan_Program);
	gluOrtho2D(0, 1300, 900, 0);
	glutMainLoop();

	return 0;
}