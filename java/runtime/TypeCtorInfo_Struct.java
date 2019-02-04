//
// Copyright (C) 2001-2004 The University of Melbourne.
// This file may only be copied under the terms of the GNU Library General
// Public License - see the file COPYING.LIB in the Mercury distribution.
//

package mercury.runtime;

// This corresponds to the C type "struct MR_TypeCtorInfo_Struct"
// in runtime/mercury_type_info.h.

public class TypeCtorInfo_Struct extends PseudoTypeInfo {
    
	public int                              arity;
	public int                              type_ctor_version;
	public int                              type_ctor_num_ptags; // if DU
	public mercury.runtime.TypeCtorRep      type_ctor_rep;
	public mercury.runtime.MethodPtr        unify_pred;
	public mercury.runtime.MethodPtr        compare_pred;
	public java.lang.String                 type_ctor_module_name;
	public java.lang.String                 type_ctor_name;
	public mercury.runtime.TypeFunctors     type_functors;
	public mercury.runtime.TypeLayout       type_layout;
	public int 			        type_ctor_num_functors;
	public /* short */ int 			type_ctor_flags;
	public int[]              		type_functor_number_map;

	public TypeCtorInfo_Struct()
	{
	}

	public void init(
			int type_arity, int version, int num_ptags, int rep,
			Object unify_proc, Object compare_proc, 
			String module, String name,
			// mercury.runtime.TypeFunctors
			java.lang.Object name_ordered_functor_descs,
			// mercury.runtime.TypeLayout
			java.lang.Object value_ordered_functor_descs,
			int num_functors, int flags,
			int[] functor_number_map)
	{
		arity = type_arity;
		type_ctor_version = version;
		type_ctor_num_ptags = num_ptags;
		type_ctor_rep = new TypeCtorRep(rep);
		unify_pred = (mercury.runtime.MethodPtr) unify_proc;
		compare_pred = (mercury.runtime.MethodPtr) compare_proc;
		type_ctor_module_name = module;
		type_ctor_name = name;
		type_functors = (mercury.runtime.TypeFunctors)
			name_ordered_functor_descs;
		type_layout = (mercury.runtime.TypeLayout)
			value_ordered_functor_descs;
		type_ctor_flags = flags;
		type_functor_number_map = functor_number_map;
	}

		// XXX this should be renamed `equals'
	public boolean unify(TypeCtorInfo_Struct tci) {
		return this == tci;
		/*
		return type_ctor_module_name.equals(tci.type_ctor_module_name)
				&& type_ctor_name.equals(tci.type_ctor_name)
				&& arity == tci.arity;
		*/
	}
}
