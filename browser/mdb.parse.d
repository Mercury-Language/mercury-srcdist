

mdb.parse.optdate mdb.parse.trans_opt_date parse.err mdb.parse.c_date mdb.parse.s_date mdb.parse.pic_s_date mdb.parse.il_date mdb.parse.java_date : parse.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	char.int \
	getopt.int \
	int.int \
	io.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	string.int \
	mdb.browser_info.int \
	mdb.util.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2 \
	mdb.browser_term.int2 \
	mdb.term_rep.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdb.parse.mh mdb.parse.mih : mdb.parse.s
else
mdb.parse.mh mdb.parse.mih : mdb.parse.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.parse.module_dep : mdb.parse.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.parse.module_dep : mdb.parse.il
  ifeq ($(findstring java,$(GRADE)),java)
mdb.parse.module_dep : mdb.parse.java
  else
mdb.parse.module_dep : mdb.parse.c
  endif
 endif
endif

mdb.parse.date mdb.parse.date0 \
	mdb.date : parse.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	string.int3 \
	mdb.browser_info.int3 \
	mdb.util.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdb.term_rep.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

mdb.parse.date0 \
	mdb.date0 : parse.m \
	bool.int3 \
	builtin.int3 \
	char.int3 \
	getopt.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	string.int3 \
	mdb.browser_info.int3 \
	mdb.util.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdb.term_rep.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



mdb.parse.$O :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh



mdb.parse.pic_o :  \
	array.mh \
	array.mh \
	mdbcomp.rtti_access.mh \
	mdbcomp.rtti_access.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh


mdb.parse.int0 : mdb.parse.date0
	@:
mdb.parse.int : mdb.parse.date
	@:
mdb.parse.int2 : mdb.parse.date
	@:
mdb.parse.int3 : mdb.parse.date3
	@:
mdb.parse.opt : mdb.parse.optdate
	@:
mdb.parse.trans_opt : mdb.parse.trans_opt_date
	@:

mdb.parse.date0 : parse.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.parse
mdb.parse.date : parse.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.parse
mdb.parse.date3 : parse.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.parse
mdb.parse.optdate : parse.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.parse
mdb.parse.trans_opt_date : parse.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.parse
mdb.parse.c_date : parse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.parse $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.parse.s_date : parse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.parse $(ERR_REDIRECT)
mdb.parse.pic_s_date : parse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.parse $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.parse.il_date : parse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.parse $(ERR_REDIRECT)
mdb.parse.java_date : parse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.parse $(ERR_REDIRECT)
