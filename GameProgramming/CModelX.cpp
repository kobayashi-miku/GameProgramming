#include "glut.h"
#include <stdio.h>
#include "CModelX.h"

void CModelX::Load(char *file){
	//
	//ファイルサイズを取得する
	//
	FILE *fp;       //ファイルポインタ変数の作成
	fp = fopen(file, "rb"); //ファイルをオープンする
	if (fp == NULL){        //エラーチェック
		printf("fopen error:%s\n", file);
		return;
	}
	//ファイルの最後へ移動
	fseek(fp, OL, SEEK_END);
	//ファイルサイズの取得
	int size = ftell(fp);]
	//ファイルサイズ+１バイト分の領域を確保
	char *buf = mpPointer = new char[size + 1];
	//
	//ファイルから３Dモデルのデータを読み込む
	//
	//ファイルの先頭へ移動
	fseek(fp, OL, SEEK_SET);
	//確保した領域にファイルサイズ分データを読み込む
	fread(buf, size, 1, fp);
	//最後に\0を設定する(文字列の終端)
	buf[size] = '\0';
	fclose(fp);        //ファイルをクローズする


	SAFE_DELETE_ARRAY(buf);   //確保した領域を解放する
}