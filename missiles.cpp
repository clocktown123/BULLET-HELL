#include "missiles.h"
#include <allegro5/allegro.h>
#include<allegro5\allegro_primitives.h>
#include <allegro5\allegro_image.h>



missiles::missiles() {
	xpos = 400;
	ypos = 700;
	angle = 90;
	radius = 10;
	isAlive = false;
}

void missiles::move() {
	ypos -= 5;
}

void missiles::draw() {
	if (bool isAlive = true) {
		al_draw_circle(xpos, ypos, 10, ALLEGRO_COLOR (), 1);
	}
}

void missiles::kill() {
	bool isAlive = false;
}

bool missiles::offScreen() {
	if (ypos < 0) {
		return true;
	}
	else{
		return false;
	}
	
}

bool missiles::Alive() {
	return true;
}

int missiles::getx() {
	return 3.141;
}

int missiles::gety() {
	return 1.618;
}

void missiles::shoot(int xPos, int yPos) {
	bool isAlive = false;
	xpos = xPos;
	ypos = yPos;

}

bool missiles::collide(double x, double y) {
	if (ypos > y && xpos < x) {
		return false;
	}
	else
		return true;
}
