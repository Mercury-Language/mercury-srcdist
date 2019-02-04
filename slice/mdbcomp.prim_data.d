

mdbcomp.prim_data.optdate mdbcomp.prim_data.trans_opt_date prim_data.err mdbcomp.prim_data.c_date mdbcomp.prim_data.s_date mdbcomp.prim_data.pic_s_date mdbcomp.prim_data.il_date mdbcomp.prim_data.java_date : prim_data.m \
	mdbcomp.int0 \
	builtin.int \
	int.int \
	library.int \
	list.int \
	private_builtin.int \
	string.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
mdbcomp.prim_data.mh mdbcomp.prim_data.mih : mdbcomp.prim_data.s
else
mdbcomp.prim_data.mh mdbcomp.prim_data.mih : mdbcomp.prim_data.c
endif

ifeq ($(TARGET_ASM),yes)
mdbcomp.prim_data.module_dep : mdbcomp.prim_data.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdbcomp.prim_data.module_dep : mdbcomp.prim_data.il
  ifeq ($(findstring java,$(GRADE)),java)
mdbcomp.prim_data.module_dep : jmercury/mdbcomp__prim_data.java
  else
mdbcomp.prim_data.module_dep : mdbcomp.prim_data.c
  endif
 endif
endif

mdbcomp.prim_data.date mdbcomp.prim_data.date0 \
	mdbcomp.date : prim_data.m \
	mdbcomp.int0 \
	builtin.int3 \
	int.int3 \
	library.int3 \
	list.int3 \
	private_builtin.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

mdbcomp.prim_data.date0 \
	mdbcomp.date0 : prim_data.m \
	builtin.int3 \
	int.int3 \
	library.int3 \
	list.int3 \
	private_builtin.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



mdbcomp.prim_data.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.mh



mdbcomp.prim_data.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh \
	mdbcomp.mh


mdbcomp.prim_data.int0 : mdbcomp.prim_data.date0
	@:
mdbcomp.prim_data.int : mdbcomp.prim_data.date
	@:
mdbcomp.prim_data.int2 : mdbcomp.prim_data.date
	@:
mdbcomp.prim_data.int3 : mdbcomp.prim_data.date3
	@:
mdbcomp.prim_data.opt : mdbcomp.prim_data.optdate
	@:
mdbcomp.prim_data.trans_opt : mdbcomp.prim_data.trans_opt_date
	@:

mdbcomp.prim_data.date0 : prim_data.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) prim_data.m
mdbcomp.prim_data.date : prim_data.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) prim_data.m
mdbcomp.prim_data.date3 : prim_data.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) prim_data.m
mdbcomp.prim_data.optdate : prim_data.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) prim_data.m
mdbcomp.prim_data.trans_opt_date : prim_data.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) prim_data.m
mdbcomp.prim_data.c_date : prim_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) prim_data.m $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdbcomp.prim_data.s_date : prim_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only prim_data.m $(ERR_REDIRECT)
mdbcomp.prim_data.pic_s_date : prim_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" prim_data.m $(ERR_REDIRECT)
endif # TARGET_ASM
mdbcomp.prim_data.il_date : prim_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only prim_data.m $(ERR_REDIRECT)
mdbcomp.prim_data.java_date : prim_data.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only prim_data.m $(ERR_REDIRECT)
