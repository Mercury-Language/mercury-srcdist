# vim: ts=8 sw=8 noexpandtab ft=make



mdbcomp.optdate mdbcomp.trans_opt_date mdbcomp.err mdbcomp.c_date mdbcomp.java_date : mdbcomp.m mdbcomp.int0 \
	builtin.int \
	private_builtin.int

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   (unnamed)
#   long deps
mdbcomp.optdate mdbcomp.trans_opt_date mdbcomp.err mdbcomp.c_date mdbcomp.java_date : \
		mdbcomp.m \
	\
		mdbcomp.int0 \
	\
		builtin.int \
		private_builtin.int
endif



mdbcomp.pic_o mdbcomp.$O : \
	builtin.mih \
	private_builtin.mih

ifeq (x,y)
# RULE objs_on_mihs
mdbcomp.pic_o mdbcomp.$O : \
		builtin.mih \
		private_builtin.mih
endif



mdbcomp.mh mdbcomp.mih : mdbcomp.c

ifeq (x,y)
# RULE mh_and_mih_on_c
mdbcomp.mh mdbcomp.mih : mdbcomp.c
endif



ifeq ($(findstring java,$(GRADE)),java)
mdbcomp.module_dep : jmercury/mdbcomp.java
else
mdbcomp.module_dep : mdbcomp.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
mdbcomp.module_dep : jmercury/mdbcomp.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
mdbcomp.module_dep : mdbcomp.c
endif

endif # conditional fragment



mdbcomp.date mdbcomp.date0 : mdbcomp.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
mdbcomp.date mdbcomp.date0 : \
		mdbcomp.m \
	\
		builtin.int3 \
		private_builtin.int3
endif



mdbcomp.date0 : mdbcomp.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
mdbcomp.date0 : \
		mdbcomp.m \
	\
		builtin.int3 \
		private_builtin.int3
endif



mdbcomp.$O :  \
	mdbcomp.mh



mdbcomp.pic_o :  \
	mdbcomp.mh

ifeq (x,y)
# RULE foreign_deps_for_.mh
mdbcomp.$O : mdbcomp.mh
endif

ifeq (x,y)
# RULE foreign_deps_for_.mh
mdbcomp.pic_o : mdbcomp.mh
endif


mdbcomp.int0 : mdbcomp.date0
	@:
mdbcomp.int : mdbcomp.date
	@:
mdbcomp.int2 : mdbcomp.date
	@:
mdbcomp.int3 : mdbcomp.date3
	@:
mdbcomp.opt : mdbcomp.optdate
	@:
mdbcomp.trans_opt : mdbcomp.trans_opt_date
	@:

ifeq (x,y)
mdbcomp.int0 : mdbcomp.date0
	@:
endif

ifeq (x,y)
mdbcomp.int : mdbcomp.date
	@:
endif

ifeq (x,y)
mdbcomp.int2 : mdbcomp.date
	@:
endif

ifeq (x,y)
mdbcomp.int3 : mdbcomp.date3
	@:
endif

ifeq (x,y)
mdbcomp.opt : mdbcomp.optdate
	@:
endif

ifeq (x,y)
mdbcomp.trans_opt : mdbcomp.trans_opt_date
	@:
endif

