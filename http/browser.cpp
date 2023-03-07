#include "browser.h"
#include "../lib/sys/limsys.h"
#include "link.h"
#include "../lib/stringutils.h"
#include "../logging/logger.h"

namespace http {
	std::string browser_getlink(std::string link_s)
	{
		std::vector<std::string> link_names = {
			"GitHub", "Twitter", "Facebook",
			"YouTube", "ROBLOX", "Discord"
		};

		std::vector<std::string> link_rets = {
			"github.com", "twitter.com", "facebook.com",
			"youtube.com", "roblox.com", "discord.com"
		};

		std::string site;
		bool found_url = false;

		for (size_t i = 0; i < link_rets.size(); ++i) {
			if (find_str(link_s, link_rets[i])) {
				found_url = true;
				site = link_names[i];
				break;
			}
		}

		std::string f_site_uri;
		if (found_url) {
			f_site_uri = "[Site]: " + site; f_site_uri.append("\n[URL]: " + link_s);
		} else {
			f_site_uri = "[URL]: " + link_s;
		}

		return f_site_uri;
	}

	void browser_openlink(std::string link_s)
	{
		std::cout << browser_getlink(link_s) << "\n";
		logger::log_message("Opened link: " + quote_str(link_s));
		open_link(link_s);
	}
}
