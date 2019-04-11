# vim: ts=8 sw=8 noexpandtab ft=make



parse_tree.file_kind.optdate parse_tree.file_kind.trans_opt_date file_kind.err parse_tree.file_kind.c_date parse_tree.file_kind.java_date : file_kind.m \
	parse_tree.int0 \
	builtin.int \
	private_builtin.int

ifeq (x,y)
# RULE date_file_deps
# source group names:
#   (unnamed)
#   parent deps
#   long deps
parse_tree.file_kind.optdate parse_tree.file_kind.trans_opt_date file_kind.err parse_tree.file_kind.c_date parse_tree.file_kind.java_date : \
		file_kind.m \
	\
		parse_tree.int0 \
	\
		builtin.int \
		private_builtin.int
endif



parse_tree.file_kind.pic_o parse_tree.file_kind.$O : \
	builtin.mih \
	parse_tree.mih \
	private_builtin.mih

ifeq (x,y)
# RULE objs_on_mihs
parse_tree.file_kind.pic_o parse_tree.file_kind.$O : \
		builtin.mih \
		parse_tree.mih \
		private_builtin.mih
endif



parse_tree.file_kind.mh parse_tree.file_kind.mih : parse_tree.file_kind.c

ifeq (x,y)
# RULE mh_and_mih_on_c
parse_tree.file_kind.mh parse_tree.file_kind.mih : parse_tree.file_kind.c
endif



ifeq ($(findstring java,$(GRADE)),java)
parse_tree.file_kind.module_dep : jmercury/parse_tree__file_kind.java
else
parse_tree.file_kind.module_dep : parse_tree.file_kind.c
endif

ifeq ($(findstring java,$(GRADE)),java)

ifeq (x,y)
# RULE module_dep_on_java
parse_tree.file_kind.module_dep : jmercury/parse_tree__file_kind.java
endif

else

ifeq (x,y)
# RULE module_dep_on_c
parse_tree.file_kind.module_dep : parse_tree.file_kind.c
endif

endif # conditional fragment



parse_tree.file_kind.date parse_tree.file_kind.date0 \
	parse_tree.date : file_kind.m \
	parse_tree.int0 \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date_deps
# source group names:
#   (unnamed)
#   parent dep int0
#   long dep int3s
parse_tree.file_kind.date parse_tree.file_kind.date0 parse_tree.date : \
		file_kind.m \
	\
		parse_tree.int0 \
	\
		builtin.int3 \
		private_builtin.int3
endif



parse_tree.file_kind.date0 \
	parse_tree.date0 : file_kind.m \
	builtin.int3 \
	private_builtin.int3

ifeq (x,y)
# RULE self_and_parent_date0_deps
# source group names:
#   (unnamed)
#   long dep int3s
parse_tree.file_kind.date0 parse_tree.date0 : \
		file_kind.m \
	\
		builtin.int3 \
		private_builtin.int3
endif


parse_tree.file_kind.int0 : parse_tree.file_kind.date0
	@:
parse_tree.file_kind.int : parse_tree.file_kind.date
	@:
parse_tree.file_kind.int2 : parse_tree.file_kind.date
	@:
parse_tree.file_kind.int3 : parse_tree.file_kind.date3
	@:
parse_tree.file_kind.opt : parse_tree.file_kind.optdate
	@:
parse_tree.file_kind.trans_opt : parse_tree.file_kind.trans_opt_date
	@:

ifeq (x,y)
parse_tree.file_kind.int0 : parse_tree.file_kind.date0
	@:
endif

ifeq (x,y)
parse_tree.file_kind.int : parse_tree.file_kind.date
	@:
endif

ifeq (x,y)
parse_tree.file_kind.int2 : parse_tree.file_kind.date
	@:
endif

ifeq (x,y)
parse_tree.file_kind.int3 : parse_tree.file_kind.date3
	@:
endif

ifeq (x,y)
parse_tree.file_kind.opt : parse_tree.file_kind.optdate
	@:
endif

ifeq (x,y)
parse_tree.file_kind.trans_opt : parse_tree.file_kind.trans_opt_date
	@:
endif


parse_tree.file_kind.date0 : file_kind.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.file_kind
parse_tree.file_kind.date : file_kind.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.file_kind
parse_tree.file_kind.date3 : file_kind.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.file_kind
parse_tree.file_kind.optdate : file_kind.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.file_kind
parse_tree.file_kind.trans_opt_date : file_kind.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.file_kind
parse_tree.file_kind.c_date : file_kind.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.file_kind $(ERR_REDIRECT)
parse_tree.file_kind.java_date : file_kind.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.file_kind $(ERR_REDIRECT)

ifeq (x,y)
parse_tree.file_kind.date0 : file_kind.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) parse_tree.file_kind
endif

ifeq (x,y)
parse_tree.file_kind.date : file_kind.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) parse_tree.file_kind
endif

ifeq (x,y)
parse_tree.file_kind.date3 : file_kind.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) parse_tree.file_kind
endif

ifeq (x,y)
parse_tree.file_kind.optdate : file_kind.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) parse_tree.file_kind
endif

ifeq (x,y)
parse_tree.file_kind.trans_opt_date : file_kind.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) parse_tree.file_kind
endif

ifeq (x,y)
parse_tree.file_kind.c_date : file_kind.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) parse_tree.file_kind $(ERR_REDIRECT)
endif

ifeq (x,y)
parse_tree.file_kind.java_date : file_kind.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only parse_tree.file_kind $(ERR_REDIRECT)
endif

