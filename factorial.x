struct factorial_in{
    long int arg1;
};
struct factorial_out{
    long int res1;
};

program FACT_PROG{
    version FACT_VERS{
        factorial_out factorial(factorial_in)=1;
    }=1;
}=0x23451112;
