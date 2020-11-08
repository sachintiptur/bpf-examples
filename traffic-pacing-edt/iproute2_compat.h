/* SPDX-License-Identifier: GPL-2.0 */

#ifndef __IPROUTE2_COMPAT_H
#define __IPROUTE2_COMPAT_H

/* The tc tool (iproute2) use another ELF map layout than libbpf, see struct
 * bpf_elf_map from iproute2, but struct bpf_map_def from libbpf have same
 * binary layout until "flags". Thus, BPF-progs can use both if careful.
 */

/* ELF map definition (copied from iproute2 source code) */
struct bpf_elf_map {
	__u32 type;
	__u32 size_key;
	__u32 size_value;
	__u32 max_elem;
	__u32 flags;
	__u32 id;
	__u32 pinning;
	__u32 inner_id;
	__u32 inner_idx;
};

#endif /* __IPROUTE2_COMPAT_H */
