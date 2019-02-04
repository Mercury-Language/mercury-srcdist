# vim: ts=8 sw=8 noexpandtab ft=make



parse_tree.optdate parse_tree.trans_opt_date parse_tree.err parse_tree.c_date parse_tree.java_date : parse_tree.m parse_tree.int0 \
	builtin.int \
	private_builtin.int

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   (unnamed)
#   long deps
parse_tree.optdate parse_tree.trans_opt_date parse_tree.err parse_tree.c_date parse_tree.java_date : \
		parse_tree.m \
	\
		parse_tree.int0 \
	\
		builtin.int \
		private_builtin.int
endif



parse_tree.pic_o parse_tree.$O : \
	builtin.mih \
	private_builtin.mih

ifeq (x,y)
# RULE objs_on_mihs
parse_tree.pic_o parse_tree.$O : \
		builtin.mih \
		private_builtin.mih
endif



parse_tree.mh parse_tree.mih : parse_tree.c

ifeq (x,y)
# RULE mh_and_mih_on_c
parse_tree.mh parse_tree.mih : parse_tree.c
endif



ifeq ($(findstring java,$(GRADE)),java)
parse_tree.module_dep : jmercury/parse_tree.java
else
parse_tree.module_dep : parse_tree.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
parse_tree.module_dep : jmercury/parse_tree.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
parse_tree.module_dep : parse_tree.c
endif

endif # conditional fragment



parse_tree.date parse_tree.date0 : parse_tree.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   long dep int3s
parse_tree.date parse_tree.date0 : \
		parse_tree.m \
	\
		builtin.int3 \
		private_builtin.int3
endif



parse_tree.date0 : parse_tree.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
parse_tree.date0 : \
		parse_tree.m \
	\
		builtin.int3 \
		private_builtin.int3
endif


parse_tree.int0 : parse_tree.date0
	@:
parse_tree.int : parse_tree.date
	@:
parse_tree.int2 : parse_tree.date
	@:
parse_tree.int3 : parse_tree.date3
	@:
parse_tree.opt : parse_tree.optdate
	@:
parse_tree.trans_opt : parse_tree.trans_opt_date
	@:

ifeq (x,y)
parse_tree.int0 : parse_tree.date0
	@:
endif

ifeq (x,y)
parse_tree.int : parse_tree.date
	@:
endif

ifeq (x,y)
parse_tree.int2 : parse_tree.date
	@:
endif

ifeq (x,y)
parse_tree.int3 : parse_tree.date3
	@:
endif

ifeq (x,y)
parse_tree.opt : parse_tree.optdate
	@:
endif

ifeq (x,y)
parse_tree.trans_opt : parse_tree.trans_opt_date
	@:
endif

