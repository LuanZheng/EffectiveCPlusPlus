#include "GameCharacter.h"
#include <iostream>

//��ͨ��Ա�����������಻���¶���ú���
int GameCharacter::healthValue() const
{
	//��һЩ��ǰ����
	int retVal = doHealthValue();    //�������Ĺ����������麯��
	//��һЩ�º���
	return retVal;
}

int GameCharacter::doHealthValue() const
{
	std::cout << "GameCharacter::doHealthValue() called." << std::endl;
	return 0;
}