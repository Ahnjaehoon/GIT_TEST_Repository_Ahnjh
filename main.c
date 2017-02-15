main()
{

    for(;;)
    {
        while ( u8s_T_Main != big_SET ){} /* 10ms Polling Wait Time */
        u8s_T_Main = big_RESET; 
        TEK_func1();
        TEK_func2();
        TEK_func3();
        TEK_func_Temp1();
    }
    
    return;
}