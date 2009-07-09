#ifndef _paintown_fog_atmosphere_h
#define _paintown_fog_atmosphere_h

class Bitmap;

#include "atmosphere.h"
#include <vector>

struct Fog{
	Fog( int x, int y, unsigned int ang ):x(x),y(y),ang(ang){}
	int x, y;
	unsigned int ang;
};

class FogAtmosphere: public Atmosphere {
public:

	FogAtmosphere();	
	virtual ~FogAtmosphere();

	virtual void drawBackground(Bitmap * work, int x);
	virtual void drawForeground(Bitmap * work, int x);
	virtual void drawFront(Bitmap * work, int x);
	virtual void act();

protected:
	Bitmap * fog;
	std::vector< Fog * > fogs;
};

#endif
