

hlds.hlds_out.optdate hlds.hlds_out.trans_opt_date hlds_out.err hlds.hlds_out.c_date hlds.hlds_out.s_date hlds.hlds_out.pic_s_date hlds.hlds_out.il_date hlds.hlds_out.java_date : hlds_out.m hlds.hlds_out.int0 \
	hlds.int0 \
	builtin.int \
	check_hlds.int \
	libs.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	transform_hlds.int \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	list.int2 \
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
	type_desc.int2 \
	univ.int2

ifeq ($(TARGET_ASM),yes)
hlds.hlds_out.mh hlds.hlds_out.mih : hlds.hlds_out.s
else
hlds.hlds_out.mh hlds.hlds_out.mih : hlds.hlds_out.c
endif

ifeq ($(TARGET_ASM),yes)
hlds.hlds_out.module_dep : hlds.hlds_out.s
else
 ifeq ($(findstring il,$(GRADE)),il)
hlds.hlds_out.module_dep : hlds.hlds_out.il
 else
  ifeq ($(findstring java,$(GRADE)),java)
hlds.hlds_out.module_dep : jmercury/hlds__hlds_out.java
  else
hlds.hlds_out.module_dep : hlds.hlds_out.c
  endif
 endif
endif

hlds.hlds_out.date hlds.hlds_out.date0 \
	hlds.date : hlds_out.m \
	hlds.int0 \
	builtin.int3 \
	check_hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	transform_hlds.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
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
	type_desc.int3 \
	univ.int3

hlds.hlds_out.date0 \
	hlds.date0 : hlds_out.m \
	builtin.int3 \
	check_hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	transform_hlds.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	list.int3 \
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
	type_desc.int3 \
	univ.int3



hlds.hlds_out.$O :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



hlds.hlds_out.pic_o :  \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


hlds.hlds_out.int0 : hlds.hlds_out.date0
	@:
hlds.hlds_out.int : hlds.hlds_out.date
	@:
hlds.hlds_out.int2 : hlds.hlds_out.date
	@:
hlds.hlds_out.int3 : hlds.hlds_out.date3
	@:
hlds.hlds_out.opt : hlds.hlds_out.optdate
	@:
hlds.hlds_out.trans_opt : hlds.hlds_out.trans_opt_date
	@:

hlds.hlds_out.date0 : hlds_out.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) hlds.hlds_out
hlds.hlds_out.date : hlds_out.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) hlds.hlds_out
hlds.hlds_out.date3 : hlds_out.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) hlds.hlds_out
hlds.hlds_out.optdate : hlds_out.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) hlds.hlds_out
hlds.hlds_out.trans_opt_date : hlds_out.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) hlds.hlds_out
hlds.hlds_out.c_date : hlds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) hlds.hlds_out $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
hlds.hlds_out.s_date : hlds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only hlds.hlds_out $(ERR_REDIRECT)
hlds.hlds_out.pic_s_date : hlds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" hlds.hlds_out $(ERR_REDIRECT)
endif # TARGET_ASM
hlds.hlds_out.il_date : hlds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only hlds.hlds_out $(ERR_REDIRECT)
hlds.hlds_out.java_date : hlds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only hlds.hlds_out $(ERR_REDIRECT)
