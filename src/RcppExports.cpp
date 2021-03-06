// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// render_scene_rcpp
List render_scene_rcpp(List camera_info, bool ambient_light, IntegerVector type, NumericVector radius, IntegerVector shape, List position_list, List properties, List velocity, LogicalVector moving, int n, NumericVector& bghigh, NumericVector& bglow, LogicalVector ischeckered, List checkercolors, List gradient_info, NumericVector noise, LogicalVector isnoise, NumericVector& noisephase, NumericVector& noiseintensity, List noisecolorlist, List& angle, LogicalVector& isimage, CharacterVector& filelocation, List& alphalist, NumericVector& lightintensity, LogicalVector& isflipped, LogicalVector& isvolume, NumericVector& voldensity, LogicalVector& implicit_sample, List& order_rotation_list, float clampval, LogicalVector& isgrouped, List& group_pivot, List& group_translate, List& group_angle, List& group_order_rotation, List& group_scale, LogicalVector& tri_normal_bools, LogicalVector& is_tri_color, List& tri_color_vert, CharacterVector& fileinfo, CharacterVector& filebasedir, bool progress_bar, int numbercores, bool hasbackground, CharacterVector& background, List& scale_list, NumericVector sigmavec, float rotate_env, float intensity_env, bool verbose, int debug_channel, IntegerVector& shared_id_mat, LogicalVector& is_shared_mat, float min_variance, int min_adaptive_size, List glossyinfo, List image_repeat, List csg_info);
RcppExport SEXP _rayrender_render_scene_rcpp(SEXP camera_infoSEXP, SEXP ambient_lightSEXP, SEXP typeSEXP, SEXP radiusSEXP, SEXP shapeSEXP, SEXP position_listSEXP, SEXP propertiesSEXP, SEXP velocitySEXP, SEXP movingSEXP, SEXP nSEXP, SEXP bghighSEXP, SEXP bglowSEXP, SEXP ischeckeredSEXP, SEXP checkercolorsSEXP, SEXP gradient_infoSEXP, SEXP noiseSEXP, SEXP isnoiseSEXP, SEXP noisephaseSEXP, SEXP noiseintensitySEXP, SEXP noisecolorlistSEXP, SEXP angleSEXP, SEXP isimageSEXP, SEXP filelocationSEXP, SEXP alphalistSEXP, SEXP lightintensitySEXP, SEXP isflippedSEXP, SEXP isvolumeSEXP, SEXP voldensitySEXP, SEXP implicit_sampleSEXP, SEXP order_rotation_listSEXP, SEXP clampvalSEXP, SEXP isgroupedSEXP, SEXP group_pivotSEXP, SEXP group_translateSEXP, SEXP group_angleSEXP, SEXP group_order_rotationSEXP, SEXP group_scaleSEXP, SEXP tri_normal_boolsSEXP, SEXP is_tri_colorSEXP, SEXP tri_color_vertSEXP, SEXP fileinfoSEXP, SEXP filebasedirSEXP, SEXP progress_barSEXP, SEXP numbercoresSEXP, SEXP hasbackgroundSEXP, SEXP backgroundSEXP, SEXP scale_listSEXP, SEXP sigmavecSEXP, SEXP rotate_envSEXP, SEXP intensity_envSEXP, SEXP verboseSEXP, SEXP debug_channelSEXP, SEXP shared_id_matSEXP, SEXP is_shared_matSEXP, SEXP min_varianceSEXP, SEXP min_adaptive_sizeSEXP, SEXP glossyinfoSEXP, SEXP image_repeatSEXP, SEXP csg_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type camera_info(camera_infoSEXP);
    Rcpp::traits::input_parameter< bool >::type ambient_light(ambient_lightSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type type(typeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< List >::type position_list(position_listSEXP);
    Rcpp::traits::input_parameter< List >::type properties(propertiesSEXP);
    Rcpp::traits::input_parameter< List >::type velocity(velocitySEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type moving(movingSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type bghigh(bghighSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type bglow(bglowSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type ischeckered(ischeckeredSEXP);
    Rcpp::traits::input_parameter< List >::type checkercolors(checkercolorsSEXP);
    Rcpp::traits::input_parameter< List >::type gradient_info(gradient_infoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type noise(noiseSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type isnoise(isnoiseSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type noisephase(noisephaseSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type noiseintensity(noiseintensitySEXP);
    Rcpp::traits::input_parameter< List >::type noisecolorlist(noisecolorlistSEXP);
    Rcpp::traits::input_parameter< List& >::type angle(angleSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type isimage(isimageSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type filelocation(filelocationSEXP);
    Rcpp::traits::input_parameter< List& >::type alphalist(alphalistSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type lightintensity(lightintensitySEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type isflipped(isflippedSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type isvolume(isvolumeSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type voldensity(voldensitySEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type implicit_sample(implicit_sampleSEXP);
    Rcpp::traits::input_parameter< List& >::type order_rotation_list(order_rotation_listSEXP);
    Rcpp::traits::input_parameter< float >::type clampval(clampvalSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type isgrouped(isgroupedSEXP);
    Rcpp::traits::input_parameter< List& >::type group_pivot(group_pivotSEXP);
    Rcpp::traits::input_parameter< List& >::type group_translate(group_translateSEXP);
    Rcpp::traits::input_parameter< List& >::type group_angle(group_angleSEXP);
    Rcpp::traits::input_parameter< List& >::type group_order_rotation(group_order_rotationSEXP);
    Rcpp::traits::input_parameter< List& >::type group_scale(group_scaleSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type tri_normal_bools(tri_normal_boolsSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type is_tri_color(is_tri_colorSEXP);
    Rcpp::traits::input_parameter< List& >::type tri_color_vert(tri_color_vertSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type fileinfo(fileinfoSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type filebasedir(filebasedirSEXP);
    Rcpp::traits::input_parameter< bool >::type progress_bar(progress_barSEXP);
    Rcpp::traits::input_parameter< int >::type numbercores(numbercoresSEXP);
    Rcpp::traits::input_parameter< bool >::type hasbackground(hasbackgroundSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type background(backgroundSEXP);
    Rcpp::traits::input_parameter< List& >::type scale_list(scale_listSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sigmavec(sigmavecSEXP);
    Rcpp::traits::input_parameter< float >::type rotate_env(rotate_envSEXP);
    Rcpp::traits::input_parameter< float >::type intensity_env(intensity_envSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type debug_channel(debug_channelSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type shared_id_mat(shared_id_matSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type is_shared_mat(is_shared_matSEXP);
    Rcpp::traits::input_parameter< float >::type min_variance(min_varianceSEXP);
    Rcpp::traits::input_parameter< int >::type min_adaptive_size(min_adaptive_sizeSEXP);
    Rcpp::traits::input_parameter< List >::type glossyinfo(glossyinfoSEXP);
    Rcpp::traits::input_parameter< List >::type image_repeat(image_repeatSEXP);
    Rcpp::traits::input_parameter< List >::type csg_info(csg_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(render_scene_rcpp(camera_info, ambient_light, type, radius, shape, position_list, properties, velocity, moving, n, bghigh, bglow, ischeckered, checkercolors, gradient_info, noise, isnoise, noisephase, noiseintensity, noisecolorlist, angle, isimage, filelocation, alphalist, lightintensity, isflipped, isvolume, voldensity, implicit_sample, order_rotation_list, clampval, isgrouped, group_pivot, group_translate, group_angle, group_order_rotation, group_scale, tri_normal_bools, is_tri_color, tri_color_vert, fileinfo, filebasedir, progress_bar, numbercores, hasbackground, background, scale_list, sigmavec, rotate_env, intensity_env, verbose, debug_channel, shared_id_mat, is_shared_mat, min_variance, min_adaptive_size, glossyinfo, image_repeat, csg_info));
    return rcpp_result_gen;
END_RCPP
}
// tonemap_image
List tonemap_image(int nx, int ny, NumericMatrix routput, NumericMatrix goutput, NumericMatrix boutput, int toneval);
RcppExport SEXP _rayrender_tonemap_image(SEXP nxSEXP, SEXP nySEXP, SEXP routputSEXP, SEXP goutputSEXP, SEXP boutputSEXP, SEXP tonevalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nx(nxSEXP);
    Rcpp::traits::input_parameter< int >::type ny(nySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type routput(routputSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type goutput(goutputSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type boutput(boutputSEXP);
    Rcpp::traits::input_parameter< int >::type toneval(tonevalSEXP);
    rcpp_result_gen = Rcpp::wrap(tonemap_image(nx, ny, routput, goutput, boutput, toneval));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rayrender_render_scene_rcpp", (DL_FUNC) &_rayrender_render_scene_rcpp, 59},
    {"_rayrender_tonemap_image", (DL_FUNC) &_rayrender_tonemap_image, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_rayrender(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
