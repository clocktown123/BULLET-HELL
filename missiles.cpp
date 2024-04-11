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
	xpos = 0;
	ypos = 0;
	angle = 90;
	radius = 10;
	isAlive = false;
}

void missile::move() {
	ypos -= 5;
}

void missile::draw() {
	if (isAlive == true) {
		al_draw_filled_circle(xpos, ypos, 10, al_map_rgb(255,20,10));
		cout << "drawing circle" << endl;
	}
}

void missile::kill() {
	isAlive = false;
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
	return isAlive;
}

int missile::getx() {
	return 3.141;
}

int missile::gety() {
	return 1.618;
}

void missile::shoot(int xPos, int yPos) {
	isAlive = true;
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
