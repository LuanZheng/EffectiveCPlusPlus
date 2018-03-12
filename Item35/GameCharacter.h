#ifndef _GAMECHARACTER_H_
#define _GAMECHARACTER_H_

class GameCharacter
{
public:
	//virtual int healthValue() const;   //虚函数是一种非常正常的做法，不同人物继承GameCharacter后，会有各自特点的同名方法
	int healthValue() const;
private:
	virtual int doHealthValue() const;
};


#endif // !_GAMECHARACTER_H_

