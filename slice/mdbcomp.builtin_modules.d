

mdbcomp.builtin_modules.optdate mdbcomp.builtin_modules.trans_opt_date builtin_modules.err mdbcomp.builtin_modules.c_date mdbcomp.builtin_modules.s_date mdbcomp.builtin_modules.pic_s_date mdbcomp.builtin_modules.il_date mdbcomp.builtin_modules.java_date : builtin_modules.m \
	mdbcomp.int0 \
	builtin.int \
	int.int \
	library.int \
	list.int \
	private_builtin.int \
	string.int \
	mdbcomp.sym_name.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
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

mdbcomp.builtin_modules.pic_o mdbcomp.builtin_modules.$O : \
	array.mih \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	int.mih \
	integer.mih \
	io.mih \
	library.mih \
	list.mih \
	map.mih \
	maybe.mih \
	mdbcomp.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih \
	mdbcomp.sym_name.mih

mdbcomp.builtin_modules.mh mdbcomp.builtin_modules.mih : mdbcomp.builtin_modules.c


ifeq ($(findstring il,$(GRADE)),il)
mdbcomp.builtin_modules.module_dep : mdbcomp.builtin_modules.il
else
 ifeq ($(findstring java,$(GRADE)),java)
mdbcomp.builtin_modules.module_dep : jmercury/mdbcomp__builtin_modules.java
 else
mdbcomp.builtin_modules.module_dep : mdbcomp.builtin_modules.c
 endif
endif


mdbcomp.builtin_modules.date mdbcomp.builtin_modules.date0 \
	mdbcomp.date : builtin_modules.m \
	mdbcomp.int0 \
	builtin.int3 \
	int.int3 \
	library.int3 \
	list.int3 \
	private_builtin.int3 \
	string.int3 \
	mdbcomp.sym_name.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
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

mdbcomp.builtin_modules.date0 \
	mdbcomp.date0 : builtin_modules.m \
	builtin.int3 \
	int.int3 \
	library.int3 \
	list.int3 \
	private_builtin.int3 \
	string.int3 \
	mdbcomp.sym_name.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
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



mdbcomp.builtin_modules.$O :  \
	mdbcomp.mh \
	io.mh \
	string.mh \
	time.mh



mdbcomp.builtin_modules.pic_o :  \
	mdbcomp.mh \
	io.mh \
	string.mh \
	time.mh


mdbcomp.builtin_modules.int0 : mdbcomp.builtin_modules.date0
	@:
mdbcomp.builtin_modules.int : mdbcomp.builtin_modules.date
	@:
mdbcomp.builtin_modules.int2 : mdbcomp.builtin_modules.date
	@:
mdbcomp.builtin_modules.int3 : mdbcomp.builtin_modules.date3
	@:
mdbcomp.builtin_modules.opt : mdbcomp.builtin_modules.optdate
	@:
mdbcomp.builtin_modules.trans_opt : mdbcomp.builtin_modules.trans_opt_date
	@:

mdbcomp.builtin_modules.date0 : builtin_modules.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) builtin_modules.m
mdbcomp.builtin_modules.date : builtin_modules.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) builtin_modules.m
mdbcomp.builtin_modules.date3 : builtin_modules.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) builtin_modules.m
mdbcomp.builtin_modules.optdate : builtin_modules.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) builtin_modules.m
mdbcomp.builtin_modules.trans_opt_date : builtin_modules.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) builtin_modules.m
mdbcomp.builtin_modules.c_date : builtin_modules.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) builtin_modules.m $(ERR_REDIRECT)
mdbcomp.builtin_modules.il_date : builtin_modules.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only builtin_modules.m $(ERR_REDIRECT)
mdbcomp.builtin_modules.java_date : builtin_modules.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only builtin_modules.m $(ERR_REDIRECT)
