//Maya ASCII 2022 scene
//Name: BathroomStall.ma
//Last modified: Tue, Mar 15, 2022 04:53:50 PM
//Codeset: 1252
requires maya "2022";
requires "stereoCamera" "10.0";
requires -nodeType "gameFbxExporter" "gameFbxExporter" "1.0";
requires "mtoa" "4.2.3";
requires "mtoa" "4.2.1";
requires "stereoCamera" "10.0";
currentUnit -l meter -a degree -t film;
fileInfo "application" "maya";
fileInfo "product" "Maya 2022";
fileInfo "version" "2022";
fileInfo "cutIdentifier" "202106180615-26a94e7f8c";
fileInfo "osv" "Windows 10 Home v2009 (Build: 19043)";
fileInfo "UUID" "5AD623A9-48A8-D109-907A-07BC4647127B";
createNode transform -s -n "persp";
	rename -uid "7D4EE7A5-4FE7-6D68-93DD-A2B62A8CA7C8";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -2.3697318768752269 2.713833180660588 7.1159145939888324 ;
	setAttr ".r" -type "double3" -11.738352745441601 1771.0000000007819 0 ;
createNode camera -s -n "perspShape" -p "persp";
	rename -uid "DAAB4239-4A2A-1A3D-C729-5F965282443D";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999993;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 7.5979457977167906;
	setAttr ".ow" 0.1;
	setAttr ".imn" -type "string" "persp";
	setAttr ".den" -type "string" "persp_depth";
	setAttr ".man" -type "string" "persp_mask";
	setAttr ".hc" -type "string" "viewSet -p %camera";
	setAttr ".ai_translator" -type "string" "perspective";
createNode transform -s -n "top";
	rename -uid "7533E466-4070-99AF-610E-6292330AF321";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 3.3190678947112371 10.001 2.6173611686480278 ;
	setAttr ".r" -type "double3" -90 0 0 ;
createNode camera -s -n "topShape" -p "top";
	rename -uid "A14AEE1C-4F92-7B81-DBDC-E4B67C93A407";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 8.2009999989903584;
	setAttr ".ow" 3.0830556751192688;
	setAttr ".imn" -type "string" "top";
	setAttr ".den" -type "string" "top_depth";
	setAttr ".man" -type "string" "top_mask";
	setAttr ".tp" -type "double3" 0 180.0000001009642 0 ;
	setAttr ".hc" -type "string" "viewSet -t %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "front";
	rename -uid "B91922D3-4EC3-2627-13FF-E9B5FE6C9EE4";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 0 10.001000000000001 ;
createNode camera -s -n "frontShape" -p "front";
	rename -uid "58BDF975-4A0A-D08B-C9BE-CC82DC093D58";
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
	rename -uid "98829474-4FF3-78A0-A79E-5EB8B2EA4867";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 10.013490949078355 2.0736154102800834 0.4778184482811656 ;
	setAttr ".r" -type "double3" 0 90 0 ;
createNode camera -s -n "sideShape" -p "side";
	rename -uid "D3E41E04-4287-14CB-9A80-5FB3B38CD601";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.013490949078355;
	setAttr ".ow" 9.8812855104544983;
	setAttr ".imn" -type "string" "side";
	setAttr ".den" -type "string" "side_depth";
	setAttr ".man" -type "string" "side_mask";
	setAttr ".tp" -type "double3" 0 49.999998727411025 0 ;
	setAttr ".hc" -type "string" "viewSet -s %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -n "REF";
	rename -uid "C5AD5A22-4C72-125B-A9A5-73BEE142C358";
	setAttr ".t" -type "double3" 2.6163006591796876 1 -4.9143891334533691 ;
	setAttr ".r" -type "double3" -90 -45 4.497983566394945e-15 ;
	setAttr ".rp" -type "double3" -2.6163006591796876 -4.9143891334533691 -1 ;
	setAttr ".rpt" -type "double3" 0 3.9143891334533691 5.9143891334533691 ;
	setAttr ".sp" -type "double3" -2.6163006591796876 -4.9143891334533691 -1 ;
createNode mesh -n "REFShape" -p "REF";
	rename -uid "7231750F-4E35-69A8-A976-5FA9E2A1285D";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:3]";
	setAttr ".iog[0].og[1].gcl" -type "componentList" 1 "f[4:11]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 2 ".uvst";
	setAttr ".uvst[0].uvsn" -type "string" "LightMapUV";
	setAttr -s 24 ".uvst[0].uvsp[0:23]" -type "float2" 11.046875 4.59960938
		 1.59960938 4.59960938 1.59960938 1 11.046875 1 5.25 4.59960938 4.7683716e-07 4.59960938
		 4.7683716e-07 1 5.25 1 0.39990234 4.59960938 -9.046875 4.59960938 -9.046875 1 0.39990234
		 1 2 4.59960938 -3.24804688 4.59960938 -3.24804688 1 2 1 5.25 1.39990234 0 1.39990234
		 4.7683716e-07 -8.046875 5.25 -8.046875 5.25 12.046875 0 12.046875 -5.9604645e-08
		 2.59960938 5.24609375 2.59960938;
	setAttr ".uvst[1].uvsn" -type "string" "UVmap_1";
	setAttr -s 24 ".uvst[1].uvsp[0:23]" -type "float2" 0.65283203 0.99193573
		 0.65283203 0.46191406 0.85498047 0.46191406 0.85498047 0.99193573 0.30249023 0.21777344
		 0.00806427 0.21777344 0.00806427 0.016113281 0.30249023 0.016113281 0.53808594 0.44384766
		 0.00806427 0.44384766 0.00806427 0.24169922 0.53808594 0.24169922 0.85058594 0.44384766
		 0.55615234 0.44384766 0.55615234 0.24169922 0.85058594 0.24169922 0.625 0.99193573
		 0.33056641 0.99193573 0.33056641 0.46191406 0.625 0.46191406 0.30249023 0.99193573
		 0.00806427 0.99193573 0.00806427 0.46191406 0.30249023 0.46191406;
	setAttr ".cuvs" -type "string" "LightMapUV";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 8 ".vt[0:7]"  -7.81353712 -6.39930725 2.5999999 -1.13137054 0.28284404 2.5999999
		 -1.13137054 0.28284404 -1 -7.81353712 -6.39930725 -1 -4.1012311 -10.11162186 2.5999999
		 -4.1012311 -10.11162186 -1 2.58093572 -3.42947078 2.5999999 2.58093572 -3.42947078 -1;
	setAttr -s 18 ".ed[0:17]"  0 1 0 1 2 0 2 0 0 3 0 0 2 3 0 4 0 0 3 4 0
		 5 4 0 3 5 0 6 4 0 5 6 0 7 6 0 5 7 0 1 6 0 7 1 0 7 2 0 0 6 0 2 5 0;
	setAttr -s 36 ".n[0:35]" -type "float3"  -0.70710677 0.70710677 0 -0.70710677
		 0.70710677 0 -0.70710677 0.70710677 0 -0.70710677 0.70710677 0 -0.70710677 0.70710677
		 0 -0.70710677 0.70710677 0 -0.70710677 -0.70710677 0 -0.70710677 -0.70710677 0 -0.70710677
		 -0.70710677 0 -0.70710677 -0.70710677 0 -0.70710677 -0.70710677 0 -0.70710677 -0.70710677
		 0 0.70710677 -0.70710677 0 0.70710677 -0.70710677 0 0.70710677 -0.70710677 0 0.70710677
		 -0.70710677 0 0.70710677 -0.70710677 0 0.70710677 -0.70710677 0 0.70710677 0.70710677
		 0 0.70710677 0.70710677 0 0.70710677 0.70710677 0 0.70710677 0.70710677 0 0.70710677
		 0.70710677 0 0.70710677 0.70710677 0 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 -1 0
		 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1;
	setAttr -s 12 -ch 36 ".fc[0:11]" -type "polyFaces" 
		f 3 0 1 2
		mu 0 3 0 1 2
		mu 1 3 0 1 2
		f 3 3 -3 4
		mu 0 3 3 0 2
		mu 1 3 3 0 2
		f 3 5 -4 6
		mu 0 3 4 5 6
		mu 1 3 4 5 6
		f 3 7 -7 8
		mu 0 3 7 4 6
		mu 1 3 7 4 6
		f 3 9 -8 10
		mu 0 3 8 9 10
		mu 1 3 8 9 10
		f 3 11 -11 12
		mu 0 3 11 8 10
		mu 1 3 11 8 10
		f 3 13 -12 14
		mu 0 3 12 13 14
		mu 1 3 12 13 14
		f 3 -2 -15 15
		mu 0 3 15 12 14
		mu 1 3 15 12 14
		f 3 -14 -1 16
		mu 0 3 16 17 18
		mu 1 3 16 17 18
		f 3 -10 -17 -6
		mu 0 3 19 16 18
		mu 1 3 19 16 18
		f 3 -9 -5 17
		mu 0 3 20 21 22
		mu 1 3 20 21 22
		f 3 -13 -18 -16
		mu 0 3 23 20 22
		mu 1 3 23 20 22;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr -s 2 ".pd";
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".pd[1]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "pCube1";
	rename -uid "2947A90C-4839-6F36-6972-3CA595A2F96C";
	setAttr ".t" -type "double3" 3.1482882690429688 0.49999998727411027 0 ;
	setAttr ".s" -type "double3" 3.1534294772529878 3.6000000936456926 5.2474074842384351 ;
	setAttr ".rp" -type "double3" 1.5767147827148436 -0.49999998727411027 0 ;
	setAttr ".sp" -type "double3" 0.50000001398107996 -0.49999998727411027 0 ;
	setAttr ".spt" -type "double3" 1.0767147687337635 0 0 ;
createNode mesh -n "pCubeShape1" -p "pCube1";
	rename -uid "1D6605A6-4B49-B092-919A-7AB620791374";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 6 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "back";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[2]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottom";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 1 "f[3]";
	setAttr ".gtag[2].gtagnm" -type "string" "front";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 1 "f[0]";
	setAttr ".gtag[3].gtagnm" -type "string" "left";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 1 "f[5]";
	setAttr ".gtag[4].gtagnm" -type "string" "right";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "f[4]";
	setAttr ".gtag[5].gtagnm" -type "string" "top";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 1 "f[1]";
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.375 0 0.625 0 0.375
		 0.25 0.625 0.25 0.375 0.5 0.625 0.5 0.375 0.75 0.625 0.75 0.375 1 0.625 1 0.875 0
		 0.875 0.25 0.125 0 0.125 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".vt[0:7]"  -0.5 -0.5 0.5 0.5 -0.5 0.5 -0.5 0.5 0.5 0.5 0.5 0.5
		 -0.5 0.5 -0.5 0.5 0.5 -0.5 -0.5 -0.5 -0.5 0.5 -0.5 -0.5;
	setAttr -s 12 ".ed[0:11]"  0 1 0 2 3 0 4 5 0 6 7 0 0 2 0 1 3 0 2 4 0
		 3 5 0 4 6 0 5 7 0 6 0 0 7 1 0;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 5 -2 -5
		mu 0 4 0 1 3 2
		f 4 1 7 -3 -7
		mu 0 4 2 3 5 4
		f 4 2 9 -4 -9
		mu 0 4 4 5 7 6
		f 4 3 11 -1 -11
		mu 0 4 6 7 9 8
		f 4 -12 -10 -8 -6
		mu 0 4 1 10 11 3
		f 4 10 4 6 8
		mu 0 4 12 0 2 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "SCALE";
	rename -uid "88A9C0E4-4033-DB50-7A32-92A520C5E396";
	setAttr ".t" -type "double3" 0 0.5 -3.4111145760071997 ;
	setAttr ".s" -type "double3" 1 2 1 ;
	setAttr ".rp" -type "double3" 0 -0.5 0 ;
	setAttr ".sp" -type "double3" 0 -0.5 0 ;
createNode mesh -n "SCALEShape" -p "SCALE";
	rename -uid "6CD87C86-42E9-9C2B-64B5-9AA4FEF709DD";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 6 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "back";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[2]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottom";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 1 "f[3]";
	setAttr ".gtag[2].gtagnm" -type "string" "front";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 1 "f[0]";
	setAttr ".gtag[3].gtagnm" -type "string" "left";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 1 "f[5]";
	setAttr ".gtag[4].gtagnm" -type "string" "right";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "f[4]";
	setAttr ".gtag[5].gtagnm" -type "string" "top";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 1 "f[1]";
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.375 0 0.625 0 0.375
		 0.25 0.625 0.25 0.375 0.5 0.625 0.5 0.375 0.75 0.625 0.75 0.375 1 0.625 1 0.875 0
		 0.875 0.25 0.125 0 0.125 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".vt[0:7]"  -0.5 -0.5 0.5 0.5 -0.5 0.5 -0.5 0.5 0.5 0.5 0.5 0.5
		 -0.5 0.5 -0.5 0.5 0.5 -0.5 -0.5 -0.5 -0.5 0.5 -0.5 -0.5;
	setAttr -s 12 ".ed[0:11]"  0 1 0 2 3 0 4 5 0 6 7 0 0 2 0 1 3 0 2 4 0
		 3 5 0 4 6 0 5 7 0 6 0 0 7 1 0;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 5 -2 -5
		mu 0 4 0 1 3 2
		f 4 1 7 -3 -7
		mu 0 4 2 3 5 4
		f 4 2 9 -4 -9
		mu 0 4 4 5 7 6
		f 4 3 11 -1 -11
		mu 0 4 6 7 9 8
		f 4 -12 -10 -8 -6
		mu 0 4 1 10 11 3
		f 4 10 4 6 8
		mu 0 4 12 0 2 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "pCube6";
	rename -uid "897AA9C6-41EA-ADD3-88B1-8BA4DE3A2259";
	setAttr ".t" -type "double3" 0.0024690080633931744 0.49999998727411027 0 ;
	setAttr ".s" -type "double3" 3.1534294772529878 3.6000000936456926 5.2474074842384351 ;
	setAttr ".rp" -type "double3" 1.5767147827148436 -0.49999998727411027 0 ;
	setAttr ".sp" -type "double3" 0.50000001398107996 -0.49999998727411027 0 ;
	setAttr ".spt" -type "double3" 1.0767147687337635 0 0 ;
createNode mesh -n "pCubeShape6" -p "pCube6";
	rename -uid "9235C5FC-4F56-4DBF-4C6C-B1A4AD7FA8F0";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 14 ".uvst[0].uvsp[0:13]" -type "float2" 0.375 0 0.625 0 0.375
		 0.25 0.625 0.25 0.375 0.5 0.625 0.5 0.375 0.75 0.625 0.75 0.375 1 0.625 1 0.875 0
		 0.875 0.25 0.125 0 0.125 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 8 ".vt[0:7]"  -0.5 -0.5 0.5 0.5 -0.5 0.5 -0.5 0.5 0.5 0.5 0.5 0.5
		 -0.5 0.5 -0.5 0.5 0.5 -0.5 -0.5 -0.5 -0.5 0.5 -0.5 -0.5;
	setAttr -s 12 ".ed[0:11]"  0 1 0 2 3 0 4 5 0 6 7 0 0 2 0 1 3 0 2 4 0
		 3 5 0 4 6 0 5 7 0 6 0 0 7 1 0;
	setAttr -s 6 -ch 24 ".fc[0:5]" -type "polyFaces" 
		f 4 0 5 -2 -5
		mu 0 4 0 1 3 2
		f 4 1 7 -3 -7
		mu 0 4 2 3 5 4
		f 4 2 9 -4 -9
		mu 0 4 4 5 7 6
		f 4 3 11 -1 -11
		mu 0 4 6 7 9 8
		f 4 -12 -10 -8 -6
		mu 0 4 1 10 11 3
		f 4 10 4 6 8
		mu 0 4 12 0 2 13;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Divider";
	rename -uid "250017E5-4D31-ED22-5891-D5BB2D3FE01C";
	setAttr ".rp" -type "double3" 1.52587890625e-07 1.8 0 ;
	setAttr ".sp" -type "double3" 1.52587890625e-07 1.8 0 ;
createNode transform -n "Pole" -p "Divider";
	rename -uid "38354E68-405D-B924-B948-768B7C0FBBFB";
	setAttr ".rp" -type "double3" 6.3480632093160243e-08 1.8 1.8268312320382776 ;
	setAttr ".sp" -type "double3" 6.3480632093160243e-08 1.8 1.8268312320382776 ;
createNode mesh -n "PoleShape" -p "Pole";
	rename -uid "9095C894-402B-2DB3-1362-67BA3C41BD07";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.49946660666149262 0.082349403186198711 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 25 ".uvst[0].uvsp[0:24]" -type "float2" 0.9994663 0.097284287
		 0.99946582 0.11320469 -0.00052827597 0.097253889 -0.0005287528 0.11317429 -0.00052970648
		 0.14359483 -0.00052922964 0.12767437 0.99946487 0.14362523 0.99946535 0.12770477
		 0.99946666 0.082784146 -0.00052779913 0.082753807 0.49946898 0.097269088 0.49946848
		 0.11318949 0.49946806 0.12768963 0.49946943 0.082769006 0.49946758 0.14361009 0.24947077
		 0.082761377 0.24946898 0.1436024 0.24946946 0.127682 0.24946982 0.11318186 0.24947029
		 0.097261459 0.74946761 0.097276658 0.74946713 0.11319712 0.74946666 0.1276972 0.74946803
		 0.082776576 0.74946618 0.1436176;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 20 ".vt[0:19]"  0.026100464 0 1.85548818 0.026100464 0 1.79817426
		 0.026100464 3.5999999 1.85548818 0.026100464 3.5999999 1.79817426 -0.026100159 3.5999999 1.85548818
		 -0.026100159 3.5999999 1.79817426 -0.026100159 0 1.85548818 -0.026100159 0 1.79817426
		 0.026100464 1.79999995 1.85548818 0.026100464 1.79999995 1.79817426 -0.026100159 1.79999995 1.79817426
		 -0.026100159 1.79999995 1.85548818 -0.026100159 2.70000005 1.85548818 -0.026100159 2.70000005 1.79817426
		 0.026100464 2.70000005 1.79817426 0.026100464 2.70000005 1.85548818 0.026100464 0.89999998 1.85548818
		 0.026100464 0.89999998 1.79817426 -0.026100159 0.89999998 1.79817426 -0.026100159 0.89999998 1.85548818;
	setAttr -s 36 ".ed[0:35]"  0 1 0 2 3 0 4 5 0 6 7 0 0 16 0 1 17 0 2 4 0
		 3 5 0 4 12 0 5 13 0 6 0 0 7 1 0 8 15 0 9 14 0 10 18 0 11 19 0 8 9 1 9 10 1 10 11 1
		 11 8 1 12 11 0 13 10 0 14 3 0 15 2 0 12 13 1 13 14 1 14 15 1 15 12 1 16 8 0 17 9 0
		 18 7 0 19 6 0 16 17 1 17 18 1 18 19 1 19 16 1;
	setAttr -s 16 -ch 64 ".fc[0:15]" -type "polyFaces" 
		f 4 16 13 26 -13
		mu 0 4 10 11 18 19
		f 4 24 21 18 -21
		mu 0 4 16 17 12 14
		f 4 17 -22 25 -14
		mu 0 4 11 12 17 18
		f 4 19 12 27 20
		mu 0 4 13 10 19 15
		f 4 32 29 -17 -29
		mu 0 4 20 21 11 10
		f 4 33 -15 -18 -30
		mu 0 4 21 22 12 11
		f 4 -19 14 34 -16
		mu 0 4 14 12 22 24
		f 4 35 28 -20 15
		mu 0 4 23 20 10 13
		f 4 2 9 -25 -9
		mu 0 4 4 5 17 16
		f 4 -26 -10 -8 -23
		mu 0 4 18 17 5 3
		f 4 -27 22 -2 -24
		mu 0 4 19 18 3 2
		f 4 -28 23 6 8
		mu 0 4 15 19 2 9
		f 4 0 5 -33 -5
		mu 0 4 0 1 21 20
		f 4 -12 -31 -34 -6
		mu 0 4 1 7 22 21
		f 4 -35 30 -4 -32
		mu 0 4 24 22 7 6
		f 4 10 4 -36 31
		mu 0 4 8 0 20 23;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 5 
		5 0 
		7 0 
		12 0 
		17 0 
		22 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Pole2" -p "Divider";
	rename -uid "9B3C4552-4940-3AB1-902E-CCA6692E1906";
	setAttr ".rp" -type "double3" 6.3480632093160243e-08 1.8 -1.7981739559500036 ;
	setAttr ".sp" -type "double3" 6.3480632093160243e-08 1.8 -1.7981739559500036 ;
createNode mesh -n "PoleShape2" -p "Pole2";
	rename -uid "9AB9C5AE-4A1D-B38B-77AC-60A5A4C95F57";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.5 0.375 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 25 ".uvst[0].uvsp[0:24]" -type "float2" -0.00053060055 0.051494151
		 -0.00052922964 0.035573691 0.99946392 0.051585287 0.99946535 0.035664827 0.9994626
		 0.066085368 0.99946117 0.082005799 -0.00053191185 0.065994233 -0.00053340197 0.081914663
		 -0.00052785873 0.02107355 0.99946666 0.021164685 0.49946669 0.051539719 0.49946812
		 0.035619259 0.49946386 0.081960231 0.49946946 0.021119118 0.49946541 0.06603986 0.74946392
		 0.06606257 0.74946249 0.081983 0.74946809 0.021141887 0.74946678 0.035641968 0.74946523
		 0.051562488 0.24946809 0.05151695 0.24946952 0.03559643 0.24946529 0.081937492 0.24947089
		 0.021096349 0.24946672 0.066017032;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 20 ".vt[0:19]"  0.026100464 0 -1.79817402 0.026100464 0 -1.85548818
		 0.026100464 3.5999999 -1.79817402 0.026100464 3.5999999 -1.85548818 -0.026100159 3.5999999 -1.79817402
		 -0.026100159 3.5999999 -1.85548782 -0.026100159 0 -1.79817402 -0.026100159 0 -1.85548782
		 0.026100464 1.79999995 -1.79817402 0.026100464 1.79999995 -1.85548818 -0.026100159 1.79999995 -1.85548782
		 -0.026100159 1.79999995 -1.79817402 -0.026100159 2.70000005 -1.79817402 -0.026100159 2.70000005 -1.85548782
		 0.026100464 2.70000005 -1.85548818 0.026100464 2.70000005 -1.79817402 0.026100464 0.89999998 -1.79817402
		 0.026100464 0.89999998 -1.85548818 -0.026100159 0.89999998 -1.85548782 -0.026100159 0.89999998 -1.79817402;
	setAttr -s 36 ".ed[0:35]"  0 1 0 2 3 0 4 5 0 6 7 0 0 16 0 1 17 0 2 4 0
		 3 5 0 4 12 0 5 13 0 6 0 0 7 1 0 8 15 0 9 14 0 10 18 0 11 19 0 8 9 1 9 10 1 10 11 1
		 11 8 1 12 11 0 13 10 0 14 3 0 15 2 0 12 13 1 13 14 1 14 15 1 15 12 1 16 8 0 17 9 0
		 18 7 0 19 6 0 16 17 1 17 18 1 18 19 1 19 16 1;
	setAttr -s 16 -ch 64 ".fc[0:15]" -type "polyFaces" 
		f 4 16 13 26 -13
		mu 0 4 10 11 18 19
		f 4 24 21 18 -21
		mu 0 4 15 16 12 14
		f 4 17 -22 25 -14
		mu 0 4 11 13 17 18
		f 4 19 12 27 20
		mu 0 4 14 10 19 15
		f 4 32 29 -17 -29
		mu 0 4 20 21 11 10
		f 4 33 -15 -18 -30
		mu 0 4 21 23 13 11
		f 4 -19 14 34 -16
		mu 0 4 14 12 22 24
		f 4 35 28 -20 15
		mu 0 4 24 20 10 14
		f 4 2 9 -25 -9
		mu 0 4 4 5 16 15
		f 4 -26 -10 -8 -23
		mu 0 4 18 17 9 3
		f 4 -27 22 -2 -24
		mu 0 4 19 18 3 2
		f 4 -28 23 6 8
		mu 0 4 15 19 2 4
		f 4 0 5 -33 -5
		mu 0 4 0 1 21 20
		f 4 -12 -31 -34 -6
		mu 0 4 1 8 23 21
		f 4 -35 30 -4 -32
		mu 0 4 24 22 7 6
		f 4 10 4 -36 31
		mu 0 4 6 0 20 24;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 5 
		4 0 
		6 0 
		14 0 
		15 0 
		24 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Wall" -p "Divider";
	rename -uid "9FD857CC-4577-7DBE-C954-F3ADA7EFA96E";
	setAttr ".rp" -type "double3" 6.3480632093160243e-08 1.8 -0.79816861537383177 ;
	setAttr ".sp" -type "double3" 6.3480632093160243e-08 1.8 -0.79816861537383177 ;
createNode mesh -n "WallShape" -p "|Divider|Wall";
	rename -uid "37754D02-4D68-0614-72D5-ED80660D6C5E";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 6 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "back";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "f[2]";
	setAttr ".gtag[1].gtagnm" -type "string" "bottom";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 1 "f[3]";
	setAttr ".gtag[2].gtagnm" -type "string" "front";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 1 "f[0]";
	setAttr ".gtag[3].gtagnm" -type "string" "left";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 1 "f[5]";
	setAttr ".gtag[4].gtagnm" -type "string" "right";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "f[4]";
	setAttr ".gtag[5].gtagnm" -type "string" "top";
	setAttr ".gtag[5].gtagcmp" -type "componentList" 1 "f[1]";
	setAttr ".pv" -type "double2" 0.43498571746916304 0.17123517662686055 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 40 ".uvst[0].uvsp[0:39]" -type "float2" 0.13096991 0.0016863225
		 0.18822949 0.048931196 0.81088775 0.23983282 0.1802519 0.16855766 0.18026069 0.17464752
		 0.13098994 0.12037595 0.46904072 0.0016291915 0.68971956 0.17391269 0.472817 0.0024535051
		 0.69769061 0.055021539 0.46908078 0.23900847 0.46906069 0.12031885 0.81088775 0.12114319
		 0.472817 0.12114319 0.35637048 0.12033787 0.52787018 0.048931494 0.58550727 0.23983276
		 0.58550727 0.12114319 0.51989126 0.16806775 0.35635045 0.0016482351 0.51989996 0.17415762
		 0.24368016 0.12035691 0.35804975 0.048931375 0.69819754 0.23983276 0.69819754 0.12114319
		 0.35007152 0.16831273 0.24366014 0.0016673086 0.35008034 0.17440259 0.69819754 0.0024535349
		 0.58550727 0.0024535349 0.35804975 0.055021241 0.52787018 0.05502142 0.24370019 0.2390465
		 0.35639051 0.23902743 0.68971086 0.16782282 0.472817 0.23983276 0.69769061 0.048931673
		 0.18822943 0.055021062 0.13100994 0.23906551 0.81088775 0.0024535349;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 24 ".vt[0:23]"  0.021494752 0.53739703 1.79817426 0.021494752 3.062602758 1.79817426
		 -0.021494752 3.062602758 1.79817426 -0.021494752 0.53739703 1.79817426 0.021494752 1.79999995 1.79817426
		 0.021494903 0.53739703 -1.79817379 -0.02149437 0.53739703 -1.79817402 -0.02149437 3.062602758 -1.79817402
		 0.021494903 3.062602758 -1.79817379 0.021494903 1.79999995 -1.79817379 -0.021494752 1.79999995 1.79817426
		 -0.02149437 1.79999995 -1.79817402 0.021494854 1.79999995 -0.59939104 0.021494854 3.062602758 -0.59939104
		 -0.021494497 3.062602758 -0.5993911 -0.021494497 1.79999995 -0.5993911 -0.021494497 0.53739703 -0.5993911
		 0.021494854 0.53739703 -0.59939104 0.021494804 1.79999995 0.59939164 0.021494804 3.062602758 0.59939164
		 -0.02149462 3.062602758 0.59939164 -0.02149462 1.79999995 0.59939164 -0.02149462 0.53739703 0.59939164
		 0.021494804 0.53739703 0.59939164;
	setAttr -s 42 ".ed[0:41]"  3 22 0 0 4 0 1 2 0 2 10 0 3 0 0 4 1 0 4 18 1
		 5 6 0 6 11 0 7 8 0 8 9 0 9 5 0 0 23 0 1 19 0 2 20 0 10 3 0 11 7 0 10 21 1 12 9 1
		 13 8 0 12 13 1 14 7 0 13 14 1 15 11 1 14 15 1 16 6 0 15 16 1 17 5 0 16 17 1 17 12 1
		 18 12 1 19 13 0 18 19 1 20 14 0 19 20 1 21 15 1 20 21 1 22 16 0 21 22 1 23 17 0 22 23 1
		 23 18 1;
	setAttr -s 18 -ch 72 ".fc[0:17]" -type "polyFaces" 
		f 4 40 -13 -5 0
		mu 0 4 25 27 4 3
		f 4 17 38 -1 -16
		mu 0 4 12 24 28 39
		f 4 13 34 -15 -3
		mu 0 4 1 22 30 37
		f 4 32 -14 -6 6
		mu 0 4 21 32 38 5
		f 4 41 -7 -2 12
		mu 0 4 26 21 5 0
		f 4 14 36 -18 -4
		mu 0 4 2 23 24 12
		f 4 -11 -20 -21 18
		mu 0 4 11 10 33 14
		f 4 -23 19 -10 -22
		mu 0 4 31 15 36 9
		f 4 -25 21 -17 -24
		mu 0 4 17 16 35 13
		f 4 -27 23 -9 -26
		mu 0 4 29 17 13 8
		f 4 -8 -28 -29 25
		mu 0 4 34 7 20 18
		f 4 -12 -19 -30 27
		mu 0 4 6 11 14 19
		f 4 20 -32 -33 30
		mu 0 4 14 33 32 21
		f 4 -35 31 22 -34
		mu 0 4 30 22 15 31
		f 4 -37 33 24 -36
		mu 0 4 24 23 16 17
		f 4 -39 35 26 -38
		mu 0 4 28 24 17 29
		f 4 28 -40 -41 37
		mu 0 4 18 20 27 25
		f 4 29 -31 -42 39
		mu 0 4 19 14 21 26;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Door";
	rename -uid "7F4C265B-4308-C58B-7E8F-1A8040E1353F";
	setAttr ".rp" -type "double3" 0 1.7999999809265137 0 ;
	setAttr ".sp" -type "double3" 0 1.7999999809265137 0 ;
createNode transform -n "Wall1" -p "|Door";
	rename -uid "CF3D327F-4C7B-82F4-DC97-FB9E2E94AABF";
	setAttr ".rp" -type "double3" 1.3260039754250852 1.8 8.1025405052059792e-10 ;
	setAttr ".sp" -type "double3" 1.3260039754250852 1.8 8.1025405052059792e-10 ;
createNode mesh -n "WallShape1" -p "Wall1";
	rename -uid "A07A02D6-4D8C-3185-90D8-4E920424470A";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.18276546670908919 0.43120528585147055 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 42 ".uvst[0].uvsp[0:41]" -type "float2" 1.039860964 0.4036234
		 0.34470546 0.45136431 0.55180383 0.40379226 0.020834297 0.45143461 0.48066965 0.31117192
		 0.49093863 0.39772338 -0.057981521 0.39791328 0.15680438 0.35160813 -0.057979435
		 0.40400317 0.0028837621 0.40398213 0.0028815269 0.39789224 1.039858699 0.39753351
		 0.55180174 0.39770237 0.79583251 0.4037078 0.18276982 0.45139945 0.31873998 0.3515842
		 0.24691007 0.39780784 0.79583025 0.39761791 0.31873402 0.31119585 0.67381591 0.39766014
		 0.3997018 0.3111839 0.39970776 0.35157222 0.36892435 0.39776561 0.10180202 0.45141703
		 0.67381817 0.40375003 0.91784656 0.4036656 0.12489796 0.40393996 0.2377722 0.35159621
		 0.12489587 0.39785007 0.91784465 0.39757571 0.23776621 0.31120783 0.26373762 0.45138192
		 0.24691215 0.40389773 0.26372892 0.41099358 0.18276106 0.41101116 0.10179326 0.41102871
		 0.020825475 0.4110463 0.36892644 0.4038555 0.49094072 0.4038133 0.3446967 0.41097599
		 0.15679839 0.31121981 0.48067561 0.35156029;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 20 ".vt[0:19]"  1.11006534 0.077352598 0.021494752 1.53971052 0.077352598 0.021494752
		 1.11006534 3.52264738 0.021494752 1.53971052 3.52264738 0.021494752 1.11006534 3.52264738 -0.021494752
		 1.53971052 3.52264738 -0.021494752 1.11006534 0.077352598 -0.021494752 1.53971052 0.077352598 -0.021494752
		 1.11006534 1.79999995 0.021494752 1.53971052 1.79999995 0.021494752 1.53971052 1.79999995 -0.021494752
		 1.11006534 1.79999995 -0.021494752 1.11006534 2.66132379 -0.021494752 1.53971052 2.66132379 -0.021494752
		 1.53971052 2.66132379 0.021494752 1.11006534 2.66132379 0.021494752 1.11006534 0.9386763 0.021494752
		 1.53971052 0.9386763 0.021494752 1.53971052 0.9386763 -0.021494752 1.11006534 0.9386763 -0.021494752;
	setAttr -s 36 ".ed[0:35]"  0 1 0 2 3 0 4 5 0 6 7 0 0 16 0 1 17 0 2 4 0
		 3 5 0 4 12 0 5 13 0 6 0 0 7 1 0 8 15 0 9 14 0 10 18 0 11 19 0 8 9 1 9 10 1 10 11 1
		 11 8 1 12 11 0 13 10 0 14 3 0 15 2 0 12 13 1 13 14 1 14 15 1 15 12 1 16 8 0 17 9 0
		 18 7 0 19 6 0 16 17 1 17 18 1 18 19 1 19 16 1;
	setAttr -s 18 -ch 72 ".fc[0:17]" -type "polyFaces" 
		f 4 16 13 26 -13
		mu 0 4 34 14 23 35
		f 4 1 7 -3 -7
		mu 0 4 2 38 5 12
		f 4 24 21 18 -21
		mu 0 4 20 21 15 18
		f 4 3 11 -1 -11
		mu 0 4 6 10 9 8
		f 4 17 -22 25 -14
		mu 0 4 32 16 22 37
		f 4 19 12 27 20
		mu 0 4 17 13 24 19
		f 4 32 29 -17 -29
		mu 0 4 33 31 14 34
		f 4 33 -15 -18 -30
		mu 0 4 26 28 16 32
		f 4 -19 14 34 -16
		mu 0 4 18 15 27 30
		f 4 35 28 -20 15
		mu 0 4 29 25 13 17
		f 4 2 9 -25 -9
		mu 0 4 4 41 21 20
		f 4 -26 -10 -8 -23
		mu 0 4 37 22 5 38
		f 4 -27 22 -2 -24
		mu 0 4 35 23 3 36
		f 4 -28 23 6 8
		mu 0 4 19 24 2 12
		f 4 0 5 -33 -5
		mu 0 4 39 1 31 33
		f 4 -12 -31 -34 -6
		mu 0 4 9 10 28 26
		f 4 -35 30 -4 -32
		mu 0 4 30 27 7 40
		f 4 10 4 -36 31
		mu 0 4 11 0 25 29;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 6 
		2 0 
		5 0 
		9 0 
		10 0 
		12 0 
		38 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Door" -p "|Door";
	rename -uid "91F7B755-4C4C-8654-4AE8-D0A75ED3F8F8";
	setAttr ".rp" -type "double3" -1.0987171936035316 1.8000000000000007 8.1025405052059792e-10 ;
	setAttr ".sp" -type "double3" -1.0987171936035338 1.7999999999999838 8.1025405052059792e-10 ;
createNode mesh -n "DoorShape" -p "|Door|Door";
	rename -uid "4740DA3A-4763-18DD-2725-37B8E0D309CC";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.51489916443824768 0.12042926996946335 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 36 ".uvst[0].uvsp[0:35]" -type "float2" 0.41144797 0.0017311126
		 0.61839223 0.0017677024 0.23271851 0.11852115 0.61835015 0.23912743 0.41143551 0.23913702
		 0.20449132 0.23914322 0.49835208 0.11404222 0.20448434 0.0017833933 0.49835137 0.11856437
		 0.72994566 0.1186021 0.72994649 0.11407995 0.99557912 0.11412323 0.23271923 0.11399895
		 0.51492012 0.0017494038 0.61414856 0.11858326 0.30795643 0.0017803758 0.30796349
		 0.23914015 0.51487809 0.23910908 0.36553493 0.11854273 0.51489913 0.12042923 0.86276209
		 0.11862373 0.20448788 0.12046333 0.86276281 0.11410159 0.30795988 0.12046025 0.36553568
		 0.11402059 0.41143203 0.12045718 0.41142696 0.12041094 0.4114061 0.23909086 0.61837107
		 0.12044754 0.0011242472 0.11848342 0.99557841 0.11864537 0.11692141 0.11850226 0.11692213
		 0.11398011 0.0011249625 0.11396122 0.61414927 0.11406106 0.41142848 0.0017773435;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 18 ".vt[0:17]"  -1.098717332 0.53739703 0.021494752 1.10290587 0.53739703 0.021494752
		 -1.098717332 3.062602758 0.021494752 1.10290587 3.062602758 0.021494752 -1.098717332 3.062602758 -0.021494752
		 1.10290587 3.062602758 -0.021494752 -1.098717332 0.53739703 -0.021494752 1.10290587 0.53739703 -0.021494752
		 0.0020942688 0.53739703 0.021494752 0.0020942688 0.53739703 -0.021494752 0.0020942688 3.062602758 -0.021494752
		 0.0020942688 3.062602758 0.021494752 -1.098717332 1.79999995 0.021494752 0.0020942688 1.79999995 0.021494752
		 1.10290587 1.79999995 0.021494752 1.10290587 1.79999995 -0.021494752 0.0020942688 1.79999995 -0.021494752
		 -1.098717332 1.79999995 -0.021494752;
	setAttr -s 32 ".ed[0:31]"  0 8 0 2 11 0 4 10 0 6 9 0 1 14 0 2 4 0 3 5 0
		 5 15 0 6 0 0 7 1 0 8 1 0 9 7 0 10 5 0 11 3 0 8 9 1 9 16 1 10 11 1 11 13 1 12 13 1
		 13 14 1 14 15 1 15 16 1 16 17 1 17 12 1 4 17 0 16 10 1 14 3 0 12 2 0 0 12 0 13 8 1
		 15 7 0 17 6 0;
	setAttr -s 16 -ch 64 ".fc[0:15]" -type "polyFaces" 
		f 4 19 26 -14 17
		mu 0 4 19 28 3 17
		f 4 16 13 6 -13
		mu 0 4 32 31 29 33
		f 4 21 25 12 7
		mu 0 4 21 23 16 5
		f 4 14 11 9 -11
		mu 0 4 14 34 10 9
		f 4 20 -8 -7 -27
		mu 0 4 20 22 11 30
		f 4 24 23 27 5
		mu 0 4 12 24 18 2
		f 4 3 -15 -1 -9
		mu 0 4 6 34 14 8
		f 4 22 -25 2 -26
		mu 0 4 23 25 4 16
		f 4 1 -17 -3 -6
		mu 0 4 2 31 32 12
		f 4 18 -18 -2 -28
		mu 0 4 26 19 17 27
		f 4 -19 -29 0 -30
		mu 0 4 19 26 0 13
		f 4 -20 29 10 4
		mu 0 4 28 19 13 1
		f 4 -21 -5 -10 -31
		mu 0 4 22 20 9 10
		f 4 -22 30 -12 15
		mu 0 4 23 21 7 15
		f 4 -23 -16 -4 -32
		mu 0 4 25 23 15 35
		f 4 28 -24 31 8
		mu 0 4 8 18 24 6;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 6 
		2 0 
		6 0 
		8 0 
		9 0 
		10 0 
		12 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Wall" -p "|Door";
	rename -uid "C7B8512E-429B-3787-C85C-20BEDD817199";
	setAttr ".rp" -type "double3" -1.3237722136560734 1.8 8.1025405052059792e-10 ;
	setAttr ".sp" -type "double3" -1.3237722136560734 1.8 8.1025405052059792e-10 ;
createNode mesh -n "WallShape" -p "|Door|Wall";
	rename -uid "E0CFB5A5-48BE-0803-0C23-EAADDCAA50AF";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.71712037920951843 0.43112221360206604 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 42 ".uvst[0].uvsp[0:41]" -type "float2" 0.01394961 0.37118974
		 0.87906027 0.45128122 0.50199282 0.37121037 0.55518925 0.45135155 0.87479138 0.31313789
		 0.56285393 0.37730268 0.013949461 0.37727931 0.55092609 0.3535741 -0.046911679 0.371187
		 1.050897002 0.37732354 0.50199252 0.37730005 0.25797126 0.3712 0.71712482 0.45131639
		 0.71286172 0.3535502 0.80687565 0.37731305 0.25797099 0.37728968 0.71285576 0.31316185
		 0.37998176 0.37729481 0.79382354 0.31314987 0.7938295 0.35353822 0.6848647 0.3773078
		 0.63615698 0.45133397 0.37998205 0.37120524 0.13596046 0.37119487 0.92888665 0.37122849
		 0.63189393 0.35356212 0.92888635 0.37731829 0.13596016 0.37728444 0.63188797 0.31317383
		 0.7980926 0.4512988 0.80687577 0.37122336 0.79808378 0.41091046 0.717116 0.41092804
		 0.63614821 0.41094562 0.55518049 0.41096327 0.68486494 0.37121823 0.56285417 0.37121299
		 1.05089736 0.37123373 0.87905157 0.41089287 0.55092013 0.31318581 -0.046911977 0.37727669
		 0.87479734 0.35352623;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 20 ".vt[0:19]"  -1.539711 0.077352598 0.021494752 -1.11006558 0.077352598 0.021494752
		 -1.539711 3.52264738 0.021494752 -1.11006558 3.52264738 0.021494752 -1.539711 3.52264738 -0.021494752
		 -1.11006558 3.52264738 -0.021494752 -1.539711 0.077352598 -0.021494752 -1.11006558 0.077352598 -0.021494752
		 -1.539711 1.79999995 0.021494752 -1.11006558 1.79999995 0.021494752 -1.11006558 1.79999995 -0.021494752
		 -1.539711 1.79999995 -0.021494752 -1.539711 2.66132379 -0.021494752 -1.11006558 2.66132379 -0.021494752
		 -1.11006558 2.66132379 0.021494752 -1.539711 2.66132379 0.021494752 -1.539711 0.9386763 0.021494752
		 -1.11006558 0.9386763 0.021494752 -1.11006558 0.9386763 -0.021494752 -1.539711 0.9386763 -0.021494752;
	setAttr -s 36 ".ed[0:35]"  0 1 0 2 3 0 4 5 0 6 7 0 0 16 0 1 17 0 2 4 0
		 3 5 0 4 12 0 5 13 0 6 0 0 7 1 0 8 15 0 9 14 0 10 18 0 11 19 0 8 9 1 9 10 1 10 11 1
		 11 8 1 12 11 0 13 10 0 14 3 0 15 2 0 12 13 1 13 14 1 14 15 1 15 12 1 16 8 0 17 9 0
		 18 7 0 19 6 0 16 17 1 17 18 1 18 19 1 19 16 1;
	setAttr -s 18 -ch 72 ".fc[0:17]" -type "polyFaces" 
		f 4 16 13 26 -13
		mu 0 4 32 12 21 33
		f 4 1 7 -3 -7
		mu 0 4 2 36 5 10
		f 4 24 21 18 -21
		mu 0 4 18 19 13 16
		f 4 3 11 -1 -11
		mu 0 4 6 40 8 0
		f 4 17 -22 25 -14
		mu 0 4 30 14 20 35
		f 4 19 12 27 20
		mu 0 4 15 11 22 17
		f 4 32 29 -17 -29
		mu 0 4 31 29 12 32
		f 4 33 -15 -18 -30
		mu 0 4 24 26 14 30
		f 4 -19 14 34 -16
		mu 0 4 16 13 25 28
		f 4 35 28 -20 15
		mu 0 4 27 23 11 15
		f 4 2 9 -25 -9
		mu 0 4 4 41 19 18
		f 4 -26 -10 -8 -23
		mu 0 4 35 20 5 36
		f 4 -27 22 -2 -24
		mu 0 4 33 21 3 34
		f 4 -28 23 6 8
		mu 0 4 17 22 2 10
		f 4 0 5 -33 -5
		mu 0 4 38 1 29 31
		f 4 -12 -31 -34 -6
		mu 0 4 37 9 26 24
		f 4 -35 30 -4 -32
		mu 0 4 28 25 7 39
		f 4 10 4 -36 31
		mu 0 4 6 0 23 27;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 6 
		0 0 
		2 0 
		5 0 
		6 0 
		10 0 
		36 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode lightLinker -s -n "lightLinker1";
	rename -uid "5B78CD64-4EFD-6A0C-D254-5089AF0E97A1";
	setAttr -s 7 ".lnk";
	setAttr -s 7 ".slnk";
createNode shapeEditorManager -n "shapeEditorManager";
	rename -uid "EF846ECE-423E-07F7-7387-A6B0B375B471";
createNode poseInterpolatorManager -n "poseInterpolatorManager";
	rename -uid "21643F2B-469F-2904-6749-198CED585752";
createNode displayLayerManager -n "layerManager";
	rename -uid "E0F360DA-4F88-71F5-D1FA-EDAB9F260210";
	setAttr -s 3 ".dli[1:2]"  1 2;
	setAttr -s 3 ".dli";
createNode displayLayer -n "defaultLayer";
	rename -uid "F8780264-4F31-9EE3-8571-A8B638709228";
createNode renderLayerManager -n "renderLayerManager";
	rename -uid "3E2A51C2-4571-1B16-7270-DFAC385643BD";
createNode renderLayer -n "defaultRenderLayer";
	rename -uid "558DAC29-4EDA-CAF4-BBAC-ECB7F5C2CD06";
	setAttr ".g" yes;
createNode phong -n "M_DarkBlueGrey";
	rename -uid "C5116340-4DC2-F220-F68C-2498DA6B1DC9";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "StallsSG";
	rename -uid "EE9ABD55-4BBB-EB40-518E-BE9A19C18F29";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo1";
	rename -uid "B949A4A3-496D-9247-5DAB-B2BFDA0A5D7B";
createNode phong -n "WorldGridMaterial";
	rename -uid "D63713FF-4DC0-5F78-FD8A-E59BCEAEAF6C";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "StallsSG1";
	rename -uid "5382D98E-4987-69D4-8474-82A2DE769F7B";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo2";
	rename -uid "3B2009C7-4954-1E61-477D-BD9C4E194993";
createNode groupId -n "groupId1";
	rename -uid "8F85E1D2-4BCC-8C7F-BDED-129EC2A2A2DD";
	setAttr ".ihi" 0;
createNode groupId -n "groupId2";
	rename -uid "529164E0-49B6-D795-4B48-7F8D3C804E85";
	setAttr ".ihi" 0;
createNode displayLayer -n "layer1";
	rename -uid "2537492C-4C5B-2CA8-FE8F-18AAE2EA2F36";
	setAttr ".dt" 1;
	setAttr ".do" 1;
createNode displayLayer -n "layer2";
	rename -uid "F3B61B1C-4039-0B7D-379E-F8B35F30EE63";
	setAttr ".dt" 1;
	setAttr ".do" 2;
createNode script -n "uiConfigurationScriptNode";
	rename -uid "B8816BBC-456D-665D-75F5-398983597633";
	setAttr ".b" -type "string" (
		"// Maya Mel UI Configuration File.\n//\n//  This script is machine generated.  Edit at your own risk.\n//\n//\n\nglobal string $gMainPane;\nif (`paneLayout -exists $gMainPane`) {\n\n\tglobal int $gUseScenePanelConfig;\n\tint    $useSceneConfig = $gUseScenePanelConfig;\n\tint    $nodeEditorPanelVisible = stringArrayContains(\"nodeEditorPanel1\", `getPanel -vis`);\n\tint    $nodeEditorWorkspaceControlOpen = (`workspaceControl -exists nodeEditorPanel1Window` && `workspaceControl -q -visible nodeEditorPanel1Window`);\n\tint    $menusOkayInPanels = `optionVar -q allowMenusInPanels`;\n\tint    $nVisPanes = `paneLayout -q -nvp $gMainPane`;\n\tint    $nPanes = 0;\n\tstring $editorName;\n\tstring $panelName;\n\tstring $itemFilterName;\n\tstring $panelConfig;\n\n\t//\n\t//  get current state of the UI\n\t//\n\tsceneUIReplacement -update $gMainPane;\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Top View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Top View\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"|top|topShape\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n"
		+ "            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n"
		+ "            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1\n            -height 1\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n"
		+ "\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Side View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Side View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"|side|sideShape\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n"
		+ "            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n"
		+ "            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1\n            -height 1\n"
		+ "            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Front View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Front View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"|front|frontShape\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n"
		+ "            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n"
		+ "            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n"
		+ "            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1\n            -height 1\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Persp View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"|persp|perspShape\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n"
		+ "            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 1\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n"
		+ "            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n"
		+ "            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 623\n            -height 851\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"ToggledOutliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n"
		+ "\t\toutlinerPanel -edit -l (localizedPanelLabel(\"ToggledOutliner\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        outlinerEditor -e \n            -docTag \"isolOutln_fromSeln\" \n            -showShapes 0\n            -showAssignedMaterials 0\n            -showTimeEditor 1\n            -showReferenceNodes 1\n            -showReferenceMembers 1\n            -showAttributes 0\n            -showConnected 0\n            -showAnimCurvesOnly 0\n            -showMuteInfo 0\n            -organizeByLayer 1\n            -organizeByClip 1\n            -showAnimLayerWeight 1\n            -autoExpandLayers 1\n            -autoExpand 0\n            -showDagOnly 1\n            -showAssets 1\n            -showContainedOnly 1\n            -showPublishedAsConnected 0\n            -showParentContainers 0\n            -showContainerContents 1\n            -ignoreDagHierarchy 0\n            -expandConnections 0\n            -showUpstreamCurves 1\n            -showUnitlessCurves 1\n            -showCompounds 1\n            -showLeafs 1\n"
		+ "            -showNumericAttrsOnly 0\n            -highlightActive 1\n            -autoSelectNewObjects 0\n            -doNotSelectNewObjects 0\n            -dropIsParent 1\n            -transmitFilters 0\n            -setFilter \"defaultSetFilter\" \n            -showSetMembers 1\n            -allowMultiSelection 1\n            -alwaysToggleSelect 0\n            -directSelect 0\n            -isSet 0\n            -isSetMember 0\n            -displayMode \"DAG\" \n            -expandObjects 0\n            -setsIgnoreFilters 1\n            -containersIgnoreFilters 0\n            -editAttrName 0\n            -showAttrValues 0\n            -highlightSecondary 0\n            -showUVAttrsOnly 0\n            -showTextureNodesOnly 0\n            -attrAlphaOrder \"default\" \n            -animLayerFilterOptions \"allAffecting\" \n            -sortOrder \"none\" \n            -longNames 0\n            -niceNames 1\n            -showNamespace 1\n            -showPinIcons 0\n            -mapMotionTrails 0\n            -ignoreHiddenAttribute 0\n            -ignoreOutlinerColor 0\n"
		+ "            -renderFilterVisible 0\n            -renderFilterIndex 0\n            -selectionOrder \"chronological\" \n            -expandAttribute 0\n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"Outliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"Outliner\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        outlinerEditor -e \n            -showShapes 0\n            -showAssignedMaterials 0\n            -showTimeEditor 1\n            -showReferenceNodes 0\n            -showReferenceMembers 0\n            -showAttributes 0\n            -showConnected 0\n            -showAnimCurvesOnly 0\n            -showMuteInfo 0\n            -organizeByLayer 1\n            -organizeByClip 1\n            -showAnimLayerWeight 1\n            -autoExpandLayers 1\n            -autoExpand 0\n            -showDagOnly 1\n            -showAssets 1\n"
		+ "            -showContainedOnly 1\n            -showPublishedAsConnected 0\n            -showParentContainers 0\n            -showContainerContents 1\n            -ignoreDagHierarchy 0\n            -expandConnections 0\n            -showUpstreamCurves 1\n            -showUnitlessCurves 1\n            -showCompounds 1\n            -showLeafs 1\n            -showNumericAttrsOnly 0\n            -highlightActive 1\n            -autoSelectNewObjects 0\n            -doNotSelectNewObjects 0\n            -dropIsParent 1\n            -transmitFilters 0\n            -setFilter \"defaultSetFilter\" \n            -showSetMembers 1\n            -allowMultiSelection 1\n            -alwaysToggleSelect 0\n            -directSelect 0\n            -displayMode \"DAG\" \n            -expandObjects 0\n            -setsIgnoreFilters 1\n            -containersIgnoreFilters 0\n            -editAttrName 0\n            -showAttrValues 0\n            -highlightSecondary 0\n            -showUVAttrsOnly 0\n            -showTextureNodesOnly 0\n            -attrAlphaOrder \"default\" \n"
		+ "            -animLayerFilterOptions \"allAffecting\" \n            -sortOrder \"none\" \n            -longNames 0\n            -niceNames 1\n            -showNamespace 1\n            -showPinIcons 0\n            -mapMotionTrails 0\n            -ignoreHiddenAttribute 0\n            -ignoreOutlinerColor 0\n            -renderFilterVisible 0\n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"graphEditor\" (localizedPanelLabel(\"Graph Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Graph Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showAssignedMaterials 0\n                -showTimeEditor 1\n                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n"
		+ "                -showMuteInfo 0\n                -organizeByLayer 1\n                -organizeByClip 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 1\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showParentContainers 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 1\n                -showCompounds 0\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 1\n                -doNotSelectNewObjects 0\n                -dropIsParent 1\n                -transmitFilters 1\n                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n                -directSelect 0\n"
		+ "                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 1\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                -ignoreOutlinerColor 0\n                -renderFilterVisible 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"GraphEd\");\n            animCurveEditor -e \n                -displayValues 0\n                -snapTime \"integer\" \n                -snapValue \"none\" \n                -showPlayRangeShades \"on\" \n                -lockPlayRangeShades \"off\" \n"
		+ "                -smoothness \"fine\" \n                -resultSamples 1\n                -resultScreenSamples 0\n                -resultUpdate \"delayed\" \n                -showUpstreamCurves 1\n                -keyMinScale 1\n                -stackedCurvesMin -1\n                -stackedCurvesMax 1\n                -stackedCurvesSpace 0.2\n                -preSelectionHighlight 0\n                -constrainDrag 0\n                -valueLinesToggle 1\n                -highlightAffectedCurves 0\n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dopeSheetPanel\" (localizedPanelLabel(\"Dope Sheet\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Dope Sheet\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"OutlineEd\");\n            outlinerEditor -e \n                -showShapes 1\n                -showAssignedMaterials 0\n                -showTimeEditor 1\n"
		+ "                -showReferenceNodes 0\n                -showReferenceMembers 0\n                -showAttributes 1\n                -showConnected 1\n                -showAnimCurvesOnly 1\n                -showMuteInfo 0\n                -organizeByLayer 1\n                -organizeByClip 1\n                -showAnimLayerWeight 1\n                -autoExpandLayers 1\n                -autoExpand 0\n                -showDagOnly 0\n                -showAssets 1\n                -showContainedOnly 0\n                -showPublishedAsConnected 0\n                -showParentContainers 0\n                -showContainerContents 0\n                -ignoreDagHierarchy 0\n                -expandConnections 1\n                -showUpstreamCurves 1\n                -showUnitlessCurves 0\n                -showCompounds 1\n                -showLeafs 1\n                -showNumericAttrsOnly 1\n                -highlightActive 0\n                -autoSelectNewObjects 0\n                -doNotSelectNewObjects 1\n                -dropIsParent 1\n                -transmitFilters 0\n"
		+ "                -setFilter \"0\" \n                -showSetMembers 0\n                -allowMultiSelection 1\n                -alwaysToggleSelect 0\n                -directSelect 0\n                -displayMode \"DAG\" \n                -expandObjects 0\n                -setsIgnoreFilters 1\n                -containersIgnoreFilters 0\n                -editAttrName 0\n                -showAttrValues 0\n                -highlightSecondary 0\n                -showUVAttrsOnly 0\n                -showTextureNodesOnly 0\n                -attrAlphaOrder \"default\" \n                -animLayerFilterOptions \"allAffecting\" \n                -sortOrder \"none\" \n                -longNames 0\n                -niceNames 1\n                -showNamespace 1\n                -showPinIcons 0\n                -mapMotionTrails 1\n                -ignoreHiddenAttribute 0\n                -ignoreOutlinerColor 0\n                -renderFilterVisible 0\n                $editorName;\n\n\t\t\t$editorName = ($panelName+\"DopeSheetEd\");\n            dopeSheetEditor -e \n                -displayValues 0\n"
		+ "                -snapTime \"integer\" \n                -snapValue \"none\" \n                -outliner \"dopeSheetPanel1OutlineEd\" \n                -showSummary 1\n                -showScene 0\n                -hierarchyBelow 0\n                -showTicks 1\n                -selectionWindow 0 0 0 0 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"timeEditorPanel\" (localizedPanelLabel(\"Time Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Time Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"clipEditorPanel\" (localizedPanelLabel(\"Trax Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Trax Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = clipEditorNameFromPanel($panelName);\n"
		+ "            clipEditor -e \n                -displayValues 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n                -initialized 0\n                -manageSequencer 0 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"sequenceEditorPanel\" (localizedPanelLabel(\"Camera Sequencer\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Camera Sequencer\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = sequenceEditorNameFromPanel($panelName);\n            clipEditor -e \n                -displayValues 0\n                -snapTime \"none\" \n                -snapValue \"none\" \n                -initialized 0\n                -manageSequencer 1 \n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"hyperGraphPanel\" (localizedPanelLabel(\"Hypergraph Hierarchy\")) `;\n"
		+ "\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Hypergraph Hierarchy\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"HyperGraphEd\");\n            hyperGraph -e \n                -graphLayoutStyle \"hierarchicalLayout\" \n                -orientation \"horiz\" \n                -mergeConnections 0\n                -zoom 1\n                -animateTransition 0\n                -showRelationships 1\n                -showShapes 0\n                -showDeformers 0\n                -showExpressions 0\n                -showConstraints 0\n                -showConnectionFromSelected 0\n                -showConnectionToSelected 0\n                -showConstraintLabels 0\n                -showUnderworld 0\n                -showInvisible 0\n                -transitionFrames 1\n                -opaqueContainers 0\n                -freeform 0\n                -imagePosition 0 0 \n                -imageScale 1\n                -imageEnabled 0\n                -graphType \"DAG\" \n"
		+ "                -heatMapDisplay 0\n                -updateSelection 1\n                -updateNodeAdded 1\n                -useDrawOverrideColor 0\n                -limitGraphTraversal -1\n                -range 0 0 \n                -iconSize \"smallIcons\" \n                -showCachedConnections 0\n                $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"hyperShadePanel\" (localizedPanelLabel(\"Hypershade\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Hypershade\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"visorPanel\" (localizedPanelLabel(\"Visor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Visor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n"
		+ "\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"nodeEditorPanel\" (localizedPanelLabel(\"Node Editor\")) `;\n\tif ($nodeEditorPanelVisible || $nodeEditorWorkspaceControlOpen) {\n\t\tif (\"\" == $panelName) {\n\t\t\tif ($useSceneConfig) {\n\t\t\t\t$panelName = `scriptedPanel -unParent  -type \"nodeEditorPanel\" -l (localizedPanelLabel(\"Node Editor\")) -mbv $menusOkayInPanels `;\n\n\t\t\t$editorName = ($panelName+\"NodeEditorEd\");\n            nodeEditor -e \n                -allAttributes 0\n                -allNodes 0\n                -autoSizeNodes 1\n                -consistentNameSize 1\n                -createNodeCommand \"nodeEdCreateNodeCommand\" \n                -connectNodeOnCreation 0\n                -connectOnDrop 0\n                -copyConnectionsOnPaste 0\n                -connectionStyle \"bezier\" \n                -defaultPinnedState 0\n                -additiveGraphingMode 0\n                -settingsChangedCallback \"nodeEdSyncControls\" \n                -traversalDepthLimit -1\n                -keyPressCommand \"nodeEdKeyPressCommand\" \n"
		+ "                -nodeTitleMode \"name\" \n                -gridSnap 0\n                -gridVisibility 1\n                -crosshairOnEdgeDragging 0\n                -popupMenuScript \"nodeEdBuildPanelMenus\" \n                -showNamespace 1\n                -showShapes 1\n                -showSGShapes 0\n                -showTransforms 1\n                -useAssets 1\n                -syncedSelection 1\n                -extendToShapes 1\n                -editorMode \"default\" \n                -hasWatchpoint 0\n                $editorName;\n\t\t\t}\n\t\t} else {\n\t\t\t$label = `panel -q -label $panelName`;\n\t\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Node Editor\")) -mbv $menusOkayInPanels  $panelName;\n\n\t\t\t$editorName = ($panelName+\"NodeEditorEd\");\n            nodeEditor -e \n                -allAttributes 0\n                -allNodes 0\n                -autoSizeNodes 1\n                -consistentNameSize 1\n                -createNodeCommand \"nodeEdCreateNodeCommand\" \n                -connectNodeOnCreation 0\n                -connectOnDrop 0\n"
		+ "                -copyConnectionsOnPaste 0\n                -connectionStyle \"bezier\" \n                -defaultPinnedState 0\n                -additiveGraphingMode 0\n                -settingsChangedCallback \"nodeEdSyncControls\" \n                -traversalDepthLimit -1\n                -keyPressCommand \"nodeEdKeyPressCommand\" \n                -nodeTitleMode \"name\" \n                -gridSnap 0\n                -gridVisibility 1\n                -crosshairOnEdgeDragging 0\n                -popupMenuScript \"nodeEdBuildPanelMenus\" \n                -showNamespace 1\n                -showShapes 1\n                -showSGShapes 0\n                -showTransforms 1\n                -useAssets 1\n                -syncedSelection 1\n                -extendToShapes 1\n                -editorMode \"default\" \n                -hasWatchpoint 0\n                $editorName;\n\t\t\tif (!$useSceneConfig) {\n\t\t\t\tpanel -e -l $label $panelName;\n\t\t\t}\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"createNodePanel\" (localizedPanelLabel(\"Create Node\")) `;\n"
		+ "\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Create Node\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"polyTexturePlacementPanel\" (localizedPanelLabel(\"UV Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"UV Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"renderWindowPanel\" (localizedPanelLabel(\"Render View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Render View\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"shapePanel\" (localizedPanelLabel(\"Shape Editor\")) `;\n"
		+ "\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tshapePanel -edit -l (localizedPanelLabel(\"Shape Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"posePanel\" (localizedPanelLabel(\"Pose Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tposePanel -edit -l (localizedPanelLabel(\"Pose Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dynRelEdPanel\" (localizedPanelLabel(\"Dynamic Relationships\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Dynamic Relationships\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"relationshipPanel\" (localizedPanelLabel(\"Relationship Editor\")) `;\n"
		+ "\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Relationship Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"referenceEditorPanel\" (localizedPanelLabel(\"Reference Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Reference Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"componentEditorPanel\" (localizedPanelLabel(\"Component Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Component Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"dynPaintScriptedPanelType\" (localizedPanelLabel(\"Paint Effects\")) `;\n"
		+ "\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Paint Effects\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"scriptEditorPanel\" (localizedPanelLabel(\"Script Editor\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Script Editor\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"profilerPanel\" (localizedPanelLabel(\"Profiler Tool\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Profiler Tool\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"contentBrowserPanel\" (localizedPanelLabel(\"Content Browser\")) `;\n"
		+ "\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Content Browser\")) -mbv $menusOkayInPanels  $panelName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextScriptedPanel \"Stereo\" (localizedPanelLabel(\"Stereo\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tscriptedPanel -edit -l (localizedPanelLabel(\"Stereo\")) -mbv $menusOkayInPanels  $panelName;\n{ string $editorName = ($panelName+\"Editor\");\n            stereoCameraView -e \n                -camera \"|persp|perspShape\" \n                -useInteractiveMode 0\n                -displayLights \"default\" \n                -displayAppearance \"smoothShaded\" \n                -activeOnly 0\n                -ignorePanZoom 0\n                -wireframeOnShaded 0\n                -headsUpDisplay 1\n                -holdOuts 1\n                -selectionHiliteDisplay 1\n                -useDefaultMaterial 0\n                -bufferMode \"double\" \n"
		+ "                -twoSidedLighting 0\n                -backfaceCulling 0\n                -xray 0\n                -jointXray 0\n                -activeComponentsXray 0\n                -displayTextures 0\n                -smoothWireframe 0\n                -lineWidth 1\n                -textureAnisotropic 0\n                -textureHilight 1\n                -textureSampling 2\n                -textureDisplay \"modulate\" \n                -textureMaxSize 32768\n                -fogging 0\n                -fogSource \"fragment\" \n                -fogMode \"linear\" \n                -fogStart 0\n                -fogEnd 100\n                -fogDensity 0.1\n                -fogColor 0.5 0.5 0.5 1 \n                -depthOfFieldPreview 1\n                -maxConstantTransparency 1\n                -objectFilterShowInHUD 1\n                -isFiltered 0\n                -colorResolution 4 4 \n                -bumpResolution 4 4 \n                -textureCompression 0\n                -transparencyAlgorithm \"frontAndBackCull\" \n                -transpInShadows 0\n"
		+ "                -cullingOverride \"none\" \n                -lowQualityLighting 0\n                -maximumNumHardwareLights 0\n                -occlusionCulling 0\n                -shadingModel 0\n                -useBaseRenderer 0\n                -useReducedRenderer 0\n                -smallObjectCulling 0\n                -smallObjectThreshold -1 \n                -interactiveDisableShadows 0\n                -interactiveBackFaceCull 0\n                -sortTransparent 1\n                -controllers 1\n                -nurbsCurves 1\n                -nurbsSurfaces 1\n                -polymeshes 1\n                -subdivSurfaces 1\n                -planes 1\n                -lights 1\n                -cameras 1\n                -controlVertices 1\n                -hulls 1\n                -grid 1\n                -imagePlane 1\n                -joints 1\n                -ikHandles 1\n                -deformers 1\n                -dynamics 1\n                -particleInstancers 1\n                -fluids 1\n                -hairSystems 1\n"
		+ "                -follicles 1\n                -nCloths 1\n                -nParticles 1\n                -nRigids 1\n                -dynamicConstraints 1\n                -locators 1\n                -manipulators 1\n                -pluginShapes 1\n                -dimensions 1\n                -handles 1\n                -pivots 1\n                -textures 1\n                -strokes 1\n                -motionTrails 1\n                -clipGhosts 1\n                -greasePencils 1\n                -shadows 0\n                -captureSequenceNumber -1\n                -width 0\n                -height 0\n                -sceneRenderFilter 0\n                -displayMode \"centerEye\" \n                -viewColor 0 0 0 1 \n                -useCustomBackground 1\n                $editorName;\n            stereoCameraView -e -viewSelected 0 $editorName;\n            stereoCameraView -e \n                -pluginObjects \"gpuCacheDisplayFilter\" 1 \n                $editorName; };\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n"
		+ "\t}\n\n\n\tif ($useSceneConfig) {\n        string $configName = `getPanel -cwl (localizedPanelLabel(\"Current Layout\"))`;\n        if (\"\" != $configName) {\n\t\t\tpanelConfiguration -edit -label (localizedPanelLabel(\"Current Layout\")) \n\t\t\t\t-userCreated false\n\t\t\t\t-defaultImage \"vacantCell.xP:/\"\n\t\t\t\t-image \"\"\n\t\t\t\t-sc false\n\t\t\t\t-configString \"global string $gMainPane; paneLayout -e -cn \\\"single\\\" -ps 1 100 100 $gMainPane;\"\n\t\t\t\t-removeAllPanels\n\t\t\t\t-ap false\n\t\t\t\t\t(localizedPanelLabel(\"Persp View\")) \n\t\t\t\t\t\"modelPanel\"\n"
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 1\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 623\\n    -height 851\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 1\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 1\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 623\\n    -height 851\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t$configName;\n\n            setNamedPanelLayout (localizedPanelLabel(\"Current Layout\"));\n        }\n\n        panelHistory -e -clear mainPanelHistory;\n        sceneUIReplacement -clear;\n\t}\n\n\ngrid -spacing 5 -size 12 -divisions 5 -displayAxes yes -displayGridLines yes -displayDivisionLines yes -displayPerspectiveLabels no -displayOrthographicLabels no -displayAxesBold yes -perspectiveLabelPosition axis -orthographicLabelPosition edge;\nviewManip -drawCompass 0 -compassAngle 0 -frontParameters \"\" -homeParameters \"\" -selectionLockParameters \"\";\n}\n");
	setAttr ".st" 3;
createNode script -n "sceneConfigurationScriptNode";
	rename -uid "EEC6F212-4A3C-BF61-E684-49ABC9DE6655";
	setAttr ".b" -type "string" "playbackOptions -min 0 -max 120 -ast 0 -aet 200 ";
	setAttr ".st" 6;
createNode gameFbxExporter -n "gameExporterPreset1";
	rename -uid "B16E7679-4A88-0EF5-456F-63BADFE57AC4";
	setAttr ".pn" -type "string" "Model Default";
	setAttr ".ils" yes;
	setAttr ".ilu" yes;
	setAttr ".esi" 2;
	setAttr ".ebm" yes;
	setAttr ".inc" yes;
	setAttr ".fv" -type "string" "FBX201800";
	setAttr ".exp" -type "string" "Z:/UE4 Projects/Cavalry/Maya Project Files//Env/Exports/BathroomStall";
	setAttr ".exf" -type "string" "BathroomStall_01_SM_Low";
createNode gameFbxExporter -n "gameExporterPreset2";
	rename -uid "A8788A18-46A9-6747-61C0-3C8E24DC988E";
	setAttr ".pn" -type "string" "Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 2;
	setAttr ".spt" 2;
	setAttr ".ic" no;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode gameFbxExporter -n "gameExporterPreset3";
	rename -uid "21FDF284-46CB-3C3F-56D8-33B0E337FD21";
	setAttr ".pn" -type "string" "TE Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 3;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode lambert -n "Chrome_TS";
	rename -uid "6A7A9FE2-4E72-41D5-9E67-7BBCEB4C4C20";
createNode shadingEngine -n "lambert2SG";
	rename -uid "6A70B325-4395-DE80-A702-819A6015F8BA";
	setAttr ".ihi" 0;
	setAttr -s 2 ".dsm";
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo3";
	rename -uid "8780CEC7-485D-B085-BC57-8C87773F02DA";
createNode lambert -n "Metal_TS";
	rename -uid "9670EEC0-4C47-34D6-8249-AAA000E835A3";
createNode shadingEngine -n "lambert3SG";
	rename -uid "9C46C6B8-4A54-FD1D-EDAE-809D5895134D";
	setAttr ".ihi" 0;
	setAttr -s 5 ".dsm";
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo4";
	rename -uid "3178CCF7-4C0F-67B1-00C9-489EDBBBC2F5";
createNode lambert -n "lambert4";
	rename -uid "47317091-4EC5-A7BB-5666-ECA9B7E4A48E";
createNode shadingEngine -n "lambert4SG";
	rename -uid "96D482EB-43FD-5F14-70A7-7F9CA5D3B8DC";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo5";
	rename -uid "D9180661-47AB-08E4-5590-47A7985C332E";
createNode file -n "Metal";
	rename -uid "A6134BB0-49D7-8622-E85A-A9B74800CF6C";
	setAttr ".ftn" -type "string" "Z:/UE4 Projects/Cavalry/Maya Project Files//Trimsheets/Metal/Texture/OcclusionRoughnessMetallic.png";
	setAttr ".cs" -type "string" "sRGB";
createNode place2dTexture -n "place2dTexture1";
	rename -uid "5EDBE0DC-4CC5-0277-84A4-CAAFC0BFF485";
createNode file -n "file1";
	rename -uid "B3E62830-44DE-18F1-E66D-F3923EF3A6FA";
	setAttr ".ftn" -type "string" "Z:/UE4 Projects/Cavalry/Maya Project Files//Trimsheets/Metal/Texture/OcclusionRoughnessMetallic.png";
	setAttr ".cs" -type "string" "sRGB";
createNode place2dTexture -n "place2dTexture2";
	rename -uid "639DCFF8-45BF-5E64-DCDD-64AC44DA73CE";
createNode nodeGraphEditorInfo -n "hyperShadePrimaryNodeEditorSavedTabsInfo";
	rename -uid "D4E58E16-4BF0-742F-4BC8-CF9D40CFF60D";
	setAttr ".tgi[0].tn" -type "string" "Untitled_1";
	setAttr ".tgi[0].vl" -type "double2" -619.0475944488777 -586.92876654211602 ;
	setAttr ".tgi[0].vh" -type "double2" 680.95235389376558 739.30971286799354 ;
	setAttr -s 6 ".tgi[0].ni";
	setAttr ".tgi[0].ni[0].x" 54.285713195800781;
	setAttr ".tgi[0].ni[0].y" -152.85714721679688;
	setAttr ".tgi[0].ni[0].nvs" 1923;
	setAttr ".tgi[0].ni[1].x" -252.85714721679688;
	setAttr ".tgi[0].ni[1].y" -175.71427917480469;
	setAttr ".tgi[0].ni[1].nvs" 1923;
	setAttr ".tgi[0].ni[2].x" 54.285713195800781;
	setAttr ".tgi[0].ni[2].y" 150;
	setAttr ".tgi[0].ni[2].nvs" 1923;
	setAttr ".tgi[0].ni[3].x" -214.28572082519531;
	setAttr ".tgi[0].ni[3].y" 498.57144165039062;
	setAttr ".tgi[0].ni[3].nvs" 1923;
	setAttr ".tgi[0].ni[4].x" -252.85714721679688;
	setAttr ".tgi[0].ni[4].y" 150;
	setAttr ".tgi[0].ni[4].nvs" 1923;
	setAttr ".tgi[0].ni[5].x" 92.857139587402344;
	setAttr ".tgi[0].ni[5].y" 521.4285888671875;
	setAttr ".tgi[0].ni[5].nvs" 1923;
select -ne :time1;
	setAttr ".o" 0;
select -ne :hardwareRenderingGlobals;
	setAttr ".otfna" -type "stringArray" 22 "NURBS Curves" "NURBS Surfaces" "Polygons" "Subdiv Surface" "Particles" "Particle Instance" "Fluids" "Strokes" "Image Planes" "UI" "Lights" "Cameras" "Locators" "Joints" "IK Handles" "Deformers" "Motion Trails" "Components" "Hair Systems" "Follicles" "Misc. UI" "Ornaments"  ;
	setAttr ".otfva" -type "Int32Array" 22 0 1 1 1 1 1
		 1 1 1 0 0 0 0 0 0 0 0 0
		 0 0 0 0 ;
	setAttr ".fprt" yes;
select -ne :renderPartition;
	setAttr -s 7 ".st";
select -ne :renderGlobalsList1;
select -ne :defaultShaderList1;
	setAttr -s 10 ".s";
select -ne :postProcessList1;
	setAttr -s 2 ".p";
select -ne :defaultRenderUtilityList1;
	setAttr -s 2 ".u";
select -ne :defaultRenderingList1;
select -ne :defaultTextureList1;
	setAttr -s 2 ".tx";
select -ne :initialShadingGroup;
	setAttr -s 3 ".dsm";
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
	setAttr ".vtn" -type "string" "ACES 1.0 SDR-video (sRGB)";
	setAttr ".vn" -type "string" "ACES 1.0 SDR-video";
	setAttr ".dn" -type "string" "sRGB";
	setAttr ".wsn" -type "string" "ACEScg";
	setAttr ".ovt" no;
	setAttr ".povt" no;
	setAttr ".otn" -type "string" "ACES 1.0 SDR-video (sRGB)";
	setAttr ".potn" -type "string" "ACES 1.0 SDR-video (sRGB)";
select -ne :hardwareRenderGlobals;
	setAttr ".ctrs" 256;
	setAttr ".btrs" 512;
select -ne :ikSystem;
	setAttr -s 4 ".sol";
connectAttr "layer1.di" "REF.do";
connectAttr "groupId1.id" "REFShape.iog.og[0].gid";
connectAttr "StallsSG.mwc" "REFShape.iog.og[0].gco";
connectAttr "groupId2.id" "REFShape.iog.og[1].gid";
connectAttr "StallsSG1.mwc" "REFShape.iog.og[1].gco";
connectAttr "layer2.di" "pCube1.do";
connectAttr "layer2.di" "pCube6.do";
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "StallsSG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "StallsSG1.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "lambert2SG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "lambert3SG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "lambert4SG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "StallsSG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "StallsSG1.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "lambert2SG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "lambert3SG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "lambert4SG.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr "M_DarkBlueGrey.oc" "StallsSG.ss";
connectAttr "groupId1.msg" "StallsSG.gn" -na;
connectAttr "REFShape.iog.og[0]" "StallsSG.dsm" -na;
connectAttr "StallsSG.msg" "materialInfo1.sg";
connectAttr "M_DarkBlueGrey.msg" "materialInfo1.m";
connectAttr "WorldGridMaterial.oc" "StallsSG1.ss";
connectAttr "groupId2.msg" "StallsSG1.gn" -na;
connectAttr "REFShape.iog.og[1]" "StallsSG1.dsm" -na;
connectAttr "StallsSG1.msg" "materialInfo2.sg";
connectAttr "WorldGridMaterial.msg" "materialInfo2.m";
connectAttr "layerManager.dli[1]" "layer1.id";
connectAttr "layerManager.dli[2]" "layer2.id";
connectAttr "file1.oc" "Chrome_TS.c";
connectAttr "Chrome_TS.oc" "lambert2SG.ss";
connectAttr "PoleShape.iog" "lambert2SG.dsm" -na;
connectAttr "PoleShape2.iog" "lambert2SG.dsm" -na;
connectAttr "lambert2SG.msg" "materialInfo3.sg";
connectAttr "Chrome_TS.msg" "materialInfo3.m";
connectAttr "file1.msg" "materialInfo3.t" -na;
connectAttr "Metal.oc" "Metal_TS.c";
connectAttr "Metal_TS.oc" "lambert3SG.ss";
connectAttr "WallShape1.iog" "lambert3SG.dsm" -na;
connectAttr "|Door|Wall|WallShape.iog" "lambert3SG.dsm" -na;
connectAttr "DoorShape.iog" "lambert3SG.dsm" -na;
connectAttr "|Divider|Wall|WallShape.iog" "lambert3SG.dsm" -na;
connectAttr "lambert3SG.msg" "materialInfo4.sg";
connectAttr "Metal_TS.msg" "materialInfo4.m";
connectAttr "Metal.msg" "materialInfo4.t" -na;
connectAttr "lambert4.oc" "lambert4SG.ss";
connectAttr "lambert4SG.msg" "materialInfo5.sg";
connectAttr "lambert4.msg" "materialInfo5.m";
connectAttr ":defaultColorMgtGlobals.cme" "Metal.cme";
connectAttr ":defaultColorMgtGlobals.cfe" "Metal.cmcf";
connectAttr ":defaultColorMgtGlobals.cfp" "Metal.cmcp";
connectAttr ":defaultColorMgtGlobals.wsn" "Metal.ws";
connectAttr "place2dTexture1.c" "Metal.c";
connectAttr "place2dTexture1.tf" "Metal.tf";
connectAttr "place2dTexture1.rf" "Metal.rf";
connectAttr "place2dTexture1.mu" "Metal.mu";
connectAttr "place2dTexture1.mv" "Metal.mv";
connectAttr "place2dTexture1.s" "Metal.s";
connectAttr "place2dTexture1.wu" "Metal.wu";
connectAttr "place2dTexture1.wv" "Metal.wv";
connectAttr "place2dTexture1.re" "Metal.re";
connectAttr "place2dTexture1.of" "Metal.of";
connectAttr "place2dTexture1.r" "Metal.ro";
connectAttr "place2dTexture1.n" "Metal.n";
connectAttr "place2dTexture1.vt1" "Metal.vt1";
connectAttr "place2dTexture1.vt2" "Metal.vt2";
connectAttr "place2dTexture1.vt3" "Metal.vt3";
connectAttr "place2dTexture1.vc1" "Metal.vc1";
connectAttr "place2dTexture1.o" "Metal.uv";
connectAttr "place2dTexture1.ofs" "Metal.fs";
connectAttr ":defaultColorMgtGlobals.cme" "file1.cme";
connectAttr ":defaultColorMgtGlobals.cfe" "file1.cmcf";
connectAttr ":defaultColorMgtGlobals.cfp" "file1.cmcp";
connectAttr ":defaultColorMgtGlobals.wsn" "file1.ws";
connectAttr "place2dTexture2.c" "file1.c";
connectAttr "place2dTexture2.tf" "file1.tf";
connectAttr "place2dTexture2.rf" "file1.rf";
connectAttr "place2dTexture2.mu" "file1.mu";
connectAttr "place2dTexture2.mv" "file1.mv";
connectAttr "place2dTexture2.s" "file1.s";
connectAttr "place2dTexture2.wu" "file1.wu";
connectAttr "place2dTexture2.wv" "file1.wv";
connectAttr "place2dTexture2.re" "file1.re";
connectAttr "place2dTexture2.of" "file1.of";
connectAttr "place2dTexture2.r" "file1.ro";
connectAttr "place2dTexture2.n" "file1.n";
connectAttr "place2dTexture2.vt1" "file1.vt1";
connectAttr "place2dTexture2.vt2" "file1.vt2";
connectAttr "place2dTexture2.vt3" "file1.vt3";
connectAttr "place2dTexture2.vc1" "file1.vc1";
connectAttr "place2dTexture2.o" "file1.uv";
connectAttr "place2dTexture2.ofs" "file1.fs";
connectAttr "Metal.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[0].dn"
		;
connectAttr "place2dTexture1.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[1].dn"
		;
connectAttr "lambert4SG.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[2].dn"
		;
connectAttr "place2dTexture2.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[3].dn"
		;
connectAttr "lambert4.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[4].dn"
		;
connectAttr "file1.msg" "hyperShadePrimaryNodeEditorSavedTabsInfo.tgi[0].ni[5].dn"
		;
connectAttr "StallsSG.pa" ":renderPartition.st" -na;
connectAttr "StallsSG1.pa" ":renderPartition.st" -na;
connectAttr "lambert2SG.pa" ":renderPartition.st" -na;
connectAttr "lambert3SG.pa" ":renderPartition.st" -na;
connectAttr "lambert4SG.pa" ":renderPartition.st" -na;
connectAttr "M_DarkBlueGrey.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial.msg" ":defaultShaderList1.s" -na;
connectAttr "Chrome_TS.msg" ":defaultShaderList1.s" -na;
connectAttr "Metal_TS.msg" ":defaultShaderList1.s" -na;
connectAttr "lambert4.msg" ":defaultShaderList1.s" -na;
connectAttr "place2dTexture1.msg" ":defaultRenderUtilityList1.u" -na;
connectAttr "place2dTexture2.msg" ":defaultRenderUtilityList1.u" -na;
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "Metal.msg" ":defaultTextureList1.tx" -na;
connectAttr "file1.msg" ":defaultTextureList1.tx" -na;
connectAttr "pCubeShape1.iog" ":initialShadingGroup.dsm" -na;
connectAttr "SCALEShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "pCubeShape6.iog" ":initialShadingGroup.dsm" -na;
// End of BathroomStall.ma
