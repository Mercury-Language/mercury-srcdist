

transform_hlds.ctgc.structure_sharing.optdate transform_hlds.ctgc.structure_sharing.trans_opt_date structure_sharing.err transform_hlds.ctgc.structure_sharing.c_date transform_hlds.ctgc.structure_sharing.s_date transform_hlds.ctgc.structure_sharing.pic_s_date transform_hlds.ctgc.structure_sharing.il_date transform_hlds.ctgc.structure_sharing.java_date : structure_sharing.m transform_hlds.ctgc.structure_sharing.int0 \
	transform_hlds.ctgc.int0 \
	transform_hlds.int0 \
	builtin.int \
	check_hlds.int \
	hlds.int \
	libs.int \
	ll_backend.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int

transform_hlds.ctgc.structure_sharing.pic_o transform_hlds.ctgc.structure_sharing.$O : \
	builtin.mih \
	check_hlds.mih \
	hlds.mih \
	libs.mih \
	ll_backend.mih \
	mdbcomp.mih \
	parse_tree.mih \
	private_builtin.mih \
	transform_hlds.mih \
	transform_hlds.ctgc.mih

transform_hlds.ctgc.structure_sharing.mh transform_hlds.ctgc.structure_sharing.mih : transform_hlds.ctgc.structure_sharing.c


ifeq ($(findstring il,$(GRADE)),il)
transform_hlds.ctgc.structure_sharing.module_dep : transform_hlds.ctgc.structure_sharing.il
else
 ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.ctgc.structure_sharing.module_dep : jmercury/transform_hlds__ctgc__structure_sharing.java
 else
transform_hlds.ctgc.structure_sharing.module_dep : transform_hlds.ctgc.structure_sharing.c
 endif
endif


transform_hlds.ctgc.structure_sharing.date transform_hlds.ctgc.structure_sharing.date0 \
	transform_hlds.ctgc.date \
	transform_hlds.date : structure_sharing.m \
	transform_hlds.ctgc.int0 \
	transform_hlds.int0 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	ll_backend.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3

transform_hlds.ctgc.structure_sharing.date0 \
	transform_hlds.ctgc.date0 \
	transform_hlds.date0 : structure_sharing.m \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	ll_backend.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3


transform_hlds.ctgc.structure_sharing.int0 : transform_hlds.ctgc.structure_sharing.date0
	@:
transform_hlds.ctgc.structure_sharing.int : transform_hlds.ctgc.structure_sharing.date
	@:
transform_hlds.ctgc.structure_sharing.int2 : transform_hlds.ctgc.structure_sharing.date
	@:
transform_hlds.ctgc.structure_sharing.int3 : transform_hlds.ctgc.structure_sharing.date3
	@:
transform_hlds.ctgc.structure_sharing.opt : transform_hlds.ctgc.structure_sharing.optdate
	@:
transform_hlds.ctgc.structure_sharing.trans_opt : transform_hlds.ctgc.structure_sharing.trans_opt_date
	@:

transform_hlds.ctgc.structure_sharing.date0 : structure_sharing.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.ctgc.structure_sharing
transform_hlds.ctgc.structure_sharing.date : structure_sharing.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.ctgc.structure_sharing
transform_hlds.ctgc.structure_sharing.date3 : structure_sharing.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.ctgc.structure_sharing
transform_hlds.ctgc.structure_sharing.optdate : structure_sharing.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.ctgc.structure_sharing
transform_hlds.ctgc.structure_sharing.trans_opt_date : structure_sharing.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.ctgc.structure_sharing
transform_hlds.ctgc.structure_sharing.c_date : structure_sharing.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.ctgc.structure_sharing $(ERR_REDIRECT)
transform_hlds.ctgc.structure_sharing.il_date : structure_sharing.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only transform_hlds.ctgc.structure_sharing $(ERR_REDIRECT)
transform_hlds.ctgc.structure_sharing.java_date : structure_sharing.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.ctgc.structure_sharing $(ERR_REDIRECT)
