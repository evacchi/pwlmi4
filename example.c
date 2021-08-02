/* Generated from example.csm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: example.csm -output-file example.c
   uses: library eval expand
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[4];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,11),40,109,97,105,110,32,97,114,103,115,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_121)
static void C_ccall f_121(C_word c,C_word *av) C_noret;
C_noret_decl(f_124)
static void C_ccall f_124(C_word c,C_word *av) C_noret;
C_noret_decl(f_127)
static void C_ccall f_127(C_word c,C_word *av) C_noret;
C_noret_decl(f_129)
static void C_ccall f_129(C_word c,C_word *av) C_noret;
C_noret_decl(f_133)
static void C_ccall f_133(C_word c,C_word *av) C_noret;
C_noret_decl(f_143)
static void C_ccall f_143(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

/* k119 */
static void C_ccall f_121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_121,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_124,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k122 in k119 */
static void C_ccall f_124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_124,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_127,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k125 in k122 in k119 */
static void C_ccall f_127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_127,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[0]+1 /* (set! main ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_129,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_143,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t3;
tp(2,av2);}}

/* main in k125 in k122 in k119 */
static void C_ccall f_129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_129,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_133,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_i_car(t2);
C_trace(C_text("example.csm:2: chicken.base#print"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t3;
av2[2]=lf[2];
av2[3]=t4;
tp(4,av2);}}

/* k131 in main in k125 in k122 in k119 */
static void C_ccall f_133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_133,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k141 in k125 in k122 in k119 */
static void C_ccall f_143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_143,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(21))){
C_save(t1);
C_rereclaim2(21*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,4);
lf[0]=C_h_intern(&lf[0],4, C_text("main"));
lf[1]=C_h_intern(&lf[1],18, C_text("chicken.base#print"));
lf[2]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004Hi, "));
lf[3]=C_h_intern(&lf[3],34, C_text("chicken.base#implicit-exit-handler"));
C_register_lf2(lf,4,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_121,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[8] = {
{C_text("f_121:example_2ecsm"),(void*)f_121},
{C_text("f_124:example_2ecsm"),(void*)f_124},
{C_text("f_127:example_2ecsm"),(void*)f_127},
{C_text("f_129:example_2ecsm"),(void*)f_129},
{C_text("f_133:example_2ecsm"),(void*)f_133},
{C_text("f_143:example_2ecsm"),(void*)f_143},
{C_text("toplevel:example_2ecsm"),(void*)C_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|safe globals: (main) 
o|replaced variables: 2 
o|removed binding forms: 5 
o|removed binding forms: 2 
o|simplifications: ((##core#call . 1)) 
o|  call simplifications:
o|    scheme#car
o|contracted procedure: k135 
o|removed binding forms: 1 
*/
/* end of file */
