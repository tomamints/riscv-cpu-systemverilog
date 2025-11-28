import eei::*;

interface aclint_if;

    logic msip;
    logic mtip;
    UInt64 mtime;
    logic setssip;

    modport master(
        output msip,
        output mtip,
        output mtime,
        output setssip
    );

    modport slave(
        input msip,
        input mtip,
        input mtime,
        input setssip
    );
endinterface
