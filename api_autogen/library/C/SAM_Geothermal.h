#ifndef SAM_GEOTHERMAL_H_
#define SAM_GEOTHERMAL_H_

#include "visibility.h"
#include "SAM_api.h"


#include <stdint.h>
#ifdef __cplusplus
extern "C"
{
#endif

	//
	// Geothermal Technology Model
	//

	/** 
	 * Create a Geothermal variable table.
	 * @param def: the set of financial model-dependent defaults to use (None, Residential, ...)
	 * @param[in,out] err: a pointer to an error object
	 */

	SAM_EXPORT typedef void * SAM_Geothermal;

	SAM_EXPORT SAM_Geothermal SAM_Geothermal_construct(const char* def, SAM_error* err);

	/// verbosity level 0 or 1. Returns 1 on success
	SAM_EXPORT int SAM_Geothermal_execute(SAM_Geothermal data, int verbosity, SAM_error* err);

	SAM_EXPORT void SAM_Geothermal_destruct(SAM_Geothermal system);


	//
	// GeoHourly parameters
	//

	/**
	 * Set CT: Condenser type (Wet, Dry,Hybrid) [(1-3)]
	 * options: None
	 * constraints: INTEGER
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_CT_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set HTF: Heat trans fluid type ID [(1-27)]
	 * options: None
	 * constraints: INTEGER
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_HTF_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set P_boil: Design Boiler Pressure [bar]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_P_boil_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set P_cond_min: Minimum condenser pressure [in Hg]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_P_cond_min_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set P_cond_ratio: Condenser pressure ratio []
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_P_cond_ratio_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set T_ITD_des: Design ITD for dry system [C]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_T_ITD_des_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set T_amb_des: Design ambient temperature [C]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_T_amb_des_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set T_approach: Approach Temperature [C]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_T_approach_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set T_htf_cold_ref: Outlet design temp [C]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_T_htf_cold_ref_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set T_htf_hot_ref: Inlet design temp [C]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_T_htf_hot_ref_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set ambient_pressure: Ambient pressure [psi]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_ambient_pressure_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set analysis_type: Analysis Type []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_analysis_type_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set casing_size: Production pump casing size [in]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_casing_size_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set conversion_subtype: Conversion Subtype []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_conversion_subtype_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set conversion_type: Conversion Type []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_conversion_type_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set dT_cw_ref: Design condenser cooling water inlet/outlet T diff [C]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_dT_cw_ref_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set decline_type: Temp decline Type []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_decline_type_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set delta_pressure_equip: Delta pressure across surface equipment [psi]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_delta_pressure_equip_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set design_temp: Power block design temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_design_temp_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set eta_ref: Desgin conversion efficiency [%]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_eta_ref_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set excess_pressure_pump: Excess pressure @ pump suction [psi]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_excess_pressure_pump_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set fracture_angle: Fracture angle [deg]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_fracture_angle_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set fracture_aperature: Fracture aperature [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_fracture_aperature_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set fracture_width: Fracture width [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_fracture_width_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set geothermal_analysis_period: Analysis Lifetime [years]
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_geothermal_analysis_period_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set hc_ctl1: HC Control 1 []
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_hc_ctl1_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set hc_ctl2: HC Control 2 []
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_hc_ctl2_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set hc_ctl3: HC Control 3 []
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_hc_ctl3_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set hc_ctl4: HC Control 4 []
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_hc_ctl4_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set hc_ctl5: HC Control 5 []
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_hc_ctl5_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set hc_ctl6: HC Control 6 []
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_hc_ctl6_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set hc_ctl7: HC Control 7 []
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_hc_ctl7_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set hc_ctl8: HC Control 8 []
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_hc_ctl8_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set hc_ctl9: HC Control 9 []
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_hc_ctl9_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set hr_pl_nlev: # part-load increments [(0-9)]
	 * options: None
	 * constraints: INTEGER
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_hr_pl_nlev_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set hybrid_dispatch_schedule: Daily dispatch schedule []
	 * options: None
	 * constraints: TOUSCHED
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_hybrid_dispatch_schedule_sset(SAM_Geothermal ptr, const char* str, SAM_error *err);

	/**
	 * Set inj_prod_well_distance: Distance from injection to production wells [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_inj_prod_well_distance_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set inj_well_diam: Injection well diameter [in]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_inj_well_diam_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set model_choice: Which model to run (0,1,2) []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_model_choice_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set nameplate: Desired plant output [kW]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_nameplate_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set num_fractures: Number of fractures []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_num_fractures_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set num_wells: Number of Wells []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_num_wells_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set num_wells_getem: Number of Wells GETEM calc'd []
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_num_wells_getem_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set pb_bd_frac: Blowdown steam fraction [%]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_pb_bd_frac_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set plant_efficiency_input: Plant efficiency []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_plant_efficiency_input_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set pump_efficiency: Pump efficiency [%]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_pump_efficiency_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set q_sby_frac: % thermal power for standby mode [%]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_q_sby_frac_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set reservoir_height: Reservoir height [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_reservoir_height_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set reservoir_permeability: Reservoir Permeability [darcys]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_reservoir_permeability_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set reservoir_pressure_change: Pressure change [psi-h/1000lb]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_reservoir_pressure_change_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set reservoir_pressure_change_type: Reservoir pressure change type []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_reservoir_pressure_change_type_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set reservoir_width: Reservoir width [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_reservoir_width_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set resource_depth: Resource Depth [m]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_resource_depth_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set resource_potential: Resource Potential [MW]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_resource_potential_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set resource_temp: Resource Temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_resource_temp_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set resource_type: Type of Resource []
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_resource_type_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set rock_density: Rock density [kg/m^3]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_rock_density_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set rock_specific_heat: Rock specific heat [J/kg-C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_rock_specific_heat_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set rock_thermal_conductivity: Rock thermal conductivity [J/m-day-C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_rock_thermal_conductivity_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set specified_pump_work_amount: Pump work specified by user [MW]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_specified_pump_work_amount_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set specify_pump_work: Did user specify pump work? [0 or 1]
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_specify_pump_work_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set startup_frac: % thermal power for startup [%]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_startup_frac_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set startup_time: Hours to start power block [hours]
	 * options: None
	 * constraints: None
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_startup_time_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set subsurface_water_loss: Subsurface water loss [%]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_subsurface_water_loss_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set temp_decline_max: Maximum temperature decline [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_temp_decline_max_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set temp_decline_rate: Temperature decline rate [%/yr]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_temp_decline_rate_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set ui_calculations_only: If = 1, only run UI calculations []
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_ui_calculations_only_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set well_diameter: Production well diameter [in]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_well_diameter_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set well_flow_rate: Production flow rate per well [kg/s]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_well_flow_rate_fset(SAM_Geothermal ptr, float number, SAM_error *err);

	/**
	 * Set wet_bulb_temp: Wet Bulb Temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_Geothermal_GeoHourly_wet_bulb_temp_fset(SAM_Geothermal ptr, float number, SAM_error *err);


	//
	// Weather parameters
	//

	/**
	 * Set file_name: local weather file path []
	 * options: None
	 * constraints: LOCAL_FILE
	 * required if: ui_calculations_only=0
	 */
	SAM_EXPORT void SAM_Geothermal_Weather_file_name_sset(SAM_Geothermal ptr, const char* str, SAM_error *err);


	/**
	 * GeoHourly Getters
	 */

	SAM_EXPORT float SAM_Geothermal_GeoHourly_CT_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_HTF_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_P_boil_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_P_cond_min_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_P_cond_ratio_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_T_ITD_des_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_T_amb_des_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_T_approach_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_T_htf_cold_ref_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_T_htf_hot_ref_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_ambient_pressure_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_analysis_type_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_casing_size_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_conversion_subtype_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_conversion_type_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_dT_cw_ref_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_decline_type_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_delta_pressure_equip_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_design_temp_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_eta_ref_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_excess_pressure_pump_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_fracture_angle_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_fracture_aperature_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_fracture_width_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_geothermal_analysis_period_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_hc_ctl1_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_hc_ctl2_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_hc_ctl3_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_hc_ctl4_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_hc_ctl5_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_hc_ctl6_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_hc_ctl7_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_hc_ctl8_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_hc_ctl9_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_hr_pl_nlev_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT const char* SAM_Geothermal_GeoHourly_hybrid_dispatch_schedule_sget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_inj_prod_well_distance_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_inj_well_diam_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_model_choice_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_nameplate_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_num_fractures_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_num_wells_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_num_wells_getem_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_pb_bd_frac_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_plant_efficiency_input_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_pump_efficiency_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_q_sby_frac_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_reservoir_height_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_reservoir_permeability_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_reservoir_pressure_change_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_reservoir_pressure_change_type_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_reservoir_width_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_resource_depth_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_resource_potential_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_resource_temp_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_resource_type_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_rock_density_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_rock_specific_heat_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_rock_thermal_conductivity_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_specified_pump_work_amount_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_specify_pump_work_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_startup_frac_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_startup_time_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_subsurface_water_loss_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_temp_decline_max_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_temp_decline_rate_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_ui_calculations_only_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_well_diameter_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_well_flow_rate_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_GeoHourly_wet_bulb_temp_fget(SAM_Geothermal ptr, SAM_error *err);


	/**
	 * Weather Getters
	 */

	SAM_EXPORT const char* SAM_Geothermal_Weather_file_name_sget(SAM_Geothermal ptr, SAM_error *err);


	/**
	 * Outputs Getters
	 */

	SAM_EXPORT float SAM_Geothermal_Outputs_GF_flowrate_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_annual_energy_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_bottom_hole_pressure_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_capacity_factor_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_condensate_pump_power_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_cw_pump_head_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_cw_pump_work_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_cwflow_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_eff_secondlaw_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_first_year_output_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_flash_count_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_gross_output_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_hp_flash_pressure_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_kwh_per_kw_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_lifetime_output_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_lp_flash_pressure_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Geothermal_Outputs_monthly_energy_aget(SAM_Geothermal ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Geothermal_Outputs_monthly_power_aget(SAM_Geothermal ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Geothermal_Outputs_monthly_resource_temperature_aget(SAM_Geothermal ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_ncg_condensate_pump_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_num_wells_getem_output_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_plant_brine_eff_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_pressure_ratio_1_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_pressure_ratio_2_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_pressure_ratio_3_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_pump_depth_ft_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_pump_hp_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_pump_work_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_qCondenser_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_qRejectByStage_1_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_qRejectByStage_2_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_qRejectByStage_3_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_qRejectTotal_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_reservoir_avg_temp_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_reservoir_pressure_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_spec_vol_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_spec_vol_lp_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float* SAM_Geothermal_Outputs_system_lifetime_recapitalize_aget(SAM_Geothermal ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Geothermal_Outputs_timestep_dry_bulb_aget(SAM_Geothermal ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Geothermal_Outputs_timestep_power_aget(SAM_Geothermal ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Geothermal_Outputs_timestep_pressure_aget(SAM_Geothermal ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Geothermal_Outputs_timestep_resource_temperature_aget(SAM_Geothermal ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Geothermal_Outputs_timestep_test_values_aget(SAM_Geothermal ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_Geothermal_Outputs_timestep_wet_bulb_aget(SAM_Geothermal ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_v_stage_1_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_v_stage_2_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_v_stage_3_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_x_hp_fget(SAM_Geothermal ptr, SAM_error *err);

	SAM_EXPORT float SAM_Geothermal_Outputs_x_lp_fget(SAM_Geothermal ptr, SAM_error *err);

#ifdef __cplusplus
} /* end of extern "C" { */
#endif

#endif