# vim: ts=8 sw=8 noexpandtab ft=make



check_hlds.optdate check_hlds.trans_opt_date check_hlds.err check_hlds.c_date check_hlds.java_date : check_hlds.m check_hlds.int0 \
	builtin.int \
	private_builtin.int

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   (unnamed)
#   long deps
check_hlds.optdate check_hlds.trans_opt_date check_hlds.err check_hlds.c_date check_hlds.java_date : \
		check_hlds.m \
	\
		check_hlds.int0 \
	\
		builtin.int \
		private_builtin.int
endif



check_hlds.pic_o check_hlds.$O : \
	builtin.mih \
	private_builtin.mih

ifeq (x,y)
# RULE objs_on_mihs
check_hlds.pic_o check_hlds.$O : \
		builtin.mih \
		private_builtin.mih
endif



check_hlds.mh check_hlds.mih : check_hlds.c

ifeq (x,y)
# RULE mh_and_mih_on_c
check_hlds.mh check_hlds.mih : check_hlds.c
endif



ifeq ($(findstring java,$(GRADE)),java)
check_hlds.module_dep : jmercury/check_hlds.java
else
check_hlds.module_dep : check_hlds.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
check_hlds.module_dep : jmercury/check_hlds.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
check_hlds.module_dep : check_hlds.c
endif

endif # conditional fragment



check_hlds.date check_hlds.date0 : check_hlds.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
check_hlds.date check_hlds.date0 : \
		check_hlds.m \
	\
		builtin.int3 \
		private_builtin.int3
endif



check_hlds.date0 : check_hlds.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
check_hlds.date0 : \
		check_hlds.m \
	\
		builtin.int3 \
		private_builtin.int3
endif


check_hlds.int0 : check_hlds.date0
	@:
check_hlds.int : check_hlds.date
	@:
check_hlds.int2 : check_hlds.date
	@:
check_hlds.int3 : check_hlds.date3
	@:
check_hlds.opt : check_hlds.optdate
	@:
check_hlds.trans_opt : check_hlds.trans_opt_date
	@:

ifeq (x,y)
check_hlds.int0 : check_hlds.date0
	@:
endif

ifeq (x,y)
check_hlds.int : check_hlds.date
	@:
endif

ifeq (x,y)
check_hlds.int2 : check_hlds.date
	@:
endif

ifeq (x,y)
check_hlds.int3 : check_hlds.date3
	@:
endif

ifeq (x,y)
check_hlds.opt : check_hlds.optdate
	@:
endif

ifeq (x,y)
check_hlds.trans_opt : check_hlds.trans_opt_date
	@:
endif

