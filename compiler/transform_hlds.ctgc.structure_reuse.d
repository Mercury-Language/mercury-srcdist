

transform_hlds.ctgc.structure_reuse.optdate transform_hlds.ctgc.structure_reuse.trans_opt_date structure_reuse.err transform_hlds.ctgc.structure_reuse.c_date transform_hlds.ctgc.structure_reuse.s_date transform_hlds.ctgc.structure_reuse.pic_s_date transform_hlds.ctgc.structure_reuse.java_date : structure_reuse.m transform_hlds.ctgc.structure_reuse.int0 \
	transform_hlds.int0 \
	transform_hlds.ctgc.int0 \
	builtin.int \
	check_hlds.int \
	hlds.int \
	libs.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	transform_hlds.ctgc.structure_sharing.int \
	ll_backend.int2

transform_hlds.ctgc.structure_reuse.pic_o transform_hlds.ctgc.structure_reuse.$O : \
	builtin.mih \
	check_hlds.mih \
	hlds.mih \
	libs.mih \
	ll_backend.mih \
	mdbcomp.mih \
	parse_tree.mih \
	private_builtin.mih \
	transform_hlds.mih \
	transform_hlds.ctgc.mih \
	transform_hlds.ctgc.structure_sharing.mih

transform_hlds.ctgc.structure_reuse.mh transform_hlds.ctgc.structure_reuse.mih : transform_hlds.ctgc.structure_reuse.c


ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.ctgc.structure_reuse.module_dep : jmercury/transform_hlds__ctgc__structure_reuse.java
else
transform_hlds.ctgc.structure_reuse.module_dep : transform_hlds.ctgc.structure_reuse.c
endif


transform_hlds.ctgc.structure_reuse.date transform_hlds.ctgc.structure_reuse.date0 \
	transform_hlds.date \
	transform_hlds.ctgc.date : structure_reuse.m \
	transform_hlds.int0 \
	transform_hlds.ctgc.int0 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	transform_hlds.ctgc.structure_sharing.int3 \
	ll_backend.int3

transform_hlds.ctgc.structure_reuse.date0 \
	transform_hlds.date0 \
	transform_hlds.ctgc.date0 : structure_reuse.m \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	transform_hlds.ctgc.structure_sharing.int3 \
	ll_backend.int3


transform_hlds.ctgc.structure_reuse.int0 : transform_hlds.ctgc.structure_reuse.date0
	@:
transform_hlds.ctgc.structure_reuse.int : transform_hlds.ctgc.structure_reuse.date
	@:
transform_hlds.ctgc.structure_reuse.int2 : transform_hlds.ctgc.structure_reuse.date
	@:
transform_hlds.ctgc.structure_reuse.int3 : transform_hlds.ctgc.structure_reuse.date3
	@:
transform_hlds.ctgc.structure_reuse.opt : transform_hlds.ctgc.structure_reuse.optdate
	@:
transform_hlds.ctgc.structure_reuse.trans_opt : transform_hlds.ctgc.structure_reuse.trans_opt_date
	@:

transform_hlds.ctgc.structure_reuse.date0 : structure_reuse.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.ctgc.structure_reuse
transform_hlds.ctgc.structure_reuse.date : structure_reuse.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.ctgc.structure_reuse
transform_hlds.ctgc.structure_reuse.date3 : structure_reuse.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.ctgc.structure_reuse
transform_hlds.ctgc.structure_reuse.optdate : structure_reuse.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.ctgc.structure_reuse
transform_hlds.ctgc.structure_reuse.trans_opt_date : structure_reuse.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.ctgc.structure_reuse
transform_hlds.ctgc.structure_reuse.c_date : structure_reuse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.ctgc.structure_reuse $(ERR_REDIRECT)
transform_hlds.ctgc.structure_reuse.java_date : structure_reuse.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.ctgc.structure_reuse $(ERR_REDIRECT)
