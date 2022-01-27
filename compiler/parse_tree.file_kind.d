

parse_tree.file_kind.optdate parse_tree.file_kind.trans_opt_date file_kind.err parse_tree.file_kind.c_date parse_tree.file_kind.java_date : file_kind.m \
	parse_tree.int0 \
	builtin.int \
	libs.int \
	mdbcomp.int \
	private_builtin.int

parse_tree.file_kind.pic_o parse_tree.file_kind.$O : \
	builtin.mih \
	libs.mih \
	mdbcomp.mih \
	parse_tree.mih \
	private_builtin.mih

parse_tree.file_kind.mh parse_tree.file_kind.mih : parse_tree.file_kind.c


ifeq ($(findstring java,$(GRADE)),java)
parse_tree.file_kind.module_dep : jmercury/parse_tree__file_kind.java
else
parse_tree.file_kind.module_dep : parse_tree.file_kind.c
endif


parse_tree.file_kind.date parse_tree.file_kind.date0 \
	parse_tree.date : file_kind.m \
	parse_tree.int0 \
	builtin.int3 \
	libs.int3 \
	mdbcomp.int3 \
	private_builtin.int3

parse_tree.file_kind.date0 \
	parse_tree.date0 : file_kind.m \
	builtin.int3 \
	libs.int3 \
	mdbcomp.int3 \
	private_builtin.int3


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
