interface aclint_if;

    logic msip;

    modport master(
        output msip
    );

    modport slave(
        input msip
    );
endinterface
