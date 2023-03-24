#ifndef __STATE_SHELL_HPP_
#define __STATE_SHELL_HPP_

#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<cmath>
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

static void _preset_inputter(int _type)
{
	std::string s;
	std::string shellpath = "res/shell/customshell.txt";

	lsys::screenclear();

	if (_type >= 0) {
		if (_type == 1) {
			s = ">";
		} else {
			std::string c_inusr, c_inenv;
			std::stringstream usr, env;
			OptionBox ob_usr, ob_env;
			ui::set_formattedoptionbox(&ob_usr, 0, 0, "Input User String", "input");
			ui::set_formattedoptionbox(&ob_env, 0, 0, "Input ENV string", "input");
			
			if (_type <= 6) {
				ui::put_optionbox(&ob_usr);
				lstd::reads(c_inusr); usr << c_inusr;
				ui::put_optionbox(&ob_env);
				lstd::reads(c_inenv); env << c_inenv;
			}

			std::stringstream ss_shell;
			switch (_type) {
				case 2: ss_shell << env.str() << ":/" << usr.str() << " > "; break;
				case 3: ss_shell << env.str() << "@" << usr.str() << ":~$"; break;
				case 4: ss_shell << env.str() << "@" << usr.str() << ": $"; break;
				case 5: ss_shell << "[" << usr.str() << "@" << env.str() << " ~]$"; break;
				case 6: ss_shell << env.str() << ":~ "<<  usr.str() << "$"; break;
				default: ss_shell << ">"; break;
			}
			s = ss_shell.str();
		}

		if (lvfs::file_exists(shellpath)) {
			lvfs::override_file(shellpath, s);
		}
	}

	lsys::screenclear();
}

static void _open_presets() {
	OptionBox ob;
	ui::set_formattedoptionbox(&ob, 0, 0, "Select Preset", "input");
	TitleHeader th;
	ui::set_header(&th, 0, 0, "Configuration", "Shell", "Preset Selector");
	std::string s_in;

	lsys::screenclear();

	ui::put_header(&th); lstd::f_seq("newln", 2);

	std::vector<std::string> preset_options = {
		"Default Shell (>)",
		"Windows Command Line (env:/usr >)",
		"Linux, Ubuntu (env@usr:~$)",
		"Linux, Debian (env@usr: $)",
		"Linux, Arch ([usr@env ~]$)",
		"MacOS Terminal (env:~ usr$)"
	};

	push_options_list(preset_options);

	lstd::f_seq("newln");

	ui::put_optionbox(&ob);
	lstd::reads(s_in);
	if (!str_empty(s_in)) {
		_preset_inputter(std::stoi(s_in));
	}
}

static void _open_custom_input() {
	OptionBox ob;
	ui::set_formattedoptionbox(&ob, 0, 0, "Input Custom Shell", "input");
	TitleHeader th;
	ui::set_header(&th, 0, 0, "Configuration", "Shell", "Custom Configuration");
	std::string shell_in;

	lsys::screenclear();

	ui::put_header(&th); lstd::f_seq("newln", 2);

	ui::put_optionbox(&ob);
	lstd::reads(shell_in);

	std::string shell_path = "res/shell/customshell.txt";
	if (!str_empty(shell_in) && lvfs::file_exists(shell_path)) {
		lvfs::override_file(shell_path, shell_in);
	}

	lsys::screenclear();
}

static void _list_options()
{
	OptionBox ob;
	ui::set_formattedoptionbox(&ob, 0, 0, "Choose Option", "input");
	TitleHeader th;
	ui::set_header(&th, 0, 0, "Configuration", "Shell");
	std::string s_in;

	lsys::screenclear();

	ui::put_header(&th); lstd::f_seq("newln", 2);

	std::vector<std::string> options_list = {
		"Preset",
		"Custom"
	};

	push_options_list(options_list);

	lstd::f_seq("newln");

	ui::put_optionbox(&ob);
	lstd::reads(s_in);
	if (!str_empty(s_in)) {
		switch(std::stoi(s_in)) {
			case 1: _open_presets(); break;
			case 2: _open_custom_input(); break;
			default: _open_presets(); break;
		}
	}
}

namespace states {
	namespace shell {
		inline static void create() {
			TitleHeader th;
			ui::set_header(&th, 0, 0, "Configuration", "Shell");
			lsys::screenclear();
			ui::put_header(&th); lstd::f_seq("newln", 2);
			_list_options();
		}
	}
}

#endif // __STATE_SHELL_HPP_