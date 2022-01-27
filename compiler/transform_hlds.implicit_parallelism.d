

transform_hlds.implicit_parallelism.optdate transform_hlds.implicit_parallelism.trans_opt_date implicit_parallelism.err transform_hlds.implicit_parallelism.c_date transform_hlds.implicit_parallelism.java_date : implicit_parallelism.m transform_hlds.implicit_parallelism.int0 \
	transform_hlds.int0 \
	builtin.int \
	private_builtin.int

transform_hlds.implicit_parallelism.pic_o transform_hlds.implicit_parallelism.$O : \
	builtin.mih \
	private_builtin.mih \
	transform_hlds.mih

transform_hlds.implicit_parallelism.mh transform_hlds.implicit_parallelism.mih : transform_hlds.implicit_parallelism.c


ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.implicit_parallelism.module_dep : jmercury/transform_hlds__implicit_parallelism.java
else
transform_hlds.implicit_parallelism.module_dep : transform_hlds.implicit_parallelism.c
endif


transform_hlds.implicit_parallelism.date transform_hlds.implicit_parallelism.date0 \
	transform_hlds.date : implicit_parallelism.m \
	transform_hlds.int0 \
	builtin.int3 \
	private_builtin.int3

transform_hlds.implicit_parallelism.date0 \
	transform_hlds.date0 : implicit_parallelism.m \
	builtin.int3 \
	private_builtin.int3


transform_hlds.implicit_parallelism.int0 : transform_hlds.implicit_parallelism.date0
	@:
transform_hlds.implicit_parallelism.int : transform_hlds.implicit_parallelism.date
	@:
transform_hlds.implicit_parallelism.int2 : transform_hlds.implicit_parallelism.date
	@:
transform_hlds.implicit_parallelism.int3 : transform_hlds.implicit_parallelism.date3
	@:
transform_hlds.implicit_parallelism.opt : transform_hlds.implicit_parallelism.optdate
	@:
transform_hlds.implicit_parallelism.trans_opt : transform_hlds.implicit_parallelism.trans_opt_date
	@:

transform_hlds.implicit_parallelism.date0 : implicit_parallelism.m
	$(MCPI) $(ALL_GRADEFLAGS) $(ALL_MCPIFLAGS) transform_hlds.implicit_parallelism
transform_hlds.implicit_parallelism.date : implicit_parallelism.m
	$(MCI) $(ALL_GRADEFLAGS) $(ALL_MCIFLAGS) transform_hlds.implicit_parallelism
transform_hlds.implicit_parallelism.date3 : implicit_parallelism.m
	$(MCSI) $(ALL_GRADEFLAGS) $(ALL_MCSIFLAGS) transform_hlds.implicit_parallelism
transform_hlds.implicit_parallelism.optdate : implicit_parallelism.m
	$(MCOI) $(ALL_GRADEFLAGS) $(ALL_MCOIFLAGS) transform_hlds.implicit_parallelism
transform_hlds.implicit_parallelism.trans_opt_date : implicit_parallelism.m
	$(MCTOI) $(ALL_GRADEFLAGS) $(ALL_MCTOIFLAGS) transform_hlds.implicit_parallelism
transform_hlds.implicit_parallelism.c_date : implicit_parallelism.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) transform_hlds.implicit_parallelism $(ERR_REDIRECT)
transform_hlds.implicit_parallelism.java_date : implicit_parallelism.m
	$(MCG) $(ALL_GRADEFLAGS) $(ALL_MCGFLAGS) --java-only transform_hlds.implicit_parallelism $(ERR_REDIRECT)
