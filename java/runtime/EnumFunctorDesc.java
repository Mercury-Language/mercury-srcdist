// vim: ts=4 sw=4 expandtab ft=java
//
// Copyright (C) 2001-2003 The University of Melbourne.
// Copyright (C) 2018 The Mercury team.
// This file is distributed under the terms specified in COPYING.LIB.
//

package jmercury.runtime;

public class EnumFunctorDesc implements java.io.Serializable {

    public java.lang.String enum_functor_name;
    public int              enum_functor_ordinal;

    public EnumFunctorDesc() {
    }

    public void init(String name, int ordinal) {
        enum_functor_name = name;
        enum_functor_ordinal = ordinal;
    }

}
