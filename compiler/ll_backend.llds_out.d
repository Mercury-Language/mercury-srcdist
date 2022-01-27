

ll_backend.llds_out.optdate ll_backend.llds_out.trans_opt_date llds_out.err ll_backend.llds_out.c_date ll_backend.llds_out.s_date ll_backend.llds_out.pic_s_date ll_backend.llds_out.il_date ll_backend.llds_out.java_date : llds_out.m ll_backend.llds_out.int0 \
	ll_backend.int0 \
	backend_libs.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	libs.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int

ll_backend.llds_out.pic_o ll_backend.llds_out.$O : \
	backend_libs.mih \
	builtin.mih \
	check_hlds.mih \
	hlds.mih \
	libs.mih \
	ll_backend.mih \
	mdbcomp.mih \
	parse_tree.mih \
	private_builtin.mih

ll_backend.llds_out.mh ll_backend.llds_out.mih : ll_backend.llds_out.c


ifeq ($(findstring il,$(GRADE)),il)
ll_backend.llds_out.module_dep : ll_backend.llds_out.il
else
 ifeq ($(findstring java,$(GRADE)),java)
ll_backend.llds_out.module_dep : jmercury/ll_backend__llds_out.java
 else
ll_backend.llds_out.module_dep : ll_backend.llds_out.c
 endif
endif


ll_backend.llds_out.date ll_backend.llds_out.date0 \
	ll_backend.date : llds_out.m \
	ll_backend.int0 \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3

ll_backend.llds_out.date0 \
	ll_backend.date0 : llds_out.m \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3


ll_backend.llds_out.int0 : ll_backend.llds_out.date0
	@:
ll_backend.llds_out.int : ll_backend.llds_out.date
	@:
ll_backend.llds_out.int2 : ll_backend.llds_out.date
	@:
ll_backend.llds_out.int3 : ll_backend.llds_out.date3
	@:
ll_backend.llds_out.opt : ll_backend.llds_out.optdate
	@:
ll_backend.llds_out.trans_opt : ll_backend.llds_out.trans_opt_date
	@:

ll_backend.llds_out.date0 : llds_out.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) ll_backend.llds_out
ll_backend.llds_out.date : llds_out.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) ll_backend.llds_out
ll_backend.llds_out.date3 : llds_out.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) ll_backend.llds_out
ll_backend.llds_out.optdate : llds_out.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) ll_backend.llds_out
ll_backend.llds_out.trans_opt_date : llds_out.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) ll_backend.llds_out
ll_backend.llds_out.c_date : llds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) ll_backend.llds_out $(ERR_REDIRECT)
ll_backend.llds_out.il_date : llds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --il-only ll_backend.llds_out $(ERR_REDIRECT)
ll_backend.llds_out.java_date : llds_out.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only ll_backend.llds_out $(ERR_REDIRECT)
