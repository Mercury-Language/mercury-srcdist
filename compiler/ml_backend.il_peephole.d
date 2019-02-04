

ml_backend.il_peephole.optdate ml_backend.il_peephole.trans_opt_date il_peephole.err ml_backend.il_peephole.c_date ml_backend.il_peephole.s_date ml_backend.il_peephole.pic_s_date ml_backend.il_peephole.il_date ml_backend.il_peephole.java_date : il_peephole.m \
	ml_backend.int0 \
	assoc_list.int \
	backend_libs.int \
	bool.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	int.int \
	libs.int \
	list.int \
	mdbcomp.int \
	pair.int \
	parse_tree.int \
	private_builtin.int \
	string.int \
	ml_backend.ilasm.int \
	ml_backend.ilds.int \
	array.int2 \
	bitmap.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	integer.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
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
	univ.int2

ifeq ($(TARGET_ASM),yes)
ml_backend.il_peephole.mh ml_backend.il_peephole.mih : ml_backend.il_peephole.s
else
ml_backend.il_peephole.mh ml_backend.il_peephole.mih : ml_backend.il_peephole.c
endif

ifeq ($(TARGET_ASM),yes)
ml_backend.il_peephole.module_dep : ml_backend.il_peephole.s
else
 ifeq ($(findstring il,$(GRADE)),il)
ml_backend.il_peephole.module_dep : ml_backend.il_peephole.il
  ifeq ($(findstring java,$(GRADE)),java)
ml_backend.il_peephole.module_dep : ml_backend.il_peephole.java
  else
ml_backend.il_peephole.module_dep : ml_backend.il_peephole.c
  endif
 endif
endif

ml_backend.il_peephole.date ml_backend.il_peephole.date0 \
	ml_backend.date : il_peephole.m \
	ml_backend.int0 \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	string.int3 \
	ml_backend.ilasm.int3 \
	ml_backend.ilds.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
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
	univ.int3

ml_backend.il_peephole.date0 \
	ml_backend.date0 : il_peephole.m \
	assoc_list.int3 \
	backend_libs.int3 \
	bool.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	int.int3 \
	libs.int3 \
	list.int3 \
	mdbcomp.int3 \
	pair.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	string.int3 \
	ml_backend.ilasm.int3 \
	ml_backend.ilds.int3 \
	array.int3 \
	bitmap.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	integer.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
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
	univ.int3



ml_backend.il_peephole.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh



ml_backend.il_peephole.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	io.mh \
	io.mh


ml_backend.il_peephole.int0 : ml_backend.il_peephole.date0
	@:
ml_backend.il_peephole.int : ml_backend.il_peephole.date
	@:
ml_backend.il_peephole.int2 : ml_backend.il_peephole.date
	@:
ml_backend.il_peephole.int3 : ml_backend.il_peephole.date3
	@:
ml_backend.il_peephole.opt : ml_backend.il_peephole.optdate
	@:
ml_backend.il_peephole.trans_opt : ml_backend.il_peephole.trans_opt_date
	@:

ml_backend.il_peephole.date0 : il_peephole.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ml_backend.il_peephole
ml_backend.il_peephole.date : il_peephole.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ml_backend.il_peephole
ml_backend.il_peephole.date3 : il_peephole.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ml_backend.il_peephole
ml_backend.il_peephole.optdate : il_peephole.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ml_backend.il_peephole
ml_backend.il_peephole.trans_opt_date : il_peephole.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ml_backend.il_peephole
ml_backend.il_peephole.c_date : il_peephole.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ml_backend.il_peephole $(ERR_REDIRECT)
ifeq ($(TARGET_ASM),yes)
ml_backend.il_peephole.s_date : il_peephole.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only ml_backend.il_peephole $(ERR_REDIRECT)
ml_backend.il_peephole.pic_s_date : il_peephole.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --target-code-only --pic \
		--cflags "$(GCCFLAGS_FOR_PIC)" ml_backend.il_peephole $(ERR_REDIRECT)
endif # TARGET_ASM
ml_backend.il_peephole.il_date : il_peephole.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ml_backend.il_peephole $(ERR_REDIRECT)
ml_backend.il_peephole.java_date : il_peephole.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ml_backend.il_peephole $(ERR_REDIRECT)
