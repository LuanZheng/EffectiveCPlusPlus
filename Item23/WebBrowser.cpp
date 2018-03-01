#include "WebBrowser.h"
#include <iostream>

void WebBrowserStuff::WebBrowser::clearCache()
{
	std::cout << "WebBrowserStuff::WebBrowser::clearCache() called." << std::endl;
	m_Cache.clear();
}

void WebBrowserStuff::WebBrowser::clearHistory()
{
	std::cout << "WebBrowserStuff::WebBrowser::clearHistory() called." << std::endl;
	m_History.clear();
}

void WebBrowserStuff::WebBrowser::removeCookies()
{
	std::cout << "WebBrowserStuff::WebBrowser::removeCookies() called." << std::endl;
	m_Cookies.clear();
}

void WebBrowserStuff::clearEverything(WebBrowser& wb)
{
	std::cout << "WebBrowserStuff::clearEverything(WebBrowser& wb) called." << std::endl;
	wb.clearCache();
	wb.clearHistory();
	wb.removeCookies();
}