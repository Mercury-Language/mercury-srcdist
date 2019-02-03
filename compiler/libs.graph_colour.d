

libs.graph_colour.optdate libs.graph_colour.trans_opt_date graph_colour.err libs.graph_colour.c_date libs.graph_colour.s_date libs.graph_colour.pic_s_date libs.graph_colour.il_date libs.graph_colour.java_date : graph_colour.m \
	libs.int0 \
	builtin.int \
	list.int \
	private_builtin.int \
	require.int \
	set.int \
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
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
libs.graph_colour.mh libs.graph_colour.mih : libs.graph_colour.s
else
libs.graph_colour.mh libs.graph_colour.mih : libs.graph_colour.c
endif

ifeq ($(TARGET_ASM),yes)
libs.graph_colour.module_dep : libs.graph_colour.s
else
 ifeq ($(findstring il,$(GRADE)),il)
libs.graph_colour.module_dep : libs.graph_colour.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
libs.graph_colour.module_dep : jmercury/libs__graph_colour.java
  else
libs.graph_colour.module_dep : libs.graph_colour.c
  endif
 endif
endif

libs.graph_colour.date libs.graph_colour.date0 \
	libs.date : graph_colour.m \
	libs.int0 \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
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
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

libs.graph_colour.date0 \
	libs.date0 : graph_colour.m \
	builtin.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	set.int3 \
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
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



libs.graph_colour.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



libs.graph_colour.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


libs.graph_colour.int0 : libs.graph_colour.date0
	@:
libs.graph_colour.int : libs.graph_colour.date
	@:
libs.graph_colour.int2 : libs.graph_colour.date
	@:
libs.graph_colour.int3 : libs.graph_colour.date3
	@:
libs.graph_colour.opt : libs.graph_colour.optdate
	@:
libs.graph_colour.trans_opt : libs.graph_colour.trans_opt_date
	@:

libs.graph_colour.date0 : graph_colour.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.graph_colour
libs.graph_colour.date : graph_colour.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.graph_colour
libs.graph_colour.date3 : graph_colour.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.graph_colour
libs.graph_colour.optdate : graph_colour.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.graph_colour
libs.graph_colour.trans_opt_date : graph_colour.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.graph_colour
libs.graph_colour.c_date : graph_colour.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.graph_colour $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
libs.graph_colour.s_date : graph_colour.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only libs.graph_colour $(ERR_REDIRECT)
libs.graph_colour.pic_s_date : graph_colour.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" libs.graph_colour $(ERR_REDIRECT)
endif # TARGET_ASM
libs.graph_colour.il_date : graph_colour.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only libs.graph_colour $(ERR_REDIRECT)
libs.graph_colour.java_date : graph_colour.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.graph_colour $(ERR_REDIRECT)
