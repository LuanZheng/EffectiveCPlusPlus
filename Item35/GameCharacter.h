#ifndef _GAMECHARACTER_H_
#define _GAMECHARACTER_H_

class GameCharacter
{
public:
	//virtual int healthValue() const;   //�麯����һ�ַǳ���������������ͬ����̳�GameCharacter�󣬻��и����ص��ͬ������
	int healthValue() const;
private:
	virtual int doHealthValue() const;
};


#endif // !_GAMECHARACTER_H_

