//ע�⣬��ģ��̳з���ʱ��������ͬʱ���û�����������ͷ�ļ����ᷢ���ض�������

//#include "TemplateBase.h"
#include "TemplateDerived.h"
#include "NormalDerive.h"

int main()
{
	TemplateBase<char> tb;
	tb.sendClear();

	TemplateDerived<double> td1;
	td1.sendClearDerived();

	//TemplateDerived<std::string> td2;        //�������뱨�����õ��ػ��汾���Żᱨ�����
	//td2.sendClearDerived();

	//double d = 5.2;
	//int i = 1;
	//int* pi = &i;
	//double* pd = &d;
	//std::cout << *pd << std::endl;
	//std::cout << *pi << std::endl;
	//pi = (int *)pd;
	//std::cout << *pd << std::endl;
	//std::cout << *pi << std::endl;

	NormalBase* nb = new NormalBase();
	NormalDerive* nd = new NormalDerive();

	TemplateBase<NormalBase> tbnb;
	TemplateBase<NormalDerive> tbnd;

	//tbnb = tbnd;�ᱨ����Ϊģ������ֻ��Ķ���֮�䣬������B-D��ϵ����Ҫ�ṩ���Ϳ������캯���������һ����
	//���ṩ�˷��Ϳ������캯��֮�󣬿������κ����͵Ķ�������໥copy�ˣ����ǲ���ȫ�ģ����������double*,int*������
	//�������Ҫ�����ó�Ա��ʼ���У�ʹ��ֻ���ܹ�������ʽת�����͵����Ͳſ���ת��,��������tbnd = tbnb;�ֻᱨ���ˣ�
	//��Ϊ�޷��ӡ�NormalBase *��ת��Ϊ��NormalDerive *��,û����������ʽ����ת������,ʵ����ҲȷʵӦ�ñ���ֹ��
	tbnb = tbnd;      //����÷������캯��
	//tbnd = tbnb; //�����´�������ʽ������Ҫ��
	//e:\gitrepository\effectivecplusplus\effectivecplusplus\item43\templatebase.h(55): error C2440: ����ʼ����: �޷��ӡ�NormalBase *��ת��Ϊ��NormalDerive *��

	TemplateBase<NormalBase> tbnb2;

	std::cout << std::endl;

	tbnb = tbnb2;      //������ͬ��������÷������캯��
	return 0;
}