

mdb.sized_pretty.optdate mdb.sized_pretty.trans_opt_date sized_pretty.err mdb.sized_pretty.c_date mdb.sized_pretty.s_date mdb.sized_pretty.pic_s_date mdb.sized_pretty.il_date mdb.sized_pretty.java_date : sized_pretty.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	deconstruct.int \
	int.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	pair.int \
	pprint.int \
	private_builtin.int \
	std_util.int \
	string.int \
	univ.int \
	mdb.browser_info.int \
	mdb.browser_term.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	cord.int2 \
	enum.int2 \
	getopt.int2 \
	io.int2 \
	map.int2 \
	ops.int2 \
	pretty_printer.int2 \
	random.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	mdb.parse.int2 \
	mdb.term_rep.int2 \
	mdbcomp.prim_data.int2 \
	mdbcomp.program_representation.int2 \
	mdbcomp.rtti_access.int2 \
	mdbcomp.trace_counts.int2

ifeq ($(TARGET_ASM),yes)
mdb.sized_pretty.mh mdb.sized_pretty.mih : mdb.sized_pretty.s
else
mdb.sized_pretty.mh mdb.sized_pretty.mih : mdb.sized_pretty.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.sized_pretty.module_dep : mdb.sized_pretty.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.sized_pretty.module_dep : mdb.sized_pretty.il
  ifeq ($(findstring java,$(GRADE)),java)
mdb.sized_pretty.module_dep : mdb.sized_pretty.java
  else
mdb.sized_pretty.module_dep : mdb.sized_pretty.c
  endif
 endif
endif

mdb.sized_pretty.date mdb.sized_pretty.date0 \
	mdb.date : sized_pretty.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	deconstruct.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	pprint.int3 \
	private_builtin.int3 \
	std_util.int3 \
	string.int3 \
	univ.int3 \
	mdb.browser_info.int3 \
	mdb.browser_term.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	enum.int3 \
	getopt.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	mdb.parse.int3 \
	mdb.term_rep.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3

mdb.sized_pretty.date0 \
	mdb.date0 : sized_pretty.m \
	bool.int3 \
	builtin.int3 \
	deconstruct.int3 \
	int.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	pair.int3 \
	pprint.int3 \
	private_builtin.int3 \
	std_util.int3 \
	string.int3 \
	univ.int3 \
	mdb.browser_info.int3 \
	mdb.browser_term.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	cord.int3 \
	enum.int3 \
	getopt.int3 \
	io.int3 \
	map.int3 \
	ops.int3 \
	pretty_printer.int3 \
	random.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	mdb.parse.int3 \
	mdb.term_rep.int3 \
	mdbcomp.prim_data.int3 \
	mdbcomp.program_representation.int3 \
	mdbcomp.rtti_access.int3 \
	mdbcomp.trace_counts.int3



mdb.sized_pretty.$O :  \
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



mdb.sized_pretty.pic_o :  \
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


mdb.sized_pretty.int0 : mdb.sized_pretty.date0
	@:
mdb.sized_pretty.int : mdb.sized_pretty.date
	@:
mdb.sized_pretty.int2 : mdb.sized_pretty.date
	@:
mdb.sized_pretty.int3 : mdb.sized_pretty.date3
	@:
mdb.sized_pretty.opt : mdb.sized_pretty.optdate
	@:
mdb.sized_pretty.trans_opt : mdb.sized_pretty.trans_opt_date
	@:

mdb.sized_pretty.date0 : sized_pretty.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.sized_pretty
mdb.sized_pretty.date : sized_pretty.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.sized_pretty
mdb.sized_pretty.date3 : sized_pretty.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.sized_pretty
mdb.sized_pretty.optdate : sized_pretty.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.sized_pretty
mdb.sized_pretty.trans_opt_date : sized_pretty.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.sized_pretty
mdb.sized_pretty.c_date : sized_pretty.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.sized_pretty $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.sized_pretty.s_date : sized_pretty.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.sized_pretty $(ERR_REDIRECT)
mdb.sized_pretty.pic_s_date : sized_pretty.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.sized_pretty $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.sized_pretty.il_date : sized_pretty.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.sized_pretty $(ERR_REDIRECT)
mdb.sized_pretty.java_date : sized_pretty.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.sized_pretty $(ERR_REDIRECT)
