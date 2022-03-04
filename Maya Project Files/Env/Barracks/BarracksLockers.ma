//Maya ASCII 2022 scene
//Name: BarracksLockers.ma
//Last modified: Tue, Mar 01, 2022 03:26:59 PM
//Codeset: 1252
requires maya "2022";
requires "stereoCamera" "10.0";
requires "mtoa" "4.2.1";
currentUnit -l meter -a degree -t film;
fileInfo "application" "maya";
fileInfo "product" "Maya 2022";
fileInfo "version" "2022";
fileInfo "cutIdentifier" "202102181415-29bfc1879c";
fileInfo "osv" "Windows 10 Enterprise v2009 (Build: 19042)";
fileInfo "UUID" "0ACDA3A1-4452-BC66-EE74-B78885F1A2A4";
fileInfo "license" "education";
createNode transform -s -n "persp";
	rename -uid "10633107-48DB-0D49-438B-13A774FAA210";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -3.7978831857244875 6.649700391172769 9.7968881085749668 ;
	setAttr ".r" -type "double3" -26.138352729675237 -1456.5999999995875 -1.6594384637301516e-15 ;
createNode camera -s -n "perspShape" -p "persp";
	rename -uid "BF7D55B8-4862-CA53-CB76-D78E54129310";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999993;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 11.834163486084176;
	setAttr ".ow" 0.1;
	setAttr ".imn" -type "string" "persp";
	setAttr ".den" -type "string" "persp_depth";
	setAttr ".man" -type "string" "persp_mask";
	setAttr ".tp" -type "double3" 0 2.8893404603004456 0.97499942779541016 ;
	setAttr ".hc" -type "string" "viewSet -p %camera";
	setAttr ".ai_translator" -type "string" "perspective";
createNode transform -s -n "top";
	rename -uid "24A30E3E-439E-68BC-840E-04BBA6EC9AA5";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 10.001000000000001 0 ;
	setAttr ".r" -type "double3" -90 0 0 ;
createNode camera -s -n "topShape" -p "top";
	rename -uid "2A156E8D-4D18-4109-D54A-4D96A0D4A957";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.001000000000001;
	setAttr ".ow" 0.3;
	setAttr ".imn" -type "string" "top";
	setAttr ".den" -type "string" "top_depth";
	setAttr ".man" -type "string" "top_mask";
	setAttr ".hc" -type "string" "viewSet -t %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "front";
	rename -uid "FC56A0B5-4650-8400-8A16-53A63159F9FA";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 0 10.001000000000001 ;
createNode camera -s -n "frontShape" -p "front";
	rename -uid "785F3EA6-43D4-40F5-9B8B-5BAE0A768BAF";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.001000000000001;
	setAttr ".ow" 0.3;
	setAttr ".imn" -type "string" "front";
	setAttr ".den" -type "string" "front_depth";
	setAttr ".man" -type "string" "front_mask";
	setAttr ".hc" -type "string" "viewSet -f %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "side";
	rename -uid "9A62887D-4782-909E-31E4-BBAC9E2EBA71";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 10.001000000000001 0 0 ;
	setAttr ".r" -type "double3" 0 90 0 ;
createNode camera -s -n "sideShape" -p "side";
	rename -uid "818343AD-406C-2F3E-D634-CF86E7A380A2";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.001000000000001;
	setAttr ".ow" 0.3;
	setAttr ".imn" -type "string" "side";
	setAttr ".den" -type "string" "side_depth";
	setAttr ".man" -type "string" "side_mask";
	setAttr ".hc" -type "string" "viewSet -s %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -n "Small";
	rename -uid "246E6EF3-4730-5B25-4DC7-0C9DCDE450F7";
	setAttr ".rp" -type "double3" 0 -0.099999752044677884 -0.00025000031425074452 ;
	setAttr ".sp" -type "double3" 0 -0.099999752044679438 -0.00025000031425074452 ;
createNode transform -n "pCube3" -p "Small";
	rename -uid "21B60270-4927-770E-253F-4AA54F3085BD";
	setAttr ".rp" -type "double3" -0.00016864958165108135 2.8892018843815124 -0.025250219228684458 ;
	setAttr ".sp" -type "double3" -0.00016864958165108135 2.8892018843815124 -0.025250219228684458 ;
createNode mesh -n "pCubeShape3" -p "pCube3";
	rename -uid "F6B12C46-487C-8B82-BDC3-F1AE3B7C4B05";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.46637704968452454 0.5 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 40 ".uvst[0].uvsp[0:39]" -type "float2" 0.33824837 0.36929822
		 0.33824611 0.43423724 0.1715478 0.43423158 0.17155001 0.36929256 0.17155805 0.13507187
		 0.17153752 0.73339128 0.33823586 0.73339701 0.33825639 0.13507763 0.17154157 0.61628097
		 0.33823985 0.6162867 0.17154559 0.49917063 0.3382439 0.49917638 0.50494659 0.36930397
		 0.50494438 0.43424308 0.50494212 0.49918213 0.50493813 0.61629236 0.50493407 0.73340261
		 0.50495464 0.13508338 0.0048597157 0.13506621 0.0048642159 0.0051880777 0.0048432052
		 0.61627519 0.0048494637 0.43422586 0.0048472583 0.49916488 0.0048516691 0.36928684
		 0.67164493 0.36930963 0.67164266 0.43424875 0.6716404 0.49918786 0.6716364 0.61629814
		 0.67163241 0.73340845 0.67165291 0.1350891 0.50495911 0.0052052438 0.67165744 0.0052109659
		 0.17156255 0.0051938295 0.33826083 0.0051995218 0.0048392117 0.73338556 0.004855752
		 0.25217658 0.17155406 0.25218225 0.33825237 0.25218797 0.50495064 0.25219363 0.67164892
		 0.25219935;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 35 ".vt[0:34]"  -0.58240604 -0.099999815 1.024749517 0.58206868 -0.099999815 1.024749517
		 -0.58240604 5.87840414 1.024749517 0.58206868 5.87840414 1.024749517 -0.58240604 5.87840414 -1.07525003
		 0.58206868 5.87840414 -1.07525003 -0.58240604 -0.099999815 -1.07525003 0.58206868 -0.099999815 -1.07525003
		 -0.00016864957 -0.099999815 1.024749517 -0.00016864957 5.87840414 1.024749517 -0.58240604 2.88920164 1.024749517
		 -0.00016864957 2.88920164 1.024749517 0.58206868 2.88920164 1.024749517 0.58206868 2.88920164 -1.07525003
		 -0.58240604 2.88920164 -1.07525003 -0.58240604 4.38380289 -1.07525003 0.58206868 4.38380289 -1.07525003
		 0.58206868 4.38380289 1.024749517 -0.00016864957 4.38380289 1.024749517 -0.58240604 4.38380289 1.024749517
		 -0.58240604 1.39460111 1.024749517 -0.00016864957 1.39460111 1.024749517 0.58206868 1.39460111 1.024749517
		 0.58206868 1.39460111 -1.07525003 -0.58240604 1.39460111 -1.07525003 0.58206868 5.87840414 -0.025250219
		 0.58206868 4.38380289 -0.025250219 0.58206868 2.88920164 -0.025250219 0.58206868 1.39460111 -0.025250219
		 0.58206868 -0.099999815 -0.025250219 -0.58240604 5.87840414 -0.025250219 -0.58240604 4.38380289 -0.025250219
		 -0.58240604 2.88920164 -0.025250219 -0.58240604 1.39460111 -0.025250219 -0.58240604 -0.099999815 -0.025250219;
	setAttr -s 63 ".ed[0:62]"  0 8 0 2 9 0 4 5 0 6 7 0 0 20 0 1 22 0 2 30 0
		 3 25 0 4 15 0 5 16 0 6 34 0 7 29 0 8 1 0 9 3 0 8 21 1 10 19 0 11 18 1 12 17 0 13 23 0
		 14 24 0 10 11 1 11 12 1 12 27 1 13 14 1 14 32 1 15 14 0 16 13 0 17 3 0 18 9 1 19 2 0
		 15 16 1 16 26 1 17 18 1 18 19 1 19 31 1 20 10 0 21 11 1 22 12 0 23 7 0 24 6 0 20 21 1
		 21 22 1 22 28 1 23 24 1 24 33 1 25 5 0 26 17 1 27 13 1 28 23 1 29 1 0 25 26 1 26 27 1
		 27 28 1 28 29 1 30 4 0 31 15 1 32 10 1 33 20 1 34 0 0 30 31 1 31 32 1 32 33 1 33 34 1;
	setAttr -s 28 -ch 112 ".fc[0:27]" -type "polyFaces" 
		f 4 20 16 33 -16
		mu 0 4 0 1 2 3
		f 4 30 26 23 -26
		mu 0 4 4 32 33 7
		f 4 51 47 -27 31
		mu 0 4 8 9 6 5
		f 4 60 56 15 34
		mu 0 4 36 37 0 3
		f 4 32 -17 21 17
		mu 0 4 10 2 1 11
		f 4 40 36 -21 -36
		mu 0 4 12 13 1 0
		f 4 -22 -37 41 37
		mu 0 4 11 1 13 14
		f 4 52 48 -19 -48
		mu 0 4 9 15 16 6
		f 4 -24 18 43 -20
		mu 0 4 7 33 30 17
		f 4 61 57 35 -57
		mu 0 4 37 38 12 0
		f 4 2 9 -31 -9
		mu 0 4 18 19 32 4
		f 4 50 -32 -10 -46
		mu 0 4 20 8 5 34
		f 4 -29 -33 27 -14
		mu 0 4 21 2 10 22
		f 4 -34 28 -2 -30
		mu 0 4 3 2 21 23
		f 4 59 -35 29 6
		mu 0 4 35 36 3 23
		f 4 0 14 -41 -5
		mu 0 4 24 25 13 12
		f 4 -42 -15 12 5
		mu 0 4 14 13 25 26
		f 4 53 -12 -39 -49
		mu 0 4 15 27 28 16
		f 4 -44 38 -4 -40
		mu 0 4 17 30 31 29
		f 4 62 58 4 -58
		mu 0 4 38 39 24 12
		f 4 -47 -51 -8 -28
		mu 0 4 10 8 20 22
		f 4 22 -52 46 -18
		mu 0 4 11 9 8 10
		f 4 42 -53 -23 -38
		mu 0 4 14 15 9 11
		f 4 -50 -54 -43 -6
		mu 0 4 26 27 15 14
		f 4 -56 -60 54 8
		mu 0 4 4 36 35 18
		f 4 24 -61 55 25
		mu 0 4 7 37 36 4
		f 4 44 -62 -25 19
		mu 0 4 17 38 37 7
		f 4 10 -63 -45 39
		mu 0 4 29 39 38 17;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape7" -p "pCube3";
	rename -uid "2C8224D1-450B-934A-541C-13A31BF91219";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.625 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 12 ".uvst[0].uvsp[0:11]" -type "float2" 0.375 0 0.625 0 0.375
		 0.25 0.625 0.25 0.375 0.5 0.625 0.5 0.375 0.75 0.625 0.75 0.875 0 0.875 0.25 0.125
		 0 0.125 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".vt[0:7]"  -0.026069481 -0.0009999976 0.0099999951 0.026069481 -0.0009999976 0.0099999951
		 -0.026069481 0.058784038 0.0099999951 0.026069481 0.058784038 0.0099999951 -0.026069481 0.058784038 -0.011
		 0.026069481 0.058784038 -0.011 -0.026069481 -0.0009999976 -0.011 0.026069481 -0.0009999976 -0.011;
	setAttr -s 12 ".ed[0:11]"  0 1 0 2 3 0 4 5 0 6 7 0 0 2 0 1 3 0 2 4 0
		 3 5 0 4 6 0 5 7 0 6 0 0 7 1 0;
	setAttr -s 4 -ch 16 ".fc[0:3]" -type "polyFaces" 
		f 4 0 5 -2 -5
		mu 0 4 0 1 3 2
		f 4 2 9 -4 -9
		mu 0 4 4 5 7 6
		f 4 -12 -10 -8 -6
		mu 0 4 1 8 9 3
		f 4 10 4 6 8
		mu 0 4 10 0 2 11;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Top2" -p "Small";
	rename -uid "0163246E-4AAE-77E8-E081-77B7BA739515";
	setAttr ".rp" -type "double3" 0.00010698775516537751 6.3704829555959286 -0.025198034173947427 ;
	setAttr ".sp" -type "double3" 0.00010698775516537751 6.3704829555959286 -0.025198034173947427 ;
createNode mesh -n "Top2Shape" -p "Top2";
	rename -uid "1458899D-4612-1517-AF39-20AD99EBE2C5";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.625 0.625 ;
	setAttr ".uvst[0].uvsn" -type "string" "UVMap";
	setAttr -s 18 ".uvst[0].uvsp[0:17]" -type "float2" 0.67373341 0.68900561
		 0.11599362 0.96876794 0.80362308 0.57784861 0.80349433 0.73455578 0.8036176 0.31860149
		 0.68640107 0.7901566 0.060435116 0.85165465 0.0048766136 0.7345413 0.68638986 0.73457944
		 0.0048579574 0.85164571 0.80362529 0.68900293 0.0048392415 0.96875018 0.67372841
		 0.44822782 0.67372572 0.31860423 0.80362028 0.44822508 0.80351663 0.84571004 0.67373121
		 0.57785136 0.56928551 0.73460305;
	setAttr ".cuvs" -type "string" "UVMap";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 10 ".vt[0:9]"  -0.58219218 5.8721838 1.024749041 -0.58219218 5.87218332 -1.075145006
		 0.58240604 5.8721838 1.024749041 0.58240604 5.87218332 -1.075145006 -0.58219218 6.86878252 -1.075145006
		 0.58240604 6.86878252 -1.075145006 0.58240604 6.3704834 -0.025198186 -0.58219218 6.3704834 -0.025198186
		 0.58240604 5.8721838 -0.025197947 -0.58219218 5.8721838 -0.025197947;
	setAttr -s 16 ".ed[0:15]"  3 8 0 2 0 0 0 9 0 1 3 0 1 4 0 4 5 0 5 3 0
		 2 6 0 4 7 0 6 5 0 7 0 0 6 7 1 8 2 0 6 8 1 9 1 0 7 9 1;
	setAttr -s 20 ".n[0:19]" -type "float3"  0 -1.6292068e-09 -0.0099999998
		 0 -1.6292068e-09 -0.0099999998 0 -1.6292068e-09 -0.0099999998 0 -1.6292068e-09 -0.0099999998
		 0 0.0090341931 0.004287581 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0.0090341931 0.004287581
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 -0.044774655 0 0 1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 0.044774655 0 0 0.044774655 0 0 0 0.0090341931 0.004287581 0 0.0090341931 0.004287581
		 0.044774655 0 0 -0.044774655 0 0 -0.044774655 0 0;
	setAttr -s 7 -ch 26 ".fc[0:6]" -type "polyFaces" 
		f 4 4 5 6 -4
		mu 0 4 0 16 2 10
		f 4 7 11 10 -2
		mu 0 4 4 14 12 13
		f 3 15 -3 -11
		mu 0 3 6 9 7
		f 4 13 -1 -7 -10
		mu 0 4 5 8 3 15
		f 4 -12 9 -6 8
		mu 0 4 12 14 2 16
		f 3 -13 -14 -8
		mu 0 3 17 8 5
		f 4 -15 -16 -9 -5
		mu 0 4 11 9 6 1;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "LockerBase2" -p "Small";
	rename -uid "157024C6-46D9-BECD-FA90-299D4AC249E6";
	setAttr ".rp" -type "double3" -0.00016873829419417063 -0.27000007619855954 -0.075502314808430032 ;
	setAttr ".sp" -type "double3" -0.00016873829419417063 -0.27000007619855954 -0.075502314808430032 ;
createNode mesh -n "LockerBase2Shape" -p "LockerBase2";
	rename -uid "34751E50-455B-FA49-5EA8-5B9F434F58A3";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "UVMap";
	setAttr -s 16 ".uvst[0].uvsp[0:15]" -type "float2" 0.85092139 0.16131034
		 0.72949529 0.16130698 0.72949797 0.060954839 0.85092419 0.060958147 0.90668821 0.16131189
		 0.85092568 0.0051914155 0.67372841 0.16130549 0.67373121 0.060953349 0.72949249 0.26165915
		 0.85091865 0.26166245 0.90668541 0.26166397 0.72949088 0.31742591 0.72949958 0.0051880777
		 0.67372572 0.26165766 0.8509171 0.31742924 0.90669101 0.060959846;
	setAttr ".cuvs" -type "string" "UVMap";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 12 ".vt[0:11]"  -0.54451632 -0.51999992 0.82424527 -0.54451632 -0.52000022 -0.97524989
		 0.54417884 -0.51999992 0.82424527 0.54417884 -0.52000022 -0.97524989 -0.54451632 -0.019999931 0.82424521
		 -0.54451632 -0.020000288 -0.97524995 0.54417884 -0.019999931 0.82424521 0.54417884 -0.020000288 -0.97524995
		 -0.54451632 -0.020000089 -0.075502358 -0.54451632 -0.52000004 -0.075502269 0.54417884 -0.52000004 -0.075502269
		 0.54417884 -0.020000089 -0.075502358;
	setAttr -s 19 ".ed[0:18]"  1 3 0 3 10 0 2 0 0 0 9 0 5 8 0 4 6 0 6 11 0
		 7 5 0 0 4 0 5 1 0 3 7 0 6 2 0 8 4 0 9 1 0 10 2 0 11 7 0 8 9 1 9 10 1 10 11 1;
	setAttr -s 26 ".n[0:25]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 0 -0.0099999998 1.6292068e-09 0 -0.0099999998 1.6292068e-09 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 -0.044774655 0 0 -0.044774655 0 0 0.044774655 0 0 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 0.044774655 0 0 0 -1.6292068e-09 -0.0099999998 0 -1.6292068e-09
		 -0.0099999998 0 -1.6292068e-09 -0.0099999998 0 -1.6292068e-09 -0.0099999998 0 1.6292068e-09
		 0.0099999998 0 1.6292068e-09 0.0099999998 0 1.6292068e-09 0.0099999998 0 1.6292068e-09
		 0.0099999998 -0.044774655 0 0 -0.044774655 0 0 0 -0.0099999998 1.6292068e-09 0 -0.0099999998
		 1.6292068e-09 0.044774655 0 0 0.044774655 0 0;
	setAttr -s 8 -ch 32 ".fc[0:7]" -type "polyFaces" 
		f 4 17 14 2 3
		mu 0 4 0 1 2 3
		f 4 16 -4 8 -13
		mu 0 4 4 0 3 15
		f 4 -15 18 -7 11
		mu 0 4 2 1 6 7
		f 4 -1 -10 -8 -11
		mu 0 4 8 9 14 11
		f 4 -3 -12 -6 -9
		mu 0 4 3 2 12 5
		f 4 -14 -17 -5 9
		mu 0 4 9 0 4 10
		f 4 0 1 -18 13
		mu 0 4 9 8 1 0
		f 4 -19 -2 10 -16
		mu 0 4 6 1 8 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "SmallPannel_Mocup4" -p "Small";
	rename -uid "72AAB0A2-43BA-B15E-B368-A6B04C2D76DA";
	setAttr ".rp" -type "double3" -0.0001687597855841716 2.9162637491152084 0.024750031110823599 ;
	setAttr ".sp" -type "double3" -0.0001687597855841716 2.9162637491152084 0.024750031110823599 ;
createNode mesh -n "SmallPannel_Mocup4Shape" -p "SmallPannel_Mocup4";
	rename -uid "89B7AE2F-468C-7332-2AD1-6387836C3283";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "UVMap";
	setAttr -s 24 ".uvst[0].uvsp[0:23]" -type "float2" 0.92229575 0.82605588
		 0.8107338 0.82605654 0.81073326 0.74446726 0.92229527 0.74446654 0.92787349 0.98923445
		 0.81073487 0.99481189 0.81073487 0.98923516 0.92229676 0.98923457 0.80515712 0.82605672
		 0.80515653 0.74446732 0.92787188 0.74446654 0.92787242 0.82605588 0.80515599 0.66287816
		 0.92229474 0.65730059 0.92229474 0.66287732 0.81073266 0.66287804 0.9278729 0.90764511
		 0.92229623 0.90764523 0.81073427 0.90764606 0.80515754 0.90764594 0.92787147 0.6628772
		 0.81073266 0.65730131 0.92229682 0.99481118 0.80515814 0.98923528;
	setAttr ".cuvs" -type "string" "UVMap";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 20 ".vt[0:19]"  -0.50029582 2.89406729 1.024750113 0.49995831 2.89406729 1.024750113
		 0.49995831 5.82015514 1.024749517 -0.50029582 5.82015514 1.024749517 -0.50029582 2.89406729 1.074749947
		 0.49995831 2.89406729 1.074749947 0.49995831 5.82015514 1.07474947 -0.50029582 5.82015514 1.07474947
		 0.49995831 4.35711145 1.024749875 0.49995831 4.35711098 1.074749708 -0.50029582 4.35711098 1.074749708
		 -0.50029582 4.35711145 1.024749875 0.49995831 5.088632584 1.024749637 0.49995831 5.088633537 1.074749708
		 -0.50029582 5.088633537 1.074749708 -0.50029582 5.088632584 1.024749637 -0.50029582 3.62558937 1.024749875
		 -0.50029582 3.62558889 1.074749947 0.49995831 3.62558889 1.074749947 0.49995831 3.62558937 1.024749875;
	setAttr -s 33 ".ed[0:32]"  2 12 0 1 0 0 0 16 0 3 2 0 6 7 0 7 14 0 4 5 0
		 5 18 0 3 7 0 6 2 0 0 4 0 5 1 0 8 19 0 9 13 0 10 17 0 11 15 0 8 9 1 9 10 1 10 11 1
		 12 8 0 13 6 0 14 10 0 15 3 0 12 13 1 13 14 1 14 15 1 16 11 0 17 4 0 18 9 0 19 1 0
		 16 17 1 17 18 1 18 19 1;
	setAttr -s 38 ".n[0:37]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0.0099999998 -1.6292068e-09 0 0.0099999998
		 -1.6292068e-09 0 0.0099999998 -1.6292068e-09 0 0.0099999998 -1.6292068e-09 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 -0.0099999998 1.6292068e-09
		 0 -0.0099999998 1.6292068e-09 0 -0.0099999998 1.6292068e-09 0 -0.0099999998 1.6292068e-09
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 0.0099999998 0 0 0.0099999998 0 0 0 1.6292068e-09 0.0099999998
		 0 1.6292068e-09 0.0099999998 -0.0099999998 0 0 -0.0099999998 0 0 -0.0099999998 0
		 0 -0.0099999998 0 0 0 1.6292068e-09 0.0099999998 0 1.6292068e-09 0.0099999998 0.0099999998
		 0 0 0.0099999998 0 0;
	setAttr -s 14 -ch 56 ".fc[0:13]" -type "polyFaces" 
		f 4 17 14 31 28
		mu 0 4 0 1 2 3
		f 4 -4 8 -5 9
		mu 0 4 22 5 6 7
		f 4 18 -27 30 -15
		mu 0 4 1 8 9 2
		f 4 32 -13 16 -29
		mu 0 4 3 10 11 0
		f 4 -2 -12 -7 -11
		mu 0 4 21 13 14 15
		f 4 -17 -20 23 -14
		mu 0 4 0 11 16 17
		f 4 24 21 -18 13
		mu 0 4 17 18 1 0
		f 4 25 -16 -19 -22
		mu 0 4 18 19 8 1
		f 4 -24 -1 -10 -21
		mu 0 4 17 16 4 7
		f 4 4 5 -25 20
		mu 0 4 7 6 18 17
		f 4 -23 -26 -6 -9
		mu 0 4 23 19 18 6
		f 4 -31 -3 10 -28
		mu 0 4 2 9 12 15
		f 4 -32 27 6 7
		mu 0 4 3 2 15 14
		f 4 -30 -33 -8 11
		mu 0 4 20 10 3 14;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape2" -p "SmallPannel_Mocup4";
	rename -uid "7963068E-41CB-1028-541B-CA90EF11FCF9";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "UVMap";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0 0 0 0 0 0 0 0 0
		 0 0 0 0 0 0 0;
	setAttr ".cuvs" -type "string" "UVMap";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 8 ".vt[0:7]"  -0.0050012707 -0.0099999998 -0.00022196531
		 0.0050012707 -0.0099999998 -0.00022196531 0.0050012707 -0.0099999998 0.029038912
		 -0.0050012707 -0.0099999998 0.029038912 -0.0050012707 -0.0105 -0.00022196531 0.0050012707 -0.0105 -0.00022196531
		 0.0050012707 -0.0105 0.029038912 -0.0050012707 -0.0105 0.029038912;
	setAttr -s 12 ".ed[0:11]"  2 1 0 1 0 0 0 3 0 3 2 0 6 7 0 7 4 0 4 5 0
		 5 6 0 3 7 0 6 2 0 0 4 0 5 1 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  0 1 0 0 1 0 0 1 0 0 1 0 0 -1
		 0 0 -1 0 0 -1 0 0 -1 0 0 0 1 0 0 1 0 0 1 0 0 1 -1 0 0 -1 0 0 -1 0 0 -1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 0 0 -1 0 0 -1 0 0 -1 0 0 -1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 1 3 6 0
		f 4 4 5 6 7
		mu 0 4 7 5 4 2
		f 4 -4 8 -5 9
		mu 0 4 1 0 5 7
		f 4 -3 10 -6 -9
		mu 0 4 0 6 4 5
		f 4 -1 -10 -8 11
		mu 0 4 3 1 7 2
		f 4 -2 -12 -7 -11
		mu 0 4 6 3 2 4;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "SmallPannel4" -p "Small";
	rename -uid "47616F6C-4488-E9D1-C435-2493AA765326";
	setAttr ".rp" -type "double3" -0.0001687597855841716 -6.9625636207604209e-08 0.024750031110823599 ;
	setAttr ".sp" -type "double3" -0.0001687597855841716 -6.9625636207604209e-08 0.024750031110823599 ;
createNode mesh -n "SmallPannel4Shape" -p "SmallPannel4";
	rename -uid "EB122F5A-4091-133B-ADCD-18995FA4524F";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "UVMap";
	setAttr -s 24 ".uvst[0].uvsp[0:23]" -type "float2" 0.92231643 0.48737174
		 0.81075454 0.48735693 0.81076539 0.40576762 0.92232728 0.40578243 0.92787147 0.65055114
		 0.81073201 0.65611219 0.81073284 0.65053546 0.92229474 0.65055031 0.80517781 0.48735616
		 0.80518866 0.40576687 0.92790401 0.4057833 0.92789316 0.48737249 0.80519962 0.3241775
		 0.92233896 0.31861651 0.92233813 0.32419318 0.81077635 0.32417834 0.92788231 0.5689618
		 0.92230558 0.56896108 0.81074363 0.56894624 0.8051669 0.56894553 0.92791486 0.32419389
		 0.81077695 0.3186017 0.92229402 0.65612715 0.80515599 0.65053475;
	setAttr ".cuvs" -type "string" "UVMap";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 20 ".vt[0:19]"  -0.50029582 -0.05324937 1.024750113 0.49995831 -0.05324937 1.024750113
		 0.49995831 2.87283874 1.024749517 -0.50029582 2.87283874 1.024749517 -0.50029582 -0.05324937 1.074749947
		 0.49995831 -0.05324937 1.074749947 0.49995831 2.87283874 1.07474947 -0.50029582 2.87283874 1.07474947
		 0.49995831 1.40979457 1.024749875 0.49995831 1.40979457 1.074749708 -0.50029582 1.40979457 1.074749708
		 -0.50029582 1.40979457 1.024749875 0.49995831 2.14131641 1.024749637 0.49995831 2.14131641 1.074749708
		 -0.50029582 2.14131641 1.074749708 -0.50029582 2.14131641 1.024749637 -0.50029582 0.67827272 1.024749875
		 -0.50029582 0.67827272 1.074749947 0.49995831 0.67827272 1.074749947 0.49995831 0.67827272 1.024749875;
	setAttr -s 33 ".ed[0:32]"  2 12 0 1 0 0 0 16 0 3 2 0 6 7 0 7 14 0 4 5 0
		 5 18 0 3 7 0 6 2 0 0 4 0 5 1 0 8 19 0 9 13 0 10 17 0 11 15 0 8 9 1 9 10 1 10 11 1
		 12 8 0 13 6 0 14 10 0 15 3 0 12 13 1 13 14 1 14 15 1 16 11 0 17 4 0 18 9 0 19 1 0
		 16 17 1 17 18 1 18 19 1;
	setAttr -s 38 ".n[0:37]" -type "float3"  1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 0.0099999998 -1.6292068e-09 0 0.0099999998
		 -1.6292068e-09 0 0.0099999998 -1.6292068e-09 0 0.0099999998 -1.6292068e-09 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 0 -0.0099999998 1.6292068e-09
		 0 -0.0099999998 1.6292068e-09 0 -0.0099999998 1.6292068e-09 0 -0.0099999998 1.6292068e-09
		 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20 1e+20
		 1e+20 1e+20 1e+20 1e+20 0.0099999998 0 0 0.0099999998 0 0 0 1.6292068e-09 0.0099999998
		 0 1.6292068e-09 0.0099999998 -0.0099999998 0 0 -0.0099999998 0 0 -0.0099999998 0
		 0 -0.0099999998 0 0 0 1.6292068e-09 0.0099999998 0 1.6292068e-09 0.0099999998 0.0099999998
		 0 0 0.0099999998 0 0;
	setAttr -s 14 -ch 56 ".fc[0:13]" -type "polyFaces" 
		f 4 17 14 31 28
		mu 0 4 0 1 2 3
		f 4 -4 8 -5 9
		mu 0 4 22 5 6 7
		f 4 18 -27 30 -15
		mu 0 4 1 8 9 2
		f 4 32 -13 16 -29
		mu 0 4 3 10 11 0
		f 4 -2 -12 -7 -11
		mu 0 4 21 13 14 15
		f 4 -17 -20 23 -14
		mu 0 4 0 11 16 17
		f 4 24 21 -18 13
		mu 0 4 17 18 1 0
		f 4 25 -16 -19 -22
		mu 0 4 18 19 8 1
		f 4 -24 -1 -10 -21
		mu 0 4 17 16 4 7
		f 4 4 5 -25 20
		mu 0 4 7 6 18 17
		f 4 -23 -26 -6 -9
		mu 0 4 23 19 18 6
		f 4 -31 -3 10 -28
		mu 0 4 2 9 12 15
		f 4 -32 27 6 7
		mu 0 4 3 2 15 14
		f 4 -30 -33 -8 11
		mu 0 4 20 10 3 14;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode mesh -n "polySurfaceShape4" -p "SmallPannel4";
	rename -uid "822DAC0C-46EE-33F0-9087-B2B93C2478F0";
	setAttr -k off ".v";
	setAttr ".io" yes;
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "UVMap";
	setAttr -s 8 ".uvst[0].uvsp[0:7]" -type "float2" 0 0 0 0 0 0 0 0 0
		 0 0 0 0 0 0 0;
	setAttr ".cuvs" -type "string" "UVMap";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 8 ".vt[0:7]"  -0.0050012707 -0.0099999998 -0.00053249463
		 0.0050012707 -0.0099999998 -0.00053249463 0.0050012707 -0.0099999998 0.028728385
		 -0.0050012707 -0.0099999998 0.028728385 -0.0050012707 -0.0105 -0.00053249463 0.0050012707 -0.0105 -0.00053249463
		 0.0050012707 -0.0105 0.028728385 -0.0050012707 -0.0105 0.028728385;
	setAttr -s 12 ".ed[0:11]"  2 1 0 1 0 0 0 3 0 3 2 0 6 7 0 7 4 0 4 5 0
		 5 6 0 3 7 0 6 2 0 0 4 0 5 1 0;
	setAttr -s 24 ".n[0:23]" -type "float3"  0 1 0 0 1 0 0 1 0 0 1 0 0 -1
		 0 0 -1 0 0 -1 0 0 -1 0 0 0 1 0 0 1 0 0 1 0 0 1 -1 0 0 -1 0 0 -1 0 0 -1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 0 0 -1 0 0 -1 0 0 -1 0 0 -1;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 1 2 3
		mu 0 4 1 3 6 0
		f 4 4 5 6 7
		mu 0 4 7 5 4 2
		f 4 -4 8 -5 9
		mu 0 4 1 0 5 7
		f 4 -3 10 -6 -9
		mu 0 4 0 6 4 5
		f 4 -1 -10 -8 11
		mu 0 4 3 1 7 2
		f 4 -2 -12 -7 -11
		mu 0 4 6 3 2 4;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode lightLinker -s -n "lightLinker1";
	rename -uid "A2873F24-4F1A-9C54-769A-F1A71128C4B0";
	setAttr -s 2 ".lnk";
	setAttr -s 2 ".slnk";
createNode shapeEditorManager -n "shapeEditorManager";
	rename -uid "30DCDE5D-41EC-217E-366B-2BA1B3EA6356";
createNode poseInterpolatorManager -n "poseInterpolatorManager";
	rename -uid "52ECDA36-4D63-C1A8-2785-CC89DDD82043";
createNode displayLayerManager -n "layerManager";
	rename -uid "ADB04600-436A-463C-20CD-C9A83CFE4AC5";
createNode displayLayer -n "defaultLayer";
	rename -uid "B5DCCC4F-41B5-2B4C-F8F1-F08B25CBADC1";
createNode renderLayerManager -n "renderLayerManager";
	rename -uid "235971FB-44D5-8966-1168-FD835406DC5F";
createNode renderLayer -n "defaultRenderLayer";
	rename -uid "6F645711-43F8-70B1-4D45-D88E7CDE2B0F";
	setAttr ".g" yes;
createNode script -n "uiConfigurationScriptNode";
	rename -uid "22CEDBAF-471D-D021-110C-B1A63D3AA3C6";
	setAttr ".b" -type "string" (
		"// Maya Mel UI Configuration File.\n//\n//  This script is machine generated.  Edit at your own risk.\n//\n//\n\nglobal string $gMainPane;\nif (`paneLayout -exists $gMainPane`) {\n\n\tglobal int $gUseScenePanelConfig;\n\tint    $useSceneConfig = $gUseScenePanelConfig;\n\tint    $nodeEditorPanelVisible = stringArrayContains(\"nodeEditorPanel1\", `getPanel -vis`);\n\tint    $nodeEditorWorkspaceControlOpen = (`workspaceControl -exists nodeEditorPanel1Window` && `workspaceControl -q -visible nodeEditorPanel1Window`);\n\tint    $menusOkayInPanels = `optionVar -q allowMenusInPanels`;\n\tint    $nVisPanes = `paneLayout -q -nvp $gMainPane`;\n\tint    $nPanes = 0;\n\tstring $editorName;\n\tstring $panelName;\n\tstring $itemFilterName;\n\tstring $panelConfig;\n\n\t//\n\t//  get current state of the UI\n\t//\n\tsceneUIReplacement -update $gMainPane;\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Top View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Top View\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"top\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n"
		+ "            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n"
		+ "            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1\n            -height 1\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n"
		+ "\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Side View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Side View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"side\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n"
		+ "            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n"
		+ "            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1\n            -height 1\n"
		+ "            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Front View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Front View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"front\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n"
		+ "            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n"
		+ "            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n"
		+ "            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 791\n            -height 811\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Persp View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"persp\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n"
		+ "            -wireframeOnShaded 1\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n"
		+ "            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n"
		+ "            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 786\n            -height 811\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"ToggledOutliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"ToggledOutliner\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\t$editorName = $panelName;\n        outlinerEditor -e \n            -docTag \"isolOutln_fromSeln\" \n            -showShapes 0\n            -showAssignedMaterials 0\n            -showTimeEditor 1\n            -showReferenceNodes 1\n            -showReferenceMembers 1\n            -showAttributes 0\n            -showConnected 0\n            -showAnimCurvesOnly 0\n            -showMuteInfo 0\n            -organizeByLayer 1\n            -organizeByClip 1\n            -showAnimLayerWeight 1\n            -autoExpandLayers 1\n            -autoExpand 0\n            -showDagOnly 1\n            -showAssets 1\n            -showContainedOnly 1\n            -showPublishedAsConnected 0\n            -showParentContainers 0\n            -showContainerContents 1\n            -ignoreDagHierarchy 0\n            -expandConnections 0\n            -showUpstreamCurves 1\n            -showUnitlessCurves 1\n            -showCompounds 1\n            -showLeafs 1\n            -showNumericAttrsOnly 0\n            -highlightActive 1\n            -autoSelectNewObjects 0\n"
		+ "            -doNotSelectNewObjects 0\n            -dropIsParent 1\n            -transmitFilters 0\n            -setFilter \"defaultSetFilter\" \n            -showSetMembers 1\n            -allowMultiSelection 1\n            -alwaysToggleSelect 0\n            -directSelect 0\n            -isSet 0\n            -isSetMember 0\n            -displayMode \"DAG\" \n            -expandObjects 0\n            -setsIgnoreFilters 1\n            -containersIgnoreFilters 0\n            -editAttrName 0\n            -showAttrValues 0\n            -highlightSecondary 0\n            -showUVAttrsOnly 0\n            -showTextureNodesOnly 0\n            -attrAlphaOrder \"default\" \n            -animLayerFilterOptions \"allAffecting\" \n            -sortOrder \"none\" \n            -longNames 0\n            -niceNames 1\n            -showNamespace 1\n            -showPinIcons 0\n            -mapMotionTrails 0\n            -ignoreHiddenAttribute 0\n            -ignoreOutlinerColor 0\n            -renderFilterVisible 0\n            -renderFilterIndex 0\n            -selectionOrder \"chronological\" \n"
		+ "            -expandAttribute 0\n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"Outliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"Outliner\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        outlinerEditor -e \n            -showShapes 0\n            -showAssignedMaterials 0\n            -showTimeEditor 1\n            -showReferenceNodes 0\n            -showReferenceMembers 0\n            -showAttributes 0\n            -showConnected 0\n            -showAnimCurvesOnly 0\n            -showMuteInfo 0\n            -organizeByLayer 1\n            -organizeByClip 1\n            -showAnimLayerWeight 1\n            -autoExpandLayers 1\n            -autoExpand 0\n            -showDagOnly 1\n            -showAssets 1\n            -showContainedOnly 1\n            -showPublishedAsConnected 0\n            -showParentContainers 0\n"
		+ "            -showContainerContents 1\n            -ignoreDagHierarchy 0\n            -expandConnections 0\n            -showUpstreamCurves 1\n            -showUnitlessCurves 1\n            -showCompounds 1\n            -showLeafs 1\n            -showNumericAttrsOnly 0\n            -highlightActive 1\n            -autoSelectNewObjects 0\n            -doNotSelectNewObjects 0\n            -dropIsParent 1\n            -transmitFilters 0\n            -setFilter \"defaultSetFilter\" \n            -showSetMembers 1\n            -allowMultiSelection 1\n            -alwaysToggleSelect 0\n            -directSelect 0\n            -displayMode \"DAG\" \n            -expandObjects 0\n            -setsIgnoreFilters 1\n            -containersIgnoreFilters 0\n            -editAttrName 0\n            -showAttrValues 0\n            -highlightSecondary 0\n            -showUVAttrsOnly 0\n            -showTextureNodesOnly 0\n            -attrAlphaOrder \"default\" \n            -animLayerFilterOptions \"allAffecting\" \n            -sortOrder \"none\" \n            -longNames 0\n"
		+ "            -niceNames 1\n            -showNamespace 1\n            -showPinIcons 0\n            -mapMotionTrails 0\n            -ignoreHiddenAttribute 0\n            -ignoreOutlinerColor 0\n            -renderFilterVisible 0\n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"graphEditor\" (localizedPanelLabel(\"Graph Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Graph Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showAssignedMaterials 0\n                -showTimeEditor 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -organizeByClip 1\n"
		+ "                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 1\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showParentContainers 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 1\n                -showCompounds 0\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 1\n                -doNotSelectNewObjects 0\n                -dropIsParent 1\n                -transmitFilters 1\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n"
		+ "                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 1\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                -ignoreOutlinerColor 0\n                -renderFilterVisible 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"GraphEd\");\n            animCurveEditor -e \n                -displayValues 0\n                -snapTime \"integer\" \n                -snapValue \"none\" \n                -showPlayRangeShades \"on\" \n                -lockPlayRangeShades \"off\" \n                -smoothness \"fine\" \n                -resultSamples 1\n                -resultScreenSamples 0\n"
		+ "                -resultUpdate \"delayed\" \n                -showUpstreamCurves 1\n                -keyMinScale 1\n                -stackedCurvesMin -1\n                -stackedCurvesMax 1\n                -stackedCurvesSpace 0.2\n                -preSelectionHighlight 0\n                -constrainDrag 0\n                -valueLinesToggle 1\n                -highlightAffectedCurves 0\n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dopeSheetPanel\" (localizedPanelLabel(\"Dope Sheet\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Dope Sheet\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showAssignedMaterials 0\n                -showTimeEditor 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n"
		+ "                -showConnected 1\n                -showAnimCurvesOnly 1\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -organizeByClip 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 0\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showParentContainers 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 0\n                -showCompounds 1\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 0\n                -doNotSelectNewObjects 1\n                -dropIsParent 1\n                -transmitFilters 0\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n"
		+ "                -alwaysToggleSelect 0\n                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 0\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                -ignoreOutlinerColor 0\n                -renderFilterVisible 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"DopeSheetEd\");\n            dopeSheetEditor -e \n                -displayValues 0\n                -snapTime \"integer\" \n                -snapValue \"none\" \n                -outliner \"dopeSheetPanel1OutlineEd\" \n"
		+ "                -showSummary 1\n                -showScene 0\n                -hierarchyBelow 0\n                -showTicks 1\n                -selectionWindow 0 0 0 0 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"timeEditorPanel\" (localizedPanelLabel(\"Time Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Time Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"clipEditorPanel\" (localizedPanelLabel(\"Trax Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Trax Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = clipEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayValues 0\n                -snapTime \"none\" \n"
		+ "                -snapValue \"none\" \n                -initialized 0\n                -manageSequencer 0 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"sequenceEditorPanel\" (localizedPanelLabel(\"Camera Sequencer\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Camera Sequencer\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = sequenceEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayValues 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n                -initialized 0\n                -manageSequencer 1 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"hyperGraphPanel\" (localizedPanelLabel(\"Hypergraph Hierarchy\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n"
		+ "\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Hypergraph Hierarchy\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"HyperGraphEd\");\n            hyperGraph -e \n                -graphLayoutStyle \"hierarchicalLayout\" \n                -orientation \"horiz\" \n                -mergeConnections 0\n                -zoom 1\n                -animateTransition 0\n                -showRelationships 1\n                -showShapes 0\n                -showDeformers 0\n                -showExpressions 0\n                -showConstraints 0\n                -showConnectionFromSelected 0\n                -showConnectionToSelected 0\n                -showConstraintLabels 0\n                -showUnderworld 0\n                -showInvisible 0\n                -transitionFrames 1\n                -opaqueContainers 0\n                -freeform 0\n                -imagePosition 0 0 \n                -imageScale 1\n                -imageEnabled 0\n                -graphType \"DAG\" \n                -heatMapDisplay 0\n                -updateSelection 1\n"
		+ "                -updateNodeAdded 1\n                -useDrawOverrideColor 0\n                -limitGraphTraversal -1\n                -range 0 0 \n                -iconSize \"smallIcons\" \n                -showCachedConnections 0\n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"hyperShadePanel\" (localizedPanelLabel(\"Hypershade\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Hypershade\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"visorPanel\" (localizedPanelLabel(\"Visor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Visor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"nodeEditorPanel\" (localizedPanelLabel(\"Node Editor\")) `;\n"
		+ "\tif ($nodeEditorPanelVisible || $nodeEditorWorkspaceControlOpen) {\n\t\tif (\"\" == $panelName) {\n\t\t\tif ($useSceneConfig) {\n\t\t\t\t$panelName = `scriptedPanel -unParent  -type \"nodeEditorPanel\" -l (localizedPanelLabel(\"Node Editor\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = ($panelName+\"NodeEditorEd\");\n            nodeEditor -e \n                -allAttributes 0\n                -allNodes 0\n                -autoSizeNodes 1\n                -consistentNameSize 1\n                -createNodeCommand \"nodeEdCreateNodeCommand\" \n                -connectNodeOnCreation 0\n                -connectOnDrop 0\n                -copyConnectionsOnPaste 0\n                -connectionStyle \"bezier\" \n                -defaultPinnedState 0\n                -additiveGraphingMode 0\n                -settingsChangedCallback \"nodeEdSyncControls\" \n                -traversalDepthLimit -1\n                -keyPressCommand \"nodeEdKeyPressCommand\" \n                -nodeTitleMode \"name\" \n                -gridSnap 0\n                -gridVisibility 1\n                -crosshairOnEdgeDragging 0\n"
		+ "                -popupMenuScript \"nodeEdBuildPanelMenus\" \n                -showNamespace 1\n                -showShapes 1\n                -showSGShapes 0\n                -showTransforms 1\n                -useAssets 1\n                -syncedSelection 1\n                -extendToShapes 1\n                -editorMode \"default\" \n                -hasWatchpoint 0\n                $editorName;\n\t\t\t}\n\t\t} else {\n\t\t\t$label = `panel -q -label $panelName`;\n\t\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Node Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"NodeEditorEd\");\n            nodeEditor -e \n                -allAttributes 0\n                -allNodes 0\n                -autoSizeNodes 1\n                -consistentNameSize 1\n                -createNodeCommand \"nodeEdCreateNodeCommand\" \n                -connectNodeOnCreation 0\n                -connectOnDrop 0\n                -copyConnectionsOnPaste 0\n                -connectionStyle \"bezier\" \n                -defaultPinnedState 0\n                -additiveGraphingMode 0\n"
		+ "                -settingsChangedCallback \"nodeEdSyncControls\" \n                -traversalDepthLimit -1\n                -keyPressCommand \"nodeEdKeyPressCommand\" \n                -nodeTitleMode \"name\" \n                -gridSnap 0\n                -gridVisibility 1\n                -crosshairOnEdgeDragging 0\n                -popupMenuScript \"nodeEdBuildPanelMenus\" \n                -showNamespace 1\n                -showShapes 1\n                -showSGShapes 0\n                -showTransforms 1\n                -useAssets 1\n                -syncedSelection 1\n                -extendToShapes 1\n                -editorMode \"default\" \n                -hasWatchpoint 0\n                $editorName;\n\t\t\tif (!$useSceneConfig) {\n\t\t\t\tpanel -e -l $label $panelName;\n\t\t\t}\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"createNodePanel\" (localizedPanelLabel(\"Create Node\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Create Node\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"polyTexturePlacementPanel\" (localizedPanelLabel(\"UV Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"UV Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"renderWindowPanel\" (localizedPanelLabel(\"Render View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Render View\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"shapePanel\" (localizedPanelLabel(\"Shape Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tshapePanel -edit -l (localizedPanelLabel(\"Shape Editor\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"posePanel\" (localizedPanelLabel(\"Pose Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tposePanel -edit -l (localizedPanelLabel(\"Pose Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dynRelEdPanel\" (localizedPanelLabel(\"Dynamic Relationships\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Dynamic Relationships\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"relationshipPanel\" (localizedPanelLabel(\"Relationship Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Relationship Editor\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"referenceEditorPanel\" (localizedPanelLabel(\"Reference Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Reference Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"componentEditorPanel\" (localizedPanelLabel(\"Component Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Component Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dynPaintScriptedPanelType\" (localizedPanelLabel(\"Paint Effects\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Paint Effects\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"scriptEditorPanel\" (localizedPanelLabel(\"Script Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Script Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"profilerPanel\" (localizedPanelLabel(\"Profiler Tool\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Profiler Tool\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"contentBrowserPanel\" (localizedPanelLabel(\"Content Browser\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Content Browser\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"Stereo\" (localizedPanelLabel(\"Stereo\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Stereo\")) -mbv $menusOkayInPanels  $panelName;\n{ string $editorName = ($panelName+\"Editor\");\n            stereoCameraView -e \n                -camera \"persp\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n                -displayAppearance \"smoothShaded\" \n                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n                -holdOuts 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n                -bufferMode \"double\" \n                -twoSidedLighting 0\n                -backfaceCulling 0\n                -xray 0\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n"
		+ "                -smoothWireframe 0\n                -lineWidth 1\n                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 32768\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n                -fogStart 0\n                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -depthOfFieldPreview 1\n                -maxConstantTransparency 1\n                -objectFilterShowInHUD 1\n                -isFiltered 0\n                -colorResolution 4 4 \n                -bumpResolution 4 4 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n                -transpInShadows 0\n                -cullingOverride \"none\" \n                -lowQualityLighting 0\n                -maximumNumHardwareLights 0\n                -occlusionCulling 0\n                -shadingModel 0\n"
		+ "                -useBaseRenderer 0\n                -useReducedRenderer 0\n                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -controllers 1\n                -nurbsCurves 1\n                -nurbsSurfaces 1\n                -polymeshes 1\n                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n                -hulls 1\n                -grid 1\n                -imagePlane 1\n                -joints 1\n                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n                -follicles 1\n                -nCloths 1\n                -nParticles 1\n                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n"
		+ "                -pluginShapes 1\n                -dimensions 1\n                -handles 1\n                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                -captureSequenceNumber -1\n                -width 0\n                -height 0\n                -sceneRenderFilter 0\n                -displayMode \"centerEye\" \n                -viewColor 0 0 0 1 \n                -useCustomBackground 1\n                $editorName;\n            stereoCameraView -e -viewSelected 0 $editorName;\n            stereoCameraView -e \n                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName; };\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\tif ($useSceneConfig) {\n        string $configName = `getPanel -cwl (localizedPanelLabel(\"Current Layout\"))`;\n        if (\"\" != $configName) {\n\t\t\tpanelConfiguration -edit -label (localizedPanelLabel(\"Current Layout\")) \n"
		+ "\t\t\t\t-userCreated false\n\t\t\t\t-defaultImage \"vacantCell.xP:/\"\n\t\t\t\t-image \"\"\n\t\t\t\t-sc false\n\t\t\t\t-configString \"global string $gMainPane; paneLayout -e -cn \\\"single\\\" -ps 1 100 100 $gMainPane;\"\n\t\t\t\t-removeAllPanels\n\t\t\t\t-ap false\n\t\t\t\t\t(localizedPanelLabel(\"Persp View\")) \n\t\t\t\t\t\"modelPanel\"\n"
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 1\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 786\\n    -height 811\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 1\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 786\\n    -height 811\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t$configName;\n\n            setNamedPanelLayout (localizedPanelLabel(\"Current Layout\"));\n        }\n\n        panelHistory -e -clear mainPanelHistory;\n        sceneUIReplacement -clear;\n\t}\n\n\ngrid -spacing 5 -size 12 -divisions 5 -displayAxes yes -displayGridLines yes -displayDivisionLines yes -displayPerspectiveLabels no -displayOrthographicLabels no -displayAxesBold yes -perspectiveLabelPosition axis -orthographicLabelPosition edge;\nviewManip -drawCompass 0 -compassAngle 0 -frontParameters \"\" -homeParameters \"\" -selectionLockParameters \"\";\n}\n");
	setAttr ".st" 3;
createNode script -n "sceneConfigurationScriptNode";
	rename -uid "2A401CB5-418A-F3B1-FCFF-0986A1A0E403";
	setAttr ".b" -type "string" "playbackOptions -min 1 -max 120 -ast 1 -aet 200 ";
	setAttr ".st" 6;
select -ne :time1;
	setAttr ".o" 1;
	setAttr ".unw" 1;
select -ne :hardwareRenderingGlobals;
	setAttr ".otfna" -type "stringArray" 22 "NURBS Curves" "NURBS Surfaces" "Polygons" "Subdiv Surface" "Particles" "Particle Instance" "Fluids" "Strokes" "Image Planes" "UI" "Lights" "Cameras" "Locators" "Joints" "IK Handles" "Deformers" "Motion Trails" "Components" "Hair Systems" "Follicles" "Misc. UI" "Ornaments"  ;
	setAttr ".otfva" -type "Int32Array" 22 0 1 1 1 1 1
		 1 1 1 0 0 0 0 0 0 0 0 0
		 0 0 0 0 ;
	setAttr ".fprt" yes;
select -ne :renderPartition;
	setAttr -s 2 ".st";
select -ne :renderGlobalsList1;
select -ne :defaultShaderList1;
	setAttr -s 5 ".s";
select -ne :postProcessList1;
	setAttr -s 2 ".p";
select -ne :defaultRenderingList1;
select -ne :initialShadingGroup;
	setAttr -s 5 ".dsm";
	setAttr ".ro" yes;
select -ne :initialParticleSE;
	setAttr ".ro" yes;
select -ne :defaultRenderGlobals;
	addAttr -ci true -h true -sn "dss" -ln "defaultSurfaceShader" -dt "string";
	setAttr ".ren" -type "string" "arnold";
	setAttr ".dss" -type "string" "lambert1";
select -ne :defaultResolution;
	setAttr ".pa" 1;
select -ne :defaultColorMgtGlobals;
	setAttr ".cfe" yes;
	setAttr ".cfp" -type "string" "<MAYA_RESOURCES>/OCIO-configs/Maya2022-default/config.ocio";
	setAttr ".wsn" -type "string" "ACEScg";
select -ne :hardwareRenderGlobals;
	setAttr ".ctrs" 256;
	setAttr ".btrs" 512;
select -ne :ikSystem;
	setAttr -s 4 ".sol";
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "Top2Shape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape3.iog" ":initialShadingGroup.dsm" -na;
connectAttr "LockerBase2Shape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "SmallPannel4Shape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "SmallPannel_Mocup4Shape.iog" ":initialShadingGroup.dsm" -na;
// End of BarracksLockers.ma
