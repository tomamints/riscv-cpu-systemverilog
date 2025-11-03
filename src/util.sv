package svutil;
	//C関数を呼び出す宣言（DPI-C）
	import "DPI-C" context function string get_env_value(input string key);

	//SystemVerilog 内ラッパ関数
	function string get_env(input string name);
		return get_env_value(name);
	endfunction
endpackage:svutil

package util;
	function string get_env(input string name);
		return svutil::get_env(name);
	endfunction
endpackage:util
