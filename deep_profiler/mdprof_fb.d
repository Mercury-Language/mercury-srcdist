

mdprof_fb.optdate mdprof_fb.trans_opt_date mdprof_fb.err mdprof_fb.c_date mdprof_fb.s_date mdprof_fb.pic_s_date mdprof_fb.java_date : mdprof_fb.m mdprof_fb.int0 \
	builtin.int \
	private_builtin.int

mdprof_fb.pic_o mdprof_fb.$O : \
	builtin.mih \
	private_builtin.mih

mdprof_fb.mh mdprof_fb.mih : mdprof_fb.c


ifeq ($(findstring java,$(GRADE)),java)
mdprof_fb.module_dep : jmercury/mdprof_fb.java
else
mdprof_fb.module_dep : mdprof_fb.c
endif


mdprof_fb.date mdprof_fb.date0 : mdprof_fb.m \
	builtin.int3 \
	private_builtin.int3

mdprof_fb.date0 : mdprof_fb.m \
	builtin.int3 \
	private_builtin.int3


mdprof_fb.int0 : mdprof_fb.date0
	@:
mdprof_fb.int : mdprof_fb.date
	@:
mdprof_fb.int2 : mdprof_fb.date
	@:
mdprof_fb.int3 : mdprof_fb.date3
	@:
mdprof_fb.opt : mdprof_fb.optdate
	@:
mdprof_fb.trans_opt : mdprof_fb.trans_opt_date
	@:
