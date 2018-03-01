#include "WebBrowser.h"
#include "WebBrowserBookmarks.h"

int main()
{
	WebBrowserStuff::WebBrowser wb;
	WebBrowserStuff::clearEverything(wb);
	WebBrowserStuff::clearWebBrowserBookmarks(wb);
	return 0;
}