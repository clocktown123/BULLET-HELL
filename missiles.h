#pragma once
class missile{
private:
	double xpos;
	double ypos;
	double angle;
	double radius;
	bool isAlive;

public:
	missile(int x, int y);
	
	//missile();
	void move();
	void draw();
	void kill();
	bool offScreen();
	bool Alive();
	int getx();
	int gety();
	void shoot(int xPos, int yPos);
	bool collide(double xpos, double ypos);


};

