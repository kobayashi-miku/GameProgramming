#ifndef CPLAYER_H
#define CPLAYER_H

#include "CRectangle.h"

class CPlayer : public CRectangle {
public:
	static CPlayer*spInstance;
	int mFx, mFy;
	CPlayer();
	void Update();
	void Render();

	void Collision(CRectangle *i, CRectangle *y);
};

#endif