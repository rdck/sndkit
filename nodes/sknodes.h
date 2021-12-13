#ifndef SK_NODES_H
#define SK_NODES_H
int sk_node_biscale(sk_core *core);
int sk_node_scale(sk_core *core);
int sk_node_wavout(sk_core *core, const char *filename);
int sk_node_wavouts(sk_core *core, const char *filename);
int sk_node_wavin(sk_core *core, const char *filename);
int sk_node_sine(sk_core *core);
int sk_node_dcblocker(sk_core *core);
int sk_node_rephasor(sk_core *core);
int sk_node_phsdiv(sk_core *core);
int sk_node_phsmul(sk_core *core);
int sk_node_fmpair(sk_core *core);
int sk_node_osc(sk_core *core);
int sk_node_phasor(sk_core *core, SKFLT iphs);
int sk_node_add(sk_core *core);
int sk_node_mul(sk_core *core);
int sk_node_sub(sk_core *core);
int sk_node_div(sk_core *core);
int sk_node_bigverb(sk_core *core);
int sk_node_gensine(sk_core *core);
int sk_node_smoother(sk_core *core);
int sk_node_tsmoother(sk_core *core);
int sk_node_metro(sk_core *core);
int sk_node_expon(sk_core *core);
int sk_node_rline(sk_core *core);
int sk_node_vardelay(sk_core *core);
int sk_node_expmap(sk_core *core);
int sk_node_biramp(sk_core *core);
int sk_node_flipper(sk_core *core);
int sk_node_phasewarp(sk_core *core);
int sk_node_oscf(sk_core *core);
int sk_node_modalres(sk_core *core);
int sk_node_chorus(sk_core *core);
int sk_node_bezier(sk_core *core);
int sk_node_bitnoise(sk_core *core);
int sk_node_chaosnoise(sk_core *core);
int sk_node_peakeq(sk_core *core);
int sk_node_valp1(sk_core *core);
int sk_node_bitosc(sk_core *core);
int sk_node_env(sk_core *core);
int sk_node_glottis(sk_core *core);
int sk_node_tractxy(sk_core *core);
int sk_node_tract(sk_core *core);
int sk_node_blsaw(sk_core *core);
int sk_node_blsquare(sk_core *core);
int sk_node_bltri(sk_core *core);
int sk_node_mtof(sk_core *core);
int sk_node_phsclk(sk_core *core);
int sk_node_clkphs(sk_core *core);
int sk_node_noise(sk_core *core);
int sk_node_sparse(sk_core *core);
int sk_node_softclip(sk_core *core);
int sk_node_tseq(sk_core *core);
int sk_node_gensaw(sk_core *core);
int sk_tab_sinesum(sk_core *core, const char *argstr);
int sk_tab_vals(sk_core *core, const char *argstr);
int sk_node_thresh(sk_core *core);
int sk_node_adsr(sk_core *core);
#endif
