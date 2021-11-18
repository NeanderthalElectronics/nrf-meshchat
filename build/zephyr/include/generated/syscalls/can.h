
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef Z_INCLUDE_SYSCALLS_CAN_H
#define Z_INCLUDE_SYSCALLS_CAN_H


#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall.h>

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic push
#endif

#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#if !defined(__XCC__)
#pragma GCC diagnostic ignored "-Warray-bounds"
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_can_send(const struct device * dev, const struct zcan_frame * msg, k_timeout_t timeout, can_tx_callback_t callback_isr, void * callback_arg);
static inline int can_send(const struct device * dev, const struct zcan_frame * msg, k_timeout_t timeout, can_tx_callback_t callback_isr, void * callback_arg)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { struct { uintptr_t lo, hi; } split; k_timeout_t val; } parm0;
		parm0.val = timeout;
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke6(*(uintptr_t *)&dev, *(uintptr_t *)&msg, parm0.split.lo, parm0.split.hi, *(uintptr_t *)&callback_isr, *(uintptr_t *)&callback_arg, K_SYSCALL_CAN_SEND);
	}
#endif
	compiler_barrier();
	return z_impl_can_send(dev, msg, timeout, callback_isr, callback_arg);
}


extern int z_impl_can_attach_msgq(const struct device * dev, struct k_msgq * msg_q, const struct zcan_filter * filter);
static inline int can_attach_msgq(const struct device * dev, struct k_msgq * msg_q, const struct zcan_filter * filter)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, *(uintptr_t *)&msg_q, *(uintptr_t *)&filter, K_SYSCALL_CAN_ATTACH_MSGQ);
	}
#endif
	compiler_barrier();
	return z_impl_can_attach_msgq(dev, msg_q, filter);
}


extern void z_impl_can_detach(const struct device * dev, int filter_id);
static inline void can_detach(const struct device * dev, int filter_id)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&filter_id, K_SYSCALL_CAN_DETACH);
		return;
	}
#endif
	compiler_barrier();
	z_impl_can_detach(dev, filter_id);
}


extern int z_impl_can_get_core_clock(const struct device * dev, uint32_t * rate);
static inline int can_get_core_clock(const struct device * dev, uint32_t * rate)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&rate, K_SYSCALL_CAN_GET_CORE_CLOCK);
	}
#endif
	compiler_barrier();
	return z_impl_can_get_core_clock(dev, rate);
}


extern int z_impl_can_set_mode(const struct device * dev, enum can_mode mode);
static inline int can_set_mode(const struct device * dev, enum can_mode mode)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&mode, K_SYSCALL_CAN_SET_MODE);
	}
#endif
	compiler_barrier();
	return z_impl_can_set_mode(dev, mode);
}


extern int z_impl_can_set_timing(const struct device * dev, const struct can_timing * timing, const struct can_timing * timing_data);
static inline int can_set_timing(const struct device * dev, const struct can_timing * timing, const struct can_timing * timing_data)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, *(uintptr_t *)&timing, *(uintptr_t *)&timing_data, K_SYSCALL_CAN_SET_TIMING);
	}
#endif
	compiler_barrier();
	return z_impl_can_set_timing(dev, timing, timing_data);
}


extern enum can_state z_impl_can_get_state(const struct device * dev, struct can_bus_err_cnt * err_cnt);
static inline enum can_state can_get_state(const struct device * dev, struct can_bus_err_cnt * err_cnt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (enum can_state) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&err_cnt, K_SYSCALL_CAN_GET_STATE);
	}
#endif
	compiler_barrier();
	return z_impl_can_get_state(dev, err_cnt);
}


extern int z_impl_can_recover(const struct device * dev, k_timeout_t timeout);
static inline int can_recover(const struct device * dev, k_timeout_t timeout)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { struct { uintptr_t lo, hi; } split; k_timeout_t val; } parm0;
		parm0.val = timeout;
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, parm0.split.lo, parm0.split.hi, K_SYSCALL_CAN_RECOVER);
	}
#endif
	compiler_barrier();
	return z_impl_can_recover(dev, timeout);
}


#ifdef __cplusplus
}
#endif

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif

#endif
#endif /* include guard */
