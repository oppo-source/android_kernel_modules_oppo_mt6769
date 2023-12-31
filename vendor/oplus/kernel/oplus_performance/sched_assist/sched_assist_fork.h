/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2020 Oplus. All rights reserved.
 */
#include <linux/version.h>

#ifndef _OPLUS_SCHED_FORK_H_
#define _OPLUS_SCHED_FORK_H_

static inline void init_task_ux_info(struct task_struct *p)
{
	p->ux_state = 0;
	atomic64_set(&(p->inherit_ux), 0);
	INIT_LIST_HEAD(&p->ux_entry);
#ifdef CONFIG_LOCKING_PROTECT
	INIT_LIST_HEAD(&p->locking_entry);
	p->locking_time_start = 0;
	p->locking_depth = 0;
#endif
	p->ux_depth = 0;
	p->enqueue_time = 0;
	p->inherit_ux_start = 0;
#if (LINUX_VERSION_CODE < KERNEL_VERSION(5, 4, 0)) || defined(CONFIG_MMAP_LOCK_OPT)
	p->ux_once = 0;
	p->get_mmlock = 0;
	p->get_mmlock_ts = 0;
#endif
#ifdef CONFIG_OPLUS_UX_IM_FLAG
	p->ux_im_flag = 0;
#endif
#ifdef CONFIG_KERNEL_LOCK_OPT
	INIT_LIST_HEAD(&p->own_rwsem);
	p->lock_waiting_start = 0;
	p->mt_count = 0;
	p->hold_rwsem = NULL;
#endif
#ifdef CONFIG_OPLUS_FEATURE_SCHED_SPREAD
	p->lb_state = 0;
	p->ld_flag = 0;
#endif
#ifdef CONFIG_OPLUS_FEATURE_AUDIO_OPT
	memset(&p->oplus_task_info, 0, sizeof(struct task_info));
#endif
}
#endif /* _OPLUS_SCHED_FORK_H_ */
