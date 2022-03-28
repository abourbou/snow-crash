
void fun_80483bd();

void fun_8048450();

void frame_dummy();

void __do_global_ctors_aux();

void _init(int32_t a1) {
    int32_t v2;

    fun_80483bd();
    if (*reinterpret_cast<int32_t*>(v2 + 0x1c37 - 4)) {
        fun_8048450();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto a1;
}

void fun_80483bd() {
    int32_t v1;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1c37 - 4)) {
        fun_8048450();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto v1;
}

int32_t __gmon_start__ = 0x8048456;

void fun_8048450() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void write(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        write(0x8049f24);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x8049f14);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t printf = 0x8048426;

void fun_8048420(int32_t a1, int32_t a2) {
    goto printf;
}

int32_t exit = 0x8048466;

void fun_8048460(int32_t a1, int32_t a2) {
    goto exit;
}

int32_t strstr = 0x8048406;

int32_t fun_8048400(int32_t a1, int32_t a2) {
    goto strstr;
}

int32_t err = 0x8048446;

void fun_8048440(int32_t a1, int32_t a2, int32_t a3) {
    goto err;
}

int32_t read = 0x8048416;

int32_t fun_8048410(int32_t a1, void* a2, int32_t a3) {
    goto read;
}

int32_t __stack_chk_fail = 0x8048436;

void fun_8048430(int32_t a1, void* a2, int32_t a3) {
    goto __stack_chk_fail;
}

int32_t open = 0x8048476;

int32_t fun_8048470(int32_t a1, int32_t a2) {
    goto open;
}

int32_t write = 0x8048496;

void fun_8048490(int32_t a1, void* a2, int32_t a3) {
    goto write;
}

/* __i686.get_pc_thunk.bx */
void __i686_get_pc_thunk_bx() {
    return;
}

void __do_global_dtors_aux();

void fun_8048765() {
    int32_t v1;

    __do_global_dtors_aux();
    goto v1;
}

signed char __bss_start = 0;

/* dtor_idx.6161 */
uint32_t dtor_idx_6161 = 0;

void __do_global_dtors_aux() {
    int1_t zf1;
    uint32_t eax2;
    uint32_t eax3;

    zf1 = __bss_start == 0;
    if (zf1) {
        eax2 = dtor_idx_6161;
        if (eax2 < 0) {
            do {
                eax3 = eax2 + 1;
                dtor_idx_6161 = eax3;
                *reinterpret_cast<int32_t*>(eax3 * 4 + 0x8049f1c)();
                eax2 = dtor_idx_6161;
            } while (eax2 < 0);
        }
        __bss_start = 1;
    }
    return;
}

int32_t __libc_start_main = 0x8048486;

void fun_8048480(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void fun_80483fc() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048525() {
}

void __libc_csu_init(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    int32_t ebp6;
    int32_t v7;
    int32_t edi8;
    int32_t esi9;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x193b;
    ebp6 = a1;
    _init(v7);
    edi8 = ebx4 - 0xe0 - (ebx4 - 0xe0) >> 2;
    if (edi8) {
        esi9 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi9 * 4 - 0xe0)(ebp6, a2, a3);
            ++esi9;
        } while (esi9 != edi8);
    }
    return;
}

void fun_8048711() {
    return;
}

void _fini() {
    fun_8048765();
}

int32_t g8049ffc = 0;

void fun_8048456() {
    goto g8049ffc;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

uint32_t g14;

void main(int32_t a1, struct s0* a2, int32_t a3) {
    int32_t* esp4;
    uint32_t eax5;
    int32_t v6;
    int32_t eax7;
    int32_t eax8;
    int32_t* esp9;
    int32_t v10;
    int32_t eax11;
    int32_t eax12;
    int32_t* esp13;
    int32_t v14;
    int32_t eax15;
    void* esp16;
    void* v17;
    uint32_t edx18;

    esp4 = reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 0x430);
    eax5 = g14;
    if (a1 == 1) {
        v6 = a2->f0;
        fun_8048420("%s [file to read]\n", v6);
        fun_8048460(1, v6);
        esp4 = esp4 - 1 + 1 - 1 + 1;
    }
    eax7 = a2->f4;
    eax8 = fun_8048400(eax7, "token");
    esp9 = esp4 - 1 + 1;
    if (eax8) {
        v10 = a2->f4;
        fun_8048420("You may not access '%s'\n", v10);
        fun_8048460(1, v10);
        esp9 = esp9 - 1 + 1 - 1 + 1;
    }
    eax11 = a2->f4;
    eax12 = fun_8048470(eax11, 0);
    esp13 = esp9 - 1 + 1;
    if (eax12 == -1) {
        v14 = a2->f4;
        fun_8048440(1, "Unable to open %s", v14);
        esp13 = esp13 - 1 + 1;
    }
    eax15 = fun_8048410(eax12, esp13 + 11, 0x400);
    esp16 = reinterpret_cast<void*>(esp13 - 1 + 1);
    if (eax15 == -1) {
        fun_8048440(1, "Unable to read fd %d", eax12);
        esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) - 4 + 4);
    }
    v17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp16) + 44);
    fun_8048490(1, v17, eax15);
    edx18 = eax5 ^ g14;
    if (edx18) {
        fun_8048430(1, v17, eax15);
    }
    return;
}

void fun_8048426() {
    goto 0x80483f0;
}

void fun_8048466() {
    goto 0x80483f0;
}

void fun_8048406() {
    goto 0x80483f0;
}

void fun_8048446() {
    goto 0x80483f0;
}

void fun_8048416() {
    goto 0x80483f0;
}

void fun_8048436() {
    goto 0x80483f0;
}

void fun_8048476() {
    goto 0x80483f0;
}

void fun_8048496() {
    goto 0x80483f0;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048480(main, __return_address(), esp1, __libc_csu_init, 0x8048720, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8048486() {
    goto 0x80483f0;
}
