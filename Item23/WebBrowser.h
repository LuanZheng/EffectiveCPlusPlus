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
	void clearEverything(WebBrowser &wb);
}

#endif // !_WEBBROWSER_H_
