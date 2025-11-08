package svutil;
	//C関数を呼び出す宣言（DPI-C）
	import "DPI-C" context function string get_env_value(input string key);
	//import "DPI-C" context function longint get_input_dpic();

	//SystemVerilog 内ラッパ関数
	function string get_env(input string name);
		return get_env_value(name);
	endfunction

	function longint get_input();
		//return get_input_dpic();
	endfunction
endpackage:svutil

package util;
	function string get_env(input string name);
		return svutil::get_env(name);
	endfunction

	function longint get_input();
		return svutil::get_input();
	endfunction
endpackage:util
