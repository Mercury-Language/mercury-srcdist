# vim: ts=8 sw=8 noexpandtab ft=make



erl_backend.optdate erl_backend.trans_opt_date erl_backend.err erl_backend.c_date erl_backend.java_date : erl_backend.m erl_backend.int0 \
	builtin.int \
	private_builtin.int

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   (unnamed)
#   long deps
erl_backend.optdate erl_backend.trans_opt_date erl_backend.err erl_backend.c_date erl_backend.java_date : \
		erl_backend.m \
	\
		erl_backend.int0 \
	\
		builtin.int \
		private_builtin.int
endif



erl_backend.pic_o erl_backend.$O : \
	builtin.mih \
	private_builtin.mih

ifeq (x,y)
# RULE objs_on_mihs
erl_backend.pic_o erl_backend.$O : \
		builtin.mih \
		private_builtin.mih
endif



erl_backend.mh erl_backend.mih : erl_backend.c

ifeq (x,y)
# RULE mh_and_mih_on_c
erl_backend.mh erl_backend.mih : erl_backend.c
endif



ifeq ($(findstring java,$(GRADE)),java)
erl_backend.module_dep : jmercury/erl_backend.java
else
erl_backend.module_dep : erl_backend.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
erl_backend.module_dep : jmercury/erl_backend.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
erl_backend.module_dep : erl_backend.c
endif

endif # conditional fragment



erl_backend.date erl_backend.date0 : erl_backend.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
erl_backend.date erl_backend.date0 : \
		erl_backend.m \
	\
		builtin.int3 \
		private_builtin.int3
endif



erl_backend.date0 : erl_backend.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
erl_backend.date0 : \
		erl_backend.m \
	\
		builtin.int3 \
		private_builtin.int3
endif


erl_backend.int0 : erl_backend.date0
	@:
erl_backend.int : erl_backend.date
	@:
erl_backend.int2 : erl_backend.date
	@:
erl_backend.int3 : erl_backend.date3
	@:
erl_backend.opt : erl_backend.optdate
	@:
erl_backend.trans_opt : erl_backend.trans_opt_date
	@:

ifeq (x,y)
erl_backend.int0 : erl_backend.date0
	@:
endif

ifeq (x,y)
erl_backend.int : erl_backend.date
	@:
endif

ifeq (x,y)
erl_backend.int2 : erl_backend.date
	@:
endif

ifeq (x,y)
erl_backend.int3 : erl_backend.date3
	@:
endif

ifeq (x,y)
erl_backend.opt : erl_backend.optdate
	@:
endif

ifeq (x,y)
erl_backend.trans_opt : erl_backend.trans_opt_date
	@:
endif

