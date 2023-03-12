#ifndef __STATE_LOADER_HPP_
#define __STATE_LOADER_HPP_

#include<iostream>
#include<vector>
#include "../../addons/consoleui/titleheader.h"
#include "../../addons/consoleui/optionbox.h"
#include "../../addons/liboptions/option.h"
#include "../../addons/liboptions/optionutils.h"
#include "../../limstd/limio/limstdio.h"
#include "../../limstd/limio/limioutils.h"
#include "../../lib/sys/limbuiltin.h"
#include "../../lib/vectorutils.h"
#include "../../fs/file.h"
#include "../../fs/fileutils.h"

static void _toggle_option(std::string _o)
{
	std::string path_pref = "res/config/";
	if (!str_empty(_o)) {
		std::string s;
		if (compare_str(_o, "loader-skip"))
			s = "Skip Loader";

		lsys::screenclear();

		TitleHeader th;
		set_header(&th, "Configuration", "Loader", "Prompt");
		put_header(&th); lstd::f_seq("newln", 2);
		
		std::vector<std::string> vs = { "Toggle ", s, "?" };

		OptionBox ob;
		set_formattedoptionbox(&ob, ret_vector_s(vs), "default");

		put_optionbox(&ob);

		std::string o_in;
		lstd::reads(o_in);
		if (compare_str(o_in, "y") || compare_str(o_in, "Y")) {
			if (compare_str(_o, "loader-skip")) {
				std::string f = path_pref + "loader.txt";
				if (lvfs::file_exists(f)) {
					if (compare_str(lvfs::read_file(f), "skip")) {
						lvfs::override_file(f, "noskip");
					} else if (compare_str(lvfs::read_file(f), "noskip")) {
						lvfs::override_file(f, "skip");
					}
				}
			}
		} else { std::cout << "\0"; }

	}
	lsys::screenclear();
}

namespace states {
	namespace loader {
		inline static void create() {
			OptionBox ob;
			set_formattedoptionbox(&ob, "Select option", "input");
			TitleHeader th;
			set_header(&th, "Configuration", "Loader");
			std::string loader_path_skip = "res/config/loader.txt";
			std::string skip_s = lvfs::read_file(loader_path_skip);

			lsys::screenclear();

			put_header(&th); lstd::f_seq("newln", 2);

			std::vector<std::string> options = {
				"Skip Loader (Set to " + skip_s + ")",
			};

			push_options_list(options);

			lstd::f_seq("newln");

			std::string o_in;
			put_optionbox(&ob);
			lstd::reads(o_in);
			if (!str_empty(o_in)) {
				switch(std::stoi(o_in)) {
					case 1: _toggle_option("loader-skip"); break;
					default: std::cout << "\0"; break;
				}
			}
		}
	}
}

#endif // __STATE_LOADER_HPP_