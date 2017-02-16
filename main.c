main()
{

    for(;;)
    {
        while ( u8s_T_Main != big_SET ){} /* 10ms Polling Wait Time */
        u8s_T_Main = big_RESET; 
        /* Ahnjh Area *******************************/
        TEK_func1();
        TEK_func2();
        TEK_func3();

        TEK_func_master1();
        TEK_func_master2();
        TEK_func_master3();
        TEK_func_master4();

        TEK_func_Temp1();
        TEK_func_Temp2();
        TEK_func_Temp3();
        /*********************************************/
        
        /* USER2 Area *******************************/
        /*********************************************/
    }
    
    return;
}