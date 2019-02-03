

mdb.listing.optdate mdb.listing.trans_opt_date listing.err mdb.listing.c_date mdb.listing.s_date mdb.listing.pic_s_date mdb.listing.il_date mdb.listing.java_date : listing.m \
	mdb.int0 \
	builtin.int \
	dir.int \
	int.int \
	io.int \
	list.int \
	maybe.int \
	mdbcomp.int \
	private_builtin.int \
	type_desc.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	map.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
mdb.listing.mh mdb.listing.mih : mdb.listing.s
else
mdb.listing.mh mdb.listing.mih : mdb.listing.c
endif

ifeq ($(TARGET_ASM),yes)
mdb.listing.module_dep : mdb.listing.s
else
 ifeq ($(findstring il,$(GRADE)),il)
mdb.listing.module_dep : mdb.listing.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
mdb.listing.module_dep : jmercury/mdb__listing.java
  else
mdb.listing.module_dep : mdb.listing.c
  endif
 endif
endif

mdb.listing.date mdb.listing.date0 \
	mdb.date : listing.m \
	mdb.int0 \
	builtin.int3 \
	dir.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	type_desc.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	univ.int3

mdb.listing.date0 \
	mdb.date0 : listing.m \
	builtin.int3 \
	dir.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	maybe.int3 \
	mdbcomp.int3 \
	private_builtin.int3 \
	type_desc.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	map.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	univ.int3



mdb.listing.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	dir.mh \
	dir.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.listing.mh



mdb.listing.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	dir.mh \
	dir.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh \
	mdb.mh \
	mdb.listing.mh


mdb.listing.int0 : mdb.listing.date0
	@:
mdb.listing.int : mdb.listing.date
	@:
mdb.listing.int2 : mdb.listing.date
	@:
mdb.listing.int3 : mdb.listing.date3
	@:
mdb.listing.opt : mdb.listing.optdate
	@:
mdb.listing.trans_opt : mdb.listing.trans_opt_date
	@:

mdb.listing.date0 : listing.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) mdb.listing
mdb.listing.date : listing.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) mdb.listing
mdb.listing.date3 : listing.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) mdb.listing
mdb.listing.optdate : listing.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) mdb.listing
mdb.listing.trans_opt_date : listing.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) mdb.listing
mdb.listing.c_date : listing.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) mdb.listing $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
mdb.listing.s_date : listing.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only mdb.listing $(ERR_REDIRECT)
mdb.listing.pic_s_date : listing.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" mdb.listing $(ERR_REDIRECT)
endif # TARGET_ASM
mdb.listing.il_date : listing.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only mdb.listing $(ERR_REDIRECT)
mdb.listing.java_date : listing.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only mdb.listing $(ERR_REDIRECT)
