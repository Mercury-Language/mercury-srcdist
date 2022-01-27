

hlds.hlds_out.optdate hlds.hlds_out.trans_opt_date hlds_out.err hlds.hlds_out.c_date hlds.hlds_out.s_date hlds.hlds_out.pic_s_date hlds.hlds_out.il_date hlds.hlds_out.java_date : hlds_out.m hlds.hlds_out.int0 \
	hlds.int0 \
	builtin.int \
	check_hlds.int \
	libs.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	transform_hlds.int

hlds.hlds_out.pic_o hlds.hlds_out.$O : \
	builtin.mih \
	check_hlds.mih \
	hlds.mih \
	libs.mih \
	mdbcomp.mih \
	parse_tree.mih \
	private_builtin.mih \
	transform_hlds.mih

hlds.hlds_out.mh hlds.hlds_out.mih : hlds.hlds_out.c


ifeq ($(findstring il,$(GRADE)),il)
hlds.hlds_out.module_dep : hlds.hlds_out.il
else
 ifeq ($(findstring java,$(GRADE)),java)
hlds.hlds_out.module_dep : jmercury/hlds__hlds_out.java
 else
hlds.hlds_out.module_dep : hlds.hlds_out.c
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
	transform_hlds.int3

hlds.hlds_out.date0 \
	hlds.date0 : hlds_out.m \
	builtin.int3 \
	check_hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	transform_hlds.int3


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
hlds.hlds_out.il_date : hlds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only hlds.hlds_out $(ERR_REDIRECT)
hlds.hlds_out.java_date : hlds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only hlds.hlds_out $(ERR_REDIRECT)
