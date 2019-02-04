MR_define_entry(mercury__do_call_class_method_compact);
{
    MR_Word       type_class_info;
    MR_Integer    method_index;
    MR_Code       *dest;
    int           num_explicit_args;
    int           num_hidden_args;
    int           i;

    type_class_info = MR_r1;
    method_index = MR_r2;
    dest = MR_typeclass_info_class_method(type_class_info, method_index);
    num_hidden_args =
        MR_typeclass_info_num_extra_instance_args(type_class_info);
    num_explicit_args = MR_r3;

    MR_maybe_record_method_histogram(num_explicit_args, num_hidden_args);

    MR_save_registers();
    if (num_hidden_args < MR_CLASS_METHOD_CALL_INPUTS_COMPACT) {
        /* copy the explicit args to the left, from the left */
        for (i = 1; i <= num_explicit_args; i++) {
            MR_virtual_reg_assign(i + num_hidden_args,
                MR_virtual_reg_value(i + MR_CLASS_METHOD_CALL_INPUTS_COMPACT));
        }
    } else if (num_hidden_args > MR_CLASS_METHOD_CALL_INPUTS_COMPACT) {
        /* copy the explicit args to the right, from the right */
        for (i = num_explicit_args; i > 0 ; i--) {
            MR_virtual_reg_assign(i + num_hidden_args,
                MR_virtual_reg_value(i + MR_CLASS_METHOD_CALL_INPUTS_COMPACT));
        }
    } /* else the explicit args are in the right place */

    for (i = 1; i <= num_hidden_args; i++) {
        MR_virtual_reg_assign(i,
            MR_typeclass_info_extra_instance_arg(type_class_info, i));
    }
    MR_restore_registers();

    MR_tailcall(dest, MR_prof_ho_caller_proc);
}

MR_define_entry(mercury__do_call_class_method_0);
{
    MR_Word       type_class_info;
    MR_Integer    method_index;
    MR_Code       *dest;
    int           num_explicit_args;
    int           num_hidden_args;
    int           i;

    type_class_info = MR_r1;
    method_index = MR_r2;
    dest = MR_typeclass_info_class_method(type_class_info, method_index);
    num_hidden_args =
        MR_typeclass_info_num_extra_instance_args(type_class_info);

    MR_maybe_record_method_histogram(0, num_hidden_args);

    switch (num_hidden_args) {
        case 0:
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        case 1:
            MR_r1 = MR_typeclass_info_extra_instance_arg(type_class_info, 1);
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        default:
            /* fall through to the general case below */
            break;
    }

    MR_save_registers();

    for (i = 1; i <= num_hidden_args; i++) {
        MR_virtual_reg_assign(i,
            MR_typeclass_info_extra_instance_arg(type_class_info, i));
    }
    MR_restore_registers();

    MR_tailcall(dest, MR_prof_ho_caller_proc);
}

MR_define_entry(mercury__do_call_class_method_1);
{
    MR_Word       type_class_info;
    MR_Integer    method_index;
    MR_Code       *dest;
    int           num_explicit_args;
    int           num_hidden_args;
    int           i;
    MR_Word       arg1;

    type_class_info = MR_r1;
    method_index = MR_r2;
    dest = MR_typeclass_info_class_method(type_class_info, method_index);
    num_hidden_args =
        MR_typeclass_info_num_extra_instance_args(type_class_info);
    arg1 = MR_r3;

    MR_maybe_record_method_histogram(1, num_hidden_args);

    switch (num_hidden_args) {
        case 0:
            MR_r1 = arg1;
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        case 1:
            MR_r1 = MR_typeclass_info_extra_instance_arg(type_class_info, 1);
            MR_r2 = arg1;
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        default:
            /* fall through to the general case below */
            break;
    }

    MR_save_registers();
    MR_virtual_reg_assign(num_hidden_args + 1, arg1);

    for (i = 1; i <= num_hidden_args; i++) {
        MR_virtual_reg_assign(i,
            MR_typeclass_info_extra_instance_arg(type_class_info, i));
    }
    MR_restore_registers();

    MR_tailcall(dest, MR_prof_ho_caller_proc);
}

MR_define_entry(mercury__do_call_class_method_2);
{
    MR_Word       type_class_info;
    MR_Integer    method_index;
    MR_Code       *dest;
    int           num_explicit_args;
    int           num_hidden_args;
    int           i;
    MR_Word       arg1;
    MR_Word       arg2;

    type_class_info = MR_r1;
    method_index = MR_r2;
    dest = MR_typeclass_info_class_method(type_class_info, method_index);
    num_hidden_args =
        MR_typeclass_info_num_extra_instance_args(type_class_info);
    arg1 = MR_r3;
    arg2 = MR_r4;

    MR_maybe_record_method_histogram(2, num_hidden_args);

    switch (num_hidden_args) {
        case 0:
            MR_r1 = arg1;
            MR_r2 = arg2;
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        case 1:
            MR_r1 = MR_typeclass_info_extra_instance_arg(type_class_info, 1);
            MR_r2 = arg1;
            MR_r3 = arg2;
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        default:
            /* fall through to the general case below */
            break;
    }

    MR_save_registers();
    MR_virtual_reg_assign(num_hidden_args + 1, arg1);
    MR_virtual_reg_assign(num_hidden_args + 2, arg2);

    for (i = 1; i <= num_hidden_args; i++) {
        MR_virtual_reg_assign(i,
            MR_typeclass_info_extra_instance_arg(type_class_info, i));
    }
    MR_restore_registers();

    MR_tailcall(dest, MR_prof_ho_caller_proc);
}

MR_define_entry(mercury__do_call_class_method_3);
{
    MR_Word       type_class_info;
    MR_Integer    method_index;
    MR_Code       *dest;
    int           num_explicit_args;
    int           num_hidden_args;
    int           i;
    MR_Word       arg1;
    MR_Word       arg2;
    MR_Word       arg3;

    type_class_info = MR_r1;
    method_index = MR_r2;
    dest = MR_typeclass_info_class_method(type_class_info, method_index);
    num_hidden_args =
        MR_typeclass_info_num_extra_instance_args(type_class_info);
    arg1 = MR_r3;
    arg2 = MR_r4;
    arg3 = MR_r5;

    MR_maybe_record_method_histogram(3, num_hidden_args);

    switch (num_hidden_args) {
        case 0:
            MR_r1 = arg1;
            MR_r2 = arg2;
            MR_r3 = arg3;
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        case 1:
            MR_r1 = MR_typeclass_info_extra_instance_arg(type_class_info, 1);
            MR_r2 = arg1;
            MR_r3 = arg2;
            MR_r4 = arg3;
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        default:
            /* fall through to the general case below */
            break;
    }

    MR_save_registers();
    MR_virtual_reg_assign(num_hidden_args + 1, arg1);
    MR_virtual_reg_assign(num_hidden_args + 2, arg2);
    MR_virtual_reg_assign(num_hidden_args + 3, arg3);

    for (i = 1; i <= num_hidden_args; i++) {
        MR_virtual_reg_assign(i,
            MR_typeclass_info_extra_instance_arg(type_class_info, i));
    }
    MR_restore_registers();

    MR_tailcall(dest, MR_prof_ho_caller_proc);
}

MR_define_entry(mercury__do_call_class_method_4);
{
    MR_Word       type_class_info;
    MR_Integer    method_index;
    MR_Code       *dest;
    int           num_explicit_args;
    int           num_hidden_args;
    int           i;
    MR_Word       arg1;
    MR_Word       arg2;
    MR_Word       arg3;
    MR_Word       arg4;

    type_class_info = MR_r1;
    method_index = MR_r2;
    dest = MR_typeclass_info_class_method(type_class_info, method_index);
    num_hidden_args =
        MR_typeclass_info_num_extra_instance_args(type_class_info);
    arg1 = MR_r3;
    arg2 = MR_r4;
    arg3 = MR_r5;
    arg4 = MR_r6;

    MR_maybe_record_method_histogram(4, num_hidden_args);

    switch (num_hidden_args) {
        case 0:
            MR_r1 = arg1;
            MR_r2 = arg2;
            MR_r3 = arg3;
            MR_r4 = arg4;
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        case 1:
            MR_r1 = MR_typeclass_info_extra_instance_arg(type_class_info, 1);
            MR_r2 = arg1;
            MR_r3 = arg2;
            MR_r4 = arg3;
            MR_r5 = arg4;
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        default:
            /* fall through to the general case below */
            break;
    }

    MR_save_registers();
    MR_virtual_reg_assign(num_hidden_args + 1, arg1);
    MR_virtual_reg_assign(num_hidden_args + 2, arg2);
    MR_virtual_reg_assign(num_hidden_args + 3, arg3);
    MR_virtual_reg_assign(num_hidden_args + 4, arg4);

    for (i = 1; i <= num_hidden_args; i++) {
        MR_virtual_reg_assign(i,
            MR_typeclass_info_extra_instance_arg(type_class_info, i));
    }
    MR_restore_registers();

    MR_tailcall(dest, MR_prof_ho_caller_proc);
}

MR_define_entry(mercury__do_call_class_method_5);
{
    MR_Word       type_class_info;
    MR_Integer    method_index;
    MR_Code       *dest;
    int           num_explicit_args;
    int           num_hidden_args;
    int           i;
    MR_Word       arg1;
    MR_Word       arg2;
    MR_Word       arg3;
    MR_Word       arg4;
    MR_Word       arg5;

    type_class_info = MR_r1;
    method_index = MR_r2;
    dest = MR_typeclass_info_class_method(type_class_info, method_index);
    num_hidden_args =
        MR_typeclass_info_num_extra_instance_args(type_class_info);
    arg1 = MR_r3;
    arg2 = MR_r4;
    arg3 = MR_r5;
    arg4 = MR_r6;
    arg5 = MR_r7;

    MR_maybe_record_method_histogram(5, num_hidden_args);

    switch (num_hidden_args) {
        case 0:
            MR_r1 = arg1;
            MR_r2 = arg2;
            MR_r3 = arg3;
            MR_r4 = arg4;
            MR_r5 = arg5;
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        case 1:
            MR_r1 = MR_typeclass_info_extra_instance_arg(type_class_info, 1);
            MR_r2 = arg1;
            MR_r3 = arg2;
            MR_r4 = arg3;
            MR_r5 = arg4;
            MR_r6 = arg5;
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        default:
            /* fall through to the general case below */
            break;
    }

    MR_save_registers();
    MR_virtual_reg_assign(num_hidden_args + 1, arg1);
    MR_virtual_reg_assign(num_hidden_args + 2, arg2);
    MR_virtual_reg_assign(num_hidden_args + 3, arg3);
    MR_virtual_reg_assign(num_hidden_args + 4, arg4);
    MR_virtual_reg_assign(num_hidden_args + 5, arg5);

    for (i = 1; i <= num_hidden_args; i++) {
        MR_virtual_reg_assign(i,
            MR_typeclass_info_extra_instance_arg(type_class_info, i));
    }
    MR_restore_registers();

    MR_tailcall(dest, MR_prof_ho_caller_proc);
}

MR_define_entry(mercury__do_call_class_method_6);
{
    MR_Word       type_class_info;
    MR_Integer    method_index;
    MR_Code       *dest;
    int           num_explicit_args;
    int           num_hidden_args;
    int           i;
    MR_Word       arg1;
    MR_Word       arg2;
    MR_Word       arg3;
    MR_Word       arg4;
    MR_Word       arg5;
    MR_Word       arg6;

    type_class_info = MR_r1;
    method_index = MR_r2;
    dest = MR_typeclass_info_class_method(type_class_info, method_index);
    num_hidden_args =
        MR_typeclass_info_num_extra_instance_args(type_class_info);
    arg1 = MR_r3;
    arg2 = MR_r4;
    arg3 = MR_r5;
    arg4 = MR_r6;
    arg5 = MR_r7;
    arg6 = MR_r8;

    MR_maybe_record_method_histogram(6, num_hidden_args);

    switch (num_hidden_args) {
        case 0:
            MR_r1 = arg1;
            MR_r2 = arg2;
            MR_r3 = arg3;
            MR_r4 = arg4;
            MR_r5 = arg5;
            MR_r6 = arg6;
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        case 1:
            MR_r1 = MR_typeclass_info_extra_instance_arg(type_class_info, 1);
            MR_r2 = arg1;
            MR_r3 = arg2;
            MR_r4 = arg3;
            MR_r5 = arg4;
            MR_r6 = arg5;
            MR_r7 = arg6;
            MR_tailcall(dest, MR_prof_ho_caller_proc);
            break;

        default:
            /* fall through to the general case below */
            break;
    }

    MR_save_registers();
    MR_virtual_reg_assign(num_hidden_args + 1, arg1);
    MR_virtual_reg_assign(num_hidden_args + 2, arg2);
    MR_virtual_reg_assign(num_hidden_args + 3, arg3);
    MR_virtual_reg_assign(num_hidden_args + 4, arg4);
    MR_virtual_reg_assign(num_hidden_args + 5, arg5);
    MR_virtual_reg_assign(num_hidden_args + 6, arg6);

    for (i = 1; i <= num_hidden_args; i++) {
        MR_virtual_reg_assign(i,
            MR_typeclass_info_extra_instance_arg(type_class_info, i));
    }
    MR_restore_registers();

    MR_tailcall(dest, MR_prof_ho_caller_proc);
}

