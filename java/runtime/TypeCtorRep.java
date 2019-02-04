//
// Copyright (C) 2001-2005 The University of Melbourne.
// This file may only be copied under the terms of the GNU Library General
// Public License - see the file COPYING.LIB in the Mercury distribution.
//

package jmercury.runtime;

public class TypeCtorRep implements java.io.Serializable {
	
	// Constants
	
	public static final int MR_TYPECTOR_REP_ENUM = 0;
	public static final int MR_TYPECTOR_REP_ENUM_USEREQ = 1;
	public static final int MR_TYPECTOR_REP_DU = 2;
	public static final int MR_TYPECTOR_REP_DU_USEREQ = 3;
	public static final int MR_TYPECTOR_REP_NOTAG = 4;
	public static final int MR_TYPECTOR_REP_NOTAG_USEREQ = 5;
	public static final int MR_TYPECTOR_REP_EQUIV = 6;
	public static final int MR_TYPECTOR_REP_FUNC = 7;
	public static final int MR_TYPECTOR_REP_INT = 8;
	public static final int MR_TYPECTOR_REP_CHAR = 9;
	public static final int MR_TYPECTOR_REP_FLOAT = 10;
	public static final int MR_TYPECTOR_REP_STRING = 11;
	public static final int MR_TYPECTOR_REP_PRED = 12;
	public static final int MR_TYPECTOR_REP_UNIV = 13;
	public static final int MR_TYPECTOR_REP_SUBGOAL = 14;
	public static final int MR_TYPECTOR_REP_C_POINTER = 15;
	public static final int MR_TYPECTOR_REP_TYPEINFO = 16;
	public static final int MR_TYPECTOR_REP_TYPECLASSINFO = 17;
	public static final int MR_TYPECTOR_REP_ARRAY = 18;
	public static final int MR_TYPECTOR_REP_SUCCIP = 19;
	public static final int MR_TYPECTOR_REP_HP = 20;
	public static final int MR_TYPECTOR_REP_CURFR = 21;
	public static final int MR_TYPECTOR_REP_MAXFR = 22;
	public static final int MR_TYPECTOR_REP_REDOFR = 23;
	public static final int MR_TYPECTOR_REP_REDOIP = 24;
	public static final int MR_TYPECTOR_REP_TRAIL_PTR = 25;
	public static final int MR_TYPECTOR_REP_TICKET = 26;
	public static final int MR_TYPECTOR_REP_NOTAG_GROUND = 27;
	public static final int MR_TYPECTOR_REP_NOTAG_GROUND_USEREQ = 28;
	public static final int MR_TYPECTOR_REP_EQUIV_GROUND = 29;
	public static final int MR_TYPECTOR_REP_TUPLE = 30;
	public static final int MR_TYPECTOR_REP_RESERVED_ADDR = 31;
	public static final int MR_TYPECTOR_REP_RESERVED_ADDR_USEREQ = 32;
	public static final int MR_TYPECTOR_REP_TYPECTORINFO = 33;
	public static final int MR_TYPECTOR_REP_BASETYPECLASSINFO = 34;
	public static final int MR_TYPECTOR_REP_TYPEDESC = 35;
	public static final int MR_TYPECTOR_REP_TYPECTORDESC = 36;
	public static final int MR_TYPECTOR_REP_FOREIGN = 37;
	public static final int MR_TYPECTOR_REP_REFERENCE = 38;
	public static final int MR_TYPECTOR_REP_STABLE_C_POINTER = 39;
	public static final int MR_TYPECTOR_REP_STABLE_FOREIGN = 40;
	public static final int MR_TYPECTOR_REP_PSEUDOTYPEDESC = 41;
	public static final int MR_TYPECTOR_REP_DUMMY = 42;
	public static final int MR_TYPECTOR_REP_UNKNOWN = 43;
	
	// Instance variable for TypeCtorRep objects.
	
	public int value;

	// Constructor

	public TypeCtorRep(int arg) {
		this.value = arg;
	}
}
	
