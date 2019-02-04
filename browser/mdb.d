# vim: ts=8 sw=8 noexpandtab ft=make



mdb.optdate mdb.trans_opt_date mdb.err mdb.c_date mdb.java_date : mdb.m mdb.int0 \
	builtin.int \
	private_builtin.int

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   (unnamed)
#   long deps
mdb.optdate mdb.trans_opt_date mdb.err mdb.c_date mdb.java_date : \
		mdb.m \
	\
		mdb.int0 \
	\
		builtin.int \
		private_builtin.int
endif



mdb.pic_o mdb.$O : \
	builtin.mih \
	private_builtin.mih

ifeq (x,y)
# RULE objs_on_mihs
mdb.pic_o mdb.$O : \
		builtin.mih \
		private_builtin.mih
endif



mdb.mh mdb.mih : mdb.c

ifeq (x,y)
# RULE mh_and_mih_on_c
mdb.mh mdb.mih : mdb.c
endif



ifeq ($(findstring java,$(GRADE)),java)
mdb.module_dep : jmercury/mdb.java
else
mdb.module_dep : mdb.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
mdb.module_dep : jmercury/mdb.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
mdb.module_dep : mdb.c
endif

endif # conditional fragment



mdb.date mdb.date0 : mdb.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
mdb.date mdb.date0 : \
		mdb.m \
	\
		builtin.int3 \
		private_builtin.int3
endif



mdb.date0 : mdb.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
mdb.date0 : \
		mdb.m \
	\
		builtin.int3 \
		private_builtin.int3
endif



mdb.$O :  \
	mdb.mh



mdb.pic_o :  \
	mdb.mh

ifeq (x,y)
# RULE foreign_deps_for_.mh
mdb.$O : mdb.mh
endif

ifeq (x,y)
# RULE foreign_deps_for_.mh
mdb.pic_o : mdb.mh
endif


mdb.int0 : mdb.date0
	@:
mdb.int : mdb.date
	@:
mdb.int2 : mdb.date
	@:
mdb.int3 : mdb.date3
	@:
mdb.opt : mdb.optdate
	@:
mdb.trans_opt : mdb.trans_opt_date
	@:

ifeq (x,y)
mdb.int0 : mdb.date0
	@:
endif

ifeq (x,y)
mdb.int : mdb.date
	@:
endif

ifeq (x,y)
mdb.int2 : mdb.date
	@:
endif

ifeq (x,y)
mdb.int3 : mdb.date3
	@:
endif

ifeq (x,y)
mdb.opt : mdb.optdate
	@:
endif

ifeq (x,y)
mdb.trans_opt : mdb.trans_opt_date
	@:
endif

