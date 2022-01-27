

mdprof_fb.automatic_parallelism.optdate mdprof_fb.automatic_parallelism.trans_opt_date mdprof_fb.automatic_parallelism.err mdprof_fb.automatic_parallelism.c_date mdprof_fb.automatic_parallelism.java_date : mdprof_fb.automatic_parallelism.m mdprof_fb.automatic_parallelism.int0 \
	mdprof_fb.int0 \
	builtin.int \
	private_builtin.int

mdprof_fb.automatic_parallelism.pic_o mdprof_fb.automatic_parallelism.$O : \
	builtin.mih \
	mdprof_fb.mih \
	private_builtin.mih

mdprof_fb.automatic_parallelism.mh mdprof_fb.automatic_parallelism.mih : mdprof_fb.automatic_parallelism.c


ifeq ($(findstring java,$(GRADE)),java)
mdprof_fb.automatic_parallelism.module_dep : jmercury/mdprof_fb__automatic_parallelism.java
else
mdprof_fb.automatic_parallelism.module_dep : mdprof_fb.automatic_parallelism.c
endif


mdprof_fb.automatic_parallelism.date mdprof_fb.automatic_parallelism.date0 \
	mdprof_fb.date : mdprof_fb.automatic_parallelism.m \
	mdprof_fb.int0 \
	builtin.int3 \
	private_builtin.int3

mdprof_fb.automatic_parallelism.date0 \
	mdprof_fb.date0 : mdprof_fb.automatic_parallelism.m \
	builtin.int3 \
	private_builtin.int3


mdprof_fb.automatic_parallelism.int0 : mdprof_fb.automatic_parallelism.date0
	@:
mdprof_fb.automatic_parallelism.int : mdprof_fb.automatic_parallelism.date
	@:
mdprof_fb.automatic_parallelism.int2 : mdprof_fb.automatic_parallelism.date
	@:
mdprof_fb.automatic_parallelism.int3 : mdprof_fb.automatic_parallelism.date3
	@:
mdprof_fb.automatic_parallelism.opt : mdprof_fb.automatic_parallelism.optdate
	@:
mdprof_fb.automatic_parallelism.trans_opt : mdprof_fb.automatic_parallelism.trans_opt_date
	@:
