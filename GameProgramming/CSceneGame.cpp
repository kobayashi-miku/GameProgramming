#include "CSceneGame.h"
//
#include "CCamera.h"
//
#include "CUtil.h"
#include"CRes.h"

#include "glut.h"
#include <Windows.h>

<<<<<<< HEAD
	//�e�L�X�g�t�H���g�̓ǂݍ��݂Ɛݒ�
/*	CText::mFont.Load("FontG.tga");
	CText::mFont.SetRowCol(1, 4096 / 64);*/
}
=======
CMatrix Matrix;
>>>>>>> 2446cf0dce4570c7c681d5bcb45ea81e16039bda

CSceneGame::~CSceneGame() {

}

void CSceneGame::Init() {
	//3D���f���t�@�C���̓ǂݍ���
	CRes::sModelX.Load(MODEL_FILE);
	//�e�L�X�g�t�H���g�̓ǂݍ��݂Ɛݒ�
	mFont.LoadTexture("FontG.tga", 1, 4096 / 64);

}

<<<<<<< HEAD
	glLoadIdentity();//�s��i�ݒ�j��������
	//2D�̓��e�͈͂�ݒ�
	gluOrtho2D(-400, 400, -300, 300);
	CText::DrawString("(-380,280)", -380, 280, 16, 16);
	/*
=======

void CSceneGame::Update() {
>>>>>>> 2446cf0dce4570c7c681d5bcb45ea81e16039bda
	//�J�����̃p�����[�^���쐬����
	CVector e, c, u;//���_�A�����_�A�����
	//���_�����߂�
	e = CVector(1.0f, 2.0f, 10.0f);
	//�����_�����߂�
	c = CVector();
	//����������߂�
	u = CVector(0.0f, 1.0f, 0.0f);
	//�J�����̐ݒ�
	Camera3D(e.mX, e.mY, e.mZ,
		c.mX, c.mY, c.mZ, u.mX, u.mY, u.mZ);

	//X��+��]
	if (GetKeyState('K') & 0x8000){
		Matrix = Matrix * CMatrix().RotateX(1);
	}
	//Y��+��]
	if (GetKeyState('L') & 0x8000){
		Matrix = Matrix * CMatrix().RotateY(1);
	}

	//�s��ݒ�
	glMultMatrixf(Matrix.mF);
	//���f���`��
	CRes::sModelX.Render();

	//�J�����N���X�̐ݒ�
	Camera.Set(e, c, u);
	Camera.Render();


	//2D�`��J�n
	CUtil::Start2D(0, 800, 0, 600);

	mFont.DrawString("3D PROGRAMMING", 20, 20, 10, 12);

	//2D�̕`��I��
	CUtil::End2D();

	return;*/
}

