# vim: ts=8 sw=8 noexpandtab ft=make



mer_mdbcomp.optdate mer_mdbcomp.trans_opt_date mer_mdbcomp.err mer_mdbcomp.c_date mer_mdbcomp.java_date : mer_mdbcomp.m \
	builtin.int \
	mdbcomp.int \
	private_builtin.int

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   long deps
mer_mdbcomp.optdate mer_mdbcomp.trans_opt_date mer_mdbcomp.err mer_mdbcomp.c_date mer_mdbcomp.java_date : \
		mer_mdbcomp.m \
	\
		builtin.int \
		mdbcomp.int \
		private_builtin.int
endif



mer_mdbcomp.pic_o mer_mdbcomp.$O : \
	builtin.mih \
	mdbcomp.mih \
	private_builtin.mih

ifeq (x,y)
# RULE objs_on_mihs
mer_mdbcomp.pic_o mer_mdbcomp.$O : \
		builtin.mih \
		mdbcomp.mih \
		private_builtin.mih
endif



mer_mdbcomp.mh mer_mdbcomp.mih : mer_mdbcomp.c

ifeq (x,y)
# RULE mh_and_mih_on_c
mer_mdbcomp.mh mer_mdbcomp.mih : mer_mdbcomp.c
endif



ifeq ($(findstring java,$(GRADE)),java)
mer_mdbcomp.module_dep : jmercury/mer_mdbcomp.java
else
mer_mdbcomp.module_dep : mer_mdbcomp.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
mer_mdbcomp.module_dep : jmercury/mer_mdbcomp.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
mer_mdbcomp.module_dep : mer_mdbcomp.c
endif

endif # conditional fragment



mer_mdbcomp.date mer_mdbcomp.date0 : mer_mdbcomp.m \
	builtin.int3 \
	mdbcomp.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
mer_mdbcomp.date mer_mdbcomp.date0 : \
		mer_mdbcomp.m \
	\
		builtin.int3 \
		mdbcomp.int3 \
		private_builtin.int3
endif



mer_mdbcomp.date0 : mer_mdbcomp.m \
	builtin.int3 \
	mdbcomp.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
mer_mdbcomp.date0 : \
		mer_mdbcomp.m \
	\
		builtin.int3 \
		mdbcomp.int3 \
		private_builtin.int3
endif


mer_mdbcomp.int0 : mer_mdbcomp.date0
	@:
mer_mdbcomp.int : mer_mdbcomp.date
	@:
mer_mdbcomp.int2 : mer_mdbcomp.date
	@:
mer_mdbcomp.int3 : mer_mdbcomp.date3
	@:
mer_mdbcomp.opt : mer_mdbcomp.optdate
	@:
mer_mdbcomp.trans_opt : mer_mdbcomp.trans_opt_date
	@:

ifeq (x,y)
mer_mdbcomp.int0 : mer_mdbcomp.date0
	@:
endif

ifeq (x,y)
mer_mdbcomp.int : mer_mdbcomp.date
	@:
endif

ifeq (x,y)
mer_mdbcomp.int2 : mer_mdbcomp.date
	@:
endif

ifeq (x,y)
mer_mdbcomp.int3 : mer_mdbcomp.date3
	@:
endif

ifeq (x,y)
mer_mdbcomp.opt : mer_mdbcomp.optdate
	@:
endif

ifeq (x,y)
mer_mdbcomp.trans_opt : mer_mdbcomp.trans_opt_date
	@:
endif

