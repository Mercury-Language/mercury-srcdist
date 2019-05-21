//
// Copyright (C) 2001-2003 The University of Melbourne.
// This file may only be copied under the terms of the GNU Library General
// Public License - see the file COPYING.LIB in the Mercury distribution.
//

package jmercury.runtime;

public class NotagFunctorDesc implements java.io.Serializable {
	
	public java.lang.String no_tag_functor_name;
	public PseudoTypeInfo no_tag_functor_arg_type;
	public java.lang.String no_tag_functor_arg_name;

	public NotagFunctorDesc(java.lang.String functor_name,
		PseudoTypeInfo functor_arg_type,
		java.lang.Object functor_arg_name)
	{
		no_tag_functor_name = functor_name;
		no_tag_functor_arg_type = functor_arg_type;
		// XXX cast might fail
		no_tag_functor_arg_name = (java.lang.String) functor_arg_name;
	}
}
		
