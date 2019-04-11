# vim: ts=8 sw=8 noexpandtab ft=make



backend_libs.optdate backend_libs.trans_opt_date backend_libs.err backend_libs.c_date backend_libs.java_date : backend_libs.m backend_libs.int0 \
	builtin.int \
	private_builtin.int

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   (unnamed)
#   long deps
backend_libs.optdate backend_libs.trans_opt_date backend_libs.err backend_libs.c_date backend_libs.java_date : \
		backend_libs.m \
	\
		backend_libs.int0 \
	\
		builtin.int \
		private_builtin.int
endif



backend_libs.pic_o backend_libs.$O : \
	builtin.mih \
	private_builtin.mih

ifeq (x,y)
# RULE objs_on_mihs
backend_libs.pic_o backend_libs.$O : \
		builtin.mih \
		private_builtin.mih
endif



backend_libs.mh backend_libs.mih : backend_libs.c

ifeq (x,y)
# RULE mh_and_mih_on_c
backend_libs.mh backend_libs.mih : backend_libs.c
endif



ifeq ($(findstring java,$(GRADE)),java)
backend_libs.module_dep : jmercury/backend_libs.java
else
backend_libs.module_dep : backend_libs.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
backend_libs.module_dep : jmercury/backend_libs.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
backend_libs.module_dep : backend_libs.c
endif

endif # conditional fragment



backend_libs.date backend_libs.date0 : backend_libs.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
backend_libs.date backend_libs.date0 : \
		backend_libs.m \
	\
		builtin.int3 \
		private_builtin.int3
endif



backend_libs.date0 : backend_libs.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
backend_libs.date0 : \
		backend_libs.m \
	\
		builtin.int3 \
		private_builtin.int3
endif


backend_libs.int0 : backend_libs.date0
	@:
backend_libs.int : backend_libs.date
	@:
backend_libs.int2 : backend_libs.date
	@:
backend_libs.int3 : backend_libs.date3
	@:
backend_libs.opt : backend_libs.optdate
	@:
backend_libs.trans_opt : backend_libs.trans_opt_date
	@:

ifeq (x,y)
backend_libs.int0 : backend_libs.date0
	@:
endif

ifeq (x,y)
backend_libs.int : backend_libs.date
	@:
endif

ifeq (x,y)
backend_libs.int2 : backend_libs.date
	@:
endif

ifeq (x,y)
backend_libs.int3 : backend_libs.date3
	@:
endif

ifeq (x,y)
backend_libs.opt : backend_libs.optdate
	@:
endif

ifeq (x,y)
backend_libs.trans_opt : backend_libs.trans_opt_date
	@:
endif

