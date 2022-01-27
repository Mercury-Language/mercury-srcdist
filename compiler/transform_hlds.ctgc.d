

transform_hlds.ctgc.optdate transform_hlds.ctgc.trans_opt_date ctgc.err transform_hlds.ctgc.c_date transform_hlds.ctgc.java_date : ctgc.m transform_hlds.ctgc.int0 \
	transform_hlds.int0 \
	builtin.int \
	check_hlds.int \
	hlds.int \
	libs.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int

transform_hlds.ctgc.pic_o transform_hlds.ctgc.$O : \
	builtin.mih \
	check_hlds.mih \
	hlds.mih \
	libs.mih \
	mdbcomp.mih \
	parse_tree.mih \
	private_builtin.mih \
	transform_hlds.mih

transform_hlds.ctgc.mh transform_hlds.ctgc.mih : transform_hlds.ctgc.c


ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.ctgc.module_dep : jmercury/transform_hlds__ctgc.java
else
transform_hlds.ctgc.module_dep : transform_hlds.ctgc.c
endif


transform_hlds.ctgc.date transform_hlds.ctgc.date0 \
	transform_hlds.date : ctgc.m \
	transform_hlds.int0 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3

transform_hlds.ctgc.date0 \
	transform_hlds.date0 : ctgc.m \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3


transform_hlds.ctgc.int0 : transform_hlds.ctgc.date0
	@:
transform_hlds.ctgc.int : transform_hlds.ctgc.date
	@:
transform_hlds.ctgc.int2 : transform_hlds.ctgc.date
	@:
transform_hlds.ctgc.int3 : transform_hlds.ctgc.date3
	@:
transform_hlds.ctgc.opt : transform_hlds.ctgc.optdate
	@:
transform_hlds.ctgc.trans_opt : transform_hlds.ctgc.trans_opt_date
	@:

transform_hlds.ctgc.date0 : ctgc.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.date : ctgc.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.date3 : ctgc.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.optdate : ctgc.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.trans_opt_date : ctgc.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.ctgc
transform_hlds.ctgc.c_date : ctgc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.ctgc $(ERR_REDIRECT)
transform_hlds.ctgc.java_date : ctgc.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.ctgc $(ERR_REDIRECT)
