	{ 2,	0,	sys_io_setup,			"io_setup"		}, /* 0 */
	{ 1,	0,	sys_io_destroy,			"io_destroy"		}, /* 1 */
	{ 3,	0,	sys_io_submit,			"io_submit"		}, /* 2 */
	{ 3,	0,	sys_io_cancel,			"io_cancel"		}, /* 3 */
	{ 5,	0,	sys_io_getevents,		"io_getevents"		}, /* 4 */
	{ 5,	TF,	sys_setxattr,			"setxattr"		}, /* 5 */
	{ 5,	TF,	sys_setxattr,			"lsetxattr"		}, /* 6 */
	{ 5,	TD,	sys_fsetxattr,			"fsetxattr"		}, /* 7 */
	{ 4,	TF,	sys_getxattr,			"getxattr"		}, /* 8 */
	{ 4,	TF,	sys_getxattr,			"lgetxattr"		}, /* 9 */
	{ 4,	TD,	sys_fgetxattr,			"fgetxattr"		}, /* 10 */
	{ 3,	TF,	sys_listxattr,			"listxattr"		}, /* 11 */
	{ 3,	TF,	sys_listxattr,			"llistxattr"		}, /* 12 */
	{ 3,	TD,	sys_flistxattr,			"flistxattr"		}, /* 13 */
	{ 2,	TF,	sys_removexattr,		"removexattr"		}, /* 14 */
	{ 2,	TF,	sys_removexattr,		"lremovexattr"		}, /* 15 */
	{ 2,	TD,	sys_fremovexattr,		"fremovexattr"		}, /* 16 */
	{ 2,	TF,	sys_getcwd,			"getcwd"		}, /* 17 */
	{ 4,	0,	sys_lookup_dcookie,		"lookup_dcookie"	}, /* 18 */
	{ 2,	TD,	sys_eventfd2,			"eventfd2"		}, /* 19 */
	{ 1,	TD,	sys_epoll_create1,		"epoll_create1"		}, /* 20 */
	{ 4,	TD,	sys_epoll_ctl,			"epoll_ctl"		}, /* 21 */
	{ 6,	TD,	sys_epoll_pwait,		"epoll_pwait"		}, /* 22 */
	{ 1,	TD,	sys_dup,			"dup"			}, /* 23 */
	{ 3,	TD,	sys_dup3,			"dup3"			}, /* 24 */
	{ 3,	TD,	sys_fcntl,			"fcntl64"		}, /* 25 */
	{ 1,	TD,	sys_inotify_init1,		"inotify_init1"		}, /* 26 */
	{ 3,	TD,	sys_inotify_add_watch,		"inotify_add_watch"	}, /* 27 */
	{ 2,	TD,	sys_inotify_rm_watch,		"inotify_rm_watch"	}, /* 28 */
	{ 3,	TD,	sys_ioctl,			"ioctl"			}, /* 29 */
	{ 3,	0,	sys_ioprio_set,			"ioprio_set"		}, /* 30 */
	{ 2,	0,	sys_ioprio_get,			"ioprio_get"		}, /* 31 */
	{ 2,	TD,	sys_flock,			"flock"			}, /* 32 */
	{ 4,	TD|TF,	sys_mknodat,			"mknodat"		}, /* 33 */
	{ 3,	TD|TF,	sys_mkdirat,			"mkdirat"		}, /* 34 */
	{ 3,	TD|TF,	sys_unlinkat,			"unlinkat"		}, /* 35 */
	{ 3,	TD|TF,	sys_symlinkat,			"symlinkat"		}, /* 36 */
	{ 5,	TD|TF,	sys_linkat,			"linkat"		}, /* 37 */
	{ 4,	TD|TF,	sys_renameat,			"renameat"		}, /* 38 */
	{ 2,	TF,	sys_umount2,			"umount"		}, /* 39 */
	{ 5,	TF,	sys_mount,			"mount"			}, /* 40 */
	{ 2,	TF,	sys_pivotroot,			"pivot_root"		}, /* 41 */
	{ 3,	0,	sys_nfsservctl,			"nfsservctl"		}, /* 42 */
	{ 3,	TF,	sys_statfs64,			"statfs64"		}, /* 43 */
	{ 3,	TD,	sys_fstatfs64,			"fstatfs64"		}, /* 44 */
	{ 3,	TF,	sys_truncate64,			"truncate64"		}, /* 45 */
	{ 3,	TD,	sys_ftruncate64,		"ftruncate64"		}, /* 46 */
	{ 6,	TD,	sys_fallocate,			"fallocate"		}, /* 47 */
	{ 3,	TD|TF,	sys_faccessat,			"faccessat"		}, /* 48 */
	{ 1,	TF,	sys_chdir,			"chdir"			}, /* 49 */
	{ 1,	TD,	sys_fchdir,			"fchdir"		}, /* 50 */
	{ 1,	TF,	sys_chroot,			"chroot"		}, /* 51 */
	{ 2,	TD,	sys_fchmod,			"fchmod"		}, /* 52 */
	{ 3,	TD|TF,	sys_fchmodat,			"fchmodat"		}, /* 53 */
	{ 5,	TD|TF,	sys_fchownat,			"fchownat"		}, /* 54 */
	{ 3,	TD,	sys_fchown,			"fchown"		}, /* 55 */
	{ 4,	TD|TF,	sys_openat,			"openat"		}, /* 56 */
	{ 1,	TD,	sys_close,			"close"			}, /* 57 */
	{ 0,	0,	sys_vhangup,			"vhangup"		}, /* 58 */
	{ 2,	TD,	sys_pipe2,			"pipe2"			}, /* 59 */
	{ 4,	TF,	sys_quotactl,			"quotactl"		}, /* 60 */
	{ 3,	TD,	sys_getdents64,			"getdents64"		}, /* 61 */
	{ 5,	TD,	sys_llseek,			"_llseek"		}, /* 62 */
	{ 3,	TD,	sys_read,			"read"			}, /* 63 */
	{ 3,	TD,	sys_write,			"write"			}, /* 64 */
	{ 3,	TD,	sys_readv,			"readv"			}, /* 65 */
	{ 3,	TD,	sys_writev,			"writev"		}, /* 66 */
	{ 5,	TD,	sys_pread,			"pread64"		}, /* 67 */
	{ 5,	TD,	sys_pwrite,			"pwrite64"		}, /* 68 */
	{ 5,	TD,	sys_preadv,			"preadv"		}, /* 69 */
	{ 5,	TD,	sys_pwritev,			"pwritev"		}, /* 70 */
	{ 4,	TD|TN,	sys_sendfile64,			"sendfile"		}, /* 71 */
	{ 6,	TD,	sys_pselect6,			"pselect6"		}, /* 72 */
	{ 5,	TD,	sys_ppoll,			"ppoll"			}, /* 73 */
	{ 4,	TD|TS,	sys_signalfd4,			"signalfd4"		}, /* 74 */
	{ 4,	TD,	sys_vmsplice,			"vmsplice"		}, /* 75 */
	{ 6,	TD,	sys_splice,			"splice"		}, /* 76 */
	{ 4,	TD,	sys_tee,			"tee"			}, /* 77 */
	{ 4,	TD|TF,	sys_readlinkat,			"readlinkat"		}, /* 78 */
	{ 4,	TD|TF,	sys_newfstatat,			"fstatat64"		}, /* 79 */
	{ 2,	TD,	sys_fstat64,			"fstat64"		}, /* 80 */
	{ 0,	0,	sys_sync,			"sync"			}, /* 81 */
	{ 1,	TD,	sys_fsync,			"fsync"			}, /* 82 */
	{ 1,	TD,	sys_fdatasync,			"fdatasync"		}, /* 83 */
	{ 6,	TD,	sys_sync_file_range,		"sync_file_range"	}, /* 84 */
	{ 2,	TD,	sys_timerfd_create,		"timerfd_create"	}, /* 85 */
	{ 4,	TD,	sys_timerfd_settime,		"timerfd_settime"	}, /* 86 */
	{ 2,	TD,	sys_timerfd_gettime,		"timerfd_gettime"	}, /* 87 */
	{ 4,	TD|TF,	sys_utimensat,			"utimensat"		}, /* 88 */
	{ 1,	TF,	sys_acct,			"acct"			}, /* 89 */
	{ 2,	0,	sys_capget,			"capget"		}, /* 90 */
	{ 2,	0,	sys_capset,			"capset"		}, /* 91 */
	{ 1,	0,	sys_personality,		"personality"		}, /* 92 */
	{ 1,	TP|SE,	sys_exit,			"exit"			}, /* 93 */
	{ 1,	TP|SE,	sys_exit,			"exit_group"		}, /* 94 */
	{ 5,	TP,	sys_waitid,			"waitid"		}, /* 95 */
	{ 1,	0,	sys_set_tid_address,		"set_tid_address"	}, /* 96 */
	{ 1,	TP,	sys_unshare,			"unshare"		}, /* 97 */
	{ 6,	0,	sys_futex,			"futex"			}, /* 98 */
	{ 2,	0,	sys_set_robust_list,		"set_robust_list"	}, /* 99 */
	{ 3,	0,	sys_get_robust_list,		"get_robust_list"	}, /* 100 */
	{ 2,	0,	sys_nanosleep,			"nanosleep"		}, /* 101 */
	{ 2,	0,	sys_getitimer,			"getitimer"		}, /* 102 */
	{ 3,	0,	sys_setitimer,			"setitimer"		}, /* 103 */
	{ 4,	0,	sys_kexec_load,			"kexec_load"		}, /* 104 */
	{ 3,	0,	sys_init_module,		"init_module"		}, /* 105 */
	{ 2,	0,	sys_delete_module,		"delete_module"		}, /* 106 */
	{ 3,	0,	sys_timer_create,		"timer_create"		}, /* 107 */
	{ 2,	0,	sys_timer_gettime,		"timer_gettime"		}, /* 108 */
	{ 1,	0,	sys_timer_getoverrun,		"timer_getoverrun"	}, /* 109 */
	{ 4,	0,	sys_timer_settime,		"timer_settime"		}, /* 110 */
	{ 1,	0,	sys_timer_delete,		"timer_delete"		}, /* 111 */
	{ 2,	0,	sys_clock_settime,		"clock_settime"		}, /* 112 */
	{ 2,	0,	sys_clock_gettime,		"clock_gettime"		}, /* 113 */
	{ 2,	0,	sys_clock_getres,		"clock_getres"		}, /* 114 */
	{ 4,	0,	sys_clock_nanosleep,		"clock_nanosleep"	}, /* 115 */
	{ 3,	0,	sys_syslog,			"syslog"		}, /* 116 */
	{ 4,	0,	sys_ptrace,			"ptrace"		}, /* 117 */
	{ 2,	0,	sys_sched_setparam,		"sched_setparam"	}, /* 118 */
	{ 3,	0,	sys_sched_setscheduler,		"sched_setscheduler"	}, /* 119 */
	{ 1,	0,	sys_sched_getscheduler,		"sched_getscheduler"	}, /* 120 */
	{ 2,	0,	sys_sched_getparam,		"sched_getparam"	}, /* 121 */
	{ 3,	0,	sys_sched_setaffinity,		"sched_setaffinity"	}, /* 122 */
	{ 3,	0,	sys_sched_getaffinity,		"sched_getaffinity"	}, /* 123 */
	{ 0,	0,	sys_sched_yield,		"sched_yield"		}, /* 124 */
	{ 1,	0,	sys_sched_get_priority_max,	"sched_get_priority_max"}, /* 125 */
	{ 1,	0,	sys_sched_get_priority_min,	"sched_get_priority_min"}, /* 126 */
	{ 2,	0,	sys_sched_rr_get_interval,	"sched_rr_get_interval"	}, /* 127 */
	{ 0,	0,	sys_restart_syscall,		"restart_syscall"	}, /* 128 */
	{ 2,	TS,	sys_kill,			"kill"			}, /* 129 */
	{ 2,	TS,	sys_kill,			"tkill"			}, /* 130 */
	{ 3,	TS,	sys_tgkill,			"tgkill"		}, /* 131 */
	{ 2,	TS,	sys_sigaltstack,		"sigaltstack"		}, /* 132 */
	{ 2,	TS,	sys_rt_sigsuspend,		"rt_sigsuspend"		}, /* 133 */
	{ 4,	TS,	sys_rt_sigaction,		"rt_sigaction"		}, /* 134 */
	{ 4,	TS,	sys_rt_sigprocmask,		"rt_sigprocmask"	}, /* 135 */
	{ 2,	TS,	sys_rt_sigpending,		"rt_sigpending"		}, /* 136 */
	{ 4,	TS,	sys_rt_sigtimedwait,		"rt_sigtimedwait"	}, /* 137 */
	{ 3,	TS,	sys_rt_sigqueueinfo,		"rt_sigqueueinfo"	}, /* 138 */
	{ 0,	TS,	sys_rt_sigreturn,		"rt_sigreturn"		}, /* 139 */
	{ 3,	0,	sys_setpriority,		"setpriority"		}, /* 140 */
	{ 2,	0,	sys_getpriority,		"getpriority"		}, /* 141 */
	{ 4,	0,	sys_reboot,			"reboot"		}, /* 142 */
	{ 2,	0,	sys_setregid,			"setregid"		}, /* 143 */
	{ 1,	0,	sys_setgid,			"setgid"		}, /* 144 */
	{ 2,	0,	sys_setreuid,			"setreuid"		}, /* 145 */
	{ 1,	0,	sys_setuid,			"setuid"		}, /* 146 */
	{ 3,	0,	sys_setresuid,			"setresuid"		}, /* 147 */
	{ 3,	0,	sys_getresuid,			"getresuid"		}, /* 148 */
	{ 3,	0,	sys_setresgid,			"setresgid"		}, /* 149 */
	{ 3,	0,	sys_getresgid,			"getresgid"		}, /* 150 */
	{ 1,	NF,	sys_setfsuid,			"setfsuid"		}, /* 151 */
	{ 1,	NF,	sys_setfsgid,			"setfsgid"		}, /* 152 */
	{ 1,	0,	sys_times,			"times"			}, /* 153 */
	{ 2,	0,	sys_setpgid,			"setpgid"		}, /* 154 */
	{ 1,	0,	sys_getpgid,			"getpgid"		}, /* 155 */
	{ 1,	0,	sys_getsid,			"getsid"		}, /* 156 */
	{ 0,	0,	sys_setsid,			"setsid"		}, /* 157 */
	{ 2,	0,	sys_getgroups,			"getgroups"		}, /* 158 */
	{ 2,	0,	sys_setgroups,			"setgroups"		}, /* 159 */
	{ 1,	0,	sys_uname,			"uname"			}, /* 160 */
	{ 2,	0,	sys_sethostname,		"sethostname"		}, /* 161 */
	{ 2,	0,	sys_setdomainname,		"setdomainname"		}, /* 162 */
	{ 2,	0,	sys_getrlimit,			"oldgetrlimit"		}, /* 163 */
	{ 2,	0,	sys_setrlimit,			"setrlimit"		}, /* 164 */
	{ 2,	0,	sys_getrusage,			"getrusage"		}, /* 165 */
	{ 1,	0,	sys_umask,			"umask"			}, /* 166 */
	{ 5,	0,	sys_prctl,			"prctl"			}, /* 167 */
	{ 3,	0,	sys_getcpu,			"getcpu"		}, /* 168 */
	{ 2,	0,	sys_gettimeofday,		"gettimeofday"		}, /* 169 */
	{ 2,	0,	sys_settimeofday,		"settimeofday"		}, /* 170 */
	{ 1,	0,	sys_adjtimex,			"adjtimex"		}, /* 171 */
	{ 0,	0,	sys_getpid,			"getpid"		}, /* 172 */
	{ 0,	0,	sys_getppid,			"getppid"		}, /* 173 */
	{ 0,	NF,	sys_getuid,			"getuid"		}, /* 174 */
	{ 0,	NF,	sys_geteuid,			"geteuid"		}, /* 175 */
	{ 0,	NF,	sys_getgid,			"getgid"		}, /* 176 */
	{ 0,	NF,	sys_getegid,			"getegid"		}, /* 177 */
	{ 0,	0,	sys_gettid,			"gettid"		}, /* 178 */
	{ 1,	0,	sys_sysinfo,			"sysinfo"		}, /* 179 */
	{ 4,	0,	sys_mq_open,			"mq_open"		}, /* 180 */
	{ 1,	0,	sys_mq_unlink,			"mq_unlink"		}, /* 181 */
	{ 5,	0,	sys_mq_timedsend,		"mq_timedsend"		}, /* 182 */
	{ 5,	0,	sys_mq_timedreceive,		"mq_timedreceive"	}, /* 183 */
	{ 2,	0,	sys_mq_notify,			"mq_notify"		}, /* 184 */
	{ 3,	0,	sys_mq_getsetattr,		"mq_getsetattr"		}, /* 185 */
	{ 4,	TI,	sys_msgget,			"msgget"		}, /* 186 */
	{ 4,	TI,	sys_msgctl,			"msgctl"		}, /* 187 */
	{ 4,	TI,	sys_msgrcv,			"msgrcv"		}, /* 188 */
	{ 4,	TI,	sys_msgsnd,			"msgsnd"		}, /* 189 */
	{ 4,	TI,	sys_semget,			"semget"		}, /* 190 */
	{ 4,	TI,	sys_semctl,			"semctl"		}, /* 191 */
	{ 5,	TI,	sys_semtimedop,			"semtimedop"		}, /* 192 */
	{ 4,	TI,	sys_semop,			"semop"			}, /* 193 */
	{ 4,	TI,	sys_shmget,			"shmget"		}, /* 194 */
	{ 4,	TI,	sys_shmctl,			"shmctl"		}, /* 195 */
	{ 4,	TI|TM|SI,	sys_shmat,			"shmat"			}, /* 196 */
	{ 4,	TI|TM|SI,	sys_shmdt,			"shmdt"			}, /* 197 */
	{ 3,	TN,	sys_socket,			"socket"		}, /* 198 */
	{ 4,	TN,	sys_socketpair,			"socketpair"		}, /* 199 */
	{ 3,	TN,	sys_bind,			"bind"			}, /* 200 */
	{ 2,	TN,	sys_listen,			"listen"		}, /* 201 */
	{ 3,	TN,	sys_accept,			"accept"		}, /* 202 */
	{ 3,	TN,	sys_connect,			"connect"		}, /* 203 */
	{ 3,	TN,	sys_getsockname,		"getsockname"		}, /* 204 */
	{ 3,	TN,	sys_getpeername,		"getpeername"		}, /* 205 */
	{ 6,	TN,	sys_sendto,			"sendto"		}, /* 206 */
	{ 6,	TN,	sys_recvfrom,			"recvfrom"		}, /* 207 */
	{ 5,	TN,	sys_setsockopt,			"setsockopt"		}, /* 208 */
	{ 5,	TN,	sys_getsockopt,			"getsockopt"		}, /* 209 */
	{ 2,	TN,	sys_shutdown,			"shutdown"		}, /* 210 */
	{ 3,	TN,	sys_sendmsg,			"sendmsg"		}, /* 211 */
	{ 3,	TN,	sys_recvmsg,			"recvmsg"		}, /* 212 */
	{ 4,	TD,	sys_readahead,			"readahead"		}, /* 213 */
	{ 1,	TM|SI,	sys_brk,			"brk"			}, /* 214 */
	{ 2,	TM|SI,	sys_munmap,			"munmap"		}, /* 215 */
	{ 5,	TM|SI,	sys_mremap,			"mremap"		}, /* 216 */
	{ 5,	0,	sys_add_key,			"add_key"		}, /* 217 */
	{ 4,	0,	sys_request_key,		"request_key"		}, /* 218 */
	{ 5,	0,	sys_keyctl,			"keyctl"		}, /* 219 */
	{ 5,	TP,	sys_clone,			"clone"			}, /* 220 */
	{ 3,	TF|TP|SE|SI,	sys_execve,			"execve"		}, /* 221 */
	{ 6,	TD|TM|SI,	sys_mmap_pgoff,			"mmap2"			}, /* 222 */
	{ 6,	TD,	sys_fadvise64_64,		"fadvise64_64"		}, /* 223 */
	{ 2,	TF,	sys_swapon,			"swapon"		}, /* 224 */
	{ 1,	TF,	sys_swapoff,			"swapoff"		}, /* 225 */
	{ 3,	TM|SI,	sys_mprotect,			"mprotect"		}, /* 226 */
	{ 3,	TM,	sys_msync,			"msync"			}, /* 227 */
	{ 2,	TM,	sys_mlock,			"mlock"			}, /* 228 */
	{ 2,	TM,	sys_munlock,			"munlock"		}, /* 229 */
	{ 1,	TM,	sys_mlockall,			"mlockall"		}, /* 230 */
	{ 0,	TM,	sys_munlockall,			"munlockall"		}, /* 231 */
	{ 3,	TM,	sys_mincore,			"mincore"		}, /* 232 */
	{ 3,	TM,	sys_madvise,			"madvise"		}, /* 233 */
	{ 5,	TM|SI,	sys_remap_file_pages,		"remap_file_pages"	}, /* 234 */
	{ 6,	TM,	sys_mbind,			"mbind"			}, /* 235 */
	{ 5,	TM,	sys_get_mempolicy,		"get_mempolicy"		}, /* 236 */
	{ 3,	TM,	sys_set_mempolicy,		"set_mempolicy"		}, /* 237 */
	{ 5,	TM,	sys_migrate_pages,		"migrate_pages"		}, /* 238 */
	{ 6,	TM,	sys_move_pages,			"move_pages"		}, /* 239 */
	{ 4,	TP|TS,	sys_rt_tgsigqueueinfo,		"rt_tgsigqueueinfo"	}, /* 240 */
	{ 5,	TD,	sys_perf_event_open,		"perf_event_open"	}, /* 241 */
	{ 4,	TN,	sys_accept4,			"accept4"		}, /* 242 */
	{ 5,	TN,	sys_recvmmsg,			"recvmmsg"		}, /* 243 */
	{ 6,	NF,	sys_or1k_atomic,		"or1k_atomic"		}, /* 244 */

	[245 ... 259] = { },

	{ 4,	TP,	sys_wait4,			"wait4"			}, /* 260 */
	{ 4,	0,	sys_prlimit64,			"prlimit64"		}, /* 261 */
	{ 2,	TD,	sys_fanotify_init,		"fanotify_init"		}, /* 262 */
	{ 6,	TD|TF,	sys_fanotify_mark,		"fanotify_mark"		}, /* 263 */
	{ 5,	TD|TF,	sys_name_to_handle_at,		"name_to_handle_at"	}, /* 264 */
	{ 3,	TD,	sys_open_by_handle_at,		"open_by_handle_at"	}, /* 265 */
	{ 2,	0,	sys_clock_adjtime,		"clock_adjtime"		}, /* 266 */
	{ 1,	TD,	sys_syncfs,			"syncfs"		}, /* 267 */
	{ 2,	TD,	sys_setns,			"setns"			}, /* 268 */
	{ 4,	TN,	sys_sendmmsg,			"sendmmsg"		}, /* 269 */
	{ 6,	0,	sys_process_vm_readv,		"process_vm_readv"	}, /* 270 */
	{ 6,	0,	sys_process_vm_writev,		"process_vm_writev"	}, /* 271 */
	{ 5,	0,	sys_kcmp,			"kcmp"			}, /* 272 */
	{ 3,	TD,	sys_finit_module,		"finit_module"		}, /* 273 */
