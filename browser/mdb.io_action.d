

mdb.io_action.optdate mdb.io_action.trans_opt_date io_action.err mdb.io_action.c_date mdb.io_action.s_date mdb.io_action.pic_s_date mdb.io_action.il_date mdb.io_action.java_date : io_action.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	io.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	univ.int \
	mdb.browser_term.int \
	mdbcomp.prim_data.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2

ifeq ($(TARGET_ASM),yes)
mdb.io_action.mh mdb.io_action.mih : mdb.io_action.s
else
mdb.io_action.mh mdb.io_action.mih : mdb.io_action.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.io_action.module_dep : mdb.io_action.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.io_action.module_dep : mdb.io_action.il
  ifeq ($(findstring java,$(GRADE)),java)
mdb.io_action.module_dep : mercury/mdb_/io_action.java
  else
mdb.io_action.module_dep : mdb.io_action.c
  endif
 endif
endif

mdb.io_action.date mdb.io_action.date0 \
	mdb.date : io_action.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdbcomp.prim_data.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3

mdb.io_action.date0 \
	mdb.date0 : io_action.m \
	bool.int3 \
	builtin.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	univ.int3 \
	mdb.browser_term.int3 \
	mdbcomp.prim_data.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3



mdb.io_action.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.io_action.mh



mdb.io_action.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.io_action.mh


mdb.io_action.int0 : mdb.io_action.date0
	@:
mdb.io_action.int : mdb.io_action.date
	@:
mdb.io_action.int2 : mdb.io_action.date
	@:
mdb.io_action.int3 : mdb.io_action.date3
	@:
mdb.io_action.opt : mdb.io_action.optdate
	@:
mdb.io_action.trans_opt : mdb.io_action.trans_opt_date
	@:

mdb.io_action.date0 : io_action.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.io_action
mdb.io_action.date : io_action.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.io_action
mdb.io_action.date3 : io_action.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.io_action
mdb.io_action.optdate : io_action.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.io_action
mdb.io_action.trans_opt_date : io_action.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.io_action
mdb.io_action.c_date : io_action.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.io_action $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.io_action.s_date : io_action.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.io_action $(ERR_REDIRECT)
mdb.io_action.pic_s_date : io_action.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.io_action $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.io_action.il_date : io_action.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.io_action $(ERR_REDIRECT)
mdb.io_action.java_date : io_action.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.io_action $(ERR_REDIRECT)
