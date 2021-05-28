#include "CPlayer.h"
#include "CKey.h"

//extern�F���̃\�[�X�t�@�C���̊O���ϐ��ɃA�N�Z�X����錾
//extern CTexture Texture;
CTexture Texture;

CPlayer::CPlayer()
: mFx(1.0f), mFy(0.0f)
{
	mTag = EPLAYER;
	spInstance = this;
}
CPlayer*CPlayer::spInstance = 0;

void CPlayer::Update() {

	//static���\�b�h�͂ǂ�����ł��Ăׂ�
	if (CKey::Push('A')) {
		x -= 3;
		mFx = -1;
		mFy = 0;

	}
	if (CKey::Push('D')) {
		x += 3;
		mFx = 1;
		mFy = 0;

	}
	if (CKey::Push('W')) {
		y += 3;
		mFx = 0;
		mFy = 1;
		if (y + h > 300) {
			y = 300 - h;
		}
	}
	if (CKey::Push('S')) {
		y -= 3;
		mFx = 0;
		mFy = -1;
		if (y - h < -300) {
			y = -300 + h;
		}
	}	
}

void CPlayer::Render() {
	CRectangle::Render(Texture, 146 - 16, 146 + 16, 146 + 16, 146 - 16);
}

void CPlayer::Collision(CRectangle *ri, CRectangle *ry) {
	if (ry->mTag == EBLOCK) {
		int mx, my;
		if (CRectangle::Collision(ry, &mx, &my)) {
			//abs(x) x�̐�Βl�����߂�
			//�ړ��ʂ����Ȃ����������ړ�������
			if (abs(mx) < abs(my)) {
				//Rect��x�����ړ�����
				x += mx;
			}
			else {
				//Rect��y�����ړ�����
				y += my;
			}
		}
	}
}
