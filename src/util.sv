// ------------------------------
// svutil package (DPI-C 直ラッパ)
// ------------------------------
package svutil;

    // --- get_env の C関数 ---
    import "DPI-C" context function string get_env_value(input string key);

    function string get_env(input string name);
        return get_env_value(name);
    endfunction


    // --- get_input の C関数 ---
    import "DPI-C" context function longint get_input_dpic();

    function longint get_input();
        return get_input_dpic();
    endfunction

endpackage : svutil



// ------------------------------
// util package (svutil の高レベルラッパ)
// ------------------------------
package util;

    function string get_env(input string name);
        return svutil::get_env(name);
    endfunction

    function longint get_input();
        return svutil::get_input();
    endfunction

endpackage : util
