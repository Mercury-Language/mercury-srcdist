# vim: ts=8 sw=8 noexpandtab ft=make



hlds.optdate hlds.trans_opt_date hlds.err hlds.c_date hlds.java_date : hlds.m hlds.int0 \
	builtin.int \
	private_builtin.int

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   (unnamed)
#   long deps
hlds.optdate hlds.trans_opt_date hlds.err hlds.c_date hlds.java_date : \
		hlds.m \
	\
		hlds.int0 \
	\
		builtin.int \
		private_builtin.int
endif



hlds.pic_o hlds.$O : \
	builtin.mih \
	private_builtin.mih

ifeq (x,y)
# RULE objs_on_mihs
hlds.pic_o hlds.$O : \
		builtin.mih \
		private_builtin.mih
endif



hlds.mh hlds.mih : hlds.c

ifeq (x,y)
# RULE mh_and_mih_on_c
hlds.mh hlds.mih : hlds.c
endif



ifeq ($(findstring java,$(GRADE)),java)
hlds.module_dep : jmercury/hlds.java
else
hlds.module_dep : hlds.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
hlds.module_dep : jmercury/hlds.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
hlds.module_dep : hlds.c
endif

endif # conditional fragment



hlds.date hlds.date0 : hlds.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
hlds.date hlds.date0 : \
		hlds.m \
	\
		builtin.int3 \
		private_builtin.int3
endif



hlds.date0 : hlds.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
hlds.date0 : \
		hlds.m \
	\
		builtin.int3 \
		private_builtin.int3
endif


hlds.int0 : hlds.date0
	@:
hlds.int : hlds.date
	@:
hlds.int2 : hlds.date
	@:
hlds.int3 : hlds.date3
	@:
hlds.opt : hlds.optdate
	@:
hlds.trans_opt : hlds.trans_opt_date
	@:

ifeq (x,y)
hlds.int0 : hlds.date0
	@:
endif

ifeq (x,y)
hlds.int : hlds.date
	@:
endif

ifeq (x,y)
hlds.int2 : hlds.date
	@:
endif

ifeq (x,y)
hlds.int3 : hlds.date3
	@:
endif

ifeq (x,y)
hlds.opt : hlds.optdate
	@:
endif

ifeq (x,y)
hlds.trans_opt : hlds.trans_opt_date
	@:
endif

