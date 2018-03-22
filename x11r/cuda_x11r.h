#include "quark/cuda_quark.h"

extern void x11r_luffaCubehash512_cpu_init(int thr_id, uint32_t threads);
extern void x11r_luffaCubehash512_cpu_hash_64(int thr_id, uint32_t threads, uint32_t *d_hash, int order);

extern void x11r_luffa512_cpu_init(int thr_id, uint32_t threads);
extern void x11r_luffa512_cpu_hash_64(int thr_id, uint32_t threads, uint32_t startNounce, uint32_t *d_nonceVector, uint32_t *d_hash, int order);

extern void x11r_cubehash512_cpu_init(int thr_id, uint32_t threads);
extern void x11r_cubehash512_cpu_hash_64(int thr_id, uint32_t threads, uint32_t startNounce, uint32_t *d_nonceVector, uint32_t *d_hash, int order);

extern void x11r_shavite512_cpu_init(int thr_id, uint32_t threads);
extern void x11r_shavite512_cpu_hash_64(int thr_id, uint32_t threads, uint32_t startNounce, uint32_t *d_nonceVector, uint32_t *d_hash, int order);

extern int  x11r_simd512_cpu_init(int thr_id, uint32_t threads);
extern void x11r_simd512_cpu_hash_64(int thr_id, uint32_t threads, uint32_t startNounce, uint32_t *d_nonceVector, uint32_t *d_hash, int order);
extern void x11r_simd512_cpu_free(int thr_id);

extern void x11r_echo512_cpu_init(int thr_id, uint32_t threads);
extern void x11r_echo512_cpu_hash_64(int thr_id, uint32_t threads, uint32_t startNounce, uint32_t *d_nonceVector, uint32_t *d_hash, int order);

