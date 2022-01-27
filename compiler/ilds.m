%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1999-2006, 2010-2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: ilds.m.
% Main author: trd.
%
% ilds - The IL instruction set.
%
% The IL instruction set is documented in the Microsoft .NET Framework SDK.
%
% See
%   <http://msdn.microsoft.com/net/>
% for more info, including a downloadable (Windows only) version of the
% SDK available here:
%   <http://msdn.microsoft.com/downloads/default.asp?
%       URL=/code/sample.asp?url=/msdn-files/027/000/976/msdncompositedoc.xml>
%
%-----------------------------------------------------------------------------%

:- module ml_backend.ilds.
:- interface.

:- import_module assoc_list.
:- import_module bool.
:- import_module list.
:- import_module maybe.

%-----------------------------------------------------------------------------%

    % Returns the maximum stack usage of a list of IL instructions.
    %
:- func calculate_max_stack(list(ilds.instr)) = int.

    % A method parameter.
    %
:- type il_method_param
    --->    il_method_param(
                ilmp_type     :: il_type,
                              % The type of the parameter.
                ilmp_maybe_id :: maybe(ilds.id)
                              % The name of the parameter (if any).
            ).

    % A method signature.
    %
:- type signature
    --->    signature(
                call_conv,  % calling convention
                ret_type,   % return type
                list(il_method_param) % parameters
            ).

    % A method reference.
    %
:- type methodref
    --->    methoddef(
                call_conv,
                ret_type,
                class_member_name,
                list(il_type)
            )
%   ;       methodref(
%               call_conv,
%               ret_type,
%               class_name,
%               list(il_type)
%           )
    ;       local_method(
                call_conv,
                ret_type,
                member_name,
                list(il_type)
            ).

    % A field reference.
    %
:- type fieldref
    --->    fieldref(il_type, class_member_name).

%-----------------------------------------------------------------------------%

    % If an assembly name is empty it is a reference to a local type
    % in the same assembly.
    %
:- type structured_name
    --->    structured_name(
                assembly_name,          % The name of the assembly.

                namespace_qual_name,    % The name of the top-level class
                                        % (i.e. the namespace name
                                        % and the outermost class name),
                                        % or just the namespace name,
                                        % if this structured_name is
                                        % a namespace.

                nested_class_name       % The name of the nested class
                                        % within the top-level class,
                                        % or the empty list if it is
                                        % not a nested class.
            ).

    % If we are referencing a sub-module, then we need to record two names.
    % One is the sub-module name, which is used for references from the parent
    % module, and the other is the assembly name for when the name is
    % referenced from anywhere else.
    %
:- type assembly_name
    --->    module(
                il_module_name              :: ilds.id,
                containing_assembly_name    :: ilds.id

            )
    ;       assembly(
                ilds.id
            ).

:- type namespace_qual_name == list(ilds.id).
:- type nested_class_name == list(ilds.id).

    % An assembly- and namespace-qualified class name is a structured name.
    % E.g. the ILASM name [Foo]Bar1.Bar2.Baz1/Baz2/Quux is
    % structured_name("Foo", ["Bar1", "Bar2", "Baz1"], ["Baz2", "Quux"]).
    % "[Foo]" is the assembly qualifier,
    % "Bar1.Bar2." is the namespace qualiifer,
    % "Baz1/Baz2/" is a class qualifier,
    % and "Quux" is the name of the nested class.
    %
:- type class_name == structured_name.

    % A assembly-qualified namespace name is a structured name.
    % e.g. the ILASM name [Foo]Bar1.Bar2 is
    % structured_name("Foo", ["Bar1", "Bar2"], []).
    %
:- type namespace_name == structured_name.

    % A member of a class.
    %
:- type class_member_name
    --->    class_member_name(
                class_name,
                member_name
            ).

    % The name of a member (method, field, event or property).
    %
:- type member_name
    --->    ctor            % Constructor (initializes instances
                            % of this class).

    ;       cctor           % Class constructor (initializes
                            % non-instance fields).

    ;       id(ilds.id).    % Ordinary method or field name.

    % Calling conventions.
    %
:- type call_conv
    --->    call_conv(
                bool,          % Is this an instance method call?
                il_call_kind   % What kind of call is it?
            ).

:- type il_call_kind
    --->    default
    ;       vararg
    ;       unmanaged_cdecl
    ;       unmanaged_stdcall
    ;       unmanaged_thiscall
    ;       unmanaged_fastcall.

    % XXX types have changed significantly in the spec since this
    % was written, we should update this section (indeed, we should
    % update all of ilds.m and ilasm.m).

    % Return types.
    %
:- type ret_type
    --->    void
    ;       simple_type(simple_type).

:- type il_type
    --->    il_type(list(ilds.type_modifier), simple_type).

:- type ilds.type_modifier
    --->    const
    ;       readonly
    ;       volatile.

:- type simple_type
    --->    int8
    ;       int16
    ;       int32
    ;       int64
    ;       uint8
    ;       uint16
    ;       uint32
    ;       uint64
    ;       native_int
    ;       native_uint     % Also used for unmanaged pointers.
    ;       float32
    ;       float64
    ;       native_float
    ;       bool
    ;       char            % A unicode character.
    ;       object
    ;       string
    ;       refany          % A reference to value with an attached type.
    ;       class(class_name)
    ;       valuetype(class_name)
    ;       interface(class_name)
    ;       '[]'(il_type, bounds)       % An array.
    ;       '&'(il_type)                % A managed pointer.
    ;       '*'(il_type).               % A transient pointer (could become
                                        % managed or unmanaged depending on
                                        % usage).

:- type bounds == list(bound).

:- type bound
    --->    upper(int)              % 0 <= index <= int
    ;       lower(int)              % int <= index <= maxint
    ;       between(int, int).      % int <= index <= int2

    % An ID must start with "<", "_" or an alphabetic character.
    % This initial character can be followed by any number of alphabetic
    % characters, decimal digits, ">", "<", or "_".
    %
:- type ilds.id == string.

    % XXX Should really limit this, but we don't really support
    % the alignment instruction just yet.
:- type alignment == int.

:- type constant
    --->    i(int)
    ;       f(float).

:- type overflow
    --->    checkoverflow
    ;       nocheckoverflow.

:- type signed
    --->    signed
    ;       unsigned.  % or unordered for comparisons

    % A variable (local or argument) can be referred to by name or index
    %
:- type variable
    --->    name(ilds.id)
    ;       index(index).

:- type index == int.

:- type target
    --->    offset_target(int)
    ;       label_target(label).

    % Local variables, they all have names.
    % This should probably be the same as params.
    %
:- type locals == assoc_list(ilds.id, il_type).

    % Blocks can be just scope for locals, can surround a block of
    % handwritten code, or can introduce try or catch code.
    %
:- type blocktype
    --->    bt_scope(locals)
            % scope just introduces a scope for local variables
    ;       bt_try
    ;       bt_catch(class_name).

    % Each block has a unique identifier (mainly so you can tell which
    % ones match up without counting them).
    % XXX Should probably use counter type instead.
:- type blockid == int.

:- type instr
    % NOT INSTRUCTIONS AT ALL
    % These are just added to the IL instructions to make it easy to
    % generate instructions and include debugging information.

    --->    comment(string)
    ;       label(label)                        % a label
    ;       start_block(blocktype, blockid)     % new block
    ;       end_block(blocktype, blockid)       % end block
    ;       context(string, int)                % context of following code
                                                % (filename, line)

    ;       il_asm_code(string, int)            % a slab of handwritten
                                                % IL assembler (with
                                                % max stack size)

    % BASE INSTRUCTIONS

    ;       add(overflow, signed)   % add numeric values
    ;       bitwise_and             % bitwise and
    ;       arglist                 % return arglist handle for current meth
    ;       beq(target)             % branch to target if equal
    ;       bge(signed, target)     % branch to target if >=
    ;       bgt(signed, target)     % branch to target if >
    ;       ble(signed, target)     % branch to target if <=
    ;       blt(signed, target)     % branch to target if <
    ;       bne(signed, target)     % branch to target if !=
    ;       br(target)              % branch to target
    ;       break                   % inform debugger breakpoint reached
    ;       brfalse(target)         % branch to target if value is zero
    ;       brtrue(target)          % branch to target if value is non-zero
    ;       call(methodref)         % call method described by methodref
    ;       calli(signature)        % call method indicated on stack using
                                    % args described by the signature
    ;       ceq                     % compare equal: push 1 if value1
                                    % equals value2
    ;       cgt(signed)             % compare >: push 1 if value1 > value2
    ;       ckfinite                % throw ArithmeticException if value
                                    % not finite
    ;       clt(signed)             % compare <: push 1 if value1 < value2
    ;       conv(simple_type)       % convert value to data type
    ;       cpblk                   % copy data from memory to memory
    ;       div(signed)             % divide values
    ;       dup                     % duplicate the value on the top
                                    % of the stack
    ;       endfilter               % end filter clause of SEH exception
                                    % handling
    ;       endfinally              % end finally clause of an exception block
    ;       initblk                 % initialize a block
    ;       jmp(methodref)          % jump to a specified method
    ;       ldarg(variable)         % load argument onto the stack
    ;       ldarga(variable)        % fetch address of argument
    ;       ldc(simple_type, constant)
                                    % load a numeric constant
    ;       ldftn(methodref)        % push a pointer to a method
    ;       ldind(simple_type)      % indirect load a value onto the stack
    ;       ldloc(variable)         % load a local variable onto the stack
    ;       ldloca(variable)        % load a local variable address
    ;       ldnull                  % push a null GC reference onto stack
    ;       leave(target)           % exit a protected region of code
    ;       localloc                % allocate space from local pool
    ;       mul(overflow, signed)   % multiply values
    ;       neg                     % negate value
    ;       nop                     % no operation
    ;       bitwise_not             % bitwise negation
    ;       bitwise_or              % bitwise or
    ;       pop                     % pop a value from the stack
    ;       rem(signed)             % compute remainder
    ;       ret                     % return from method
    ;       shl                     % shift integer left
    ;       shr(signed)             % shift integer right
    ;       starg(variable)         % store a value in argument slot
    ;       stind(simple_type)      % store indirect at address from stack
    ;       stloc(variable)         % pop value from stack to local var
    ;       sub(overflow, signed)   % subtract value2 from value1
    ;       switch(list(target))    % table switch on value
    ;       tailcall                % remove frame before following call
    ;       unaligned(alignment)    % subsequent pointer not aligned
    ;       volatile                % subsequent pointer ref is volatile
    ;       bitwise_xor             % bitwise XOR of integer values

    % OBJECT MODEL INSTRUCTIONS

    ;       box(il_type)            % convert pointer to reference
    ;       callvirt(methodref)     % call a method associated with obj
    ;       castclass(il_type)        % cast obj to class
    ;       cpobj(ilds.il_type)       % copy a value type
    ;       initobj(il_type)          % initialize a value type
    ;       isinst(il_type)           % test if obj is an instance
    ;       ldelem(simple_type)     % load an element of an array
    ;       ldelema(ilds.il_type)     % load address of element of array
    ;       ldfld(fieldref)         % load value of field of obj
    ;       ldflda(fieldref)        % load field address of obj
    ;       ldlen                   % load length of array
    ;       ldobj(ilds.il_type)       % copy value type to stack
    ;       ldsfld(fieldref)        % load static field of a class
    ;       ldsflda(fieldref)       % load static field address
    ;       ldstr(string)           % load a literal string
    ;       ldtoken(signature)      % load runtime rep of metadata token
    ;       ldvirtftn(methodref)    % push a pointer to a virtual method
    ;       mkrefany(ilds.il_type)    % push a refany pointer of type class
    ;       newarr(ilds.il_type)      % create a zero based 1D array
    ;       newobj(methodref)       % create new obj and call constructor
    ;       refanytype              % extract type info from refany nth arg
    ;       refanyval(ilds.il_type)   % extract type info from refany nth arg
    ;       rethrow                 % rethrow an exception
    ;       sizeof(ilds.il_type)      % push the sizeof a value type
    ;       stelem(simple_type)     % store an element of an array
    ;       stfld(fieldref)         % store into a field of an object
    ;       stobj(ilds.il_type)
    ;       stsfld(fieldref)        % replace the value of field with val
    ;       throw                   % throw an exception
    ;       unbox(ilds.il_type).      % convert boxed value type to raw form

    % Locations marked as dead by ann_dead -- positive numbers are stack slots,
    % negative numbers are locals.
    %
:- type location == int.

    % Static single assignment nodes are generated, numbered from 0,
    % by ann_def and ann_phi.
    %
:- type node_number == int.

:- type label == string.

%----------------------------------------------------------------------------%
%
% Utility functions and predicates
%

    % Get the namespace portion of a class name.
    %
:- func get_class_namespace(ilds.class_name) = ilds.namespace_qual_name.

    % Get the non-namespace portion of a class name.
    %
:- func get_class_suffix(ilds.class_name) = list(ilds.id).

    % Add an extra identifier to the end of an IL namespace name, e.g.
    % append Foo to [mercury]mercury.runtime to make
    % [mercury]mercury.runtime.Foo
    %
:- func append_toplevel_class_name(ilds.namespace_name, ilds.id) =
    ilds.class_name.

    % Add an extra identifier to the end of an IL class name, e.g.
    % append Bar to [mercury]mercury.runtime.Foo to make
    % [mercury]mercury.runtime.Foo/Bar
    %
:- func append_nested_class_name(ilds.class_name, ilds.nested_class_name) =
    ilds.class_name.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module int.
:- import_module require.

%-----------------------------------------------------------------------------%

get_class_suffix(structured_name(_, OuterClassFullName, NestedClass))
        = SuffixName :-
    (
        list.last(OuterClassFullName, Last)
    ->
        SuffixName = [Last | NestedClass]
    ;
        % This class has no name whatsoever.
        unexpected($module, $pred, "class has no name")
    ).

get_class_namespace(structured_name(_, FullName, _)) = NamespaceName :-
    (
        list.last(FullName, Last),
        list.remove_suffix(FullName, [Last], NamespaceName0)
    ->
        NamespaceName0 = NamespaceName
    ;
        % This class has no name whatsoever.
        unexpected($module, $pred, "class has no name")
    ).

append_toplevel_class_name(structured_name(Assembly, Namespace, NestedClass),
        Class) = structured_name(Assembly, ClassName, []) :-
    expect(unify(NestedClass, []), $module, $pred,
        "namespace name has nested class?"),
    list.append(Namespace, [Class], ClassName).

append_nested_class_name(StructuredName0, ExtraNestedClasses)
        = StructuredName :-
    StructuredName0 = structured_name(Assembly, Class, NestedClasses),
    StructuredName = structured_name(Assembly, Class,
        NestedClasses ++ ExtraNestedClasses).

calculate_max_stack(Instrs) =
    calculate_max_stack_2(Instrs, 0, 0).

:- func calculate_max_stack_2(list(ilds.instr), int, int) = int.

calculate_max_stack_2([], _, Max) = Max.
calculate_max_stack_2([I | Instrs], Current, Max) =
        calculate_max_stack_2(Instrs, NewCurrent, NewMax) :-

    % If there is handwritten code, it might increase the current stack height
    % by its maximum, but it will then pop the stack leaving nothing on the
    % stack (so Current remains the same).
    ( I = il_asm_code(_, HandwrittenMax) ->
        NewCurrent = Current,
        NewMax = max(Current + HandwrittenMax, Max)
    ;
        NewCurrent = Current + get_stack_difference(I),
        NewMax = max(NewCurrent, Max)
    ),
    % This is a sanity check, the stack should never have a negative size.
    ( NewCurrent < 0 ->
        unexpected($module, $pred, "stack underflow")
    ;
        true
    ).

    % Return the difference in stack height after an instruction is executed.
    % Stack height is measured in stack items (each item can be a different
    % size in bits).
    %
:- func get_stack_difference(ilds.instr) = int.

get_stack_difference(end_block(_, _))           = 0.
get_stack_difference(comment(_))                = 0.
get_stack_difference(start_block(bt_scope(_), _)) = 0.
get_stack_difference(start_block(bt_try, _))      = 0.
get_stack_difference(start_block(bt_catch(_), _)) = 1.
get_stack_difference(context(_, _))             = 0.
get_stack_difference(label(_Label))             = 0.
get_stack_difference(il_asm_code(_, _))         = 0.

get_stack_difference(add(_Overflow, _Signed))   = -1.
get_stack_difference(bitwise_and)               = -1.
get_stack_difference(arglist)                   =  1.
get_stack_difference(beq(_))                    = -2.
get_stack_difference(bge(_, _))                 = -2.
get_stack_difference(bgt(_, _))                 = -2.
get_stack_difference(ble(_, _))                 = -2.
get_stack_difference(blt(_, _))                 = -2.
get_stack_difference(bne(_, _))                 = -2.
get_stack_difference(br(_))                     = 0.
get_stack_difference(break)                     = 0.
get_stack_difference(brtrue(_))                 = -1.
get_stack_difference(brfalse(_))                = -1.
get_stack_difference(call(MethodRef)) = get_call_stack_difference(MethodRef).
get_stack_difference(calli(Signature)) = get_calli_stack_difference(Signature).
get_stack_difference(callvirt(MethodRef)) =
    get_call_stack_difference(MethodRef).
get_stack_difference(ceq)                       = -1.
get_stack_difference(cgt(_Signed))              = -1.
get_stack_difference(ckfinite)                  = 0.
get_stack_difference(clt(_Signed))              = -1.
get_stack_difference(conv(_SimpleType))         = 0.
get_stack_difference(cpblk)                     = -3.
get_stack_difference(div(_Signed))              = -1.
get_stack_difference(dup)                       = 1.
get_stack_difference(endfilter)                 = -1.
get_stack_difference(endfinally)                = -1.
get_stack_difference(initblk)                   = -3.
get_stack_difference(jmp(_MethodRef))           = 0.
get_stack_difference(ldarg(_))                  = 1.
get_stack_difference(ldarga(_Variable))         = 1.
get_stack_difference(ldc(_Type, _Const))        = 1.
get_stack_difference(ldftn(_MethodRef))         = 1.
get_stack_difference(ldind(_SimpleType))        = 0.
get_stack_difference(ldloc(_Variable))          = 1.
get_stack_difference(ldloca(_Variable))         = 1.
get_stack_difference(ldnull)                    = 1.
get_stack_difference(leave(_Target))            = 0.
get_stack_difference(localloc)                  = 0.
get_stack_difference(mul(_Overflow, _Signed))   = -1.
get_stack_difference(neg)                       = 0.
get_stack_difference(nop)                       = 0.
get_stack_difference(bitwise_not)               = 0.
get_stack_difference(bitwise_or)                = -1.
get_stack_difference(pop)                       = -1.
get_stack_difference(rem(_Signed))              = -1.
get_stack_difference(ret)                       = 0.
get_stack_difference(shl)                       = -1.
get_stack_difference(shr(_Signed))              = -1.
get_stack_difference(starg(_Variable))          = -1.
get_stack_difference(stind(_SimpleType))        = -2.
get_stack_difference(stloc(_Variable))          = -1.
get_stack_difference(sub(_OverFlow, _Signed))   = -1.
get_stack_difference(switch(_))                 = -1.
get_stack_difference(tailcall)                  = 0.
get_stack_difference(unaligned(_))              = 0.
get_stack_difference(volatile)                  = 0.
get_stack_difference(bitwise_xor)               = -1.

get_stack_difference(box(_Type))                = 0.
get_stack_difference(castclass(_Type))          = 0.
get_stack_difference(cpobj(_Type))              = -2.
get_stack_difference(initobj(_Type))            = -1.
get_stack_difference(isinst(_Type))             = 0.
get_stack_difference(ldelem(_SimpleType))       = -1.
get_stack_difference(ldelema(_Type))            = -1.
get_stack_difference(ldfld(_FieldRef))          = 0.
get_stack_difference(ldflda(_FieldRef))         = 0.
get_stack_difference(ldlen)                     = 0.
get_stack_difference(ldobj(_Type))              = 0.
get_stack_difference(ldsfld(_FieldRef))         = 1.
get_stack_difference(ldsflda(_FieldRef))        = 1.
get_stack_difference(ldstr(_String))            = 1.
get_stack_difference(ldtoken(_))                = 1.
get_stack_difference(ldvirtftn(_MethodRef))     = 0.
get_stack_difference(mkrefany(_Type))           = 0.
get_stack_difference(newarr(_Type))             = 0.
get_stack_difference(newobj(methoddef(_, _, _, Params))) =  Diff :-
    Diff = -(length(Params)) + 1.
get_stack_difference(newobj(local_method(_, _, _, Params))) =  Diff :-
    Diff = -(length(Params)) + 1.
get_stack_difference(refanytype)                = 0.
get_stack_difference(refanyval(_Type))          = 0.
get_stack_difference(rethrow)                   = 0.
get_stack_difference(sizeof(_Type))             = 1.
get_stack_difference(stelem(_SimpleType))       = -3.
get_stack_difference(stfld(_FieldRef))          = -2.
get_stack_difference(stobj(_ClassName))         = -2.
get_stack_difference(stsfld(_FieldRef))         = -1.
get_stack_difference(throw)                     = -1.
get_stack_difference(unbox(_Type))              = 0.

    % Count the stack size difference for a call. A call will remove the
    % params, and remove "this" if it is an instance method, but will put
    % the return type (if there is one) on the stack.
    %
:- func get_call_stack_difference(methodref) = int.

get_call_stack_difference(MethodRef) = Diff :-
    (
        MethodRef = methoddef(CallConv, RetType, _, Params)
    ;
        MethodRef = local_method(CallConv, RetType, _, Params)
    ),
    InstanceDiff = ( CallConv = call_conv(yes, _) -> -1 ; 0 ),
    RetDiff = ( RetType = void -> 0 ; 1),
    Diff = -(length(Params)) + InstanceDiff + RetDiff.

    % A calli will remove the function pointer, the params, and remove "this"
    % if it is an instance method, but puts the return type (if there is one)
    % on the stack.
    %
:- func get_calli_stack_difference(signature) = int.

get_calli_stack_difference(signature(CallConv, RetType, Params)) = Diff :-
    InstanceDiff = ( CallConv = call_conv(yes, _) -> -1 ; 0 ),
    RetDiff = ( RetType = void -> 0 ; 1),
    Diff = -(length(Params)) + InstanceDiff + RetDiff - 1.

%-----------------------------------------------------------------------------%
:- end_module ml_backend.ilds.
%-----------------------------------------------------------------------------%
