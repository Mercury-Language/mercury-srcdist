# vim: ts=8 sw=8 noexpandtab ft=make



libs.optdate libs.trans_opt_date libs.err libs.c_date libs.java_date : libs.m libs.int0 \
	builtin.int \
	private_builtin.int

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   (unnamed)
#   long deps
libs.optdate libs.trans_opt_date libs.err libs.c_date libs.java_date : \
		libs.m \
	\
		libs.int0 \
	\
		builtin.int \
		private_builtin.int
endif



libs.pic_o libs.$O : \
	builtin.mih \
	private_builtin.mih

ifeq (x,y)
# RULE objs_on_mihs
libs.pic_o libs.$O : \
		builtin.mih \
		private_builtin.mih
endif



libs.mh libs.mih : libs.c

ifeq (x,y)
# RULE mh_and_mih_on_c
libs.mh libs.mih : libs.c
endif



ifeq ($(findstring java,$(GRADE)),java)
libs.module_dep : jmercury/libs.java
else
libs.module_dep : libs.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
libs.module_dep : jmercury/libs.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
libs.module_dep : libs.c
endif

endif # conditional fragment



libs.date libs.date0 : libs.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
libs.date libs.date0 : \
		libs.m \
	\
		builtin.int3 \
		private_builtin.int3
endif



libs.date0 : libs.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
libs.date0 : \
		libs.m \
	\
		builtin.int3 \
		private_builtin.int3
endif


libs.int0 : libs.date0
	@:
libs.int : libs.date
	@:
libs.int2 : libs.date
	@:
libs.int3 : libs.date3
	@:
libs.opt : libs.optdate
	@:
libs.trans_opt : libs.trans_opt_date
	@:

ifeq (x,y)
libs.int0 : libs.date0
	@:
endif

ifeq (x,y)
libs.int : libs.date
	@:
endif

ifeq (x,y)
libs.int2 : libs.date
	@:
endif

ifeq (x,y)
libs.int3 : libs.date3
	@:
endif

ifeq (x,y)
libs.opt : libs.optdate
	@:
endif

ifeq (x,y)
libs.trans_opt : libs.trans_opt_date
	@:
endif

