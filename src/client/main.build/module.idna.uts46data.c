/* Generated code for Python module 'idna.uts46data'
 * created by Nuitka version 1.8.4
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_idna$uts46data" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_idna$uts46data;
PyDictObject *moduledict_idna$uts46data;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[173];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[173];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("idna.uts46data"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 173; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_idna$uts46data(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 173; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9e0670ec1ab110896395deeadfbe4163;
static PyCodeObject *codeobj_e6a7b4b8c1aa07c1068866ee4951babc;
static PyCodeObject *codeobj_33e8089550059e6ce44426e9eacb50af;
static PyCodeObject *codeobj_967fdf2391bfee1f03ed2227d512c241;
static PyCodeObject *codeobj_4ff6fc2d7ed72098e5a8bc58e0567850;
static PyCodeObject *codeobj_4dd5e2eced56aa42807be3ed88c7fd8f;
static PyCodeObject *codeobj_9ae524006d61248f5ee958a14d0f09bd;
static PyCodeObject *codeobj_aa78e1946c9585b9a3babc3e6e4bc280;
static PyCodeObject *codeobj_27d665a24f1a26ea07ab02c5e3a74e95;
static PyCodeObject *codeobj_aa5a49193650d181a6bb8202d757f74e;
static PyCodeObject *codeobj_a612da611f14fa1ba2d424f78bdb0981;
static PyCodeObject *codeobj_35f88c1c09cb34da234baf9fb7fa9f28;
static PyCodeObject *codeobj_1aaa77334175cb067c116223fec19dba;
static PyCodeObject *codeobj_2fdb97771315d5fba6f81dc16efd226b;
static PyCodeObject *codeobj_d43d2b210c151990ca599ec078008f65;
static PyCodeObject *codeobj_5e202290eb322eef191260d5d241a90f;
static PyCodeObject *codeobj_1ad19c0bd70122efd0ab79f7b04fb3af;
static PyCodeObject *codeobj_3ddcda8b9e16067892c6074e5748a0a8;
static PyCodeObject *codeobj_1e00d90932275555cc9fa57fb47a46ac;
static PyCodeObject *codeobj_2990354ef5acf8a41e80e65fbe4fc0be;
static PyCodeObject *codeobj_00a1eb94e13e7f569abfa9dcac7dfe2b;
static PyCodeObject *codeobj_bd8246dc563eee95c6c1ca27ef69d09c;
static PyCodeObject *codeobj_25559e14918bc9dbcc2e0b4b59d3546f;
static PyCodeObject *codeobj_eab2edbda0980760be8d6c4141a146ca;
static PyCodeObject *codeobj_56fdaff1052cb9d0a49e28b8a7c670fd;
static PyCodeObject *codeobj_c53bcfd6db33e293b93e2a23bb1b4eea;
static PyCodeObject *codeobj_77f13ead24b668d3e6a36186fb0293bf;
static PyCodeObject *codeobj_fc12ee1aafe6e1d62d3e86dab8428fbf;
static PyCodeObject *codeobj_b40f9eddd5cf1a33d7d64d319d488da1;
static PyCodeObject *codeobj_c190b73680c16a4f9f97c43f2f17850d;
static PyCodeObject *codeobj_15ae12e07479689d651b849ead5d33aa;
static PyCodeObject *codeobj_56d0d9544bcb40346af97f10d8017ebe;
static PyCodeObject *codeobj_23ca1670d53709458ec4802337f8afe4;
static PyCodeObject *codeobj_0b2c97434b1f2d8a505cea56e77206a2;
static PyCodeObject *codeobj_6fec93c1dd54d703013c71a6d0263765;
static PyCodeObject *codeobj_7c1c1c7a638b4441ced7539fe0bfd800;
static PyCodeObject *codeobj_5bfdcced8292585e248081aa3123aa1d;
static PyCodeObject *codeobj_4709745394fb6da65ee8fb2f60920efe;
static PyCodeObject *codeobj_f194b616cb610596f17bc9233e4eca18;
static PyCodeObject *codeobj_97492d0a321892556a44b5ead5c2f519;
static PyCodeObject *codeobj_f753619b290751cc0bf97d3b5d852eb3;
static PyCodeObject *codeobj_601c9a98bca28ec2903b6c30126860a1;
static PyCodeObject *codeobj_aa12e5208f814ca74d09f9f806be1fe2;
static PyCodeObject *codeobj_074a4bbc4c78c3b6ca0d51b86442f501;
static PyCodeObject *codeobj_331dae18191ef8bdb5e8d3dd15091eb7;
static PyCodeObject *codeobj_0eea33f8ea5f1a62a5f55440a456ac35;
static PyCodeObject *codeobj_950beea013abcb12492774f279cf4300;
static PyCodeObject *codeobj_c09b11cd5607b0c53173e7e07427adcf;
static PyCodeObject *codeobj_c01f7059d284d2b2f12bfaf88cca37ee;
static PyCodeObject *codeobj_e6b1152c46dd5c5a6575943bfde1ad5a;
static PyCodeObject *codeobj_75400c50d9e450ff82436d8ca4095089;
static PyCodeObject *codeobj_7a656e5400aab7675a4b36f16a5a78e7;
static PyCodeObject *codeobj_d21b1f7016acede04994f45248c8b1e3;
static PyCodeObject *codeobj_eb130e796081a732d4bfe9563caa0923;
static PyCodeObject *codeobj_057110e150c278ed57464f4efe044580;
static PyCodeObject *codeobj_28bab87abd751b2c4dddbaafc1ce674b;
static PyCodeObject *codeobj_e1b517e6b07e5f1b6400f5e383873290;
static PyCodeObject *codeobj_24fbe11fefe6aaded5fb1c6faac01dcb;
static PyCodeObject *codeobj_a6649ee04b486b349e73900a06bb33b8;
static PyCodeObject *codeobj_e78377a74f6dea79ab5587a4bd3e5ff2;
static PyCodeObject *codeobj_1144b325b9098156ff5b244582b0e17a;
static PyCodeObject *codeobj_60f721f0b5f324788b7840a39f9aedc1;
static PyCodeObject *codeobj_15944900a74cd0dcb181d055cb97e0d7;
static PyCodeObject *codeobj_3a4257bc634e89c3915ab98030dd1f50;
static PyCodeObject *codeobj_e18a7fe49eb2ec887c76b9d32533c189;
static PyCodeObject *codeobj_9271ef03e807eea6f2f9d7ff0ab9d7b3;
static PyCodeObject *codeobj_9494d605f96ec34f6e83523cc347b550;
static PyCodeObject *codeobj_e5d6ce9cd09dc01e6c26c95612c30b0f;
static PyCodeObject *codeobj_5a5d2111428b0d69dae73c02b4f02b39;
static PyCodeObject *codeobj_eed588b3ade9ec01124609a0406633e6;
static PyCodeObject *codeobj_4fbad52368d00b3c1fac3c70ab90e9f6;
static PyCodeObject *codeobj_957909da0eaf857274a75325cdf2ec90;
static PyCodeObject *codeobj_458389319e6069d5550699d03f9c0529;
static PyCodeObject *codeobj_7f31b02de2c538dca5142518f453e8e2;
static PyCodeObject *codeobj_e819108354bfb40324e55a23eba68291;
static PyCodeObject *codeobj_a6281d9c2932b9dc363329b0b17d9162;
static PyCodeObject *codeobj_ab773385a923e72c44b0bdfd4b7d4bf6;
static PyCodeObject *codeobj_e83a4bf96b9093955c5468001021d9eb;
static PyCodeObject *codeobj_a6de421534574731a7fb2427c378e767;
static PyCodeObject *codeobj_dd1ff5406a73efcf406011129aa477e3;
static PyCodeObject *codeobj_45427147833df5af5d5555a01747b2e9;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[170]); CHECK_OBJECT(module_filename_obj);
    codeobj_9e0670ec1ab110896395deeadfbe4163 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[171], mod_consts[171], NULL, NULL, 0, 0, 0);
    codeobj_e6a7b4b8c1aa07c1068866ee4951babc = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[89], mod_consts[89], NULL, NULL, 0, 0, 0);
    codeobj_33e8089550059e6ce44426e9eacb50af = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[90], mod_consts[90], NULL, NULL, 0, 0, 0);
    codeobj_967fdf2391bfee1f03ed2227d512c241 = MAKE_CODE_OBJECT(module_filename_obj, 1048, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[99], mod_consts[99], NULL, NULL, 0, 0, 0);
    codeobj_4ff6fc2d7ed72098e5a8bc58e0567850 = MAKE_CODE_OBJECT(module_filename_obj, 1152, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[100], mod_consts[100], NULL, NULL, 0, 0, 0);
    codeobj_4dd5e2eced56aa42807be3ed88c7fd8f = MAKE_CODE_OBJECT(module_filename_obj, 1256, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[101], mod_consts[101], NULL, NULL, 0, 0, 0);
    codeobj_9ae524006d61248f5ee958a14d0f09bd = MAKE_CODE_OBJECT(module_filename_obj, 1360, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[102], mod_consts[102], NULL, NULL, 0, 0, 0);
    codeobj_aa78e1946c9585b9a3babc3e6e4bc280 = MAKE_CODE_OBJECT(module_filename_obj, 1464, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[103], mod_consts[103], NULL, NULL, 0, 0, 0);
    codeobj_27d665a24f1a26ea07ab02c5e3a74e95 = MAKE_CODE_OBJECT(module_filename_obj, 1568, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[104], mod_consts[104], NULL, NULL, 0, 0, 0);
    codeobj_aa5a49193650d181a6bb8202d757f74e = MAKE_CODE_OBJECT(module_filename_obj, 1672, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[105], mod_consts[105], NULL, NULL, 0, 0, 0);
    codeobj_a612da611f14fa1ba2d424f78bdb0981 = MAKE_CODE_OBJECT(module_filename_obj, 1776, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[106], mod_consts[106], NULL, NULL, 0, 0, 0);
    codeobj_35f88c1c09cb34da234baf9fb7fa9f28 = MAKE_CODE_OBJECT(module_filename_obj, 1880, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[107], mod_consts[107], NULL, NULL, 0, 0, 0);
    codeobj_1aaa77334175cb067c116223fec19dba = MAKE_CODE_OBJECT(module_filename_obj, 1984, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[108], mod_consts[108], NULL, NULL, 0, 0, 0);
    codeobj_2fdb97771315d5fba6f81dc16efd226b = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[91], mod_consts[91], NULL, NULL, 0, 0, 0);
    codeobj_d43d2b210c151990ca599ec078008f65 = MAKE_CODE_OBJECT(module_filename_obj, 2088, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[109], mod_consts[109], NULL, NULL, 0, 0, 0);
    codeobj_5e202290eb322eef191260d5d241a90f = MAKE_CODE_OBJECT(module_filename_obj, 2192, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[110], mod_consts[110], NULL, NULL, 0, 0, 0);
    codeobj_1ad19c0bd70122efd0ab79f7b04fb3af = MAKE_CODE_OBJECT(module_filename_obj, 2296, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[111], mod_consts[111], NULL, NULL, 0, 0, 0);
    codeobj_3ddcda8b9e16067892c6074e5748a0a8 = MAKE_CODE_OBJECT(module_filename_obj, 2400, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[112], mod_consts[112], NULL, NULL, 0, 0, 0);
    codeobj_1e00d90932275555cc9fa57fb47a46ac = MAKE_CODE_OBJECT(module_filename_obj, 2504, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_2990354ef5acf8a41e80e65fbe4fc0be = MAKE_CODE_OBJECT(module_filename_obj, 2608, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[114], mod_consts[114], NULL, NULL, 0, 0, 0);
    codeobj_00a1eb94e13e7f569abfa9dcac7dfe2b = MAKE_CODE_OBJECT(module_filename_obj, 2712, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[115], mod_consts[115], NULL, NULL, 0, 0, 0);
    codeobj_bd8246dc563eee95c6c1ca27ef69d09c = MAKE_CODE_OBJECT(module_filename_obj, 2816, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[116], mod_consts[116], NULL, NULL, 0, 0, 0);
    codeobj_25559e14918bc9dbcc2e0b4b59d3546f = MAKE_CODE_OBJECT(module_filename_obj, 2920, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[117], mod_consts[117], NULL, NULL, 0, 0, 0);
    codeobj_eab2edbda0980760be8d6c4141a146ca = MAKE_CODE_OBJECT(module_filename_obj, 3024, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[118], mod_consts[118], NULL, NULL, 0, 0, 0);
    codeobj_56fdaff1052cb9d0a49e28b8a7c670fd = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[92], mod_consts[92], NULL, NULL, 0, 0, 0);
    codeobj_c53bcfd6db33e293b93e2a23bb1b4eea = MAKE_CODE_OBJECT(module_filename_obj, 3128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[119], mod_consts[119], NULL, NULL, 0, 0, 0);
    codeobj_77f13ead24b668d3e6a36186fb0293bf = MAKE_CODE_OBJECT(module_filename_obj, 3232, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[120], mod_consts[120], NULL, NULL, 0, 0, 0);
    codeobj_fc12ee1aafe6e1d62d3e86dab8428fbf = MAKE_CODE_OBJECT(module_filename_obj, 3336, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[121], mod_consts[121], NULL, NULL, 0, 0, 0);
    codeobj_b40f9eddd5cf1a33d7d64d319d488da1 = MAKE_CODE_OBJECT(module_filename_obj, 3440, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[122], mod_consts[122], NULL, NULL, 0, 0, 0);
    codeobj_c190b73680c16a4f9f97c43f2f17850d = MAKE_CODE_OBJECT(module_filename_obj, 3544, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[123], mod_consts[123], NULL, NULL, 0, 0, 0);
    codeobj_15ae12e07479689d651b849ead5d33aa = MAKE_CODE_OBJECT(module_filename_obj, 3648, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[124], mod_consts[124], NULL, NULL, 0, 0, 0);
    codeobj_56d0d9544bcb40346af97f10d8017ebe = MAKE_CODE_OBJECT(module_filename_obj, 3752, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[125], mod_consts[125], NULL, NULL, 0, 0, 0);
    codeobj_23ca1670d53709458ec4802337f8afe4 = MAKE_CODE_OBJECT(module_filename_obj, 3856, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[126], mod_consts[126], NULL, NULL, 0, 0, 0);
    codeobj_0b2c97434b1f2d8a505cea56e77206a2 = MAKE_CODE_OBJECT(module_filename_obj, 3960, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[127], mod_consts[127], NULL, NULL, 0, 0, 0);
    codeobj_6fec93c1dd54d703013c71a6d0263765 = MAKE_CODE_OBJECT(module_filename_obj, 4064, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[128], mod_consts[128], NULL, NULL, 0, 0, 0);
    codeobj_7c1c1c7a638b4441ced7539fe0bfd800 = MAKE_CODE_OBJECT(module_filename_obj, 424, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[93], mod_consts[93], NULL, NULL, 0, 0, 0);
    codeobj_5bfdcced8292585e248081aa3123aa1d = MAKE_CODE_OBJECT(module_filename_obj, 4168, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[129], mod_consts[129], NULL, NULL, 0, 0, 0);
    codeobj_4709745394fb6da65ee8fb2f60920efe = MAKE_CODE_OBJECT(module_filename_obj, 4272, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[130], mod_consts[130], NULL, NULL, 0, 0, 0);
    codeobj_f194b616cb610596f17bc9233e4eca18 = MAKE_CODE_OBJECT(module_filename_obj, 4376, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[131], mod_consts[131], NULL, NULL, 0, 0, 0);
    codeobj_97492d0a321892556a44b5ead5c2f519 = MAKE_CODE_OBJECT(module_filename_obj, 4480, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[132], mod_consts[132], NULL, NULL, 0, 0, 0);
    codeobj_f753619b290751cc0bf97d3b5d852eb3 = MAKE_CODE_OBJECT(module_filename_obj, 4584, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[133], mod_consts[133], NULL, NULL, 0, 0, 0);
    codeobj_601c9a98bca28ec2903b6c30126860a1 = MAKE_CODE_OBJECT(module_filename_obj, 4688, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[134], mod_consts[134], NULL, NULL, 0, 0, 0);
    codeobj_aa12e5208f814ca74d09f9f806be1fe2 = MAKE_CODE_OBJECT(module_filename_obj, 4792, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[135], mod_consts[135], NULL, NULL, 0, 0, 0);
    codeobj_074a4bbc4c78c3b6ca0d51b86442f501 = MAKE_CODE_OBJECT(module_filename_obj, 4896, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[136], mod_consts[136], NULL, NULL, 0, 0, 0);
    codeobj_331dae18191ef8bdb5e8d3dd15091eb7 = MAKE_CODE_OBJECT(module_filename_obj, 5000, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[137], mod_consts[137], NULL, NULL, 0, 0, 0);
    codeobj_0eea33f8ea5f1a62a5f55440a456ac35 = MAKE_CODE_OBJECT(module_filename_obj, 5104, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[138], mod_consts[138], NULL, NULL, 0, 0, 0);
    codeobj_950beea013abcb12492774f279cf4300 = MAKE_CODE_OBJECT(module_filename_obj, 528, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[94], mod_consts[94], NULL, NULL, 0, 0, 0);
    codeobj_c09b11cd5607b0c53173e7e07427adcf = MAKE_CODE_OBJECT(module_filename_obj, 5208, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[139], mod_consts[139], NULL, NULL, 0, 0, 0);
    codeobj_c01f7059d284d2b2f12bfaf88cca37ee = MAKE_CODE_OBJECT(module_filename_obj, 5312, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[140], mod_consts[140], NULL, NULL, 0, 0, 0);
    codeobj_e6b1152c46dd5c5a6575943bfde1ad5a = MAKE_CODE_OBJECT(module_filename_obj, 5416, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[141], mod_consts[141], NULL, NULL, 0, 0, 0);
    codeobj_75400c50d9e450ff82436d8ca4095089 = MAKE_CODE_OBJECT(module_filename_obj, 5520, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[142], mod_consts[142], NULL, NULL, 0, 0, 0);
    codeobj_7a656e5400aab7675a4b36f16a5a78e7 = MAKE_CODE_OBJECT(module_filename_obj, 5624, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[143], mod_consts[143], NULL, NULL, 0, 0, 0);
    codeobj_d21b1f7016acede04994f45248c8b1e3 = MAKE_CODE_OBJECT(module_filename_obj, 5728, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[144], mod_consts[144], NULL, NULL, 0, 0, 0);
    codeobj_eb130e796081a732d4bfe9563caa0923 = MAKE_CODE_OBJECT(module_filename_obj, 5832, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[145], mod_consts[145], NULL, NULL, 0, 0, 0);
    codeobj_057110e150c278ed57464f4efe044580 = MAKE_CODE_OBJECT(module_filename_obj, 5936, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[146], mod_consts[146], NULL, NULL, 0, 0, 0);
    codeobj_28bab87abd751b2c4dddbaafc1ce674b = MAKE_CODE_OBJECT(module_filename_obj, 6040, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[147], NULL, NULL, 0, 0, 0);
    codeobj_e1b517e6b07e5f1b6400f5e383873290 = MAKE_CODE_OBJECT(module_filename_obj, 6144, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[148], mod_consts[148], NULL, NULL, 0, 0, 0);
    codeobj_24fbe11fefe6aaded5fb1c6faac01dcb = MAKE_CODE_OBJECT(module_filename_obj, 632, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[95], mod_consts[95], NULL, NULL, 0, 0, 0);
    codeobj_a6649ee04b486b349e73900a06bb33b8 = MAKE_CODE_OBJECT(module_filename_obj, 6248, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[149], mod_consts[149], NULL, NULL, 0, 0, 0);
    codeobj_e78377a74f6dea79ab5587a4bd3e5ff2 = MAKE_CODE_OBJECT(module_filename_obj, 6352, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[150], mod_consts[150], NULL, NULL, 0, 0, 0);
    codeobj_1144b325b9098156ff5b244582b0e17a = MAKE_CODE_OBJECT(module_filename_obj, 6456, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[151], mod_consts[151], NULL, NULL, 0, 0, 0);
    codeobj_60f721f0b5f324788b7840a39f9aedc1 = MAKE_CODE_OBJECT(module_filename_obj, 6560, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[152], mod_consts[152], NULL, NULL, 0, 0, 0);
    codeobj_15944900a74cd0dcb181d055cb97e0d7 = MAKE_CODE_OBJECT(module_filename_obj, 6664, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[153], mod_consts[153], NULL, NULL, 0, 0, 0);
    codeobj_3a4257bc634e89c3915ab98030dd1f50 = MAKE_CODE_OBJECT(module_filename_obj, 6768, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[154], mod_consts[154], NULL, NULL, 0, 0, 0);
    codeobj_e18a7fe49eb2ec887c76b9d32533c189 = MAKE_CODE_OBJECT(module_filename_obj, 6872, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[155], mod_consts[155], NULL, NULL, 0, 0, 0);
    codeobj_9271ef03e807eea6f2f9d7ff0ab9d7b3 = MAKE_CODE_OBJECT(module_filename_obj, 6976, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[156], mod_consts[156], NULL, NULL, 0, 0, 0);
    codeobj_9494d605f96ec34f6e83523cc347b550 = MAKE_CODE_OBJECT(module_filename_obj, 7080, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[157], mod_consts[157], NULL, NULL, 0, 0, 0);
    codeobj_e5d6ce9cd09dc01e6c26c95612c30b0f = MAKE_CODE_OBJECT(module_filename_obj, 7184, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[158], mod_consts[158], NULL, NULL, 0, 0, 0);
    codeobj_5a5d2111428b0d69dae73c02b4f02b39 = MAKE_CODE_OBJECT(module_filename_obj, 736, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[96], mod_consts[96], NULL, NULL, 0, 0, 0);
    codeobj_eed588b3ade9ec01124609a0406633e6 = MAKE_CODE_OBJECT(module_filename_obj, 7288, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[159], mod_consts[159], NULL, NULL, 0, 0, 0);
    codeobj_4fbad52368d00b3c1fac3c70ab90e9f6 = MAKE_CODE_OBJECT(module_filename_obj, 7392, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[160], mod_consts[160], NULL, NULL, 0, 0, 0);
    codeobj_957909da0eaf857274a75325cdf2ec90 = MAKE_CODE_OBJECT(module_filename_obj, 7496, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[161], mod_consts[161], NULL, NULL, 0, 0, 0);
    codeobj_458389319e6069d5550699d03f9c0529 = MAKE_CODE_OBJECT(module_filename_obj, 7600, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[162], mod_consts[162], NULL, NULL, 0, 0, 0);
    codeobj_7f31b02de2c538dca5142518f453e8e2 = MAKE_CODE_OBJECT(module_filename_obj, 7704, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[163], mod_consts[163], NULL, NULL, 0, 0, 0);
    codeobj_e819108354bfb40324e55a23eba68291 = MAKE_CODE_OBJECT(module_filename_obj, 7808, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[164], mod_consts[164], NULL, NULL, 0, 0, 0);
    codeobj_a6281d9c2932b9dc363329b0b17d9162 = MAKE_CODE_OBJECT(module_filename_obj, 7912, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[165], mod_consts[165], NULL, NULL, 0, 0, 0);
    codeobj_ab773385a923e72c44b0bdfd4b7d4bf6 = MAKE_CODE_OBJECT(module_filename_obj, 8016, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[166], mod_consts[166], NULL, NULL, 0, 0, 0);
    codeobj_e83a4bf96b9093955c5468001021d9eb = MAKE_CODE_OBJECT(module_filename_obj, 8120, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[167], mod_consts[167], NULL, NULL, 0, 0, 0);
    codeobj_a6de421534574731a7fb2427c378e767 = MAKE_CODE_OBJECT(module_filename_obj, 8224, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[168], mod_consts[168], NULL, NULL, 0, 0, 0);
    codeobj_dd1ff5406a73efcf406011129aa477e3 = MAKE_CODE_OBJECT(module_filename_obj, 840, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[97], mod_consts[97], NULL, NULL, 0, 0, 0);
    codeobj_45427147833df5af5d5555a01747b2e9 = MAKE_CODE_OBJECT(module_filename_obj, 944, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[98], mod_consts[98], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__10__seg_9();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__11__seg_10();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__12__seg_11();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__13__seg_12();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__14__seg_13();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__15__seg_14();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__16__seg_15();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__17__seg_16();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__18__seg_17();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__19__seg_18();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__1__seg_0();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__20__seg_19();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__21__seg_20();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__22__seg_21();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__23__seg_22();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__24__seg_23();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__25__seg_24();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__26__seg_25();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__27__seg_26();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__28__seg_27();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__29__seg_28();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__2__seg_1();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__30__seg_29();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__31__seg_30();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__32__seg_31();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__33__seg_32();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__34__seg_33();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__35__seg_34();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__36__seg_35();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__37__seg_36();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__38__seg_37();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__39__seg_38();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__3__seg_2();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__40__seg_39();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__41__seg_40();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__42__seg_41();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__43__seg_42();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__44__seg_43();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__45__seg_44();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__46__seg_45();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__47__seg_46();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__48__seg_47();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__49__seg_48();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__4__seg_3();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__50__seg_49();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__51__seg_50();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__52__seg_51();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__53__seg_52();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__54__seg_53();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__55__seg_54();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__56__seg_55();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__57__seg_56();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__58__seg_57();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__59__seg_58();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__5__seg_4();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__60__seg_59();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__61__seg_60();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__62__seg_61();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__63__seg_62();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__64__seg_63();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__65__seg_64();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__66__seg_65();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__67__seg_66();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__68__seg_67();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__69__seg_68();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__6__seg_5();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__70__seg_69();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__71__seg_70();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__72__seg_71();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__73__seg_72();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__74__seg_73();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__75__seg_74();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__76__seg_75();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__77__seg_76();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__78__seg_77();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__79__seg_78();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__7__seg_6();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__80__seg_79();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__8__seg_7();


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__9__seg_8();


// The module function definitions.
static PyObject *impl_idna$uts46data$$$function__1__seg_0(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[0]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__2__seg_1(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[1]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__3__seg_2(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[2]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__4__seg_3(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[3]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__5__seg_4(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[4]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__6__seg_5(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[5]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__7__seg_6(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[6]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__8__seg_7(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[7]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__9__seg_8(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[8]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__10__seg_9(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[9]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__11__seg_10(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[10]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__12__seg_11(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[11]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__13__seg_12(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[12]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__14__seg_13(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[13]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__15__seg_14(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[14]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__16__seg_15(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[15]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__17__seg_16(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[16]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__18__seg_17(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[17]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__19__seg_18(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[18]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__20__seg_19(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[19]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__21__seg_20(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[20]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__22__seg_21(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[21]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__23__seg_22(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[22]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__24__seg_23(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[23]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__25__seg_24(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[24]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__26__seg_25(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[25]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__27__seg_26(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[26]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__28__seg_27(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[27]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__29__seg_28(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[28]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__30__seg_29(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[29]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__31__seg_30(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[30]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__32__seg_31(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[31]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__33__seg_32(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[32]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__34__seg_33(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[33]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__35__seg_34(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[34]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__36__seg_35(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[35]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__37__seg_36(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[36]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__38__seg_37(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[37]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__39__seg_38(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[38]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__40__seg_39(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[39]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__41__seg_40(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[40]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__42__seg_41(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[41]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__43__seg_42(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[42]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__44__seg_43(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[43]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__45__seg_44(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[44]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__46__seg_45(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[45]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__47__seg_46(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[46]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__48__seg_47(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[47]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__49__seg_48(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[48]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__50__seg_49(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[49]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__51__seg_50(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[50]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__52__seg_51(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[51]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__53__seg_52(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[52]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__54__seg_53(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[53]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__55__seg_54(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[54]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__56__seg_55(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[55]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__57__seg_56(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[56]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__58__seg_57(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[57]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__59__seg_58(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[58]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__60__seg_59(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[59]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__61__seg_60(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[60]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__62__seg_61(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[61]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__63__seg_62(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[62]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__64__seg_63(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[63]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__65__seg_64(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[64]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__66__seg_65(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[65]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__67__seg_66(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[66]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__68__seg_67(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[67]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__69__seg_68(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[68]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__70__seg_69(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[69]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__71__seg_70(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[70]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__72__seg_71(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[71]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__73__seg_72(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[72]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__74__seg_73(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[73]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__75__seg_74(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[74]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__76__seg_75(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[75]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__77__seg_76(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[76]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__78__seg_77(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[77]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__79__seg_78(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[78]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__80__seg_79(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[79]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__10__seg_9() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__10__seg_9,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_45427147833df5af5d5555a01747b2e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__11__seg_10() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__11__seg_10,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_967fdf2391bfee1f03ed2227d512c241,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__12__seg_11() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__12__seg_11,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4ff6fc2d7ed72098e5a8bc58e0567850,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__13__seg_12() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__13__seg_12,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4dd5e2eced56aa42807be3ed88c7fd8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__14__seg_13() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__14__seg_13,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9ae524006d61248f5ee958a14d0f09bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__15__seg_14() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__15__seg_14,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa78e1946c9585b9a3babc3e6e4bc280,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__16__seg_15() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__16__seg_15,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_27d665a24f1a26ea07ab02c5e3a74e95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__17__seg_16() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__17__seg_16,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa5a49193650d181a6bb8202d757f74e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__18__seg_17() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__18__seg_17,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a612da611f14fa1ba2d424f78bdb0981,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__19__seg_18() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__19__seg_18,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_35f88c1c09cb34da234baf9fb7fa9f28,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__1__seg_0() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__1__seg_0,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e6a7b4b8c1aa07c1068866ee4951babc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__20__seg_19() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__20__seg_19,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1aaa77334175cb067c116223fec19dba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__21__seg_20() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__21__seg_20,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d43d2b210c151990ca599ec078008f65,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__22__seg_21() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__22__seg_21,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5e202290eb322eef191260d5d241a90f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__23__seg_22() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__23__seg_22,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1ad19c0bd70122efd0ab79f7b04fb3af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__24__seg_23() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__24__seg_23,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3ddcda8b9e16067892c6074e5748a0a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__25__seg_24() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__25__seg_24,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1e00d90932275555cc9fa57fb47a46ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__26__seg_25() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__26__seg_25,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2990354ef5acf8a41e80e65fbe4fc0be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__27__seg_26() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__27__seg_26,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_00a1eb94e13e7f569abfa9dcac7dfe2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__28__seg_27() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__28__seg_27,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bd8246dc563eee95c6c1ca27ef69d09c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__29__seg_28() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__29__seg_28,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_25559e14918bc9dbcc2e0b4b59d3546f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__2__seg_1() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__2__seg_1,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_33e8089550059e6ce44426e9eacb50af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__30__seg_29() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__30__seg_29,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eab2edbda0980760be8d6c4141a146ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__31__seg_30() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__31__seg_30,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c53bcfd6db33e293b93e2a23bb1b4eea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__32__seg_31() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__32__seg_31,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_77f13ead24b668d3e6a36186fb0293bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__33__seg_32() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__33__seg_32,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fc12ee1aafe6e1d62d3e86dab8428fbf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__34__seg_33() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__34__seg_33,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b40f9eddd5cf1a33d7d64d319d488da1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__35__seg_34() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__35__seg_34,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c190b73680c16a4f9f97c43f2f17850d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__36__seg_35() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__36__seg_35,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_15ae12e07479689d651b849ead5d33aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__37__seg_36() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__37__seg_36,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_56d0d9544bcb40346af97f10d8017ebe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__38__seg_37() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__38__seg_37,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_23ca1670d53709458ec4802337f8afe4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__39__seg_38() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__39__seg_38,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0b2c97434b1f2d8a505cea56e77206a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__3__seg_2() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__3__seg_2,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2fdb97771315d5fba6f81dc16efd226b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__40__seg_39() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__40__seg_39,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6fec93c1dd54d703013c71a6d0263765,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__41__seg_40() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__41__seg_40,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5bfdcced8292585e248081aa3123aa1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__42__seg_41() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__42__seg_41,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4709745394fb6da65ee8fb2f60920efe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__43__seg_42() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__43__seg_42,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f194b616cb610596f17bc9233e4eca18,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__44__seg_43() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__44__seg_43,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_97492d0a321892556a44b5ead5c2f519,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__45__seg_44() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__45__seg_44,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f753619b290751cc0bf97d3b5d852eb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__46__seg_45() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__46__seg_45,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_601c9a98bca28ec2903b6c30126860a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__47__seg_46() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__47__seg_46,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa12e5208f814ca74d09f9f806be1fe2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__48__seg_47() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__48__seg_47,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_074a4bbc4c78c3b6ca0d51b86442f501,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__49__seg_48() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__49__seg_48,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_331dae18191ef8bdb5e8d3dd15091eb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__4__seg_3() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__4__seg_3,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_56fdaff1052cb9d0a49e28b8a7c670fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__50__seg_49() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__50__seg_49,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0eea33f8ea5f1a62a5f55440a456ac35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__51__seg_50() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__51__seg_50,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c09b11cd5607b0c53173e7e07427adcf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__52__seg_51() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__52__seg_51,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c01f7059d284d2b2f12bfaf88cca37ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__53__seg_52() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__53__seg_52,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e6b1152c46dd5c5a6575943bfde1ad5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__54__seg_53() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__54__seg_53,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_75400c50d9e450ff82436d8ca4095089,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__55__seg_54() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__55__seg_54,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7a656e5400aab7675a4b36f16a5a78e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__56__seg_55() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__56__seg_55,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d21b1f7016acede04994f45248c8b1e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__57__seg_56() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__57__seg_56,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eb130e796081a732d4bfe9563caa0923,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__58__seg_57() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__58__seg_57,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_057110e150c278ed57464f4efe044580,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__59__seg_58() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__59__seg_58,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_28bab87abd751b2c4dddbaafc1ce674b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__5__seg_4() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__5__seg_4,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7c1c1c7a638b4441ced7539fe0bfd800,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__60__seg_59() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__60__seg_59,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e1b517e6b07e5f1b6400f5e383873290,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__61__seg_60() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__61__seg_60,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a6649ee04b486b349e73900a06bb33b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__62__seg_61() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__62__seg_61,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e78377a74f6dea79ab5587a4bd3e5ff2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__63__seg_62() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__63__seg_62,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1144b325b9098156ff5b244582b0e17a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__64__seg_63() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__64__seg_63,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_60f721f0b5f324788b7840a39f9aedc1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__65__seg_64() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__65__seg_64,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_15944900a74cd0dcb181d055cb97e0d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__66__seg_65() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__66__seg_65,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3a4257bc634e89c3915ab98030dd1f50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__67__seg_66() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__67__seg_66,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e18a7fe49eb2ec887c76b9d32533c189,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__68__seg_67() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__68__seg_67,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9271ef03e807eea6f2f9d7ff0ab9d7b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__69__seg_68() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__69__seg_68,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9494d605f96ec34f6e83523cc347b550,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__6__seg_5() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__6__seg_5,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_950beea013abcb12492774f279cf4300,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__70__seg_69() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__70__seg_69,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e5d6ce9cd09dc01e6c26c95612c30b0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__71__seg_70() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__71__seg_70,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eed588b3ade9ec01124609a0406633e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__72__seg_71() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__72__seg_71,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4fbad52368d00b3c1fac3c70ab90e9f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__73__seg_72() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__73__seg_72,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_957909da0eaf857274a75325cdf2ec90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__74__seg_73() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__74__seg_73,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_458389319e6069d5550699d03f9c0529,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__75__seg_74() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__75__seg_74,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f31b02de2c538dca5142518f453e8e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__76__seg_75() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__76__seg_75,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e819108354bfb40324e55a23eba68291,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__77__seg_76() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__77__seg_76,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a6281d9c2932b9dc363329b0b17d9162,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__78__seg_77() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__78__seg_77,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ab773385a923e72c44b0bdfd4b7d4bf6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__79__seg_78() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__79__seg_78,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e83a4bf96b9093955c5468001021d9eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__7__seg_6() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__7__seg_6,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_24fbe11fefe6aaded5fb1c6faac01dcb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__80__seg_79() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__80__seg_79,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a6de421534574731a7fb2427c378e767,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__8__seg_7() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__8__seg_7,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5a5d2111428b0d69dae73c02b4f02b39,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__9__seg_8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__9__seg_8,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dd1ff5406a73efcf406011129aa477e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_idna$uts46data[] = {
    impl_idna$uts46data$$$function__1__seg_0,
    impl_idna$uts46data$$$function__2__seg_1,
    impl_idna$uts46data$$$function__3__seg_2,
    impl_idna$uts46data$$$function__4__seg_3,
    impl_idna$uts46data$$$function__5__seg_4,
    impl_idna$uts46data$$$function__6__seg_5,
    impl_idna$uts46data$$$function__7__seg_6,
    impl_idna$uts46data$$$function__8__seg_7,
    impl_idna$uts46data$$$function__9__seg_8,
    impl_idna$uts46data$$$function__10__seg_9,
    impl_idna$uts46data$$$function__11__seg_10,
    impl_idna$uts46data$$$function__12__seg_11,
    impl_idna$uts46data$$$function__13__seg_12,
    impl_idna$uts46data$$$function__14__seg_13,
    impl_idna$uts46data$$$function__15__seg_14,
    impl_idna$uts46data$$$function__16__seg_15,
    impl_idna$uts46data$$$function__17__seg_16,
    impl_idna$uts46data$$$function__18__seg_17,
    impl_idna$uts46data$$$function__19__seg_18,
    impl_idna$uts46data$$$function__20__seg_19,
    impl_idna$uts46data$$$function__21__seg_20,
    impl_idna$uts46data$$$function__22__seg_21,
    impl_idna$uts46data$$$function__23__seg_22,
    impl_idna$uts46data$$$function__24__seg_23,
    impl_idna$uts46data$$$function__25__seg_24,
    impl_idna$uts46data$$$function__26__seg_25,
    impl_idna$uts46data$$$function__27__seg_26,
    impl_idna$uts46data$$$function__28__seg_27,
    impl_idna$uts46data$$$function__29__seg_28,
    impl_idna$uts46data$$$function__30__seg_29,
    impl_idna$uts46data$$$function__31__seg_30,
    impl_idna$uts46data$$$function__32__seg_31,
    impl_idna$uts46data$$$function__33__seg_32,
    impl_idna$uts46data$$$function__34__seg_33,
    impl_idna$uts46data$$$function__35__seg_34,
    impl_idna$uts46data$$$function__36__seg_35,
    impl_idna$uts46data$$$function__37__seg_36,
    impl_idna$uts46data$$$function__38__seg_37,
    impl_idna$uts46data$$$function__39__seg_38,
    impl_idna$uts46data$$$function__40__seg_39,
    impl_idna$uts46data$$$function__41__seg_40,
    impl_idna$uts46data$$$function__42__seg_41,
    impl_idna$uts46data$$$function__43__seg_42,
    impl_idna$uts46data$$$function__44__seg_43,
    impl_idna$uts46data$$$function__45__seg_44,
    impl_idna$uts46data$$$function__46__seg_45,
    impl_idna$uts46data$$$function__47__seg_46,
    impl_idna$uts46data$$$function__48__seg_47,
    impl_idna$uts46data$$$function__49__seg_48,
    impl_idna$uts46data$$$function__50__seg_49,
    impl_idna$uts46data$$$function__51__seg_50,
    impl_idna$uts46data$$$function__52__seg_51,
    impl_idna$uts46data$$$function__53__seg_52,
    impl_idna$uts46data$$$function__54__seg_53,
    impl_idna$uts46data$$$function__55__seg_54,
    impl_idna$uts46data$$$function__56__seg_55,
    impl_idna$uts46data$$$function__57__seg_56,
    impl_idna$uts46data$$$function__58__seg_57,
    impl_idna$uts46data$$$function__59__seg_58,
    impl_idna$uts46data$$$function__60__seg_59,
    impl_idna$uts46data$$$function__61__seg_60,
    impl_idna$uts46data$$$function__62__seg_61,
    impl_idna$uts46data$$$function__63__seg_62,
    impl_idna$uts46data$$$function__64__seg_63,
    impl_idna$uts46data$$$function__65__seg_64,
    impl_idna$uts46data$$$function__66__seg_65,
    impl_idna$uts46data$$$function__67__seg_66,
    impl_idna$uts46data$$$function__68__seg_67,
    impl_idna$uts46data$$$function__69__seg_68,
    impl_idna$uts46data$$$function__70__seg_69,
    impl_idna$uts46data$$$function__71__seg_70,
    impl_idna$uts46data$$$function__72__seg_71,
    impl_idna$uts46data$$$function__73__seg_72,
    impl_idna$uts46data$$$function__74__seg_73,
    impl_idna$uts46data$$$function__75__seg_74,
    impl_idna$uts46data$$$function__76__seg_75,
    impl_idna$uts46data$$$function__77__seg_76,
    impl_idna$uts46data$$$function__78__seg_77,
    impl_idna$uts46data$$$function__79__seg_78,
    impl_idna$uts46data$$$function__80__seg_79,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_idna$uts46data;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_idna$uts46data) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_idna$uts46data[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_idna$uts46data,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_idna$uts46data(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("idna.uts46data");

    // Store the module for future use.
    module_idna$uts46data = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("idna.uts46data: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("idna.uts46data: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initidna$uts46data\n");

    moduledict_idna$uts46data = MODULE_DICT(module_idna$uts46data);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_idna$uts46data,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_idna$uts46data,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[172]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_idna$uts46data,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_idna$uts46data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_idna$uts46data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_idna$uts46data);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_idna$uts46data);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_9e0670ec1ab110896395deeadfbe4163;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_2);
    }
    frame_9e0670ec1ab110896395deeadfbe4163 = MAKE_MODULE_FRAME(codeobj_9e0670ec1ab110896395deeadfbe4163, module_idna$uts46data);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9e0670ec1ab110896395deeadfbe4163);
    assert(Py_REFCNT(frame_9e0670ec1ab110896395deeadfbe4163) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[84], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[85], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_idna$uts46data$$$function__1__seg_0();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_idna$uts46data$$$function__2__seg_1();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_idna$uts46data$$$function__3__seg_2();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_idna$uts46data$$$function__4__seg_3();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_idna$uts46data$$$function__5__seg_4();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_idna$uts46data$$$function__6__seg_5();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_idna$uts46data$$$function__7__seg_6();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_idna$uts46data$$$function__8__seg_7();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_idna$uts46data$$$function__9__seg_8();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_idna$uts46data$$$function__10__seg_9();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_idna$uts46data$$$function__11__seg_10();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_idna$uts46data$$$function__12__seg_11();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_idna$uts46data$$$function__13__seg_12();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_idna$uts46data$$$function__14__seg_13();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_idna$uts46data$$$function__15__seg_14();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_idna$uts46data$$$function__16__seg_15();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_idna$uts46data$$$function__17__seg_16();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_idna$uts46data$$$function__18__seg_17();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_idna$uts46data$$$function__19__seg_18();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_idna$uts46data$$$function__20__seg_19();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_idna$uts46data$$$function__21__seg_20();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_idna$uts46data$$$function__22__seg_21();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_idna$uts46data$$$function__23__seg_22();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_idna$uts46data$$$function__24__seg_23();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_idna$uts46data$$$function__25__seg_24();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_idna$uts46data$$$function__26__seg_25();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_idna$uts46data$$$function__27__seg_26();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_idna$uts46data$$$function__28__seg_27();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_idna$uts46data$$$function__29__seg_28();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_idna$uts46data$$$function__30__seg_29();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_idna$uts46data$$$function__31__seg_30();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_idna$uts46data$$$function__32__seg_31();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_idna$uts46data$$$function__33__seg_32();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_idna$uts46data$$$function__34__seg_33();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_idna$uts46data$$$function__35__seg_34();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_idna$uts46data$$$function__36__seg_35();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_idna$uts46data$$$function__37__seg_36();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_idna$uts46data$$$function__38__seg_37();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_idna$uts46data$$$function__39__seg_38();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_idna$uts46data$$$function__40__seg_39();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_idna$uts46data$$$function__41__seg_40();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_idna$uts46data$$$function__42__seg_41();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_idna$uts46data$$$function__43__seg_42();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;


        tmp_assign_source_48 = MAKE_FUNCTION_idna$uts46data$$$function__44__seg_43();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_idna$uts46data$$$function__45__seg_44();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_idna$uts46data$$$function__46__seg_45();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;


        tmp_assign_source_51 = MAKE_FUNCTION_idna$uts46data$$$function__47__seg_46();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;


        tmp_assign_source_52 = MAKE_FUNCTION_idna$uts46data$$$function__48__seg_47();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;


        tmp_assign_source_53 = MAKE_FUNCTION_idna$uts46data$$$function__49__seg_48();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;


        tmp_assign_source_54 = MAKE_FUNCTION_idna$uts46data$$$function__50__seg_49();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;


        tmp_assign_source_55 = MAKE_FUNCTION_idna$uts46data$$$function__51__seg_50();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;


        tmp_assign_source_56 = MAKE_FUNCTION_idna$uts46data$$$function__52__seg_51();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;


        tmp_assign_source_57 = MAKE_FUNCTION_idna$uts46data$$$function__53__seg_52();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;


        tmp_assign_source_58 = MAKE_FUNCTION_idna$uts46data$$$function__54__seg_53();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;


        tmp_assign_source_59 = MAKE_FUNCTION_idna$uts46data$$$function__55__seg_54();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;


        tmp_assign_source_60 = MAKE_FUNCTION_idna$uts46data$$$function__56__seg_55();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;


        tmp_assign_source_61 = MAKE_FUNCTION_idna$uts46data$$$function__57__seg_56();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;


        tmp_assign_source_62 = MAKE_FUNCTION_idna$uts46data$$$function__58__seg_57();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;


        tmp_assign_source_63 = MAKE_FUNCTION_idna$uts46data$$$function__59__seg_58();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;


        tmp_assign_source_64 = MAKE_FUNCTION_idna$uts46data$$$function__60__seg_59();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;


        tmp_assign_source_65 = MAKE_FUNCTION_idna$uts46data$$$function__61__seg_60();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;


        tmp_assign_source_66 = MAKE_FUNCTION_idna$uts46data$$$function__62__seg_61();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;


        tmp_assign_source_67 = MAKE_FUNCTION_idna$uts46data$$$function__63__seg_62();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;


        tmp_assign_source_68 = MAKE_FUNCTION_idna$uts46data$$$function__64__seg_63();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;


        tmp_assign_source_69 = MAKE_FUNCTION_idna$uts46data$$$function__65__seg_64();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;


        tmp_assign_source_70 = MAKE_FUNCTION_idna$uts46data$$$function__66__seg_65();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;


        tmp_assign_source_71 = MAKE_FUNCTION_idna$uts46data$$$function__67__seg_66();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;


        tmp_assign_source_72 = MAKE_FUNCTION_idna$uts46data$$$function__68__seg_67();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;


        tmp_assign_source_73 = MAKE_FUNCTION_idna$uts46data$$$function__69__seg_68();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;


        tmp_assign_source_74 = MAKE_FUNCTION_idna$uts46data$$$function__70__seg_69();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;


        tmp_assign_source_75 = MAKE_FUNCTION_idna$uts46data$$$function__71__seg_70();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;


        tmp_assign_source_76 = MAKE_FUNCTION_idna$uts46data$$$function__72__seg_71();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;


        tmp_assign_source_77 = MAKE_FUNCTION_idna$uts46data$$$function__73__seg_72();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;


        tmp_assign_source_78 = MAKE_FUNCTION_idna$uts46data$$$function__74__seg_73();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;


        tmp_assign_source_79 = MAKE_FUNCTION_idna$uts46data$$$function__75__seg_74();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;


        tmp_assign_source_80 = MAKE_FUNCTION_idna$uts46data$$$function__76__seg_75();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;


        tmp_assign_source_81 = MAKE_FUNCTION_idna$uts46data$$$function__77__seg_76();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;


        tmp_assign_source_82 = MAKE_FUNCTION_idna$uts46data$$$function__78__seg_77();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;


        tmp_assign_source_83 = MAKE_FUNCTION_idna$uts46data$$$function__79__seg_78();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;


        tmp_assign_source_84 = MAKE_FUNCTION_idna$uts46data$$$function__80__seg_79();

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        PyObject *tmp_add_expr_left_16;
        PyObject *tmp_add_expr_right_16;
        PyObject *tmp_add_expr_left_17;
        PyObject *tmp_add_expr_right_17;
        PyObject *tmp_add_expr_left_18;
        PyObject *tmp_add_expr_right_18;
        PyObject *tmp_add_expr_left_19;
        PyObject *tmp_add_expr_right_19;
        PyObject *tmp_add_expr_left_20;
        PyObject *tmp_add_expr_right_20;
        PyObject *tmp_add_expr_left_21;
        PyObject *tmp_add_expr_right_21;
        PyObject *tmp_add_expr_left_22;
        PyObject *tmp_add_expr_right_22;
        PyObject *tmp_add_expr_left_23;
        PyObject *tmp_add_expr_right_23;
        PyObject *tmp_add_expr_left_24;
        PyObject *tmp_add_expr_right_24;
        PyObject *tmp_add_expr_left_25;
        PyObject *tmp_add_expr_right_25;
        PyObject *tmp_add_expr_left_26;
        PyObject *tmp_add_expr_right_26;
        PyObject *tmp_add_expr_left_27;
        PyObject *tmp_add_expr_right_27;
        PyObject *tmp_add_expr_left_28;
        PyObject *tmp_add_expr_right_28;
        PyObject *tmp_add_expr_left_29;
        PyObject *tmp_add_expr_right_29;
        PyObject *tmp_add_expr_left_30;
        PyObject *tmp_add_expr_right_30;
        PyObject *tmp_add_expr_left_31;
        PyObject *tmp_add_expr_right_31;
        PyObject *tmp_add_expr_left_32;
        PyObject *tmp_add_expr_right_32;
        PyObject *tmp_add_expr_left_33;
        PyObject *tmp_add_expr_right_33;
        PyObject *tmp_add_expr_left_34;
        PyObject *tmp_add_expr_right_34;
        PyObject *tmp_add_expr_left_35;
        PyObject *tmp_add_expr_right_35;
        PyObject *tmp_add_expr_left_36;
        PyObject *tmp_add_expr_right_36;
        PyObject *tmp_add_expr_left_37;
        PyObject *tmp_add_expr_right_37;
        PyObject *tmp_add_expr_left_38;
        PyObject *tmp_add_expr_right_38;
        PyObject *tmp_add_expr_left_39;
        PyObject *tmp_add_expr_right_39;
        PyObject *tmp_add_expr_left_40;
        PyObject *tmp_add_expr_right_40;
        PyObject *tmp_add_expr_left_41;
        PyObject *tmp_add_expr_right_41;
        PyObject *tmp_add_expr_left_42;
        PyObject *tmp_add_expr_right_42;
        PyObject *tmp_add_expr_left_43;
        PyObject *tmp_add_expr_right_43;
        PyObject *tmp_add_expr_left_44;
        PyObject *tmp_add_expr_right_44;
        PyObject *tmp_add_expr_left_45;
        PyObject *tmp_add_expr_right_45;
        PyObject *tmp_add_expr_left_46;
        PyObject *tmp_add_expr_right_46;
        PyObject *tmp_add_expr_left_47;
        PyObject *tmp_add_expr_right_47;
        PyObject *tmp_add_expr_left_48;
        PyObject *tmp_add_expr_right_48;
        PyObject *tmp_add_expr_left_49;
        PyObject *tmp_add_expr_right_49;
        PyObject *tmp_add_expr_left_50;
        PyObject *tmp_add_expr_right_50;
        PyObject *tmp_add_expr_left_51;
        PyObject *tmp_add_expr_right_51;
        PyObject *tmp_add_expr_left_52;
        PyObject *tmp_add_expr_right_52;
        PyObject *tmp_add_expr_left_53;
        PyObject *tmp_add_expr_right_53;
        PyObject *tmp_add_expr_left_54;
        PyObject *tmp_add_expr_right_54;
        PyObject *tmp_add_expr_left_55;
        PyObject *tmp_add_expr_right_55;
        PyObject *tmp_add_expr_left_56;
        PyObject *tmp_add_expr_right_56;
        PyObject *tmp_add_expr_left_57;
        PyObject *tmp_add_expr_right_57;
        PyObject *tmp_add_expr_left_58;
        PyObject *tmp_add_expr_right_58;
        PyObject *tmp_add_expr_left_59;
        PyObject *tmp_add_expr_right_59;
        PyObject *tmp_add_expr_left_60;
        PyObject *tmp_add_expr_right_60;
        PyObject *tmp_add_expr_left_61;
        PyObject *tmp_add_expr_right_61;
        PyObject *tmp_add_expr_left_62;
        PyObject *tmp_add_expr_right_62;
        PyObject *tmp_add_expr_left_63;
        PyObject *tmp_add_expr_right_63;
        PyObject *tmp_add_expr_left_64;
        PyObject *tmp_add_expr_right_64;
        PyObject *tmp_add_expr_left_65;
        PyObject *tmp_add_expr_right_65;
        PyObject *tmp_add_expr_left_66;
        PyObject *tmp_add_expr_right_66;
        PyObject *tmp_add_expr_left_67;
        PyObject *tmp_add_expr_right_67;
        PyObject *tmp_add_expr_left_68;
        PyObject *tmp_add_expr_right_68;
        PyObject *tmp_add_expr_left_69;
        PyObject *tmp_add_expr_right_69;
        PyObject *tmp_add_expr_left_70;
        PyObject *tmp_add_expr_right_70;
        PyObject *tmp_add_expr_left_71;
        PyObject *tmp_add_expr_right_71;
        PyObject *tmp_add_expr_left_72;
        PyObject *tmp_add_expr_right_72;
        PyObject *tmp_add_expr_left_73;
        PyObject *tmp_add_expr_right_73;
        PyObject *tmp_add_expr_left_74;
        PyObject *tmp_add_expr_right_74;
        PyObject *tmp_add_expr_left_75;
        PyObject *tmp_add_expr_right_75;
        PyObject *tmp_add_expr_left_76;
        PyObject *tmp_add_expr_right_76;
        PyObject *tmp_add_expr_left_77;
        PyObject *tmp_add_expr_right_77;
        PyObject *tmp_add_expr_left_78;
        PyObject *tmp_add_expr_right_78;
        PyObject *tmp_add_expr_left_79;
        PyObject *tmp_add_expr_right_79;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_called_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_called_value_13;
        PyObject *tmp_called_value_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_called_value_17;
        PyObject *tmp_called_value_18;
        PyObject *tmp_called_value_19;
        PyObject *tmp_called_value_20;
        PyObject *tmp_called_value_21;
        PyObject *tmp_called_value_22;
        PyObject *tmp_called_value_23;
        PyObject *tmp_called_value_24;
        PyObject *tmp_called_value_25;
        PyObject *tmp_called_value_26;
        PyObject *tmp_called_value_27;
        PyObject *tmp_called_value_28;
        PyObject *tmp_called_value_29;
        PyObject *tmp_called_value_30;
        PyObject *tmp_called_value_31;
        PyObject *tmp_called_value_32;
        PyObject *tmp_called_value_33;
        PyObject *tmp_called_value_34;
        PyObject *tmp_called_value_35;
        PyObject *tmp_called_value_36;
        PyObject *tmp_called_value_37;
        PyObject *tmp_called_value_38;
        PyObject *tmp_called_value_39;
        PyObject *tmp_called_value_40;
        PyObject *tmp_called_value_41;
        PyObject *tmp_called_value_42;
        PyObject *tmp_called_value_43;
        PyObject *tmp_called_value_44;
        PyObject *tmp_called_value_45;
        PyObject *tmp_called_value_46;
        PyObject *tmp_called_value_47;
        PyObject *tmp_called_value_48;
        PyObject *tmp_called_value_49;
        PyObject *tmp_called_value_50;
        PyObject *tmp_called_value_51;
        PyObject *tmp_called_value_52;
        PyObject *tmp_called_value_53;
        PyObject *tmp_called_value_54;
        PyObject *tmp_called_value_55;
        PyObject *tmp_called_value_56;
        PyObject *tmp_called_value_57;
        PyObject *tmp_called_value_58;
        PyObject *tmp_called_value_59;
        PyObject *tmp_called_value_60;
        PyObject *tmp_called_value_61;
        PyObject *tmp_called_value_62;
        PyObject *tmp_called_value_63;
        PyObject *tmp_called_value_64;
        PyObject *tmp_called_value_65;
        PyObject *tmp_called_value_66;
        PyObject *tmp_called_value_67;
        PyObject *tmp_called_value_68;
        PyObject *tmp_called_value_69;
        PyObject *tmp_called_value_70;
        PyObject *tmp_called_value_71;
        PyObject *tmp_called_value_72;
        PyObject *tmp_called_value_73;
        PyObject *tmp_called_value_74;
        PyObject *tmp_called_value_75;
        PyObject *tmp_called_value_76;
        PyObject *tmp_called_value_77;
        PyObject *tmp_called_value_78;
        PyObject *tmp_called_value_79;
        PyObject *tmp_called_value_80;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8277;
        tmp_add_expr_left_79 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_add_expr_left_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8277;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_79);

            exception_lineno = 8278;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8278;
        tmp_add_expr_right_79 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_add_expr_right_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_79);

            exception_lineno = 8278;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_78 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_79, tmp_add_expr_right_79);
        Py_DECREF(tmp_add_expr_left_79);
        Py_DECREF(tmp_add_expr_right_79);
        if (tmp_add_expr_left_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8278;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_78);

            exception_lineno = 8279;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8279;
        tmp_add_expr_right_78 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        if (tmp_add_expr_right_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_78);

            exception_lineno = 8279;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_77 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_78, tmp_add_expr_right_78);
        Py_DECREF(tmp_add_expr_left_78);
        Py_DECREF(tmp_add_expr_right_78);
        if (tmp_add_expr_left_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8279;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_77);

            exception_lineno = 8280;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8280;
        tmp_add_expr_right_77 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        if (tmp_add_expr_right_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_77);

            exception_lineno = 8280;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_76 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_77, tmp_add_expr_right_77);
        Py_DECREF(tmp_add_expr_left_77);
        Py_DECREF(tmp_add_expr_right_77);
        if (tmp_add_expr_left_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8280;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_76);

            exception_lineno = 8281;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8281;
        tmp_add_expr_right_76 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
        if (tmp_add_expr_right_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_76);

            exception_lineno = 8281;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_75 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_76, tmp_add_expr_right_76);
        Py_DECREF(tmp_add_expr_left_76);
        Py_DECREF(tmp_add_expr_right_76);
        if (tmp_add_expr_left_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8281;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_75);

            exception_lineno = 8282;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8282;
        tmp_add_expr_right_75 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
        if (tmp_add_expr_right_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_75);

            exception_lineno = 8282;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_74 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_75, tmp_add_expr_right_75);
        Py_DECREF(tmp_add_expr_left_75);
        Py_DECREF(tmp_add_expr_right_75);
        if (tmp_add_expr_left_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8282;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_74);

            exception_lineno = 8283;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8283;
        tmp_add_expr_right_74 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
        if (tmp_add_expr_right_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_74);

            exception_lineno = 8283;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_73 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_74, tmp_add_expr_right_74);
        Py_DECREF(tmp_add_expr_left_74);
        Py_DECREF(tmp_add_expr_right_74);
        if (tmp_add_expr_left_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8283;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_73);

            exception_lineno = 8284;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8284;
        tmp_add_expr_right_73 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        if (tmp_add_expr_right_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_73);

            exception_lineno = 8284;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_72 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_73, tmp_add_expr_right_73);
        Py_DECREF(tmp_add_expr_left_73);
        Py_DECREF(tmp_add_expr_right_73);
        if (tmp_add_expr_left_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8284;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_72);

            exception_lineno = 8285;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8285;
        tmp_add_expr_right_72 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
        if (tmp_add_expr_right_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_72);

            exception_lineno = 8285;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_71 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_72, tmp_add_expr_right_72);
        Py_DECREF(tmp_add_expr_left_72);
        Py_DECREF(tmp_add_expr_right_72);
        if (tmp_add_expr_left_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8285;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_71);

            exception_lineno = 8286;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8286;
        tmp_add_expr_right_71 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
        if (tmp_add_expr_right_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_71);

            exception_lineno = 8286;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_70 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_71, tmp_add_expr_right_71);
        Py_DECREF(tmp_add_expr_left_71);
        Py_DECREF(tmp_add_expr_right_71);
        if (tmp_add_expr_left_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8286;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_70);

            exception_lineno = 8287;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8287;
        tmp_add_expr_right_70 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
        if (tmp_add_expr_right_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_70);

            exception_lineno = 8287;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_69 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_70, tmp_add_expr_right_70);
        Py_DECREF(tmp_add_expr_left_70);
        Py_DECREF(tmp_add_expr_right_70);
        if (tmp_add_expr_left_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8287;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_69);

            exception_lineno = 8288;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8288;
        tmp_add_expr_right_69 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_12);
        if (tmp_add_expr_right_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_69);

            exception_lineno = 8288;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_68 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_69, tmp_add_expr_right_69);
        Py_DECREF(tmp_add_expr_left_69);
        Py_DECREF(tmp_add_expr_right_69);
        if (tmp_add_expr_left_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8288;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_68);

            exception_lineno = 8289;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8289;
        tmp_add_expr_right_68 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
        if (tmp_add_expr_right_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_68);

            exception_lineno = 8289;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_67 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_68, tmp_add_expr_right_68);
        Py_DECREF(tmp_add_expr_left_68);
        Py_DECREF(tmp_add_expr_right_68);
        if (tmp_add_expr_left_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8289;

            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_67);

            exception_lineno = 8290;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8290;
        tmp_add_expr_right_67 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_14);
        if (tmp_add_expr_right_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_67);

            exception_lineno = 8290;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_66 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_67, tmp_add_expr_right_67);
        Py_DECREF(tmp_add_expr_left_67);
        Py_DECREF(tmp_add_expr_right_67);
        if (tmp_add_expr_left_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8290;

            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_66);

            exception_lineno = 8291;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8291;
        tmp_add_expr_right_66 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_15);
        if (tmp_add_expr_right_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_66);

            exception_lineno = 8291;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_65 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_66, tmp_add_expr_right_66);
        Py_DECREF(tmp_add_expr_left_66);
        Py_DECREF(tmp_add_expr_right_66);
        if (tmp_add_expr_left_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8291;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_65);

            exception_lineno = 8292;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8292;
        tmp_add_expr_right_65 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_16);
        if (tmp_add_expr_right_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_65);

            exception_lineno = 8292;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_64 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_65, tmp_add_expr_right_65);
        Py_DECREF(tmp_add_expr_left_65);
        Py_DECREF(tmp_add_expr_right_65);
        if (tmp_add_expr_left_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8292;

            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_64);

            exception_lineno = 8293;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8293;
        tmp_add_expr_right_64 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_17);
        if (tmp_add_expr_right_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_64);

            exception_lineno = 8293;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_63 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_64, tmp_add_expr_right_64);
        Py_DECREF(tmp_add_expr_left_64);
        Py_DECREF(tmp_add_expr_right_64);
        if (tmp_add_expr_left_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8293;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_63);

            exception_lineno = 8294;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8294;
        tmp_add_expr_right_63 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_18);
        if (tmp_add_expr_right_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_63);

            exception_lineno = 8294;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_62 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_63, tmp_add_expr_right_63);
        Py_DECREF(tmp_add_expr_left_63);
        Py_DECREF(tmp_add_expr_right_63);
        if (tmp_add_expr_left_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8294;

            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_62);

            exception_lineno = 8295;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8295;
        tmp_add_expr_right_62 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_19);
        if (tmp_add_expr_right_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_62);

            exception_lineno = 8295;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_61 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_62, tmp_add_expr_right_62);
        Py_DECREF(tmp_add_expr_left_62);
        Py_DECREF(tmp_add_expr_right_62);
        if (tmp_add_expr_left_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8295;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_61);

            exception_lineno = 8296;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8296;
        tmp_add_expr_right_61 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_20);
        if (tmp_add_expr_right_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_61);

            exception_lineno = 8296;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_60 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_61, tmp_add_expr_right_61);
        Py_DECREF(tmp_add_expr_left_61);
        Py_DECREF(tmp_add_expr_right_61);
        if (tmp_add_expr_left_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8296;

            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_60);

            exception_lineno = 8297;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8297;
        tmp_add_expr_right_60 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_21);
        if (tmp_add_expr_right_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_60);

            exception_lineno = 8297;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_59 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_60, tmp_add_expr_right_60);
        Py_DECREF(tmp_add_expr_left_60);
        Py_DECREF(tmp_add_expr_right_60);
        if (tmp_add_expr_left_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8297;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_59);

            exception_lineno = 8298;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8298;
        tmp_add_expr_right_59 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_22);
        if (tmp_add_expr_right_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_59);

            exception_lineno = 8298;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_58 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_59, tmp_add_expr_right_59);
        Py_DECREF(tmp_add_expr_left_59);
        Py_DECREF(tmp_add_expr_right_59);
        if (tmp_add_expr_left_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8298;

            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_58);

            exception_lineno = 8299;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8299;
        tmp_add_expr_right_58 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_23);
        if (tmp_add_expr_right_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_58);

            exception_lineno = 8299;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_57 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_58, tmp_add_expr_right_58);
        Py_DECREF(tmp_add_expr_left_58);
        Py_DECREF(tmp_add_expr_right_58);
        if (tmp_add_expr_left_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8299;

            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_57);

            exception_lineno = 8300;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8300;
        tmp_add_expr_right_57 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_24);
        if (tmp_add_expr_right_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_57);

            exception_lineno = 8300;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_56 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_57, tmp_add_expr_right_57);
        Py_DECREF(tmp_add_expr_left_57);
        Py_DECREF(tmp_add_expr_right_57);
        if (tmp_add_expr_left_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8300;

            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_56);

            exception_lineno = 8301;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8301;
        tmp_add_expr_right_56 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_25);
        if (tmp_add_expr_right_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_56);

            exception_lineno = 8301;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_55 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_56, tmp_add_expr_right_56);
        Py_DECREF(tmp_add_expr_left_56);
        Py_DECREF(tmp_add_expr_right_56);
        if (tmp_add_expr_left_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8301;

            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_55);

            exception_lineno = 8302;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8302;
        tmp_add_expr_right_55 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_26);
        if (tmp_add_expr_right_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_55);

            exception_lineno = 8302;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_54 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_55, tmp_add_expr_right_55);
        Py_DECREF(tmp_add_expr_left_55);
        Py_DECREF(tmp_add_expr_right_55);
        if (tmp_add_expr_left_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8302;

            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_54);

            exception_lineno = 8303;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8303;
        tmp_add_expr_right_54 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_27);
        if (tmp_add_expr_right_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_54);

            exception_lineno = 8303;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_53 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_54, tmp_add_expr_right_54);
        Py_DECREF(tmp_add_expr_left_54);
        Py_DECREF(tmp_add_expr_right_54);
        if (tmp_add_expr_left_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8303;

            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_53);

            exception_lineno = 8304;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8304;
        tmp_add_expr_right_53 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_28);
        if (tmp_add_expr_right_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_53);

            exception_lineno = 8304;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_52 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_53, tmp_add_expr_right_53);
        Py_DECREF(tmp_add_expr_left_53);
        Py_DECREF(tmp_add_expr_right_53);
        if (tmp_add_expr_left_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8304;

            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_52);

            exception_lineno = 8305;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8305;
        tmp_add_expr_right_52 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_29);
        if (tmp_add_expr_right_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_52);

            exception_lineno = 8305;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_51 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_52, tmp_add_expr_right_52);
        Py_DECREF(tmp_add_expr_left_52);
        Py_DECREF(tmp_add_expr_right_52);
        if (tmp_add_expr_left_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8305;

            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_51);

            exception_lineno = 8306;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8306;
        tmp_add_expr_right_51 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_30);
        if (tmp_add_expr_right_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_51);

            exception_lineno = 8306;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_50 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_51, tmp_add_expr_right_51);
        Py_DECREF(tmp_add_expr_left_51);
        Py_DECREF(tmp_add_expr_right_51);
        if (tmp_add_expr_left_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8306;

            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_50);

            exception_lineno = 8307;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8307;
        tmp_add_expr_right_50 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_31);
        if (tmp_add_expr_right_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_50);

            exception_lineno = 8307;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_49 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_50, tmp_add_expr_right_50);
        Py_DECREF(tmp_add_expr_left_50);
        Py_DECREF(tmp_add_expr_right_50);
        if (tmp_add_expr_left_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8307;

            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_49);

            exception_lineno = 8308;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8308;
        tmp_add_expr_right_49 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_32);
        if (tmp_add_expr_right_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_49);

            exception_lineno = 8308;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_48 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_49, tmp_add_expr_right_49);
        Py_DECREF(tmp_add_expr_left_49);
        Py_DECREF(tmp_add_expr_right_49);
        if (tmp_add_expr_left_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8308;

            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_48);

            exception_lineno = 8309;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8309;
        tmp_add_expr_right_48 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_33);
        if (tmp_add_expr_right_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_48);

            exception_lineno = 8309;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_47 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_48, tmp_add_expr_right_48);
        Py_DECREF(tmp_add_expr_left_48);
        Py_DECREF(tmp_add_expr_right_48);
        if (tmp_add_expr_left_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8309;

            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_47);

            exception_lineno = 8310;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8310;
        tmp_add_expr_right_47 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_34);
        if (tmp_add_expr_right_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_47);

            exception_lineno = 8310;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_46 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_47, tmp_add_expr_right_47);
        Py_DECREF(tmp_add_expr_left_47);
        Py_DECREF(tmp_add_expr_right_47);
        if (tmp_add_expr_left_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8310;

            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_46);

            exception_lineno = 8311;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8311;
        tmp_add_expr_right_46 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_35);
        if (tmp_add_expr_right_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_46);

            exception_lineno = 8311;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_45 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_46, tmp_add_expr_right_46);
        Py_DECREF(tmp_add_expr_left_46);
        Py_DECREF(tmp_add_expr_right_46);
        if (tmp_add_expr_left_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8311;

            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_45);

            exception_lineno = 8312;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8312;
        tmp_add_expr_right_45 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_36);
        if (tmp_add_expr_right_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_45);

            exception_lineno = 8312;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_44 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_45, tmp_add_expr_right_45);
        Py_DECREF(tmp_add_expr_left_45);
        Py_DECREF(tmp_add_expr_right_45);
        if (tmp_add_expr_left_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8312;

            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_44);

            exception_lineno = 8313;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8313;
        tmp_add_expr_right_44 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_37);
        if (tmp_add_expr_right_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_44);

            exception_lineno = 8313;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_43 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_44, tmp_add_expr_right_44);
        Py_DECREF(tmp_add_expr_left_44);
        Py_DECREF(tmp_add_expr_right_44);
        if (tmp_add_expr_left_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8313;

            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_43);

            exception_lineno = 8314;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8314;
        tmp_add_expr_right_43 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_38);
        if (tmp_add_expr_right_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_43);

            exception_lineno = 8314;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_42 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_43, tmp_add_expr_right_43);
        Py_DECREF(tmp_add_expr_left_43);
        Py_DECREF(tmp_add_expr_right_43);
        if (tmp_add_expr_left_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8314;

            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[127]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_42);

            exception_lineno = 8315;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8315;
        tmp_add_expr_right_42 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_39);
        if (tmp_add_expr_right_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_42);

            exception_lineno = 8315;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_41 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_42, tmp_add_expr_right_42);
        Py_DECREF(tmp_add_expr_left_42);
        Py_DECREF(tmp_add_expr_right_42);
        if (tmp_add_expr_left_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8315;

            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_41);

            exception_lineno = 8316;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8316;
        tmp_add_expr_right_41 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_40);
        if (tmp_add_expr_right_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_41);

            exception_lineno = 8316;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_40 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_41, tmp_add_expr_right_41);
        Py_DECREF(tmp_add_expr_left_41);
        Py_DECREF(tmp_add_expr_right_41);
        if (tmp_add_expr_left_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8316;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_40);

            exception_lineno = 8317;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8317;
        tmp_add_expr_right_40 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_41);
        if (tmp_add_expr_right_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_40);

            exception_lineno = 8317;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_39 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_40, tmp_add_expr_right_40);
        Py_DECREF(tmp_add_expr_left_40);
        Py_DECREF(tmp_add_expr_right_40);
        if (tmp_add_expr_left_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8317;

            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[130]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_39);

            exception_lineno = 8318;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8318;
        tmp_add_expr_right_39 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_42);
        if (tmp_add_expr_right_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_39);

            exception_lineno = 8318;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_38 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_39, tmp_add_expr_right_39);
        Py_DECREF(tmp_add_expr_left_39);
        Py_DECREF(tmp_add_expr_right_39);
        if (tmp_add_expr_left_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8318;

            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[131]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_38);

            exception_lineno = 8319;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8319;
        tmp_add_expr_right_38 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_43);
        if (tmp_add_expr_right_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_38);

            exception_lineno = 8319;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_37 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_38, tmp_add_expr_right_38);
        Py_DECREF(tmp_add_expr_left_38);
        Py_DECREF(tmp_add_expr_right_38);
        if (tmp_add_expr_left_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8319;

            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[132]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_37);

            exception_lineno = 8320;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8320;
        tmp_add_expr_right_37 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_44);
        if (tmp_add_expr_right_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_37);

            exception_lineno = 8320;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_37, tmp_add_expr_right_37);
        Py_DECREF(tmp_add_expr_left_37);
        Py_DECREF(tmp_add_expr_right_37);
        if (tmp_add_expr_left_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8320;

            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_36);

            exception_lineno = 8321;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8321;
        tmp_add_expr_right_36 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_45);
        if (tmp_add_expr_right_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_36);

            exception_lineno = 8321;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_36, tmp_add_expr_right_36);
        Py_DECREF(tmp_add_expr_left_36);
        Py_DECREF(tmp_add_expr_right_36);
        if (tmp_add_expr_left_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8321;

            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[134]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_35);

            exception_lineno = 8322;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8322;
        tmp_add_expr_right_35 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_46);
        if (tmp_add_expr_right_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_35);

            exception_lineno = 8322;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_34 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_35, tmp_add_expr_right_35);
        Py_DECREF(tmp_add_expr_left_35);
        Py_DECREF(tmp_add_expr_right_35);
        if (tmp_add_expr_left_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8322;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_34);

            exception_lineno = 8323;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8323;
        tmp_add_expr_right_34 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_47);
        if (tmp_add_expr_right_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_34);

            exception_lineno = 8323;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_34, tmp_add_expr_right_34);
        Py_DECREF(tmp_add_expr_left_34);
        Py_DECREF(tmp_add_expr_right_34);
        if (tmp_add_expr_left_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8323;

            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_33);

            exception_lineno = 8324;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8324;
        tmp_add_expr_right_33 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_48);
        if (tmp_add_expr_right_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_33);

            exception_lineno = 8324;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_33, tmp_add_expr_right_33);
        Py_DECREF(tmp_add_expr_left_33);
        Py_DECREF(tmp_add_expr_right_33);
        if (tmp_add_expr_left_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8324;

            goto frame_exception_exit_1;
        }
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_32);

            exception_lineno = 8325;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8325;
        tmp_add_expr_right_32 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_49);
        if (tmp_add_expr_right_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_32);

            exception_lineno = 8325;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_32, tmp_add_expr_right_32);
        Py_DECREF(tmp_add_expr_left_32);
        Py_DECREF(tmp_add_expr_right_32);
        if (tmp_add_expr_left_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8325;

            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_31);

            exception_lineno = 8326;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8326;
        tmp_add_expr_right_31 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_50);
        if (tmp_add_expr_right_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_31);

            exception_lineno = 8326;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_31, tmp_add_expr_right_31);
        Py_DECREF(tmp_add_expr_left_31);
        Py_DECREF(tmp_add_expr_right_31);
        if (tmp_add_expr_left_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8326;

            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[139]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_30);

            exception_lineno = 8327;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8327;
        tmp_add_expr_right_30 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_51);
        if (tmp_add_expr_right_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_30);

            exception_lineno = 8327;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_30, tmp_add_expr_right_30);
        Py_DECREF(tmp_add_expr_left_30);
        Py_DECREF(tmp_add_expr_right_30);
        if (tmp_add_expr_left_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8327;

            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_29);

            exception_lineno = 8328;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8328;
        tmp_add_expr_right_29 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_52);
        if (tmp_add_expr_right_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_29);

            exception_lineno = 8328;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_29, tmp_add_expr_right_29);
        Py_DECREF(tmp_add_expr_left_29);
        Py_DECREF(tmp_add_expr_right_29);
        if (tmp_add_expr_left_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8328;

            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_28);

            exception_lineno = 8329;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8329;
        tmp_add_expr_right_28 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_53);
        if (tmp_add_expr_right_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_28);

            exception_lineno = 8329;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_28, tmp_add_expr_right_28);
        Py_DECREF(tmp_add_expr_left_28);
        Py_DECREF(tmp_add_expr_right_28);
        if (tmp_add_expr_left_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8329;

            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_27);

            exception_lineno = 8330;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8330;
        tmp_add_expr_right_27 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_54);
        if (tmp_add_expr_right_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_27);

            exception_lineno = 8330;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_27, tmp_add_expr_right_27);
        Py_DECREF(tmp_add_expr_left_27);
        Py_DECREF(tmp_add_expr_right_27);
        if (tmp_add_expr_left_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8330;

            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[143]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_26);

            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8331;
        tmp_add_expr_right_26 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_55);
        if (tmp_add_expr_right_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_26);

            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_26, tmp_add_expr_right_26);
        Py_DECREF(tmp_add_expr_left_26);
        Py_DECREF(tmp_add_expr_right_26);
        if (tmp_add_expr_left_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8331;

            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_25);

            exception_lineno = 8332;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8332;
        tmp_add_expr_right_25 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_56);
        if (tmp_add_expr_right_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_25);

            exception_lineno = 8332;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_25, tmp_add_expr_right_25);
        Py_DECREF(tmp_add_expr_left_25);
        Py_DECREF(tmp_add_expr_right_25);
        if (tmp_add_expr_left_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8332;

            goto frame_exception_exit_1;
        }
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_24);

            exception_lineno = 8333;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8333;
        tmp_add_expr_right_24 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_57);
        if (tmp_add_expr_right_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_24);

            exception_lineno = 8333;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_24, tmp_add_expr_right_24);
        Py_DECREF(tmp_add_expr_left_24);
        Py_DECREF(tmp_add_expr_right_24);
        if (tmp_add_expr_left_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8333;

            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[146]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_23);

            exception_lineno = 8334;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8334;
        tmp_add_expr_right_23 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_58);
        if (tmp_add_expr_right_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_23);

            exception_lineno = 8334;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_23, tmp_add_expr_right_23);
        Py_DECREF(tmp_add_expr_left_23);
        Py_DECREF(tmp_add_expr_right_23);
        if (tmp_add_expr_left_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8334;

            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[147]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_22);

            exception_lineno = 8335;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8335;
        tmp_add_expr_right_22 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_59);
        if (tmp_add_expr_right_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_22);

            exception_lineno = 8335;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_22, tmp_add_expr_right_22);
        Py_DECREF(tmp_add_expr_left_22);
        Py_DECREF(tmp_add_expr_right_22);
        if (tmp_add_expr_left_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8335;

            goto frame_exception_exit_1;
        }
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_21);

            exception_lineno = 8336;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8336;
        tmp_add_expr_right_21 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_60);
        if (tmp_add_expr_right_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_21);

            exception_lineno = 8336;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_21, tmp_add_expr_right_21);
        Py_DECREF(tmp_add_expr_left_21);
        Py_DECREF(tmp_add_expr_right_21);
        if (tmp_add_expr_left_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8336;

            goto frame_exception_exit_1;
        }
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[149]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_20);

            exception_lineno = 8337;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8337;
        tmp_add_expr_right_20 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_61);
        if (tmp_add_expr_right_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_20);

            exception_lineno = 8337;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_20, tmp_add_expr_right_20);
        Py_DECREF(tmp_add_expr_left_20);
        Py_DECREF(tmp_add_expr_right_20);
        if (tmp_add_expr_left_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8337;

            goto frame_exception_exit_1;
        }
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[150]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_19);

            exception_lineno = 8338;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8338;
        tmp_add_expr_right_19 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_62);
        if (tmp_add_expr_right_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_19);

            exception_lineno = 8338;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_19, tmp_add_expr_right_19);
        Py_DECREF(tmp_add_expr_left_19);
        Py_DECREF(tmp_add_expr_right_19);
        if (tmp_add_expr_left_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8338;

            goto frame_exception_exit_1;
        }
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_18);

            exception_lineno = 8339;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8339;
        tmp_add_expr_right_18 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_63);
        if (tmp_add_expr_right_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_18);

            exception_lineno = 8339;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
        Py_DECREF(tmp_add_expr_left_18);
        Py_DECREF(tmp_add_expr_right_18);
        if (tmp_add_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8339;

            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_17);

            exception_lineno = 8340;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8340;
        tmp_add_expr_right_17 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_64);
        if (tmp_add_expr_right_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_17);

            exception_lineno = 8340;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_17, tmp_add_expr_right_17);
        Py_DECREF(tmp_add_expr_left_17);
        Py_DECREF(tmp_add_expr_right_17);
        if (tmp_add_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8340;

            goto frame_exception_exit_1;
        }
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_16);

            exception_lineno = 8341;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8341;
        tmp_add_expr_right_16 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_65);
        if (tmp_add_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_16);

            exception_lineno = 8341;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
        Py_DECREF(tmp_add_expr_left_16);
        Py_DECREF(tmp_add_expr_right_16);
        if (tmp_add_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8341;

            goto frame_exception_exit_1;
        }
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_15);

            exception_lineno = 8342;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8342;
        tmp_add_expr_right_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_66);
        if (tmp_add_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_15);

            exception_lineno = 8342;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_15, tmp_add_expr_right_15);
        Py_DECREF(tmp_add_expr_left_15);
        Py_DECREF(tmp_add_expr_right_15);
        if (tmp_add_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8342;

            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_14);

            exception_lineno = 8343;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8343;
        tmp_add_expr_right_14 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_67);
        if (tmp_add_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_14);

            exception_lineno = 8343;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_left_14);
        Py_DECREF(tmp_add_expr_right_14);
        if (tmp_add_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8343;

            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_13);

            exception_lineno = 8344;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8344;
        tmp_add_expr_right_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_68);
        if (tmp_add_expr_right_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_13);

            exception_lineno = 8344;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
        Py_DECREF(tmp_add_expr_left_13);
        Py_DECREF(tmp_add_expr_right_13);
        if (tmp_add_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8344;

            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 8345;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8345;
        tmp_add_expr_right_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_69);
        if (tmp_add_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 8345;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_left_12);
        Py_DECREF(tmp_add_expr_right_12);
        if (tmp_add_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8345;

            goto frame_exception_exit_1;
        }
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_11);

            exception_lineno = 8346;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8346;
        tmp_add_expr_right_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_70);
        if (tmp_add_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_11);

            exception_lineno = 8346;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        Py_DECREF(tmp_add_expr_right_11);
        if (tmp_add_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8346;

            goto frame_exception_exit_1;
        }
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[159]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 8347;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8347;
        tmp_add_expr_right_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_71);
        if (tmp_add_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 8347;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        Py_DECREF(tmp_add_expr_left_10);
        Py_DECREF(tmp_add_expr_right_10);
        if (tmp_add_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8347;

            goto frame_exception_exit_1;
        }
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_9);

            exception_lineno = 8348;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8348;
        tmp_add_expr_right_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_72);
        if (tmp_add_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_9);

            exception_lineno = 8348;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        Py_DECREF(tmp_add_expr_right_9);
        if (tmp_add_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8348;

            goto frame_exception_exit_1;
        }
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_8);

            exception_lineno = 8349;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8349;
        tmp_add_expr_right_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_73);
        if (tmp_add_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_8);

            exception_lineno = 8349;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        Py_DECREF(tmp_add_expr_left_8);
        Py_DECREF(tmp_add_expr_right_8);
        if (tmp_add_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8349;

            goto frame_exception_exit_1;
        }
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_7);

            exception_lineno = 8350;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8350;
        tmp_add_expr_right_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_74);
        if (tmp_add_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_7);

            exception_lineno = 8350;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        Py_DECREF(tmp_add_expr_right_7);
        if (tmp_add_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8350;

            goto frame_exception_exit_1;
        }
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 8351;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8351;
        tmp_add_expr_right_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_75);
        if (tmp_add_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 8351;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_add_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8351;

            goto frame_exception_exit_1;
        }
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_5);

            exception_lineno = 8352;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8352;
        tmp_add_expr_right_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_76);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_5);

            exception_lineno = 8352;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8352;

            goto frame_exception_exit_1;
        }
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 8353;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8353;
        tmp_add_expr_right_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_77);
        if (tmp_add_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 8353;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8353;

            goto frame_exception_exit_1;
        }
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 8354;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8354;
        tmp_add_expr_right_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_78);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 8354;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8354;

            goto frame_exception_exit_1;
        }
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[167]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 8355;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8355;
        tmp_add_expr_right_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_79);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 8355;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8355;

            goto frame_exception_exit_1;
        }
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[168]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 8356;

            goto frame_exception_exit_1;
        }
        frame_9e0670ec1ab110896395deeadfbe4163->m_frame.f_lineno = 8356;
        tmp_add_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_80);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 8356;

            goto frame_exception_exit_1;
        }
        tmp_tuple_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_tuple_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8356;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_85 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8276;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_85);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9e0670ec1ab110896395deeadfbe4163, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e0670ec1ab110896395deeadfbe4163->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e0670ec1ab110896395deeadfbe4163, exception_lineno);
    }



    assertFrameObject(frame_9e0670ec1ab110896395deeadfbe4163);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("idna.uts46data", false);

    Py_INCREF(module_idna$uts46data);
    return module_idna$uts46data;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("idna$uts46data", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
