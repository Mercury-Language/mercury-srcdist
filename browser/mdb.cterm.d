

mdb.cterm.optdate mdb.cterm.trans_opt_date cterm.err mdb.cterm.c_date mdb.cterm.s_date mdb.cterm.pic_s_date mdb.cterm.il_date mdb.cterm.java_date : cterm.m \
	mdb.int0 \
	bool.int \
	builtin.int \
	deconstruct.int \
	list.int \
	mdbcomp.int \
	private_builtin.int \
	univ.int \
	assoc_list.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2

ifeq ($(TARGET_ASM),yes)
mdb.cterm.mh mdb.cterm.mih : mdb.cterm.s
else
mdb.cterm.mh mdb.cterm.mih : mdb.cterm.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.cterm.module_dep : mdb.cterm.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.cterm.module_dep : mdb.cterm.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdb.cterm.module_dep : jmercury/mdb__cterm.java
  else
mdb.cterm.module_dep : mdb.cterm.c
  endif
 endif
endif

mdb.cterm.date mdb.cterm.date0 \
	mdb.date : cterm.m \
	mdb.int0 \
	bool.int3 \
	builtin.int3 \
	deconstruct.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3

mdb.cterm.date0 \
	mdb.date0 : cterm.m \
	bool.int3 \
	builtin.int3 \
	deconstruct.int3 \
	list.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	univ.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3



mdb.cterm.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.cterm.mh



mdb.cterm.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.cterm.mh


mdb.cterm.int0 : mdb.cterm.date0
	@:
mdb.cterm.int : mdb.cterm.date
	@:
mdb.cterm.int2 : mdb.cterm.date
	@:
mdb.cterm.int3 : mdb.cterm.date3
	@:
mdb.cterm.opt : mdb.cterm.optdate
	@:
mdb.cterm.trans_opt : mdb.cterm.trans_opt_date
	@:

mdb.cterm.date0 : cterm.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.cterm
mdb.cterm.date : cterm.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.cterm
mdb.cterm.date3 : cterm.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.cterm
mdb.cterm.optdate : cterm.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.cterm
mdb.cterm.trans_opt_date : cterm.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.cterm
mdb.cterm.c_date : cterm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.cterm $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.cterm.s_date : cterm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.cterm $(ERR_REDIRECT)
mdb.cterm.pic_s_date : cterm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.cterm $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.cterm.il_date : cterm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.cterm $(ERR_REDIRECT)
mdb.cterm.java_date : cterm.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.cterm $(ERR_REDIRECT)
