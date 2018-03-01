#include "ABEntry.h"

//�ù��캯�����õ�Ϊ��ֵ���������ǳ�ʼ������
//ABEntry::ABEntry(const std::string& name, const std::string& address, const std::list<std::string>& thePhones)
//{
//	m_Name = name;
//	m_Address = address;
//	m_ThePhones = thePhones;
//	m_NumTimesConsulted = 0;
//}

//�ù��캯����д���ǳ�ʼ����Ч��ͨ����
//������ʼ����˳��Ϊ��������˳��ע�ⲻ��������д��˳�򣬶���ͷ�ļ�����������˳��
ABEntry::ABEntry(const std::string& name, const std::string& address, const std::list<std::string>& thePhones)
	: m_Name(name),
	  m_Address(address),
	  m_ThePhones(thePhones),
	  m_NumTimesConsulted(0),
	  m_Const(-1)                     //��ȷ������Ϊconst��Ա������ʼ����ҲӦ�ó�ʼ��
{
		  //m_Const = -1;             //���󣬲��ܶԳ�����ֵ
}