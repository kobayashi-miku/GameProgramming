#include "CSceneGame.h"
//
#include "CCamera.h"
//
#include "CUtil.h"
#include"CRes.h"

#include "CKey.h"

<<<<<<< HEAD
	//テキストフォントの読み込みと設定
/*	CText::mFont.Load("FontG.tga");
	CText::mFont.SetRowCol(1, 4096 / 64);*/
}
=======
CMatrix Matrix;
>>>>>>> 2446cf0dce4570c7c681d5bcb45ea81e16039bda

CSceneGame::~CSceneGame() {

}

void CSceneGame::Init() {
	//3Dモデルファイルの読み込み
	CRes::sModelX.Load(MODEL_FILE);
	//テキストフォントの読み込みと設定
	mFont.LoadTexture("FontG.tga", 1, 4096 / 64);

}

<<<<<<< HEAD
	glLoadIdentity();//行列（設定）を初期化
	//2Dの投影範囲を設定
	gluOrtho2D(-400, 400, -300, 300);
	CText::DrawString("(-380,280)", -380, 280, 16, 16);
	/*
=======

void CSceneGame::Update() {
>>>>>>> 2446cf0dce4570c7c681d5bcb45ea81e16039bda
	//カメラのパラメータを作成する
	CVector e, c, u;//視点、注視点、上方向
	//視点を求める
	e = CVector(1.0f, 2.0f, 10.0f);
	//注視点を求める
	c = CVector();
	//上方向を求める
	u = CVector(0.0f, 1.0f, 0.0f);

	//カメラクラスの設定
	Camera.Set(e, c, u);
	Camera.Render();

	//X軸+回転
	if (CKey::Push('K')){
		Matrix = Matrix * CMatrix().RotateX(1);
	}
	//Y軸+回転
	if (CKey::Push('L')){
		Matrix = Matrix * CMatrix().RotateY(1);
	}
	//X軸-回転
	if (CKey::Push('I')){
		Matrix = Matrix * CMatrix().RotateX(-1);
	}
	//Y軸-回転
	if (CKey::Push('J')){
		Matrix = Matrix * CMatrix().RotateY(-1);
	}

	//行列設定
	glMultMatrixf(Matrix.mF);
	//モデル描画
	CRes::sModelX.Render();

	//2D描画開始
	CUtil::Start2D(0, 800, 0, 600);

	mFont.DrawString("3D PROGRAMMING", 20, 20, 10, 12);

	//2Dの描画終了
	CUtil::End2D();

	return;*/
}

