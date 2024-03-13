#include "missiles.h"
#include "main.cpp"


missiles::missiles() {
	xpos = 400;
	ypos = 700;
	
}

void missiles::move() {
	ypos -= 5;
}

void missiles::draw() {
	if (bool (isAlive) == true) {
		al_draw_circle(xpos, ypos, 10, ALLEGRO_COLOR (), 1);
	}
}

void missiles::kill() {
	bool (isAlive) = false;
}

bool missiles::offScreen() {
	if (ypos < 0) {
		return true;
	}
	else{
		return false;
	}
	
}

bool missiles::isAlive() {

}

int missiles::getx() {

}

int missiles::gety() {

}

void missiles::shoot(int xpos, int ypos) {


}

bool missiles::collide(double xpos, double ypos) {

}
