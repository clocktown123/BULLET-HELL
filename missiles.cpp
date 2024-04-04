#include "missile.h"
#include <allegro5/allegro.h>
#include<allegro5\allegro_primitives.h>
#include <allegro5\allegro_image.h>
#include <iostream>
using namespace std;



//missile::missile(int x, int y, int angle, int radius, bool isAlive) {
	//xpos = 400;
	//ypos = 700;
	//angle = 90;
	//radius = 10;
	//isAlive = false;
//}

missile::missile(int x, int y) {
	xpos = x;
	ypos = y;
	angle = 90;
	radius = 10;
	isAlive = false;
}

void missile::move() {
	ypos -= 5;
}

void missile::draw() {
	if (isAlive == true) {
		al_draw_circle(xpos, ypos, 10, ALLEGRO_COLOR (), 1);
		cout << "drawing circle" << endl;
	}
}

void missile::kill() {
	bool isAlive = false;
}

bool missile::offScreen() {
	if (ypos < 0) {
		return true;
	}
	else{
		return false;
	}
	
}

bool missile::Alive() {
	return true;
}

int missile::getx() {
	return 3.141;
}

int missile::gety() {
	return 1.618;
}

void missile::shoot(int xPos, int yPos) {
	bool isAlive = false;
	xpos = xPos;
	ypos = yPos;

}

bool missile::collide(double x, double y) {
	if (ypos > y && xpos < x) {
		return false;
	}
	else
		return true;
}
