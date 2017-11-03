#pragma once
#ifndef __SHIP_H__
#define __SHIP_H__

#include "sprite.h"
#include "resource.h"

class CShip : public CSprite
{
public:
	CShip() {}
	~CShip() {}

	void Process(float _fDeltaTick){}

private:

};
#endif // !__SHIP_H__