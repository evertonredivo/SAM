#ifndef SAM_TCSMSLF_H_
#define SAM_TCSMSLF_H_

#include "visibility.h"
#include "SAM_api.h"


#include <stdint.h>
#ifdef __cplusplus
extern "C"
{
#endif

	//
	// TcsMSLF Technology Model
	//

	/** 
	 * Create a TcsMSLF variable table.
	 * @param def: the set of financial model-dependent defaults to use (None, Residential, ...)
	 * @param[in,out] err: a pointer to an error object
	 */

	SAM_EXPORT typedef void * SAM_TcsMSLF;

	SAM_EXPORT SAM_TcsMSLF SAM_TcsMSLF_construct(const char* def, SAM_error* err);

	/// verbosity level 0 or 1. Returns 1 on success
	SAM_EXPORT int SAM_TcsMSLF_execute(SAM_TcsMSLF data, int verbosity, SAM_error* err);

	SAM_EXPORT void SAM_TcsMSLF_destruct(SAM_TcsMSLF system);


	//
	// Weather parameters
	//

	/**
	 * Set azimuth: Azimuth angle of surface/axis []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Weather_azimuth_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set file_name: local weather file path []
	 * options: None
	 * constraints: LOCAL_FILE
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Weather_file_name_sset(SAM_TcsMSLF ptr, const char* str, SAM_error *err);

	/**
	 * Set tilt: Tilt angle of surface/axis []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Weather_tilt_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set track_mode: Tracking mode []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Weather_track_mode_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);


	//
	// Mslf parameters
	//

	/**
	 * Set system_capacity: Nameplate capacity [kW]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Mslf_system_capacity_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);


	//
	// TouTranslator parameters
	//

	/**
	 * Set weekday_schedule: 12x24 Time of Use Values for week days []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_TouTranslator_weekday_schedule_mset(SAM_TcsMSLF ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set weekend_schedule: 12x24 Time of Use Values for week end days []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_TouTranslator_weekend_schedule_mset(SAM_TcsMSLF ptr, float* mat, int nrows, int ncols, SAM_error *err);


	//
	// Controller parameters
	//

	/**
	 * Set A_aperture: Reflective aperture area of the collector [m2]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_A_aperture_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set AbsorberMaterial: Absorber material type []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_AbsorberMaterial_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set AnnulusGas: Annulus gas type (1=air; 26=Ar; 27=H2) []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_AnnulusGas_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set ColAz: Collector azimuth angle [deg]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_ColAz_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set DP_SGS: Pressure drop within the steam generator [bar]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_DP_SGS_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set DP_coefs: Pressure drop mass flow based part-load curve []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_DP_coefs_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set DP_nominal: Pressure drop across a single collector assembly at design [bar]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_DP_nominal_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set D_abs_in: The inner absorber tube diameter [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_D_abs_in_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set D_abs_out: The outer absorber tube diameter [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_D_abs_out_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set D_glass_in: The inner glass envelope diameter [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_D_glass_in_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set D_glass_out: The outer glass envelope diameter [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_D_glass_out_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set D_plug: The diameter of the absorber flow plug (optional) [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_D_plug_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set Design_loss: Receiver heat loss at design [W/m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_Design_loss_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set Dirt_mirror: User-defined dirt on mirror derate []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_Dirt_mirror_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set Error: User-defined general optical error derate []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_Error_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set FieldConfig: Number of subfield headers []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_FieldConfig_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set Flow_type: The flow type through the absorber []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_Flow_type_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set Fluid: Field HTF fluid number []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_Fluid_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set GeomEffects: Geometry effects derate []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_GeomEffects_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set GlazingIntactIn: The glazing intact flag []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_GlazingIntactIn_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set HCE_FieldFrac: The fraction of the field occupied by this HCE type []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_HCE_FieldFrac_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set HDR_rough: Header pipe roughness [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_HDR_rough_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set HL_T_coefs: HTF temperature-dependent heat loss coefficients [W/m-K]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_HL_T_coefs_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set HL_w_coefs: Wind-speed-dependent heat loss coefficients [W/m-(m/s)]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_HL_w_coefs_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set IAM_L_coefs: Incidence angle modifier coefficients - longitudinal plane []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_IAM_L_coefs_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set IAM_T_coefs: Incidence angle modifier coefficients - transversal plane []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_IAM_T_coefs_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set I_b: Direct normal incident solar irradiation [kJ/m2-hr]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_I_b_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set I_bn_des: Solar irradiation at design [W/m2]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_I_bn_des_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set L_crossover: Length of crossover piping in a loop [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_L_crossover_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set L_mod: The length of the collector module [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_L_mod_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set L_mod_spacing: Piping distance between sequential modules in a loop [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_L_mod_spacing_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set OpticalTable: Values of the optical efficiency table []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_OpticalTable_mset(SAM_TcsMSLF ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set P_a: Annulus gas pressure [torr]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_P_a_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set P_amb: Ambient pressure [atm]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_P_amb_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set Pipe_hl_coef: Loss coefficient from the header - runner pipe - and non-HCE piping [W/m2-K]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_Pipe_hl_coef_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set Rough: Roughness of the internal surface [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_Rough_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set SCA_drives_elec: Tracking power in Watts per SCA drive [W/module]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_SCA_drives_elec_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set Shadowing: Receiver bellows shadowing loss factor []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_Shadowing_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set T_amb_sf_des: Ambient design-point temperature for the solar field [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_amb_sf_des_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_cold_in: HTF return temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_cold_in_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_db: Dry bulb air temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_db_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_dp: The dewpoint temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_dp_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_field_in_des: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_field_in_des_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_field_ini: Initial field temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_field_ini_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_field_out_des: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_field_out_des_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_fp: Freeze protection temperature (heat trace activation temperature) [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_fp_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_loop_in_des: Design loop inlet temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_loop_in_des_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_loop_out: Target loop outlet temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_loop_out_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_set_aux: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_set_aux_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_startup: Power block startup temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_startup_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_tank_cold_ini: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_tank_cold_ini_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_tank_hot_ini: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_tank_hot_ini_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_tank_hot_inlet_min: Minimum hot tank htf inlet temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_T_tank_hot_inlet_min_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set Tau_envelope: Envelope transmittance []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_Tau_envelope_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set TrackingError: Tracking error derate []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_TrackingError_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set V_hdr_max: Maximum HTF velocity in the header at design [m/s]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_V_hdr_max_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set V_hdr_min: Minimum HTF velocity in the header at design [m/s]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_V_hdr_min_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set V_tank_hot_ini: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_V_tank_hot_ini_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set V_tes_des: Design-point velocity to size the TES pipe diameters [m/s]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_V_tes_des_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set V_wind: Ambient windspeed [m/s]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_V_wind_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set V_wind_des: Design-point wind velocity [m/s]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_V_wind_des_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set W_pb_design: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_W_pb_design_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set alpha_abs: Absorber absorptance []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_alpha_abs_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set alpha_env: Envelope absorptance []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_alpha_env_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set aux_array: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_aux_array_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set bop_array: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_bop_array_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set calc_design_pipe_vals: Calculate temps and pressures at design conditions for runners and headers [-]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_calc_design_pipe_vals_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set cold_tank_Thtr: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_cold_tank_Thtr_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set custom_sgs_pipe_sizes: Use custom SGS pipe diams, wallthks, and lengths [-]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_custom_sgs_pipe_sizes_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set custom_tes_p_loss: TES pipe losses are based on custom lengths and coeffs [-]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_custom_tes_p_loss_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set cycle_cutoff_frac: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_cycle_cutoff_frac_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set cycle_max_frac: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_cycle_max_frac_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set defocus: Defocus control []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_defocus_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set dirt_env: Loss due to dirt on the receiver envelope []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_dirt_env_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set dt_cold: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_dt_cold_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set dt_hot: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_dt_hot_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set epsilon_abs_1: Absorber emittance - HCE variation 1 []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_epsilon_abs_1_mset(SAM_TcsMSLF ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set epsilon_abs_2: Absorber emittance - HCE variation 2 []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_epsilon_abs_2_mset(SAM_TcsMSLF ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set epsilon_abs_3: Absorber emittance - HCE variation 3 []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_epsilon_abs_3_mset(SAM_TcsMSLF ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set epsilon_abs_4: Absorber emittance - HCE variation 4 []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_epsilon_abs_4_mset(SAM_TcsMSLF ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set epsilon_glass: Glass envelope emissivity []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_epsilon_glass_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set eta_pump: HTF pump efficiency []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_eta_pump_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set f_tc_cold: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_f_tc_cold_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set fc_on: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_fc_on_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set ffrac: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_ffrac_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set field_fl_props: Fluid property data []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_field_fl_props_mset(SAM_TcsMSLF ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set field_fluid: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_field_fluid_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set fossil_mode: Label []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_fossil_mode_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set fthr_ok: Label []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_fthr_ok_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set fthrctrl: Defocusing strategy []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_fthrctrl_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set fthrok: Flag to allow partial defocusing of the collectors []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_fthrok_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set h_tank: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_h_tank_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set h_tank_min: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_h_tank_min_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set has_hot_tank_bypass: Bypass valve connects field outlet to cold tank [-]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_has_hot_tank_bypass_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set hot_tank_Thtr: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_hot_tank_Thtr_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set hx_config: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_hx_config_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set is_hx: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_is_hx_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set k_tes_loss_coeffs: Minor loss coeffs for the coll, gen, and bypass loops [-]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_k_tes_loss_coeffs_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set m_dot_htfmax: Maximum loop HTF flow rate [kg/s]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_m_dot_htfmax_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set m_dot_htfmin: Minimum loop HTF flow rate [kg/s]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_m_dot_htfmin_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set mc_bal_cold: The heat capacity of the balance of plant on the cold side [kWht/K-MWt]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_mc_bal_cold_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set mc_bal_hot: The heat capacity of the balance of plant on the hot side [kWht/K-MWt]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_mc_bal_hot_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set mc_bal_sca: Non-HTF heat capacity associated with each SCA - per meter basis [Wht/K-m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_mc_bal_sca_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set nLoops: Number of loops in the field []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_nLoops_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set nMod: Number of collector modules in a loop []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_nMod_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set nRecVar: Number of receiver variantions []
	 * options: None
	 * constraints: INTEGER
	 * required if: ?=4
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_nRecVar_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set nSCA: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_nSCA_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set nodes: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_nodes_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set opt_model: The optical model []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_opt_model_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set pb_fixed_par: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_pb_fixed_par_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set pb_pump_coef: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_pb_pump_coef_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set pb_rated_cap: Rated plant capacity [MWe]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_pb_rated_cap_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set q_max_aux: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_q_max_aux_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set q_pb_design: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_q_pb_design_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set rec_htf_vol: Volume of HTF in a single collector unit per unit aperture area [L/m2-ap]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_rec_htf_vol_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set rec_model: Receiver model type (1=Polynomial ; 2=Evac tube) []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_rec_model_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set reflectivity: Solar-weighted mirror reflectivity value []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_reflectivity_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set sgs_diams: Custom SGS diameters [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_sgs_diams_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set sgs_lengths: Custom SGS lengths [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_sgs_lengths_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set sgs_wallthicks: Custom SGS wall thicknesses [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_sgs_wallthicks_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set solar_mult: Solar multiple []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_solar_mult_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set solarm: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_solarm_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set store_fl_props: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_store_fl_props_mset(SAM_TcsMSLF ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set store_fluid: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_store_fluid_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set t_ch_out_max: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_t_ch_out_max_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set t_dis_out_min: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_t_dis_out_min_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set t_standby_reset: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_t_standby_reset_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set tank_max_heat: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_tank_max_heat_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set tank_pairs: Label []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_tank_pairs_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set tanks_in_parallel: Tanks are in parallel, not in series, with solar field [-]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_tanks_in_parallel_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set tc_fill: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_tc_fill_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set tc_void: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_tc_void_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set tes_pump_coef: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_tes_pump_coef_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set tes_temp: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_tes_temp_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set tes_type: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_tes_type_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set theta_dep: deploy angle [deg]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_theta_dep_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set theta_stow: stow angle [deg]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_theta_stow_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set tshours: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_tshours_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set tslogic_a: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_tslogic_a_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set tslogic_b: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_tslogic_b_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set tslogic_c: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_tslogic_c_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set u_tank: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_u_tank_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set vol_tank: Label []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Controller_vol_tank_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);


	//
	// SolarField parameters
	//

	/**
	 * Set washes_per_year: Mirror washing frequency [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_SolarField_washes_per_year_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set water_per_wash: Water usage per wash [L/m2_aper]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_SolarField_water_per_wash_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);


	//
	// Powerblock parameters
	//

	/**
	 * Set CT: Flag for using dry cooling or wet cooling system [none]
	 * options: None
	 * constraints: None
	 * required if: pc_config=0
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_CT_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set F_wc: Fraction indicating wet cooling use for hybrid system [none]
	 * options: constant=[0,0,0,0,0,0,0,0,0]
	 * constraints: None
	 * required if: pc_config=0
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_F_wc_aset(SAM_TcsMSLF ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set P_boil: Boiler operating pressure [bar]
	 * options: None
	 * constraints: None
	 * required if: pc_config=0
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_P_boil_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set P_cond_min: Minimum condenser pressure [inHg]
	 * options: None
	 * constraints: None
	 * required if: pc_config=0
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_P_cond_min_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set P_cond_ratio: Condenser pressure ratio [none]
	 * options: None
	 * constraints: None
	 * required if: pc_config=0
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_P_cond_ratio_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set P_ref: Label [-]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_P_ref_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_ITD_des: ITD at design for dry system [C]
	 * options: None
	 * constraints: None
	 * required if: pc_config=0
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_T_ITD_des_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_amb_des: Reference ambient temperature at design point [C]
	 * options: None
	 * constraints: None
	 * required if: pc_config=0
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_T_amb_des_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_approach: Cooling tower approach temperature [C]
	 * options: None
	 * constraints: None
	 * required if: pc_config=0
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_T_approach_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_htf_cold_ref: Label [-]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_T_htf_cold_ref_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set T_htf_hot_ref: Label [-]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_T_htf_hot_ref_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set dT_cw_ref: Reference condenser cooling water inlet/outlet T diff [C]
	 * options: None
	 * constraints: None
	 * required if: pc_config=0
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_dT_cw_ref_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set eta_ref: Cycle thermal efficiency at design point [-]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_eta_ref_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set n_pl_inc: Number of part-load increments for the heat rejection system [none]
	 * options: None
	 * constraints: None
	 * required if: pc_config=0
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_n_pl_inc_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set pb_bd_frac: Power block blowdown steam fraction  [none]
	 * options: None
	 * constraints: None
	 * required if: pc_config=0
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_pb_bd_frac_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set pc_config: 0: Steam Rankine (224), 1: user defined [-]
	 * options: None
	 * constraints: INTEGER
	 * required if: ?=0
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_pc_config_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set q_sby_frac: Fraction of thermal power required for standby mode [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_q_sby_frac_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set startup_frac: Fraction of design thermal power needed for startup [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_startup_frac_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set startup_time: Time needed for power block startup [hr]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_startup_time_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set tech_type: Turbine inlet pressure control flag (sliding=user, fixed=trough) [1/2/3]
	 * options: tower/trough/user
	 * constraints: None
	 * required if: pc_config=0
	 */
	SAM_EXPORT void SAM_TcsMSLF_Powerblock_tech_type_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);


	//
	// UserDefinedPC parameters
	//

	/**
	 * Set ud_T_amb_des: Ambient temperature at user-defined power cycle design point [C]
	 * options: None
	 * constraints: None
	 * required if: pc_config=1
	 */
	SAM_EXPORT void SAM_TcsMSLF_UserDefinedPC_ud_T_amb_des_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set ud_T_amb_high: High level ambient temperature for HTF mass flow rate parametric [C]
	 * options: None
	 * constraints: None
	 * required if: pc_config=1
	 */
	SAM_EXPORT void SAM_TcsMSLF_UserDefinedPC_ud_T_amb_high_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set ud_T_amb_ind_od: Off design table of user-defined power cycle performance formed from parametric on T_amb [C] []
	 * options: None
	 * constraints: None
	 * required if: pc_config=1
	 */
	SAM_EXPORT void SAM_TcsMSLF_UserDefinedPC_ud_T_amb_ind_od_mset(SAM_TcsMSLF ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set ud_T_amb_low: Low level ambient temperature for HTF mass flow rate parametric [C]
	 * options: None
	 * constraints: None
	 * required if: pc_config=1
	 */
	SAM_EXPORT void SAM_TcsMSLF_UserDefinedPC_ud_T_amb_low_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set ud_T_htf_high: High level HTF inlet temperature for T_amb parametric [C]
	 * options: None
	 * constraints: None
	 * required if: pc_config=1
	 */
	SAM_EXPORT void SAM_TcsMSLF_UserDefinedPC_ud_T_htf_high_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set ud_T_htf_ind_od: Off design table of user-defined power cycle performance formed from parametric on T_htf_hot [C] []
	 * options: None
	 * constraints: None
	 * required if: pc_config=1
	 */
	SAM_EXPORT void SAM_TcsMSLF_UserDefinedPC_ud_T_htf_ind_od_mset(SAM_TcsMSLF ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set ud_T_htf_low: Low level HTF inlet temperature for T_amb parametric [C]
	 * options: None
	 * constraints: None
	 * required if: pc_config=1
	 */
	SAM_EXPORT void SAM_TcsMSLF_UserDefinedPC_ud_T_htf_low_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set ud_f_W_dot_cool_des: Percent of user-defined power cycle design gross output consumed by cooling [%]
	 * options: None
	 * constraints: None
	 * required if: pc_config=1
	 */
	SAM_EXPORT void SAM_TcsMSLF_UserDefinedPC_ud_f_W_dot_cool_des_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set ud_ind_od: Off design user-defined power cycle performance as function of T_htf, m_dot_htf [ND], and T_amb []
	 * options: None
	 * constraints: None
	 * required if: pc_config=1
	 */
	SAM_EXPORT void SAM_TcsMSLF_UserDefinedPC_ud_ind_od_mset(SAM_TcsMSLF ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set ud_m_dot_htf_high: High level normalized HTF mass flow rate for T_HTF parametric [-]
	 * options: None
	 * constraints: None
	 * required if: pc_config=1
	 */
	SAM_EXPORT void SAM_TcsMSLF_UserDefinedPC_ud_m_dot_htf_high_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set ud_m_dot_htf_ind_od: Off design table of user-defined power cycle performance formed from parametric on m_dot_htf [ND] []
	 * options: None
	 * constraints: None
	 * required if: pc_config=1
	 */
	SAM_EXPORT void SAM_TcsMSLF_UserDefinedPC_ud_m_dot_htf_ind_od_mset(SAM_TcsMSLF ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set ud_m_dot_htf_low: Low level normalized HTF mass flow rate for T_HTF parametric [-]
	 * options: None
	 * constraints: None
	 * required if: pc_config=1
	 */
	SAM_EXPORT void SAM_TcsMSLF_UserDefinedPC_ud_m_dot_htf_low_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set ud_m_dot_water_cool_des: Mass flow rate of water required at user-defined power cycle design point [kg/s]
	 * options: None
	 * constraints: None
	 * required if: pc_config=1
	 */
	SAM_EXPORT void SAM_TcsMSLF_UserDefinedPC_ud_m_dot_water_cool_des_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);


	//
	// Enet parameters
	//

	/**
	 * Set eta_lhv: Label [-]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Enet_eta_lhv_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set eta_tes_htr: Label [-]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Enet_eta_tes_htr_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);

	/**
	 * Set fp_mode: Label [-]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsMSLF_Enet_fp_mode_fset(SAM_TcsMSLF ptr, float number, SAM_error *err);


	/**
	 * Weather Getters
	 */

	SAM_EXPORT float SAM_TcsMSLF_Weather_azimuth_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT const char* SAM_TcsMSLF_Weather_file_name_sget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Weather_tilt_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Weather_track_mode_fget(SAM_TcsMSLF ptr, SAM_error *err);


	/**
	 * Mslf Getters
	 */

	SAM_EXPORT float SAM_TcsMSLF_Mslf_system_capacity_fget(SAM_TcsMSLF ptr, SAM_error *err);


	/**
	 * TouTranslator Getters
	 */

	SAM_EXPORT float* SAM_TcsMSLF_TouTranslator_weekday_schedule_mget(SAM_TcsMSLF ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_TouTranslator_weekend_schedule_mget(SAM_TcsMSLF ptr, int* nrows, int* ncols, SAM_error *err);


	/**
	 * Controller Getters
	 */

	SAM_EXPORT float SAM_TcsMSLF_Controller_A_aperture_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_AbsorberMaterial_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_AnnulusGas_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_ColAz_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_DP_SGS_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_DP_coefs_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_DP_nominal_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_D_abs_in_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_D_abs_out_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_D_glass_in_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_D_glass_out_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_D_plug_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_Design_loss_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_Dirt_mirror_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_Error_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_FieldConfig_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_Flow_type_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_Fluid_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_GeomEffects_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_GlazingIntactIn_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_HCE_FieldFrac_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_HDR_rough_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_HL_T_coefs_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_HL_w_coefs_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_IAM_L_coefs_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_IAM_T_coefs_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_I_b_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_I_bn_des_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_L_crossover_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_L_mod_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_L_mod_spacing_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_OpticalTable_mget(SAM_TcsMSLF ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_P_a_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_P_amb_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_Pipe_hl_coef_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_Rough_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_SCA_drives_elec_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_Shadowing_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_amb_sf_des_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_cold_in_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_db_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_dp_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_field_in_des_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_field_ini_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_field_out_des_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_fp_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_loop_in_des_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_loop_out_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_set_aux_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_startup_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_tank_cold_ini_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_tank_hot_ini_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_T_tank_hot_inlet_min_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_Tau_envelope_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_TrackingError_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_V_hdr_max_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_V_hdr_min_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_V_tank_hot_ini_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_V_tes_des_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_V_wind_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_V_wind_des_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_W_pb_design_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_alpha_abs_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_alpha_env_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_aux_array_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_bop_array_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_calc_design_pipe_vals_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_cold_tank_Thtr_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_custom_sgs_pipe_sizes_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_custom_tes_p_loss_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_cycle_cutoff_frac_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_cycle_max_frac_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_defocus_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_dirt_env_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_dt_cold_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_dt_hot_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_epsilon_abs_1_mget(SAM_TcsMSLF ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_epsilon_abs_2_mget(SAM_TcsMSLF ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_epsilon_abs_3_mget(SAM_TcsMSLF ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_epsilon_abs_4_mget(SAM_TcsMSLF ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_epsilon_glass_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_eta_pump_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_f_tc_cold_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_fc_on_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_ffrac_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_field_fl_props_mget(SAM_TcsMSLF ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_field_fluid_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_fossil_mode_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_fthr_ok_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_fthrctrl_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_fthrok_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_h_tank_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_h_tank_min_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_has_hot_tank_bypass_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_hot_tank_Thtr_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_hx_config_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_is_hx_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_k_tes_loss_coeffs_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_m_dot_htfmax_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_m_dot_htfmin_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_mc_bal_cold_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_mc_bal_hot_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_mc_bal_sca_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_nLoops_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_nMod_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_nRecVar_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_nSCA_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_nodes_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_opt_model_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_pb_fixed_par_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_pb_pump_coef_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_pb_rated_cap_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_q_max_aux_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_q_pb_design_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_rec_htf_vol_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_rec_model_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_reflectivity_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_sgs_diams_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_sgs_lengths_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_sgs_wallthicks_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_solar_mult_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_solarm_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_store_fl_props_mget(SAM_TcsMSLF ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_store_fluid_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_t_ch_out_max_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_t_dis_out_min_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_t_standby_reset_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_tank_max_heat_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_tank_pairs_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_tanks_in_parallel_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_tc_fill_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_tc_void_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_tes_pump_coef_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_tes_temp_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_tes_type_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_theta_dep_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_theta_stow_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_tshours_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_tslogic_a_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_tslogic_b_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Controller_tslogic_c_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_u_tank_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Controller_vol_tank_fget(SAM_TcsMSLF ptr, SAM_error *err);


	/**
	 * SolarField Getters
	 */

	SAM_EXPORT float SAM_TcsMSLF_SolarField_washes_per_year_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_SolarField_water_per_wash_fget(SAM_TcsMSLF ptr, SAM_error *err);


	/**
	 * Powerblock Getters
	 */

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_CT_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Powerblock_F_wc_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_P_boil_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_P_cond_min_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_P_cond_ratio_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_P_ref_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_T_ITD_des_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_T_amb_des_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_T_approach_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_T_htf_cold_ref_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_T_htf_hot_ref_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_dT_cw_ref_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_eta_ref_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_n_pl_inc_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_pb_bd_frac_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_pc_config_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_q_sby_frac_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_startup_frac_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_startup_time_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Powerblock_tech_type_fget(SAM_TcsMSLF ptr, SAM_error *err);


	/**
	 * UserDefinedPC Getters
	 */

	SAM_EXPORT float SAM_TcsMSLF_UserDefinedPC_ud_T_amb_des_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_UserDefinedPC_ud_T_amb_high_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_UserDefinedPC_ud_T_amb_ind_od_mget(SAM_TcsMSLF ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_UserDefinedPC_ud_T_amb_low_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_UserDefinedPC_ud_T_htf_high_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_UserDefinedPC_ud_T_htf_ind_od_mget(SAM_TcsMSLF ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_UserDefinedPC_ud_T_htf_low_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_UserDefinedPC_ud_f_W_dot_cool_des_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_UserDefinedPC_ud_ind_od_mget(SAM_TcsMSLF ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_UserDefinedPC_ud_m_dot_htf_high_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_UserDefinedPC_ud_m_dot_htf_ind_od_mget(SAM_TcsMSLF ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_UserDefinedPC_ud_m_dot_htf_low_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_UserDefinedPC_ud_m_dot_water_cool_des_fget(SAM_TcsMSLF ptr, SAM_error *err);


	/**
	 * Enet Getters
	 */

	SAM_EXPORT float SAM_TcsMSLF_Enet_eta_lhv_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Enet_eta_tes_htr_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Enet_fp_mode_fget(SAM_TcsMSLF ptr, SAM_error *err);


	/**
	 * Outputs Getters
	 */

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_DP_tot_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_E_bal_startup_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_EqOptEff_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_P_cycle_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_Pipe_hl_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_Q_par_sf_fp_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_Q_par_tes_fp_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_T_pb_in_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_T_pb_out_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_T_sys_c_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_T_sys_h_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_T_tank_cold_fin_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_T_tank_cold_in_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_T_tank_hot_fin_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_T_tank_hot_in_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_Ts_cold_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_Ts_hot_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_W_cool_par_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_W_dot_pump_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_W_net_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_W_par_BOP_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_W_par_aux_boiler_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Outputs_annual_W_cycle_gross_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Outputs_annual_energy_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Outputs_annual_fuel_usage_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Outputs_annual_total_water_use_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_beam_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Outputs_capacity_factor_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Outputs_conversion_factor_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_eta_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_eta_optical_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_eta_thermal_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_fixed_par_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_gen_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_hour_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_htf_pump_power_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Outputs_kwh_per_kw_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_m_dot_avail_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_m_dot_charge_field_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_m_dot_discharge_tank_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_m_dot_htf2_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_m_dot_makeup_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_m_dot_pb_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_mass_tank_cold_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_mass_tank_hot_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_month_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_monthly_energy_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_phi_t_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_pipe_sgs_P_dsn_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_pipe_sgs_T_dsn_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_pipe_sgs_diams_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_pipe_sgs_mdot_dsn_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_pipe_sgs_vel_dsn_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_pipe_sgs_wallthk_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_pres_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_q_abs_tot_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_q_aux_fuel_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_q_avail_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_q_dump_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_q_inc_sf_tot_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_q_loss_spec_tot_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_q_loss_tot_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_q_pb_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_q_to_tes_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_sf_def_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_solazi_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_solzen_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsMSLF_Outputs_system_heat_rate_fget(SAM_TcsMSLF ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_t_loop_outlet_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_tank_losses_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_tdry_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_theta_L_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_tou_value_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_track_par_tot_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_twet_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_vol_tank_cold_fin_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_vol_tank_hot_fin_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_vol_tank_total_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsMSLF_Outputs_wspd_aget(SAM_TcsMSLF ptr, int* length, SAM_error *err);

#ifdef __cplusplus
} /* end of extern "C" { */
#endif

#endif