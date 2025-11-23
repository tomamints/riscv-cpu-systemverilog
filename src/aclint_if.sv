interface aclint_if;

    logic msip;
    logic mtip;

    modport master(
        output msip,
        output mtip
    );

    modport slave(
        input msip,
        input mtip
    );
endinterface
