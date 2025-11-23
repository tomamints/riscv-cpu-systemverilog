import eei::*;

interface aclint_if;

    logic msip;
    logic mtip;
    UInt64 mtime;

    modport master(
        output msip,
        output mtip,
        output mtime
    );

    modport slave(
        input msip,
        input mtip,
        input mtime
    );
endinterface
