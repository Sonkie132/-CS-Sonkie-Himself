#include "src/game/envfx_snow.h"

const GeoLayout sonk_Left_Hand_Open[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 57, 0, 0, sonk_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_Right_Hand_Open[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 57, 0, 0, sonk_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_Right_Hand_Peace[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 57, 0, 0, sonk_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_jump_sonk_Left_Hand_Open[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 57, 0, 0, sonk_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_jump_sonk_Right_Hand_Open[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 57, 0, 0, sonk_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_jump_sonk_Right_Hand_Peace[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 57, 0, 0, sonk_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Head_DL_mesh_layer_1_mat_override_Half_Eyes__SKIN__1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Head_DL_mesh_layer_1_mat_override_Closed_Eyes__SKIN__2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Head_DL_mesh_layer_1_mat_override_Left_Eyes__SKIN__3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Head_DL_mesh_layer_1_mat_override_Right_Eyes__SKIN__4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Head_DL_mesh_layer_1_mat_override_Up_Eyes__SKIN__5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Head_DL_mesh_layer_1_mat_override_Down_Eyes__SKIN__6),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt7[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Head_DL_mesh_layer_1_mat_override_Dead_Eyes__SKIN__7),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, sonk_Butt_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_ASM(0, geo_move_mario_part_from_parent),
				GEO_ASM(0, geo_mario_tilt_torso),
				GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_TRANSPARENT, 74, 0, 0, sonk_Torso_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 87, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ASM(0, geo_mario_head_rotation),
							GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
							GEO_OPEN_NODE(),
								GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
								GEO_OPEN_NODE(),
									GEO_NODE_START(),
									GEO_OPEN_NODE(),
										GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
										GEO_OPEN_NODE(),
											GEO_NODE_START(),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Head_DL_mesh_layer_1),
											GEO_CLOSE_NODE(),
											GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt1),
											GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt2),
											GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt3),
											GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt4),
											GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt5),
											GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt6),
											GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_Capless_Switch_opt0_Eye_State_Switch_opt7),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_FORCE, 142, -51, 126, -15, 33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(1, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Left_Wing_DL_mesh_layer_4),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_FORCE, 142, -51, -126, 15, -33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(0, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Right_Wing_DL_mesh_layer_4),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 67, -10, 70, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, sonk_Left_Arm_Color_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_TRANSPARENT, 65, 0, 0, sonk_Left_Forearm_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_SWITCH_CASE(1, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 60, 0, 0, 0, 0, -25),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ASM(1, geo_mario_hand_foot_scaler),
													GEO_SCALE(LAYER_FORCE, 65536),
													GEO_OPEN_NODE(),
														GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Left_Hand_DL_mesh_layer_1),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_jump_sonk_Left_Hand_Open),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 68, -10, -70, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, sonk_Right_Arm_Color_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_TRANSPARENT, 65, 0, 0, sonk_Right_Forearm_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_SWITCH_CASE(0, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 60, 0, 0, 0, 0, -25),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ASM(0, geo_mario_hand_foot_scaler),
													GEO_SCALE(LAYER_FORCE, 65536),
													GEO_OPEN_NODE(),
														GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Right_Hand_DL_mesh_layer_1),
													GEO_CLOSE_NODE(),
													GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_jump_sonk_Right_Hand_Open),
										GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1_jump_sonk_Right_Hand_Peace),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 13, -8, 38, 0, 0, 180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, 0, 180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, sonk_Left_Thigh_Color_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_TRANSPARENT, 89, 0, 0, sonk_Left_Leg_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_TRANSPARENT, 67, 0, 0, sonk_Left_Shoe_mesh_layer_1),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 13, -8, -38, 0, 0, 180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, 0, 180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, sonk_Right_Thigh_Color_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_TRANSPARENT, 89, 0, 0, sonk_Right_Leg_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ASM(2, geo_mario_hand_foot_scaler),
										GEO_SCALE(LAYER_FORCE, 65536),
										GEO_OPEN_NODE(),
											GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Right_Shoe_DL_mesh_layer_1),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt2_jump_sonk_Left_Hand_Open[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 57, 0, 0, sonk_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_mat_override_Metal__METAL__0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt2_jump_sonk_Right_Hand_Open[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 57, 0, 0, sonk_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_mat_override_Metal__METAL__0),
		GEO_OPEN_NODE(),
			GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt2_jump_sonk_Right_Hand_Peace[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 57, 0, 0, sonk_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_mat_override_Metal__METAL__0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sonk_Butt_mesh_layer_1_mat_override_Metal__METAL__0),
			GEO_OPEN_NODE(),
				GEO_ASM(0, geo_move_mario_part_from_parent),
				GEO_ASM(0, geo_mario_tilt_torso),
				GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 74, 0, 0, sonk_Torso_mesh_layer_1_mat_override_Metal__METAL__0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 87, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ASM(0, geo_mario_head_rotation),
							GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
							GEO_OPEN_NODE(),
								GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
								GEO_OPEN_NODE(),
									GEO_NODE_START(),
									GEO_OPEN_NODE(),
										GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
										GEO_OPEN_NODE(),
											GEO_NODE_START(),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Head_DL_mesh_layer_1_mat_override_Metal__METAL__0),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_FORCE, 142, -51, 126, -15, 33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(1, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_ALPHA, sonk_Left_Wing_DL_mesh_layer_4_mat_override_Metal__METAL__0),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_FORCE, 142, -51, -126, 15, -33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(0, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_ALPHA, sonk_Right_Wing_DL_mesh_layer_4_mat_override_Metal__METAL__0),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 67, -10, 70, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sonk_Left_Arm_Color_mesh_layer_1_mat_override_Metal__METAL__0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, sonk_Left_Forearm_mesh_layer_1_mat_override_Metal__METAL__0),
								GEO_OPEN_NODE(),
									GEO_SWITCH_CASE(1, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 60, 0, 0, 0, 0, -25),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ASM(1, geo_mario_hand_foot_scaler),
													GEO_SCALE(LAYER_FORCE, 65536),
													GEO_OPEN_NODE(),
														GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Left_Hand_DL_mesh_layer_1_mat_override_Metal__METAL__0),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt2_jump_sonk_Left_Hand_Open),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 68, -10, -70, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sonk_Right_Arm_Color_mesh_layer_1_mat_override_Metal__METAL__0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, sonk_Right_Forearm_mesh_layer_1_mat_override_Metal__METAL__0),
								GEO_OPEN_NODE(),
									GEO_SWITCH_CASE(0, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 60, 0, 0, 0, 0, -25),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ASM(0, geo_mario_hand_foot_scaler),
													GEO_SCALE(LAYER_FORCE, 65536),
													GEO_OPEN_NODE(),
														GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Right_Hand_DL_mesh_layer_1_mat_override_Metal__METAL__0),
													GEO_CLOSE_NODE(),
													GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt2_jump_sonk_Right_Hand_Open),
										GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt2_jump_sonk_Right_Hand_Peace),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 13, -8, 38, 0, 0, 180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, 0, 180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sonk_Left_Thigh_Color_mesh_layer_1_mat_override_Metal__METAL__0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, 0, sonk_Left_Leg_mesh_layer_1_mat_override_Metal__METAL__0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, sonk_Left_Shoe_mesh_layer_1_mat_override_Metal__METAL__0),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 13, -8, -38, 0, 0, 180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, 0, 180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sonk_Right_Thigh_Color_mesh_layer_1_mat_override_Metal__METAL__0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, 0, sonk_Right_Leg_mesh_layer_1_mat_override_Metal__METAL__0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ASM(2, geo_mario_hand_foot_scaler),
										GEO_SCALE(LAYER_FORCE, 65536),
										GEO_OPEN_NODE(),
											GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Right_Shoe_DL_mesh_layer_1_mat_override_Metal__METAL__0),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt3_jump_sonk_Left_Hand_Open[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 57, 0, 0, sonk_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_mat_override_Metal__METAL__0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt3_jump_sonk_Right_Hand_Open[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 57, 0, 0, sonk_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_mat_override_Metal__METAL__0),
		GEO_OPEN_NODE(),
			GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt3_jump_sonk_Right_Hand_Peace[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 57, 0, 0, sonk_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_mat_override_Metal__METAL__0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, sonk_Butt_mesh_layer_1_mat_override_Metal__METAL__0),
			GEO_OPEN_NODE(),
				GEO_ASM(0, geo_move_mario_part_from_parent),
				GEO_ASM(0, geo_mario_tilt_torso),
				GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_TRANSPARENT, 74, 0, 0, sonk_Torso_mesh_layer_1_mat_override_Metal__METAL__0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 87, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ASM(0, geo_mario_head_rotation),
							GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
							GEO_OPEN_NODE(),
								GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
								GEO_OPEN_NODE(),
									GEO_NODE_START(),
									GEO_OPEN_NODE(),
										GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
										GEO_OPEN_NODE(),
											GEO_NODE_START(),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Head_DL_mesh_layer_1_mat_override_Metal__METAL__0),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_FORCE, 142, -51, 126, -15, 33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(1, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Left_Wing_DL_mesh_layer_4_mat_override_Metal__METAL__0),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_FORCE, 142, -51, -126, 15, -33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(0, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Right_Wing_DL_mesh_layer_4_mat_override_Metal__METAL__0),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 67, -10, 70, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, sonk_Left_Arm_Color_mesh_layer_1_mat_override_Metal__METAL__0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_TRANSPARENT, 65, 0, 0, sonk_Left_Forearm_mesh_layer_1_mat_override_Metal__METAL__0),
								GEO_OPEN_NODE(),
									GEO_SWITCH_CASE(1, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 60, 0, 0, 0, 0, -25),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ASM(1, geo_mario_hand_foot_scaler),
													GEO_SCALE(LAYER_FORCE, 65536),
													GEO_OPEN_NODE(),
														GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Left_Hand_DL_mesh_layer_1_mat_override_Metal__METAL__0),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt3_jump_sonk_Left_Hand_Open),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 68, -10, -70, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, sonk_Right_Arm_Color_mesh_layer_1_mat_override_Metal__METAL__0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_TRANSPARENT, 65, 0, 0, sonk_Right_Forearm_mesh_layer_1_mat_override_Metal__METAL__0),
								GEO_OPEN_NODE(),
									GEO_SWITCH_CASE(0, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 60, 0, 0, 0, 0, -25),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ASM(0, geo_mario_hand_foot_scaler),
													GEO_SCALE(LAYER_FORCE, 65536),
													GEO_OPEN_NODE(),
														GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Right_Hand_DL_mesh_layer_1_mat_override_Metal__METAL__0),
													GEO_CLOSE_NODE(),
													GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt3_jump_sonk_Right_Hand_Open),
										GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt3_jump_sonk_Right_Hand_Peace),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 13, -8, 38, 0, 0, 180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, 0, 180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, sonk_Left_Thigh_Color_mesh_layer_1_mat_override_Metal__METAL__0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_TRANSPARENT, 89, 0, 0, sonk_Left_Leg_mesh_layer_1_mat_override_Metal__METAL__0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_TRANSPARENT, 67, 0, 0, sonk_Left_Shoe_mesh_layer_1_mat_override_Metal__METAL__0),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 13, -8, -38, 0, 0, 180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, 0, 180),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, sonk_Right_Thigh_Color_mesh_layer_1_mat_override_Metal__METAL__0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_TRANSPARENT, 89, 0, 0, sonk_Right_Leg_mesh_layer_1_mat_override_Metal__METAL__0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ASM(2, geo_mario_hand_foot_scaler),
										GEO_SCALE(LAYER_FORCE, 65536),
										GEO_OPEN_NODE(),
											GEO_DISPLAY_LIST(LAYER_TRANSPARENT, sonk_Right_Shoe_DL_mesh_layer_1_mat_override_Metal__METAL__0),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Head_DL_mesh_layer_1_mat_override_Half_Eyes__SKIN__1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Head_DL_mesh_layer_1_mat_override_Closed_Eyes__SKIN__2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Head_DL_mesh_layer_1_mat_override_Left_Eyes__SKIN__3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Head_DL_mesh_layer_1_mat_override_Right_Eyes__SKIN__4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Head_DL_mesh_layer_1_mat_override_Up_Eyes__SKIN__5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Head_DL_mesh_layer_1_mat_override_Down_Eyes__SKIN__6),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt7[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Head_DL_mesh_layer_1_mat_override_Dead_Eyes__SKIN__7),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout sonk_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 113),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 18432),
			GEO_OPEN_NODE(),
				GEO_ASM(LAYER_OPAQUE + 3, geo_mario_set_player_colors),
				GEO_ASM(LAYER_ALPHA + 3, geo_mario_set_player_colors),
				GEO_ASM(LAYER_TRANSPARENT + 3, geo_mario_set_player_colors),
				GEO_ASM(LAYER_OPAQUE << 2, geo_mirror_mario_backface_culling),
				GEO_ASM(LAYER_ALPHA << 2, geo_mirror_mario_backface_culling),
				GEO_ASM(LAYER_TRANSPARENT << 2, geo_mirror_mario_backface_culling),
				GEO_ASM(0, geo_mirror_mario_set_alpha),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_SWITCH_CASE(0, geo_switch_mario_cap_effect),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sonk_Butt_mesh_layer_1),
									GEO_OPEN_NODE(),
										GEO_ASM(0, geo_move_mario_part_from_parent),
										GEO_ASM(0, geo_mario_tilt_torso),
										GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 74, 0, 0, sonk_Torso_mesh_layer_1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 87, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ASM(0, geo_mario_head_rotation),
													GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
													GEO_OPEN_NODE(),
														GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
														GEO_OPEN_NODE(),
															GEO_NODE_START(),
															GEO_OPEN_NODE(),
																GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
																GEO_OPEN_NODE(),
																	GEO_NODE_START(),
																	GEO_OPEN_NODE(),
																		GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Head_DL_mesh_layer_1),
																	GEO_CLOSE_NODE(),
																	GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt1),
																	GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt2),
																	GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt3),
																	GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt4),
																	GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt5),
																	GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt6),
																	GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt0_Capless_Switch_opt0_Eye_State_Switch_opt7),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
														GEO_TRANSLATE_ROTATE(LAYER_FORCE, 142, -51, 126, -15, 33, -133),
														GEO_OPEN_NODE(),
															GEO_ASM(1, geo_mario_rotate_wing_cap_wings),
															GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
															GEO_OPEN_NODE(),
																GEO_DISPLAY_LIST(LAYER_ALPHA, sonk_Left_Wing_DL_mesh_layer_4),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
														GEO_TRANSLATE_ROTATE(LAYER_FORCE, 142, -51, -126, 15, -33, -133),
														GEO_OPEN_NODE(),
															GEO_ASM(0, geo_mario_rotate_wing_cap_wings),
															GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
															GEO_OPEN_NODE(),
																GEO_DISPLAY_LIST(LAYER_ALPHA, sonk_Right_Wing_DL_mesh_layer_4),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 67, -10, 70, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sonk_Left_Arm_Color_mesh_layer_1),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, sonk_Left_Forearm_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_SWITCH_CASE(1, geo_switch_mario_hand),
															GEO_OPEN_NODE(),
																GEO_NODE_START(),
																GEO_OPEN_NODE(),
																	GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 60, 0, 0, 0, 0, -25),
																	GEO_OPEN_NODE(),
																		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
																		GEO_OPEN_NODE(),
																			GEO_ASM(1, geo_mario_hand_foot_scaler),
																			GEO_SCALE(LAYER_FORCE, 65536),
																			GEO_OPEN_NODE(),
																				GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Left_Hand_DL_mesh_layer_1),
																			GEO_CLOSE_NODE(),
																		GEO_CLOSE_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
																GEO_BRANCH(1, sonk_Left_Hand_Open),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 68, -10, -70, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sonk_Right_Arm_Color_mesh_layer_1),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 65, 0, 0, sonk_Right_Forearm_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_SWITCH_CASE(0, geo_switch_mario_hand),
															GEO_OPEN_NODE(),
																GEO_NODE_START(),
																GEO_OPEN_NODE(),
																	GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 60, 0, 0, 0, 0, -25),
																	GEO_OPEN_NODE(),
																		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
																		GEO_OPEN_NODE(),
																			GEO_ASM(0, geo_mario_hand_foot_scaler),
																			GEO_SCALE(LAYER_FORCE, 65536),
																			GEO_OPEN_NODE(),
																				GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Right_Hand_DL_mesh_layer_1),
																			GEO_CLOSE_NODE(),
																			GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
																		GEO_CLOSE_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
																GEO_BRANCH(1, sonk_Right_Hand_Open),
																GEO_BRANCH(1, sonk_Right_Hand_Peace),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 13, -8, 38, 0, 0, 180),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, 0, 180),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sonk_Left_Thigh_Color_mesh_layer_1),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, 0, sonk_Left_Leg_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, sonk_Left_Shoe_mesh_layer_1),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 13, -8, -38, 0, 0, 180),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, 0, 180),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, sonk_Right_Thigh_Color_mesh_layer_1),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, 0, sonk_Right_Leg_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_ANIMATED_PART(LAYER_OPAQUE, 67, 0, 0, NULL),
															GEO_OPEN_NODE(),
																GEO_ASM(2, geo_mario_hand_foot_scaler),
																GEO_SCALE(LAYER_FORCE, 65536),
																GEO_OPEN_NODE(),
																	GEO_DISPLAY_LIST(LAYER_OPAQUE, sonk_Right_Shoe_DL_mesh_layer_1),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt1),
							GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt2),
							GEO_BRANCH(1, sonk_2_LoD_Switch_opt0_Cap_State_Switch_opt3),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_ASM((LAYER_OPAQUE << 2) | 1, geo_mirror_mario_backface_culling),
				GEO_ASM((LAYER_ALPHA << 2) | 1, geo_mirror_mario_backface_culling),
				GEO_ASM((LAYER_TRANSPARENT << 2) | 1, geo_mirror_mario_backface_culling),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
