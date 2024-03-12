#pragma once
class missiles{
private:
	double xpos;
	double ypos;
	double angle;
	double radius;
	bool isAlive;

public:
	void move();
	void draw();
	void kill();
	bool offScreen();
	bool isAlive();
	int getx();
	int gety();
	void shoot(int xpos, int ypos);
	bool collide(double xpos, double ypos);


};

