MR_define_entry(mercury__do_call_closure_compact);
{
    MR_Closure    *closure;
    int           num_explicit_args;
    int           num_hidden_rf_args;
    int           num_hidden_r_args;
#ifdef MR_BOXED_FLOAT
    int           num_explicit_f_args = 0;
    int           num_hidden_f_args;
#endif
    int           i;

    closure = (MR_Closure *) MR_r1;
    num_hidden_rf_args = closure->MR_closure_num_hidden_args_rf;
    num_hidden_r_args = MR_closure_num_hidden_r_args(closure);
#ifdef MR_BOXED_FLOAT
    num_hidden_f_args = MR_closure_num_hidden_f_args(closure);
#endif
#ifdef MR_BOXED_FLOAT
    num_explicit_args = (MR_r2 & 0xffff);
    num_explicit_f_args = (MR_r2 >> 16);
#else
    num_explicit_args = MR_r2;
#endif

    MR_maybe_record_closure_histogram(num_explicit_args, num_hidden_r_args);

    MR_save_registers();
    if (num_hidden_r_args < MR_HO_CALL_INPUTS_COMPACT) {
        /* copy the explicit args to the left, from the left */
        for (i = 1; i <= num_explicit_args; i++) {
            MR_virtual_reg_assign(i + num_hidden_r_args,
                MR_virtual_reg_value(i + MR_HO_CALL_INPUTS_COMPACT));
        }
    } else if (num_hidden_r_args > MR_HO_CALL_INPUTS_COMPACT) {
        /* copy the explicit args to the right, from the right */
        for (i = num_explicit_args; i > 0 ; i--) {
            MR_virtual_reg_assign(i + num_hidden_r_args,
                MR_virtual_reg_value(i + MR_HO_CALL_INPUTS_COMPACT));
        }
    } /* else the explicit args are in the right place */

    for (i = 1; i <= num_hidden_r_args; i++) {
        MR_virtual_reg_assign(i, closure->MR_closure_hidden_args(i));
    }
    MR_restore_registers();

#ifdef MR_BOXED_FLOAT
    if (num_hidden_f_args > 0) {
        /* copy the explicit args to the right, from the right */
        for (i = num_explicit_f_args; i > 0 ; i--) {
            MR_f(i + num_hidden_f_args) = MR_f(i);
        }
        for (i = 1; i <= num_hidden_f_args; i++) {
            MR_f(i) = MR_word_to_float(
                closure->MR_closure_hidden_args(
                    num_hidden_r_args + i));
        }
    }
#endif

    MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
}

MR_define_entry(mercury__do_call_closure_0);
{
    MR_Closure    *closure;
    int           num_explicit_args;
    int           num_hidden_rf_args;
    int           num_hidden_r_args;
#ifdef MR_BOXED_FLOAT
    int           num_explicit_f_args = 0;
    int           num_hidden_f_args;
#endif
    int           i;

    closure = (MR_Closure *) MR_r1;
    num_hidden_rf_args = closure->MR_closure_num_hidden_args_rf;
    num_hidden_r_args = MR_closure_num_hidden_r_args(closure);
#ifdef MR_BOXED_FLOAT
    num_hidden_f_args = MR_closure_num_hidden_f_args(closure);
#endif

    MR_maybe_record_closure_histogram(0, num_hidden_r_args);

    switch (num_hidden_rf_args) {
        case 0:
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 1:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 2:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 3:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 4:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = closure->MR_closure_hidden_args(4);
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 5:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = closure->MR_closure_hidden_args(4);
            MR_r5 = closure->MR_closure_hidden_args(5);
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        default:
            /* fall through to the general case below */
            break;
    }

    MR_save_registers();

    for (i = 1; i <= num_hidden_r_args; i++) {
        MR_virtual_reg_assign(i, closure->MR_closure_hidden_args(i));
    }
    MR_restore_registers();

#ifdef MR_BOXED_FLOAT
    if (num_hidden_f_args > 0) {
        /* copy the explicit args to the right, from the right */
        for (i = num_explicit_f_args; i > 0 ; i--) {
            MR_f(i + num_hidden_f_args) = MR_f(i);
        }
        for (i = 1; i <= num_hidden_f_args; i++) {
            MR_f(i) = MR_word_to_float(
                closure->MR_closure_hidden_args(
                    num_hidden_r_args + i));
        }
    }
#endif

    MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
}

MR_define_entry(mercury__do_call_closure_1);
{
    MR_Closure    *closure;
    int           num_explicit_args;
    int           num_hidden_rf_args;
    int           num_hidden_r_args;
#ifdef MR_BOXED_FLOAT
    int           num_explicit_f_args = 0;
    int           num_hidden_f_args;
#endif
    int           i;
    MR_Word       arg1;

    closure = (MR_Closure *) MR_r1;
    num_hidden_rf_args = closure->MR_closure_num_hidden_args_rf;
    num_hidden_r_args = MR_closure_num_hidden_r_args(closure);
#ifdef MR_BOXED_FLOAT
    num_hidden_f_args = MR_closure_num_hidden_f_args(closure);
#endif
    arg1 = MR_r2;

    MR_maybe_record_closure_histogram(1, num_hidden_r_args);

    switch (num_hidden_rf_args) {
        case 0:
            MR_r1 = arg1;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 1:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = arg1;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 2:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = arg1;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 3:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = arg1;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 4:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = closure->MR_closure_hidden_args(4);
            MR_r5 = arg1;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 5:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = closure->MR_closure_hidden_args(4);
            MR_r5 = closure->MR_closure_hidden_args(5);
            MR_r6 = arg1;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        default:
            /* fall through to the general case below */
            break;
    }

    MR_save_registers();
    MR_virtual_reg_assign(num_hidden_r_args + 1, arg1);

    for (i = 1; i <= num_hidden_r_args; i++) {
        MR_virtual_reg_assign(i, closure->MR_closure_hidden_args(i));
    }
    MR_restore_registers();

#ifdef MR_BOXED_FLOAT
    if (num_hidden_f_args > 0) {
        /* copy the explicit args to the right, from the right */
        for (i = num_explicit_f_args; i > 0 ; i--) {
            MR_f(i + num_hidden_f_args) = MR_f(i);
        }
        for (i = 1; i <= num_hidden_f_args; i++) {
            MR_f(i) = MR_word_to_float(
                closure->MR_closure_hidden_args(
                    num_hidden_r_args + i));
        }
    }
#endif

    MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
}

MR_define_entry(mercury__do_call_closure_2);
{
    MR_Closure    *closure;
    int           num_explicit_args;
    int           num_hidden_rf_args;
    int           num_hidden_r_args;
#ifdef MR_BOXED_FLOAT
    int           num_explicit_f_args = 0;
    int           num_hidden_f_args;
#endif
    int           i;
    MR_Word       arg1;
    MR_Word       arg2;

    closure = (MR_Closure *) MR_r1;
    num_hidden_rf_args = closure->MR_closure_num_hidden_args_rf;
    num_hidden_r_args = MR_closure_num_hidden_r_args(closure);
#ifdef MR_BOXED_FLOAT
    num_hidden_f_args = MR_closure_num_hidden_f_args(closure);
#endif
    arg1 = MR_r2;
    arg2 = MR_r3;

    MR_maybe_record_closure_histogram(2, num_hidden_r_args);

    switch (num_hidden_rf_args) {
        case 0:
            MR_r1 = arg1;
            MR_r2 = arg2;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 1:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = arg1;
            MR_r3 = arg2;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 2:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = arg1;
            MR_r4 = arg2;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 3:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = arg1;
            MR_r5 = arg2;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 4:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = closure->MR_closure_hidden_args(4);
            MR_r5 = arg1;
            MR_r6 = arg2;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 5:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = closure->MR_closure_hidden_args(4);
            MR_r5 = closure->MR_closure_hidden_args(5);
            MR_r6 = arg1;
            MR_r7 = arg2;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        default:
            /* fall through to the general case below */
            break;
    }

    MR_save_registers();
    MR_virtual_reg_assign(num_hidden_r_args + 1, arg1);
    MR_virtual_reg_assign(num_hidden_r_args + 2, arg2);

    for (i = 1; i <= num_hidden_r_args; i++) {
        MR_virtual_reg_assign(i, closure->MR_closure_hidden_args(i));
    }
    MR_restore_registers();

#ifdef MR_BOXED_FLOAT
    if (num_hidden_f_args > 0) {
        /* copy the explicit args to the right, from the right */
        for (i = num_explicit_f_args; i > 0 ; i--) {
            MR_f(i + num_hidden_f_args) = MR_f(i);
        }
        for (i = 1; i <= num_hidden_f_args; i++) {
            MR_f(i) = MR_word_to_float(
                closure->MR_closure_hidden_args(
                    num_hidden_r_args + i));
        }
    }
#endif

    MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
}

MR_define_entry(mercury__do_call_closure_3);
{
    MR_Closure    *closure;
    int           num_explicit_args;
    int           num_hidden_rf_args;
    int           num_hidden_r_args;
#ifdef MR_BOXED_FLOAT
    int           num_explicit_f_args = 0;
    int           num_hidden_f_args;
#endif
    int           i;
    MR_Word       arg1;
    MR_Word       arg2;
    MR_Word       arg3;

    closure = (MR_Closure *) MR_r1;
    num_hidden_rf_args = closure->MR_closure_num_hidden_args_rf;
    num_hidden_r_args = MR_closure_num_hidden_r_args(closure);
#ifdef MR_BOXED_FLOAT
    num_hidden_f_args = MR_closure_num_hidden_f_args(closure);
#endif
    arg1 = MR_r2;
    arg2 = MR_r3;
    arg3 = MR_r4;

    MR_maybe_record_closure_histogram(3, num_hidden_r_args);

    switch (num_hidden_rf_args) {
        case 0:
            MR_r1 = arg1;
            MR_r2 = arg2;
            MR_r3 = arg3;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 1:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = arg1;
            MR_r3 = arg2;
            MR_r4 = arg3;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 2:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = arg1;
            MR_r4 = arg2;
            MR_r5 = arg3;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 3:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = arg1;
            MR_r5 = arg2;
            MR_r6 = arg3;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 4:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = closure->MR_closure_hidden_args(4);
            MR_r5 = arg1;
            MR_r6 = arg2;
            MR_r7 = arg3;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 5:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = closure->MR_closure_hidden_args(4);
            MR_r5 = closure->MR_closure_hidden_args(5);
            MR_r6 = arg1;
            MR_r7 = arg2;
            MR_r8 = arg3;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        default:
            /* fall through to the general case below */
            break;
    }

    MR_save_registers();
    MR_virtual_reg_assign(num_hidden_r_args + 1, arg1);
    MR_virtual_reg_assign(num_hidden_r_args + 2, arg2);
    MR_virtual_reg_assign(num_hidden_r_args + 3, arg3);

    for (i = 1; i <= num_hidden_r_args; i++) {
        MR_virtual_reg_assign(i, closure->MR_closure_hidden_args(i));
    }
    MR_restore_registers();

#ifdef MR_BOXED_FLOAT
    if (num_hidden_f_args > 0) {
        /* copy the explicit args to the right, from the right */
        for (i = num_explicit_f_args; i > 0 ; i--) {
            MR_f(i + num_hidden_f_args) = MR_f(i);
        }
        for (i = 1; i <= num_hidden_f_args; i++) {
            MR_f(i) = MR_word_to_float(
                closure->MR_closure_hidden_args(
                    num_hidden_r_args + i));
        }
    }
#endif

    MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
}

MR_define_entry(mercury__do_call_closure_4);
{
    MR_Closure    *closure;
    int           num_explicit_args;
    int           num_hidden_rf_args;
    int           num_hidden_r_args;
#ifdef MR_BOXED_FLOAT
    int           num_explicit_f_args = 0;
    int           num_hidden_f_args;
#endif
    int           i;
    MR_Word       arg1;
    MR_Word       arg2;
    MR_Word       arg3;
    MR_Word       arg4;

    closure = (MR_Closure *) MR_r1;
    num_hidden_rf_args = closure->MR_closure_num_hidden_args_rf;
    num_hidden_r_args = MR_closure_num_hidden_r_args(closure);
#ifdef MR_BOXED_FLOAT
    num_hidden_f_args = MR_closure_num_hidden_f_args(closure);
#endif
    arg1 = MR_r2;
    arg2 = MR_r3;
    arg3 = MR_r4;
    arg4 = MR_r5;

    MR_maybe_record_closure_histogram(4, num_hidden_r_args);

    switch (num_hidden_rf_args) {
        case 0:
            MR_r1 = arg1;
            MR_r2 = arg2;
            MR_r3 = arg3;
            MR_r4 = arg4;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 1:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = arg1;
            MR_r3 = arg2;
            MR_r4 = arg3;
            MR_r5 = arg4;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 2:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = arg1;
            MR_r4 = arg2;
            MR_r5 = arg3;
            MR_r6 = arg4;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 3:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = arg1;
            MR_r5 = arg2;
            MR_r6 = arg3;
            MR_r7 = arg4;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 4:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = closure->MR_closure_hidden_args(4);
            MR_r5 = arg1;
            MR_r6 = arg2;
            MR_r7 = arg3;
            MR_r8 = arg4;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 5:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = closure->MR_closure_hidden_args(4);
            MR_r5 = closure->MR_closure_hidden_args(5);
            MR_r6 = arg1;
            MR_r7 = arg2;
            MR_r8 = arg3;
            MR_r9 = arg4;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        default:
            /* fall through to the general case below */
            break;
    }

    MR_save_registers();
    MR_virtual_reg_assign(num_hidden_r_args + 1, arg1);
    MR_virtual_reg_assign(num_hidden_r_args + 2, arg2);
    MR_virtual_reg_assign(num_hidden_r_args + 3, arg3);
    MR_virtual_reg_assign(num_hidden_r_args + 4, arg4);

    for (i = 1; i <= num_hidden_r_args; i++) {
        MR_virtual_reg_assign(i, closure->MR_closure_hidden_args(i));
    }
    MR_restore_registers();

#ifdef MR_BOXED_FLOAT
    if (num_hidden_f_args > 0) {
        /* copy the explicit args to the right, from the right */
        for (i = num_explicit_f_args; i > 0 ; i--) {
            MR_f(i + num_hidden_f_args) = MR_f(i);
        }
        for (i = 1; i <= num_hidden_f_args; i++) {
            MR_f(i) = MR_word_to_float(
                closure->MR_closure_hidden_args(
                    num_hidden_r_args + i));
        }
    }
#endif

    MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
}

MR_define_entry(mercury__do_call_closure_5);
{
    MR_Closure    *closure;
    int           num_explicit_args;
    int           num_hidden_rf_args;
    int           num_hidden_r_args;
#ifdef MR_BOXED_FLOAT
    int           num_explicit_f_args = 0;
    int           num_hidden_f_args;
#endif
    int           i;
    MR_Word       arg1;
    MR_Word       arg2;
    MR_Word       arg3;
    MR_Word       arg4;
    MR_Word       arg5;

    closure = (MR_Closure *) MR_r1;
    num_hidden_rf_args = closure->MR_closure_num_hidden_args_rf;
    num_hidden_r_args = MR_closure_num_hidden_r_args(closure);
#ifdef MR_BOXED_FLOAT
    num_hidden_f_args = MR_closure_num_hidden_f_args(closure);
#endif
    arg1 = MR_r2;
    arg2 = MR_r3;
    arg3 = MR_r4;
    arg4 = MR_r5;
    arg5 = MR_r6;

    MR_maybe_record_closure_histogram(5, num_hidden_r_args);

    switch (num_hidden_rf_args) {
        case 0:
            MR_r1 = arg1;
            MR_r2 = arg2;
            MR_r3 = arg3;
            MR_r4 = arg4;
            MR_r5 = arg5;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 1:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = arg1;
            MR_r3 = arg2;
            MR_r4 = arg3;
            MR_r5 = arg4;
            MR_r6 = arg5;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 2:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = arg1;
            MR_r4 = arg2;
            MR_r5 = arg3;
            MR_r6 = arg4;
            MR_r7 = arg5;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 3:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = arg1;
            MR_r5 = arg2;
            MR_r6 = arg3;
            MR_r7 = arg4;
            MR_r8 = arg5;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 4:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = closure->MR_closure_hidden_args(4);
            MR_r5 = arg1;
            MR_r6 = arg2;
            MR_r7 = arg3;
            MR_r8 = arg4;
            MR_r9 = arg5;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        case 5:
            MR_r1 = closure->MR_closure_hidden_args(1);
            MR_r2 = closure->MR_closure_hidden_args(2);
            MR_r3 = closure->MR_closure_hidden_args(3);
            MR_r4 = closure->MR_closure_hidden_args(4);
            MR_r5 = closure->MR_closure_hidden_args(5);
            MR_r6 = arg1;
            MR_r7 = arg2;
            MR_r8 = arg3;
            MR_r9 = arg4;
            MR_r10 = arg5;
            MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
            break;

        default:
            /* fall through to the general case below */
            break;
    }

    MR_save_registers();
    MR_virtual_reg_assign(num_hidden_r_args + 1, arg1);
    MR_virtual_reg_assign(num_hidden_r_args + 2, arg2);
    MR_virtual_reg_assign(num_hidden_r_args + 3, arg3);
    MR_virtual_reg_assign(num_hidden_r_args + 4, arg4);
    MR_virtual_reg_assign(num_hidden_r_args + 5, arg5);

    for (i = 1; i <= num_hidden_r_args; i++) {
        MR_virtual_reg_assign(i, closure->MR_closure_hidden_args(i));
    }
    MR_restore_registers();

#ifdef MR_BOXED_FLOAT
    if (num_hidden_f_args > 0) {
        /* copy the explicit args to the right, from the right */
        for (i = num_explicit_f_args; i > 0 ; i--) {
            MR_f(i + num_hidden_f_args) = MR_f(i);
        }
        for (i = 1; i <= num_hidden_f_args; i++) {
            MR_f(i) = MR_word_to_float(
                closure->MR_closure_hidden_args(
                    num_hidden_r_args + i));
        }
    }
#endif

    MR_tailcall(closure->MR_closure_code, MR_prof_ho_caller_proc);
}

