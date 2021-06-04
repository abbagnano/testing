#ifndef MY_DEFINE_H
# define MY_DEFINE_H

#define auto_left_margin               CUR Booleans[0]				bw
#define auto_right_margin              CUR Booleans[1]				am
#define no_esc_ctlc                    CUR Booleans[2]				xb
#define ceol_standout_glitch           CUR Booleans[3]				xs
#define eat_newline_glitch             CUR Booleans[4]				xn
#define erase_overstrike               CUR Booleans[5]				eo
#define generic_type                   CUR Booleans[6]				gn
#define hard_copy                      CUR Booleans[7]				hc
#define has_meta_key                   CUR Booleans[8]				km
#define has_status_line                CUR Booleans[9]				hs
#define insert_null_glitch             CUR Booleans[10]				in
#define memory_above                   CUR Booleans[11]				da
#define memory_below                   CUR Booleans[12]				db
#define move_insert_mode               CUR Booleans[13]				mi
#define move_standout_mode             CUR Booleans[14]				ms
#define over_strike                    CUR Booleans[15]				os
#define status_line_esc_ok             CUR Booleans[16]				es
#define dest_tabs_magic_smso           CUR Booleans[17]				xt
#define tilde_glitch                   CUR Booleans[18]				hz
#define transparent_underline          CUR Booleans[19]				ul
#define xon_xoff                       CUR Booleans[20]				xo
#define needs_xon_xoff                 CUR Booleans[21]				nx
#define prtr_silent                    CUR Booleans[22]				5i
#define hard_cursor                    CUR Booleans[23]				HC
#define non_rev_rmcup                  CUR Booleans[24]				NR
#define no_pad_char                    CUR Booleans[25]				NP
#define non_dest_scroll_region         CUR Booleans[26]				ND
#define can_change                     CUR Booleans[27]				cc
#define back_color_erase               CUR Booleans[28]				ut
#define hue_lightness_saturation       CUR Booleans[29]				hl
#define col_addr_glitch                CUR Booleans[30]				YA
#define cr_cancels_micro_mode          CUR Booleans[31]				YB
#define has_print_wheel                CUR Booleans[32]				YC
#define row_addr_glitch                CUR Booleans[33]				YD
#define semi_auto_right_margin         CUR Booleans[34]				YE
#define cpi_changes_res                CUR Booleans[35]				YF
#define lpi_changes_res                CUR Booleans[36]				YG
#define columns                        CUR Numbers[0]				co
#define init_tabs                      CUR Numbers[1]				it
#define lines                          CUR Numbers[2]				li
#define lines_of_memory                CUR Numbers[3]				lm
#define magic_cookie_glitch            CUR Numbers[4]				sg
#define padding_baud_rate              CUR Numbers[5]				pb
#define virtual_terminal               CUR Numbers[6]				vt
#define width_status_line              CUR Numbers[7]				ws
#define num_labels                     CUR Numbers[8]				Nl
#define label_height                   CUR Numbers[9]				lh
#define label_width                    CUR Numbers[10]				lw
#define max_attributes                 CUR Numbers[11]				ma
#define maximum_windows                CUR Numbers[12]				MW
#define max_colors                     CUR Numbers[13]				Co
#define max_pairs                      CUR Numbers[14]				pa
#define no_color_video                 CUR Numbers[15]				NC
#define buffer_capacity                CUR Numbers[16]				Ya
#define dot_vert_spacing               CUR Numbers[17]				Yb
#define dot_horz_spacing               CUR Numbers[18]				Yc
#define max_micro_address              CUR Numbers[19]				Yd
#define max_micro_jump                 CUR Numbers[20]				Ye
#define micro_col_size                 CUR Numbers[21]				Yf
#define micro_line_size                CUR Numbers[22]				Yg
#define number_of_pins                 CUR Numbers[23]				Yh
#define output_res_char                CUR Numbers[24]				Yi
#define output_res_line                CUR Numbers[25]				Yj
#define output_res_horz_inch           CUR Numbers[26]				Yk
#define output_res_vert_inch           CUR Numbers[27]				Yl
#define print_rate                     CUR Numbers[28]				Ym
#define wide_char_size                 CUR Numbers[29]				Yn
#define buttons                        CUR Numbers[30]				BT
#define bit_image_entwining            CUR Numbers[31]				Yo
#define bit_image_type                 CUR Numbers[32]				Yp
#define back_tab                       CUR Strings[0]				bt
#define bell                           CUR Strings[1]				bl
#define carriage_return                CUR Strings[2]				cr
#define change_scroll_region           CUR Strings[3]				cs
#define clear_all_tabs                 CUR Strings[4]				ct
#define clear_screen                   CUR Strings[5]				cl
#define clr_eol                        CUR Strings[6]				ce
#define clr_eos                        CUR Strings[7]				cd
#define column_address                 CUR Strings[8]				ch
#define command_character              CUR Strings[9]				CC
#define cursor_address                 CUR Strings[10]				cm
#define cursor_down                    CUR Strings[11]				do
#define cursor_home                    CUR Strings[12]				ho
#define cursor_invisible               CUR Strings[13]				vi
#define cursor_left                    CUR Strings[14]				le
#define cursor_mem_address             CUR Strings[15]				CM
#define cursor_normal                  CUR Strings[16]				ve
#define cursor_right                   CUR Strings[17]				nd
#define cursor_to_ll                   CUR Strings[18]				ll
#define cursor_up                      CUR Strings[19]				up
#define cursor_visible                 CUR Strings[20]				vs
#define delete_character               CUR Strings[21]				dc
#define delete_line                    CUR Strings[22]				dl
#define dis_status_line                CUR Strings[23]				ds
#define down_half_line                 CUR Strings[24]				hd
#define enter_alt_charset_mode         CUR Strings[25]				as
#define enter_blink_mode               CUR Strings[26]				mb
#define enter_bold_mode                CUR Strings[27]				md
#define enter_ca_mode                  CUR Strings[28]				ti
#define enter_delete_mode              CUR Strings[29]				dm
#define enter_dim_mode                 CUR Strings[30]				mh
#define enter_insert_mode              CUR Strings[31]				im
#define enter_secure_mode              CUR Strings[32]				mk
#define enter_protected_mode           CUR Strings[33]				mp
#define enter_reverse_mode             CUR Strings[34]				mr
#define enter_standout_mode            CUR Strings[35]				so
#define enter_underline_mode           CUR Strings[36]				us
#define erase_chars                    CUR Strings[37]				ec
#define exit_alt_charset_mode          CUR Strings[38]				ae
#define exit_attribute_mode            CUR Strings[39]				me
#define exit_ca_mode                   CUR Strings[40]				te
#define exit_delete_mode               CUR Strings[41]				ed
#define exit_insert_mode               CUR Strings[42]				ei
#define exit_standout_mode             CUR Strings[43]				se
#define exit_underline_mode            CUR Strings[44]				ue
#define flash_screen                   CUR Strings[45]				vb
#define form_feed                      CUR Strings[46]				ff
#define from_status_line               CUR Strings[47]				fs
#define init_1string                   CUR Strings[48]				i1
#define init_2string                   CUR Strings[49]				is
#define init_3string                   CUR Strings[50]				i3
#define init_file                      CUR Strings[51]				if
#define insert_character               CUR Strings[52]				ic
#define insert_line                    CUR Strings[53]				al
#define insert_padding                 CUR Strings[54]				ip
#define key_backspace                  CUR Strings[55]				kb
#define key_catab                      CUR Strings[56]				ka
#define key_clear                      CUR Strings[57]				kC
#define key_ctab                       CUR Strings[58]				kt
#define key_dc                         CUR Strings[59]				kD
#define key_dl                         CUR Strings[60]				kL
#define key_down                       CUR Strings[61]				kd
#define key_eic                        CUR Strings[62]				kM
#define key_eol                        CUR Strings[63]				kE
#define key_eos                        CUR Strings[64]				kS
#define key_f0                         CUR Strings[65]				k0
#define key_f1                         CUR Strings[66]				k1
#define key_f10                        CUR Strings[67]				k;
#define key_f2                         CUR Strings[68]				k2
#define key_f3                         CUR Strings[69]				k3
#define key_f4                         CUR Strings[70]				k4
#define key_f5                         CUR Strings[71]				k5
#define key_f6                         CUR Strings[72]				k6
#define key_f7                         CUR Strings[73]				k7
#define key_f8                         CUR Strings[74]				k8
#define key_f9                         CUR Strings[75]				k9
#define key_home                       CUR Strings[76]				kh
#define key_ic                         CUR Strings[77]				kI
#define key_il                         CUR Strings[78]				kA
#define key_left                       CUR Strings[79]				kl
#define key_ll                         CUR Strings[80]				kH
#define key_npage                      CUR Strings[81]				kN
#define key_ppage                      CUR Strings[82]				kP
#define key_right                      CUR Strings[83]				kr
#define key_sf                         CUR Strings[84]				kF
#define key_sr                         CUR Strings[85]				kR
#define key_stab                       CUR Strings[86]				kT
#define key_up                         CUR Strings[87]				ku
#define keypad_local                   CUR Strings[88]				ke
#define keypad_xmit                    CUR Strings[89]				ks
#define lab_f0                         CUR Strings[90]				l0
#define lab_f1                         CUR Strings[91]				l1
#define lab_f10                        CUR Strings[92]				la
#define lab_f2                         CUR Strings[93]				l2
#define lab_f3                         CUR Strings[94]				l3
#define lab_f4                         CUR Strings[95]				l4
#define lab_f5                         CUR Strings[96]				l5
#define lab_f6                         CUR Strings[97]				l6
#define lab_f7                         CUR Strings[98]				l7
#define lab_f8                         CUR Strings[99]				l8
#define lab_f9                         CUR Strings[100]				l9
#define meta_off                       CUR Strings[101]				mo
#define meta_on                        CUR Strings[102]				mm
#define newline                        CUR Strings[103]				nw
#define pad_char                       CUR Strings[104]				pc
#define parm_dch                       CUR Strings[105]				DC
#define parm_delete_line               CUR Strings[106]				DL
#define parm_down_cursor               CUR Strings[107]				DO
#define parm_ich                       CUR Strings[108]				IC
#define parm_index                     CUR Strings[109]				SF
#define parm_insert_line               CUR Strings[110]				AL
#define parm_left_cursor               CUR Strings[111]				LE
#define parm_right_cursor              CUR Strings[112]				RI
#define parm_rindex                    CUR Strings[113]				SR
#define parm_up_cursor                 CUR Strings[114]				UP
#define pkey_key                       CUR Strings[115]				pk
#define pkey_local                     CUR Strings[116]				pl
#define pkey_xmit                      CUR Strings[117]				px
#define print_screen                   CUR Strings[118]				ps
#define prtr_off                       CUR Strings[119]				pf
#define prtr_on                        CUR Strings[120]				po
#define repeat_char                    CUR Strings[121]				rp
#define reset_1string                  CUR Strings[122]				r1
#define reset_2string                  CUR Strings[123]				r2
#define reset_3string                  CUR Strings[124]				r3
#define reset_file                     CUR Strings[125]				rf
#define restore_cursor                 CUR Strings[126]				rc
#define row_address                    CUR Strings[127]				cv
#define save_cursor                    CUR Strings[128]				sc
#define scroll_forward                 CUR Strings[129]				sf
#define scroll_reverse                 CUR Strings[130]				sr
#define set_attributes                 CUR Strings[131]				sa
#define set_tab                        CUR Strings[132]				st
#define set_window                     CUR Strings[133]				wi
#define tab                            CUR Strings[134]				ta
#define to_status_line                 CUR Strings[135]				ts
#define underline_char                 CUR Strings[136]				uc
#define up_half_line                   CUR Strings[137]				hu
#define init_prog                      CUR Strings[138]				iP
#define key_a1                         CUR Strings[139]				K1
#define key_a3                         CUR Strings[140]				K3
#define key_b2                         CUR Strings[141]				K2
#define key_c1                         CUR Strings[142]				K4
#define key_c3                         CUR Strings[143]				K5
#define prtr_non                       CUR Strings[144]				pO
#define char_padding                   CUR Strings[145]				rP
#define acs_chars                      CUR Strings[146]				ac
#define plab_norm                      CUR Strings[147]				pn
#define key_btab                       CUR Strings[148]				kB
#define enter_xon_mode                 CUR Strings[149]				SX
#define exit_xon_mode                  CUR Strings[150]				RX
#define enter_am_mode                  CUR Strings[151]				SA
#define exit_am_mode                   CUR Strings[152]				RA
#define xon_character                  CUR Strings[153]				XN
#define xoff_character                 CUR Strings[154]				XF
#define ena_acs                        CUR Strings[155]				eA
#define label_on                       CUR Strings[156]				LO
#define label_off                      CUR Strings[157]				LF
#define key_beg                        CUR Strings[158]				@1
#define key_cancel                     CUR Strings[159]				@2
#define key_close                      CUR Strings[160]				@3
#define key_command                    CUR Strings[161]				@4
#define key_copy                       CUR Strings[162]				@5
#define key_create                     CUR Strings[163]				@6
#define key_end                        CUR Strings[164]				@7
#define key_enter                      CUR Strings[165]				@8
#define key_exit                       CUR Strings[166]				@9
#define key_find                       CUR Strings[167]				@0
#define key_help                       CUR Strings[168]				%1
#define key_mark                       CUR Strings[169]				%2
#define key_message                    CUR Strings[170]				%3
#define key_move                       CUR Strings[171]				%4
#define key_next                       CUR Strings[172]				%5
#define key_open                       CUR Strings[173]				%6
#define key_options                    CUR Strings[174]				%7
#define key_previous                   CUR Strings[175]				%8
#define key_print                      CUR Strings[176]				%9
#define key_redo                       CUR Strings[177]				%0
#define key_reference                  CUR Strings[178]				&1
#define key_refresh                    CUR Strings[179]				&2
#define key_replace                    CUR Strings[180]				&3
#define key_restart                    CUR Strings[181]				&4
#define key_resume                     CUR Strings[182]				&5
#define key_save                       CUR Strings[183]				&6
#define key_suspend                    CUR Strings[184]				&7
#define key_undo                       CUR Strings[185]				&8
#define key_sbeg                       CUR Strings[186]				&9
#define key_scancel                    CUR Strings[187]				&0
#define key_scommand                   CUR Strings[188]				*1
#define key_scopy                      CUR Strings[189]				*2
#define key_screate                    CUR Strings[190]				*3
#define key_sdc                        CUR Strings[191]				*4
#define key_sdl                        CUR Strings[192]				*5
#define key_select                     CUR Strings[193]				*6
#define key_send                       CUR Strings[194]				*7
#define key_seol                       CUR Strings[195]				*8
#define key_sexit                      CUR Strings[196]				*9
#define key_sfind                      CUR Strings[197]				*0
#define key_shelp                      CUR Strings[198]				#1
#define key_shome                      CUR Strings[199]				#2
#define key_sic                        CUR Strings[200]				#3
#define key_sleft                      CUR Strings[201]				#4
#define key_smessage                   CUR Strings[202]				%a
#define key_smove                      CUR Strings[203]				%b
#define key_snext                      CUR Strings[204]				%c
#define key_soptions                   CUR Strings[205]				%d
#define key_sprevious                  CUR Strings[206]				%e
#define key_sprint                     CUR Strings[207]				%f
#define key_sredo                      CUR Strings[208]				%g
#define key_sreplace                   CUR Strings[209]				%h
#define key_sright                     CUR Strings[210]				%i
#define key_srsume                     CUR Strings[211]				%j
#define key_ssave                      CUR Strings[212]				!1
#define key_ssuspend                   CUR Strings[213]				!2
#define key_sundo                      CUR Strings[214]				!3
#define req_for_input                  CUR Strings[215]				RF
#define key_f11                        CUR Strings[216]				F1
#define key_f12                        CUR Strings[217]				F2
#define key_f13                        CUR Strings[218]				F3
#define key_f14                        CUR Strings[219]				F4
#define key_f15                        CUR Strings[220]				F5
#define key_f16                        CUR Strings[221]				F6
#define key_f17                        CUR Strings[222]				F7
#define key_f18                        CUR Strings[223]				F8
#define key_f19                        CUR Strings[224]				F9
#define key_f20                        CUR Strings[225]				FA
#define key_f21                        CUR Strings[226]				FB
#define key_f22                        CUR Strings[227]				FC
#define key_f23                        CUR Strings[228]				FD
#define key_f24                        CUR Strings[229]				FE
#define key_f25                        CUR Strings[230]				FF
#define key_f26                        CUR Strings[231]				FG
#define key_f27                        CUR Strings[232]				FH
#define key_f28                        CUR Strings[233]				FI
#define key_f29                        CUR Strings[234]				FJ
#define key_f30                        CUR Strings[235]				FK
#define key_f31                        CUR Strings[236]				FL
#define key_f32                        CUR Strings[237]				FM
#define key_f33                        CUR Strings[238]				FN
#define key_f34                        CUR Strings[239]				FO
#define key_f35                        CUR Strings[240]				FP
#define key_f36                        CUR Strings[241]				FQ
#define key_f37                        CUR Strings[242]				FR
#define key_f38                        CUR Strings[243]				FS
#define key_f39                        CUR Strings[244]				FT
#define key_f40                        CUR Strings[245]				FU
#define key_f41                        CUR Strings[246]				FV
#define key_f42                        CUR Strings[247]				FW
#define key_f43                        CUR Strings[248]				FX
#define key_f44                        CUR Strings[249]				FY
#define key_f45                        CUR Strings[250]				FZ
#define key_f46                        CUR Strings[251]				Fa
#define key_f47                        CUR Strings[252]				Fb
#define key_f48                        CUR Strings[253]				Fc
#define key_f49                        CUR Strings[254]				Fd
#define key_f50                        CUR Strings[255]				Fe
#define key_f51                        CUR Strings[256]				Ff
#define key_f52                        CUR Strings[257]				Fg
#define key_f53                        CUR Strings[258]				Fh
#define key_f54                        CUR Strings[259]				Fi
#define key_f55                        CUR Strings[260]				Fj
#define key_f56                        CUR Strings[261]				Fk
#define key_f57                        CUR Strings[262]				Fl
#define key_f58                        CUR Strings[263]				Fm
#define key_f59                        CUR Strings[264]				Fn
#define key_f60                        CUR Strings[265]				Fo
#define key_f61                        CUR Strings[266]				Fp
#define key_f62                        CUR Strings[267]				Fq
#define key_f63                        CUR Strings[268]				Fr
#define clr_bol                        CUR Strings[269]				cb
#define clear_margins                  CUR Strings[270]				MC
#define set_left_margin                CUR Strings[271]				ML
#define set_right_margin               CUR Strings[272]				MR
#define label_format                   CUR Strings[273]				Lf
#define set_clock                      CUR Strings[274]				SC
#define display_clock                  CUR Strings[275]				DK
#define remove_clock                   CUR Strings[276]				RC
#define create_window                  CUR Strings[277]				CW
#define goto_window                    CUR Strings[278]				WG
#define hangup                         CUR Strings[279]				HU
#define dial_phone                     CUR Strings[280]				DI
#define quick_dial                     CUR Strings[281]				QD
#define tone                           CUR Strings[282]				TO
#define pulse                          CUR Strings[283]				PU
#define flash_hook                     CUR Strings[284]				fh
#define fixed_pause                    CUR Strings[285]				PA
#define wait_tone                      CUR Strings[286]				WA
#define user0                          CUR Strings[287]				u0
#define user1                          CUR Strings[288]				u1
#define user2                          CUR Strings[289]				u2
#define user3                          CUR Strings[290]				u3
#define user4                          CUR Strings[291]				u4
#define user5                          CUR Strings[292]				u5
#define user6                          CUR Strings[293]				u6
#define user7                          CUR Strings[294]				u7
#define user8                          CUR Strings[295]				u8
#define user9                          CUR Strings[296]				u9
#define orig_pair                      CUR Strings[297]				op
#define orig_colors                    CUR Strings[298]				oc
#define initialize_color               CUR Strings[299]				Ic
#define initialize_pair                CUR Strings[300]				Ip
#define set_color_pair                 CUR Strings[301]				sp
#define set_foreground                 CUR Strings[302]				Sf
#define set_background                 CUR Strings[303]				Sb
#define change_char_pitch              CUR Strings[304]				
#define change_line_pitch              CUR Strings[305]				
#define change_res_horz                CUR Strings[306]				
#define change_res_vert                CUR Strings[307]				
#define define_char                    CUR Strings[308]				
#define enter_doublewide_mode          CUR Strings[309]				
#define enter_draft_quality            CUR Strings[310]				
#define enter_italics_mode             CUR Strings[311]				
#define enter_leftward_mode            CUR Strings[312]				
#define enter_micro_mode               CUR Strings[313]				
#define enter_near_letter_quality      CUR Strings[314]				
#define enter_normal_quality           CUR Strings[315]				
#define enter_shadow_mode              CUR Strings[316]				
#define enter_subscript_mode           CUR Strings[317]				
#define enter_superscript_mode         CUR Strings[318]				
#define enter_upward_mode              CUR Strings[319]				
#define exit_doublewide_mode           CUR Strings[320]				
#define exit_italics_mode              CUR Strings[321]				
#define exit_leftward_mode             CUR Strings[322]				
#define exit_micro_mode                CUR Strings[323]				
#define exit_shadow_mode               CUR Strings[324]				
#define exit_subscript_mode            CUR Strings[325]				
#define exit_superscript_mode          CUR Strings[326]				
#define exit_upward_mode               CUR Strings[327]				
#define micro_column_address           CUR Strings[328]				
#define micro_down                     CUR Strings[329]				
#define micro_left                     CUR Strings[330]				
#define micro_right                    CUR Strings[331]				
#define micro_row_address              CUR Strings[332]				
#define micro_up                       CUR Strings[333]				
#define order_of_pins                  CUR Strings[334]				
#define parm_down_micro                CUR Strings[335]				
#define parm_left_micro                CUR Strings[336]				
#define parm_right_micro               CUR Strings[337]				
#define parm_up_micro                  CUR Strings[338]				
#define select_char_set                CUR Strings[339]				
#define set_bottom_margin              CUR Strings[340]				
#define set_bottom_margin_parm         CUR Strings[341]				
#define set_left_margin_parm           CUR Strings[342]				
#define set_right_margin_parm          CUR Strings[343]				
#define set_top_margin                 CUR Strings[344]				
#define set_top_margin_parm            CUR Strings[345]				
#define start_bit_image                CUR Strings[346]				
#define start_char_set_def             CUR Strings[347]				
#define stop_bit_image                 CUR Strings[348]				
#define stop_char_set_def              CUR Strings[349]				
#define subscript_characters           CUR Strings[350]				
#define superscript_characters         CUR Strings[351]				
#define these_cause_cr                 CUR Strings[352]				
#define zero_motion                    CUR Strings[353]				
#define char_set_names                 CUR Strings[354]				
#define key_mouse                      CUR Strings[355]				
#define mouse_info                     CUR Strings[356]				
#define req_mouse_pos                  CUR Strings[357]				
#define get_mouse                      CUR Strings[358]				
#define set_a_foreground               CUR Strings[359]				
#define set_a_background               CUR Strings[360]				
#define pkey_plab                      CUR Strings[361]				
#define device_type                    CUR Strings[362]				
#define code_set_init                  CUR Strings[363]				
#define set0_des_seq                   CUR Strings[364]				
#define set1_des_seq                   CUR Strings[365]				
#define set2_des_seq                   CUR Strings[366]				
#define set3_des_seq                   CUR Strings[367]				
#define set_lr_margin                  CUR Strings[368]				
#define set_tb_margin                  CUR Strings[369]				
#define bit_image_repeat               CUR Strings[370]				
#define bit_image_newline              CUR Strings[371]				
#define bit_image_carriage_return      CUR Strings[372]				
#define color_names                    CUR Strings[373]				
#define define_bit_image_region        CUR Strings[374]				
#define end_bit_image_region           CUR Strings[375]				
#define set_color_band                 CUR Strings[376]				
#define set_page_length                CUR Strings[377]				
#define display_pc_char                CUR Strings[378]				
#define enter_pc_charset_mode          CUR Strings[379]				
#define exit_pc_charset_mode           CUR Strings[380]				
#define enter_scancode_mode            CUR Strings[381]				
#define exit_scancode_mode             CUR Strings[382]				
#define pc_term_options                CUR Strings[383]				
#define scancode_escape                CUR Strings[384]				
#define alt_scancode_esc               CUR Strings[385]				
#define enter_horizontal_hl_mode       CUR Strings[386]				
#define enter_left_hl_mode             CUR Strings[387]				
#define enter_low_hl_mode              CUR Strings[388]				
#define enter_right_hl_mode            CUR Strings[389]				
#define enter_top_hl_mode              CUR Strings[390]				
#define enter_vertical_hl_mode         CUR Strings[391]				
#define set_a_attributes               CUR Strings[392]				
#define set_pglen_inch                 CUR Strings[393]				


#endif