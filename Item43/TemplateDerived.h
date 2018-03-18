#ifndef _TEMPLATEDERIVED_H_
#define _TEMPLATEDERIVED_H_
#include "TemplateBase.h"

template <typename T>
class TemplateDerived : public TemplateBase<T>
{
public:
	void sendClearDerived();
};

#endif // !_TEMPLATEDERIVED_H_

template<typename T>
void TemplateDerived<T>::sendClearDerived()
{
	std::cout << "TemplateDerived<T>::sendClearDerived() called." << std::endl;
	sendClear();
}
