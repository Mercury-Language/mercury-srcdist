

libs.md4.optdate libs.md4.trans_opt_date md4.err libs.md4.c_date libs.md4.s_date libs.md4.pic_s_date libs.md4.java_date : md4.m \
	libs.int0 \
	builtin.int \
	private_builtin.int \
	require.int

libs.md4.pic_o libs.md4.$O : \
	builtin.mih \
	libs.mih \
	private_builtin.mih \
	require.mih

libs.md4.mh libs.md4.mih : libs.md4.c


ifeq ($(findstring java,$(GRADE)),java)
libs.md4.module_dep : jmercury/libs__md4.java
else
libs.md4.module_dep : libs.md4.c
endif


libs.md4.date libs.md4.date0 \
	libs.date : md4.m \
	libs.int0 \
	builtin.int3 \
	private_builtin.int3 \
	require.int3

libs.md4.date0 \
	libs.date0 : md4.m \
	builtin.int3 \
	private_builtin.int3 \
	require.int3



libs.md4.$O :  \
	libs.md4.mh



libs.md4.pic_o :  \
	libs.md4.mh


libs.md4.int0 : libs.md4.date0
	@:
libs.md4.int : libs.md4.date
	@:
libs.md4.int2 : libs.md4.date
	@:
libs.md4.int3 : libs.md4.date3
	@:
libs.md4.opt : libs.md4.optdate
	@:
libs.md4.trans_opt : libs.md4.trans_opt_date
	@:

libs.md4.date0 : md4.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) libs.md4
libs.md4.date : md4.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) libs.md4
libs.md4.date3 : md4.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) libs.md4
libs.md4.optdate : md4.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) libs.md4
libs.md4.trans_opt_date : md4.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) libs.md4
libs.md4.c_date : md4.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) libs.md4 $(ERR_REDIRECT)
libs.md4.java_date : md4.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only libs.md4 $(ERR_REDIRECT)
