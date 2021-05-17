#include "glut.h"
#include <stdio.h>
#include "CModelX.h"

void CModelX::Load(char *file){
	//
	//�t�@�C���T�C�Y���擾����
	//
	FILE *fp;       //�t�@�C���|�C���^�ϐ��̍쐬
	fp = fopen(file, "rb"); //�t�@�C�����I�[�v������
	if (fp == NULL){        //�G���[�`�F�b�N
		printf("fopen error:%s\n", file);
		return;
	}
	//�t�@�C���̍Ō�ֈړ�
	fseek(fp, OL, SEEK_END);
	//�t�@�C���T�C�Y�̎擾
	int size = ftell(fp);]
	//�t�@�C���T�C�Y+�P�o�C�g���̗̈���m��
	char *buf = mpPointer = new char[size + 1];
	//
	//�t�@�C������RD���f���̃f�[�^��ǂݍ���
	//
	//�t�@�C���̐擪�ֈړ�
	fseek(fp, OL, SEEK_SET);
	//�m�ۂ����̈�Ƀt�@�C���T�C�Y���f�[�^��ǂݍ���
	fread(buf, size, 1, fp);
	//�Ō��\0��ݒ肷��(������̏I�[)
	buf[size] = '\0';
	fclose(fp);        //�t�@�C�����N���[�Y����


	SAFE_DELETE_ARRAY(buf);   //�m�ۂ����̈���������
}