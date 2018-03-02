#ifndef _WEBBROWSER_H_
#define _WEBBROWSER_H_

#include <string>

namespace WebBrowserStuff
{
	class WebBrowser
	{
	public:
		void clearCache();
		void clearHistory();
		void removeCookies();
	private:
		std::string m_Cache;
		std::string m_History;
		std::string m_Cookies;
	};
	void clearEverything(WebBrowser &wb);       //这里的参数不可写成const WebBrowser &wb, 因为
	                                            //1)cleareverything要求调用的方法clearCache(),clearHistory(),removeCookies()均需要WebBroser对象，而非const WebBrowser对象
	                                            //2)该方法会改变wb内的数据
}

#endif // !_WEBBROWSER_H_
