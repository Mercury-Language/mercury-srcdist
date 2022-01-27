

check_hlds.simplify.optdate check_hlds.simplify.trans_opt_date simplify.err check_hlds.simplify.c_date check_hlds.simplify.s_date check_hlds.simplify.pic_s_date check_hlds.simplify.java_date : simplify.m check_hlds.simplify.int0 \
	check_hlds.int0 \
	builtin.int \
	private_builtin.int

check_hlds.simplify.pic_o check_hlds.simplify.$O : \
	builtin.mih \
	check_hlds.mih \
	private_builtin.mih

check_hlds.simplify.mh check_hlds.simplify.mih : check_hlds.simplify.c


ifeq ($(findstring java,$(GRADE)),java)
check_hlds.simplify.module_dep : jmercury/check_hlds__simplify.java
else
check_hlds.simplify.module_dep : check_hlds.simplify.c
endif


check_hlds.simplify.date check_hlds.simplify.date0 \
	check_hlds.date : simplify.m \
	check_hlds.int0 \
	builtin.int3 \
	private_builtin.int3

check_hlds.simplify.date0 \
	check_hlds.date0 : simplify.m \
	builtin.int3 \
	private_builtin.int3


check_hlds.simplify.int0 : check_hlds.simplify.date0
	@:
check_hlds.simplify.int : check_hlds.simplify.date
	@:
check_hlds.simplify.int2 : check_hlds.simplify.date
	@:
check_hlds.simplify.int3 : check_hlds.simplify.date3
	@:
check_hlds.simplify.opt : check_hlds.simplify.optdate
	@:
check_hlds.simplify.trans_opt : check_hlds.simplify.trans_opt_date
	@:

check_hlds.simplify.date0 : simplify.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) check_hlds.simplify
check_hlds.simplify.date : simplify.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) check_hlds.simplify
check_hlds.simplify.date3 : simplify.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) check_hlds.simplify
check_hlds.simplify.optdate : simplify.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) check_hlds.simplify
check_hlds.simplify.trans_opt_date : simplify.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) check_hlds.simplify
check_hlds.simplify.c_date : simplify.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) check_hlds.simplify $(ERR_REDIRECT)
check_hlds.simplify.java_date : simplify.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only check_hlds.simplify $(ERR_REDIRECT)
