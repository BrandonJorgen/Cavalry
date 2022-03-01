//Maya ASCII 2022 scene
//Name: SecondaryConcFloor.ma
//Last modified: Tue, Mar 01, 2022 09:37:04 AM
//Codeset: 1252
requires maya "2022";
requires -nodeType "gameFbxExporter" "gameFbxExporter" "1.0";
requires "mtoa" "4.2.1";
requires "mtoa" "4.2.1";
currentUnit -l meter -a degree -t film;
fileInfo "application" "maya";
fileInfo "product" "Maya 2022";
fileInfo "version" "2022";
fileInfo "cutIdentifier" "202102181415-29bfc1879c";
fileInfo "osv" "Windows 10 Enterprise v2009 (Build: 19042)";
fileInfo "UUID" "0C1865FC-4AAD-0BB6-B17C-468571DBC425";
fileInfo "license" "education";
createNode transform -s -n "persp";
	rename -uid "ADE97CD5-4472-C96A-1D48-CBBC39B13532";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -18.649322713906649 15.029443465565034 -8.1073296239919621 ;
	setAttr ".r" -type "double3" -32.138352730605298 -493.39999999997491 0 ;
createNode camera -s -n "perspShape" -p "persp";
	rename -uid "22E78C11-4732-0E40-6C9E-D08F1EA2DD7B";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999993;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 30.965027071526048;
	setAttr ".ow" 0.1;
	setAttr ".imn" -type "string" "persp";
	setAttr ".den" -type "string" "persp_depth";
	setAttr ".man" -type "string" "persp_mask";
	setAttr ".tp" -type "double3" 95.247573852539062 -80 -510.94132995605469 ;
	setAttr ".hc" -type "string" "viewSet -p %camera";
	setAttr ".ai_translator" -type "string" "perspective";
createNode transform -s -n "top";
	rename -uid "AC6351A8-4C18-C4FE-6D57-F089768AD898";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 17.326748506125988 14.40562255859375 ;
	setAttr ".r" -type "double3" -90 0 0 ;
createNode camera -s -n "topShape" -p "top";
	rename -uid "6E66A19C-4DF8-014A-1FA0-B6973B1E0DDE";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 17.826748506125988;
	setAttr ".ow" 0.60272135988188902;
	setAttr ".imn" -type "string" "top";
	setAttr ".den" -type "string" "top_depth";
	setAttr ".man" -type "string" "top_mask";
	setAttr ".tp" -type "double3" 0 -50 1440.562255859375 ;
	setAttr ".hc" -type "string" "viewSet -t %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "front";
	rename -uid "566667CC-4407-58FC-2947-7AAE47AF2A21";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 0 10.001000000000001 ;
createNode camera -s -n "frontShape" -p "front";
	rename -uid "02EEF87A-49CE-F801-DA26-E29B17DF9BF0";
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
	rename -uid "64AB7E1E-4C80-F160-F77C-F693370EE519";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 10.001000000000001 0 0 ;
	setAttr ".r" -type "double3" 0 90 0 ;
createNode camera -s -n "sideShape" -p "side";
	rename -uid "81E3C794-4996-F4E0-693B-568D9EA28EC0";
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
createNode transform -n "SecondaryConcPlat";
	rename -uid "83C4D197-4ED4-F7AB-911B-4AAE8AA48C85";
	setAttr ".t" -type "double3" -1.3658886718750001 0.6 12.893492431640626 ;
	setAttr ".r" -type "double3" -90 0 0 ;
	setAttr ".rp" -type "double3" 1.3658886718750001 12.893492431640626 -0.6 ;
	setAttr ".rpt" -type "double3" 0 -13.493492431640625 -12.293492431640626 ;
	setAttr ".sp" -type "double3" 1.3658886718750001 12.893492431640626 -0.6 ;
createNode mesh -n "SecondaryConcPlatShape" -p "SecondaryConcPlat";
	rename -uid "F935BCEB-4F4A-72F6-3E80-C18322391D85";
	setAttr -k off ".v";
	setAttr -s 2 ".iog[0].og";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:21]";
	setAttr ".iog[0].og[1].gcl" -type "componentList" 1 "f[22:37]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 2 ".uvst";
	setAttr ".uvst[0].uvsn" -type "string" "LightMapUV";
	setAttr -s 64 ".uvst[0].uvsp[0:63]" -type "float2" 3.59960938 1.39990234
		 -1.21777344 1.39990234 -1.21777344 1 3.59960938 1 -10 1.39990234 -10 1 0.16149902
		 1 0.16149902 1.39990234 2 1.39990234 -1.69921875 1.39990234 -1.69921875 1 2 1 2.8984375
		 1.39990234 -1.099609375 1.39990234 -1.099609375 1 2.8984375 1 5.69921875 1.39990234
		 -1.59960938 1.39990234 -1.59960938 1 5.69921875 1 -0.89990234 1.39990234 -0.89990234
		 1 -0.82373047 1 -0.82373047 1.39990234 3.69921875 1.39990234 3.67382813 1.39990234
		 3.67382813 1 3.69921875 1 2.8984375 2.76171875 -1.099609375 4.21679688 -1.099609375
		 -0.59960938 2.8984375 -0.59960938 2.8984375 6.69921875 2.82226563 6.69921875 1.56640625
		 3.24609375 12 1 12 1.39990234 3.18359375 1 3.18359375 1.39990234 -1 1.39990234 -1
		 1 3.69921875 13 0 13 0 2.83789063 3.69921875 4.18359375 3.69921875 -0.18457031 0
		 1.16149902 0 -9 3.69921875 -9 2.8984375 4.59960938 -1.099609375 4.59960938 -1.099609375
		 -0.21777344 2.8984375 1.23791504 1.56640625 0.75292969 2.82226563 -2.69921875 2.8984375
		 -2.69921875 3.69921875 0 3.67382813 0 2.33203125 3.68554688 0 0 3.69921875 4 2.33203125
		 0.31298828 3.67382813 4 0 4;
	setAttr ".uvst[1].uvsn" -type "string" "UVmap_1";
	setAttr -s 70 ".uvst[1].uvsp[0:69]" -type "float2" 0.64306641 0.072753906
		 0.33056641 0.072753906 0.33056641 0.046875 0.64306641 0.046875 0.33056641 0.12109375
		 0.33056641 0.095214844 0.98925781 0.095214844 0.98925781 0.12109375 0.84667969 0.73388672
		 0.84667969 0.49414063 0.87255859 0.49414063 0.87255859 0.73388672 0.83056641 0.41162109
		 0.83056641 0.15234375 0.85644531 0.15234375 0.85644531 0.41162109 0.80371094 0.18554688
		 0.33056641 0.18554688 0.33056641 0.15966797 0.80371094 0.15966797 0.12091064 0.98700714
		 0.14685059 0.98700714 0.14685059 0.99193573 0.12091064 0.99193573 0.16931152 0.99193573
		 0.16931152 0.99028778 0.19519043 0.99028778 0.19519043 0.99193573 0.040313721 0.23632813
		 0.29956055 0.33105469 0.29956055 0.018554688 0.040313721 0.018554688 0.58837891 0.47607422
		 0.59326172 0.47607422 0.67480469 0.25195313 0.58837891 0.22070313 0.953125 0.99193573
		 0.92724609 0.99193573 0.953125 0.42041016 0.92724609 0.42041016 0.92724609 0.14892578
		 0.953125 0.14892578 0.90869141 0.7520752 0.90869141 0.99193573 0.24987793 0.99193573
		 0.3371582 0.7520752 0.2479248 0.90466309 0.00806427 0.99193573 0.00806427 0.33300781
		 0.2479248 0.33300781 0.52539063 0.73388672 0.26611328 0.73388672 0.26611328 0.421875
		 0.52539063 0.51586914 0.65283203 0.47607422 0.68457031 0.38964844 0.90820313 0.47119141
		 0.90820313 0.47607422 0.5703125 0.20458984 0.5703125 0.47607422 0.56884766 0.20458984
		 0.48168945 0.44384766 0.33056641 0.38867188 0.33056641 0.20458984 0.82763672 0.73388672
		 0.55615234 0.73388672 0.79541016 0.64526367 0.55615234 0.73242188 0.55615234 0.49414063
		 0.74023438 0.49414063;
	setAttr ".cuvs" -type "string" "LightMapUV";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr -s 24 ".vt[0:23]"  -3.16144156 1.084106326 -0.60000002 1.36588871 2.73191285 -0.60000002
		 1.36588871 2.73191285 -1 -3.16144156 1.084106326 -1 1.36588871 12.8934927 -0.60000002
		 1.36588871 12.8934927 -1 5.065888882 12.8934927 -0.60000002 5.065888882 12.8934927 -1
		 -1.79336607 -2.67466593 -0.60000002 -1.79336607 -2.67466593 -1 5.066392899 -0.17792785 -0.60000002
		 5.066392899 -0.17792785 -1 5.040398598 -0.10650757 -1 5.040398121 -0.10650757 -0.60000002
		 5.065888882 -0.10650757 -0.60000002 5.065888882 -0.10650757 -1 1.36588871 -1.52479589 -0.60000002
		 1.36588871 -0.10650757 -0.60000002 5.065888882 4.078596592 -1 5.065888882 4.078597546 -0.60000002
		 1.36588871 -1.52479589 -1 1.36588871 -0.10650757 -1 3.69831753 3.58084393 -0.60000002
		 3.69831777 3.58084416 -1;
	setAttr -s 66 ".ed[0:65]"  0 1 0 1 2 0 2 0 0 3 0 0 2 3 0 4 5 0 5 2 0
		 2 4 0 1 4 0 4 6 0 6 7 0 7 4 0 7 5 0 8 0 0 3 8 0 9 8 0 3 9 0 10 8 0 9 10 0 11 10 0
		 9 11 0 11 12 0 12 10 0 13 10 0 12 13 0 14 13 0 12 14 0 15 14 0 12 15 0 16 1 0 0 16 0
		 8 16 0 13 17 0 17 10 0 16 10 0 17 16 0 6 18 0 18 7 0 6 19 0 19 18 0 19 14 0 14 18 0
		 15 18 0 1 6 0 1 19 0 18 2 0 5 18 0 2 9 0 20 9 0 2 20 0 20 21 0 21 12 0 12 20 0 11 20 0
		 19 13 0 19 22 0 22 13 0 22 1 0 1 13 0 1 17 0 15 23 0 23 18 0 12 23 0 21 23 0 21 2 0
		 2 23 0;
	setAttr -s 114 ".n[0:113]" -type "float3"  -0.33983865 0.94048375 0 -0.33983865
		 0.94048375 0 -0.33983865 0.94048375 0 -0.33983865 0.94048375 0 -0.33983865 0.94048375
		 0 -0.33983865 0.94048375 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 0 1 0 0 1 0
		 0 1 0 0 1 0 0 1 0 0 1 0 -0.94048375 -0.33983865 0 -0.94048375 -0.33983865 0 -0.94048375
		 -0.33983865 0 -0.94048375 -0.33983865 0 -0.94048375 -0.33983865 0 -0.94048375 -0.33983865
		 0 0.33983865 -0.94048375 0 0.33983865 -0.94048375 0 0.33983865 -0.94048375 0 0.33983865
		 -0.94048375 0 0.33983865 -0.94048375 0 0.33983865 -0.94048375 0 0.94048375 0.33983865
		 0 0.94048375 0.33983865 0 0.94048375 0.33983865 0 0.94048375 0.33983865 0 0.94048375
		 0.33983865 0 0.94048375 0.33983865 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0
		 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0
		 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 1 0 0 1 0 0 1 0 0
		 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0
		 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1;
	setAttr -s 38 -ch 114 ".fc[0:37]" -type "polyFaces" 
		f 3 0 1 2
		mu 0 3 0 1 2
		mu 1 3 0 1 2
		f 3 3 -3 4
		mu 0 3 3 0 2
		mu 1 3 3 0 2
		f 3 5 6 7
		mu 0 3 4 5 6
		mu 1 3 4 5 6
		f 3 8 -8 -2
		mu 0 3 7 4 6
		mu 1 3 7 4 6
		f 3 9 10 11
		mu 0 3 8 9 10
		mu 1 3 8 9 10
		f 3 -6 -12 12
		mu 0 3 11 8 10
		mu 1 3 11 8 10
		f 3 13 -4 14
		mu 0 3 12 13 14
		mu 1 3 12 13 14
		f 3 15 -15 16
		mu 0 3 15 12 14
		mu 1 3 15 12 14
		f 3 17 -16 18
		mu 0 3 16 17 18
		mu 1 3 16 17 18
		f 3 19 -19 20
		mu 0 3 19 16 18
		mu 1 3 19 16 18
		f 3 -20 21 22
		mu 0 3 20 21 22
		mu 1 3 20 21 22
		f 3 23 -23 24
		mu 0 3 23 20 22
		mu 1 3 23 20 22
		f 3 25 -25 26
		mu 0 3 24 25 26
		mu 1 3 24 25 26
		f 3 27 -27 28
		mu 0 3 27 24 26
		mu 1 3 27 24 26
		f 3 29 -1 30
		mu 0 3 28 29 30
		mu 1 3 28 29 30
		f 3 31 -31 -14
		mu 0 3 31 28 30
		mu 1 3 31 28 30
		f 3 -24 32 33
		mu 0 3 32 33 34
		mu 1 3 32 33 34
		f 3 34 -34 35
		mu 0 3 28 32 34
		mu 1 3 35 32 34
		f 3 -11 36 37
		mu 0 3 35 36 37
		mu 1 3 36 37 38
		f 3 38 39 -37
		mu 0 3 36 38 37
		mu 1 3 37 39 38
		f 3 40 41 -40
		mu 0 3 38 39 37
		mu 1 3 39 40 38
		f 3 -28 42 -42
		mu 0 3 39 40 37
		mu 1 3 40 41 38
		f 3 -10 -9 43
		mu 0 3 41 42 43
		mu 1 3 42 43 44
		f 3 -39 -44 44
		mu 0 3 44 41 43
		mu 1 3 45 42 44
		f 3 45 -7 46
		mu 0 3 45 46 47
		mu 1 3 46 47 48
		f 3 -38 -47 -13
		mu 0 3 48 45 47
		mu 1 3 49 46 48
		f 3 -17 -5 47
		mu 0 3 49 50 51
		mu 1 3 50 51 52
		f 3 48 -48 49
		mu 0 3 52 49 51
		mu 1 3 53 50 52
		f 3 50 51 52
		mu 0 3 52 53 54
		mu 1 3 54 55 56
		f 3 53 -53 -22
		mu 0 3 55 52 54
		mu 1 3 57 54 56
		f 3 -41 54 -26
		mu 0 3 56 44 57
		mu 1 3 58 59 60
		f 3 55 56 -55
		mu 0 3 44 58 57
		mu 1 3 59 61 60
		f 3 57 58 -57
		mu 0 3 58 43 57
		mu 1 3 61 62 60
		f 3 59 -33 -59
		mu 0 3 43 59 57
		mu 1 3 62 63 60
		f 3 -43 60 61
		mu 0 3 45 60 61
		mu 1 3 64 65 66
		f 3 -29 62 -61
		mu 0 3 60 62 61
		mu 1 3 65 67 66
		f 3 -52 63 -63
		mu 0 3 62 63 61
		mu 1 3 67 68 66
		f 3 64 65 -64
		mu 0 3 63 46 61
		mu 1 3 68 69 66;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr -s 2 ".pd";
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".pd[1]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "ConcreteSlab_02";
	rename -uid "215265D9-4568-7A38-CCAA-07B712AEE4FE";
createNode mesh -n "ConcreteSlab_Shape2" -p "ConcreteSlab_02";
	rename -uid "6DD38538-4CCD-318C-E34B-4DB132B0A0D4";
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
	setAttr ".pv" -type "double2" 0.38125526905059814 0.4950040876865387 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 168 ".uvst[0].uvsp[0:167]" -type "float2" 0.46679223 0.1542412
		 0.13694587 0.89171165 0.45868701 0 0.28531298 0.44181442 0.82675642 0.83347917 0.82710129
		 0.15382397 0.6756528 0.85496199 0.47337329 0.91324031 0.44224072 0.63636351 0.13691635
		 0.39581198 0.13690484 0.20178653 0.86149418 0.43443295 0.86148822 0.23892538 0.65613514
		 0.91581029 0.66333604 0.9056198 0.87167621 0.23172092 0.66329491 0.77857143 0.67297369
		 0.77856827 0.31259927 0.63168281 0.28862265 0.43164369 0.43964759 0.63169968 0.28987488
		 0.30418202 0.86949182 0.97197467 0 0.0068605915 0.84876704 0.30379716 0.86228657
		 0.96178722 0.72171873 0.30383411 0.86227262 0.83473891 0.67572105 0.71322864 0.82697552
		 0.0052448511 0.67099804 0.76711118 0.68591285 0.7060293 0.67098838 0.64006281 0.81296104
		 0.70609057 0.96312559 0.22076395 0.30113968 0.64770204 0.30117479 0.77474624 0.83607727
		 0.22074181 5.9098005e-05 1 0.30618113 0.63751364 0.81955737 0.82329029 0.48057652
		 0.90305191 0.48057163 0.77600366 0.49025071 0.77600318 0.44222361 0.63635141 0.45241183
		 0.63634998 0.13689281 8.4787607e-06 0.99953997 0.9617722 0.84882414 0.49995875 1.1563301e-05
		 0.20122114 0.51968831 0.44136581 0.98853654 0.43569973 0.47199643 0.44123045 0.47228161
		 0.43112916 0.96316409 2.2828579e-05 0.71918589 0.63879275 0.46696523 0.30293757 0.73224133
		 0.69508082 0.73190707 0.50677317 0.65527284 0.30266082 0.68584102 0.85496628 0.85906905
		 0.69492799 0.99952602 0.83472389 0.86148822 0.43572885 0.71943617 0.30410624 0.57946014
		 0.63633239 0.83611578 7.4505806e-07 0.81288922 0.85502726 0.47291777 0.30420938 0.99873608
		 0.69628561 0.1369395 0.78386295 0.65510029 0.15402311 0.13689332 0.0077610463 0.13692793
		 0.58983755 0.71918833 0.44443226 0.70900017 0.4426311 0.5819518 0.44262943 0.87168229
		 0.4344326 0.45242891 0.63636017 0.99873072 0.43442872 0.57947725 0.63632023 0.52608591
		 0.91585243 0.0068435371 1.6219914e-05 0.65492803 0.0053854585 0.46662006 0.0055449605
		 0.72171873 0.50678903 0.82722706 0.30240306 3.4719706e-05 0.58994228 4.6283007e-05
		 0.78430277 0.27382115 0.58973271 0.27380961 0.39604229 0.27379811 0.2023519 0.27378643
		 0.006844312 0.85901392 0.50535887 2.3126602e-05 0.39558172 0.83394319 0.15381616
		 0.83382511 0.012083232 0.83406121 0.29554921 0.28365749 0.30284166 0.97331476 0.21572196
		 0.48948878 0.63767755 0.67343932 0.69634455 0.8526091 0.97426623 0.27572706 0.43987921
		 0.26694211 7.3760748e-07 0.52608263 0.90566421 0.52604145 0.77861589 0.9995411 0.97196043
		 0.45236799 0.44266984 0.57941633 0.44262984 0.4421798 0.44267309 0.31262425 0.44303685
		 0.43967256 0.44305375 0.30243605 0.44303551 0.45238507 0.44265947 0.57943344 0.44264191
		 0.44219685 0.44266102 0.4917441 0.76712477 0.49173442 0.6400764 0.49174717 0.77731156
		 0.9987092 0.82322079 0.99871111 0.83340925 0.85884219 0.50662029 0.98858154 0.63186133
		 0.86153311 0.63189042 0.99877012 0.63366008 0.71945083 0.43115455 0.71404892 0.4413434
		 0.72177583 0.49999568 0.52328926 0.4311772 0.5232746 0.30412886 0.99872559 0.43929952
		 0.33163947 0.90305734 0.33163488 0.77600884 0.33164042 0.91324538 0.48058099 0.91552931
		 0.49025518 0.90304589 0.49026 0.91552144 0.81958425 0.69624776 0.97448719 0.23044711
		 0.96311969 0.23044276 0.97449386 0.22076833 0.83607554 0.23042071 0.68591744 0.69635046
		 0.81296587 0.69641173 0.67343473 0.7060234 0.66379476 0.77729994 0.85260773 0.9617883
		 0.85259378 0.83473998 0.86228794 0.97426522 0.85895735 0.31099832 0.27915064 0.42981234
		 0.28016058 0.30446446 0.28511703 0.44239977 0.3024103 0.63672578 0.99872452 0.23171705
		 0.67301488 0.90561664 0.67301887 0.91809458 0.66334003 0.91809773 0.70899761 0.63879269
		 0.58194923 0.63879091 0.48949134 0.64786643 0.48952645 0.7746942 0.72205251 0.69509649
		 0.97335231 2.4586916e-05 0.36720696 0.14864656 0.27383268 0.78342307 0.27572706 0.29729307;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 81 ".vt[0:80]"  3.70000005 -1.72360599 10.16157913 1.35651135 -1.72360599 13.92473507
		 3.70000005 -0.09249077 10.16157913 3.60750914 0 10.16157913 1.35651135 -0.095321804 13.92473507
		 1.32589948 0 13.8405447 0.18035741 0 0.09249077 0.09249077 0 0.18035741 0 -0.09249077 0.087866671
		 0.087866671 -0.09249077 0 0.021216545 0 10.25228405 0.09249077 0 10.15049458 -0.071273953 -0.09249077 10.18752098
		 0 -0.09249077 10.085731506 3.60750914 0 0.1803574 3.51964235 0 0.09249077 3.6121335 -0.09249077 0
		 3.70000005 -0.09249077 0.087866671 -4.37873173 0 11.94723415 -4.32621622 0 11.83461285
		 -4.49727821 -0.09249077 11.89195347 -4.44476271 -0.09249077 11.77933311 3.70000005 -0.09249077 12.99557114
		 3.62872434 -0.092545316 13.097360611 3.53628182 0 13.032637596 3.60750914 0 12.93081665
		 -3.076686144 -0.092564777 15.53809738 -3.18930817 -0.09249077 15.48558617 -3.13402486 0 15.36704922
		 -3.021437645 0 15.41963482 3.62872434 -1.72360599 13.097360611 3.70000005 -1.72360599 12.99557114
		 3.70000005 -1.72360599 0.087866671 3.6121335 -1.72360599 0 0.087866671 -1.72360599 0
		 0 -1.72360599 0.087866671 0 -1.72360599 10.085731506 -0.071273953 -1.72360599 10.18752098
		 -4.44476271 -1.72360599 11.77933311 -4.49727821 -1.72360599 11.89195347 -3.18930817 -1.72360599 15.48558617
		 -3.076686144 -1.72360599 15.53809738 1.85000002 0 10.15603733 1.85000002 0 0.19202255
		 0.67356277 0 12.046411514 -3.67382693 0 13.62712383 -3.75637817 0 13.65714073 -3.84329319 -0.09249077 13.68876934
		 -3.84329319 -1.72360599 13.68876934 1.85000002 0 11.54065514 0.09249077 0 5.17709112
		 1.85000002 0 5.17402935 3.60750914 0 5.17096853 3.70000005 -0.09249077 5.12472296
		 3.70000005 -1.72360599 5.12472296 3.70000005 -1.72360599 2.60629487 3.70000005 -0.09249077 2.60629487
		 3.60750914 0 2.67566276 1.85000002 0 2.68302608 0.09249077 0 2.69038939 0.09249077 0 7.66379261
		 1.85000002 0 7.66503334 3.60750914 0 7.66627455 3.70000005 -0.09249077 7.64315128
		 3.70000005 -1.72360599 7.64315128 -0.91532379 -1.72360599 14.75150013 -0.91532379 -0.09394329 14.75150013
		 -0.94642532 0 14.66596031 -1.59851122 0 12.87253761 -2.25059652 0 11.079115868 -2.2821939 -0.09249077 10.99221802
		 -2.2821939 -1.72360599 10.99221802 0 -0.09249077 5.17708969 0 -1.72360599 5.17708969
		 0 -0.09249077 7.66379261 0 -1.72360599 7.66379261 0 -0.09249077 2.69038844 0 -1.72360599 2.69038844
		 1.8499999 0 0.09249077 1.85000002 -0.09249077 0 1.85000002 -1.72360599 0;
	setAttr -s 148 ".ed[0:147]"  0 31 0 1 30 0 1 65 0 3 2 1 3 25 0 5 4 1 5 67 0
		 4 1 1 2 0 1 6 78 0 6 7 0 10 44 1 11 42 1 11 60 0 11 10 0 14 57 0 14 15 0 19 69 0
		 19 18 0 24 5 0 24 25 0 28 46 0 28 29 0 31 30 0 32 55 0 33 32 0 34 80 0 35 77 0 34 35 0
		 37 71 0 39 48 0 39 38 0 41 40 0 6 9 1 9 8 1 8 7 1 9 34 1 35 8 1 11 13 1 13 12 1 12 10 1
		 13 36 1 36 37 0 37 12 1 14 17 1 17 16 1 16 15 1 17 32 1 33 16 1 19 21 1 21 20 1 20 18 1
		 21 38 1 39 20 1 22 23 1 23 30 1 31 22 1 22 25 1 24 23 1 26 27 1 27 40 1 41 26 1 26 29 1
		 28 27 1 8 76 1 16 79 1 2 63 1 12 70 1 22 2 1 4 23 1 26 66 1 20 47 1 25 49 1 29 45 1
		 14 43 1 42 3 1 43 7 1 42 61 1 44 5 1 45 19 1 46 18 0 47 27 1 48 40 0 44 68 1 45 46 1
		 46 47 1 47 48 1 49 11 1 44 49 1 49 42 1 50 59 0 51 58 1 52 62 0 53 56 1 54 64 0 50 51 1
		 51 52 1 52 53 1 53 54 1 55 54 0 56 17 1 57 52 0 58 43 1 59 7 0 55 56 1 56 57 1 57 58 1
		 58 59 1 60 50 0 61 51 1 62 3 0 63 53 1 64 0 0 60 61 1 61 62 1 62 63 1 63 64 1 65 41 0
		 66 4 1 67 29 0 68 45 1 69 10 0 70 21 1 71 38 0 65 66 1 66 67 1 67 68 1 68 69 1 69 70 1
		 70 71 1 72 74 1 73 75 0 50 72 1 72 73 1 74 13 1 75 36 0 60 74 1 74 75 1 76 72 1 77 73 0
		 59 76 1 76 77 1 78 15 0 79 9 1 80 33 0 78 79 1 79 80 1 43 78 1;
	setAttr -s 68 -ch 272 ".fc[0:67]" -type "polyFaces" 
		f 4 88 87 14 11
		mu 0 4 0 165 2 84
		f 4 73 84 -22 22
		mu 0 4 86 5 95 97
		f 4 95 91 107 -91
		mu 0 4 90 9 10 91
		f 4 -11 33 34 35
		mu 0 4 157 158 14 156
		f 4 -35 36 28 37
		mu 0 4 156 14 16 17
		f 4 -15 38 39 40
		mu 0 4 153 103 151 19
		f 4 -40 41 42 43
		mu 0 4 19 151 152 21
		f 4 -17 44 45 46
		mu 0 4 149 102 147 25
		f 4 -46 47 -26 48
		mu 0 4 25 147 148 27
		f 4 -19 49 50 51
		mu 0 4 145 101 143 31
		f 4 -51 52 -32 53
		mu 0 4 31 143 144 33
		f 4 54 55 -24 56
		mu 0 4 34 140 142 37
		f 4 -55 57 -21 58
		mu 0 4 140 34 141 139
		f 4 59 60 -33 61
		mu 0 4 136 41 42 43
		f 4 -60 62 -23 63
		mu 0 4 41 136 137 135
		f 4 136 134 -39 13
		mu 0 4 113 111 18 154
		f 4 -34 9 145 143
		mu 0 4 14 13 81 105
		f 4 105 101 97 93
		mu 0 4 126 127 50 129
		f 4 128 122 -50 17
		mu 0 4 119 117 30 146
		f 4 -4 4 -58 68
		mu 0 4 54 164 99 34
		f 4 -59 19 5 69
		mu 0 4 35 39 100 161
		f 4 125 119 -63 70
		mu 0 4 120 121 4 40
		f 4 85 81 -64 21
		mu 0 4 134 132 41 7
		f 4 1 -56 -70 7
		mu 0 4 162 36 35 161
		f 4 -144 146 -27 -37
		mu 0 4 14 105 106 16
		f 4 98 -100 104 -94
		mu 0 4 129 130 64 126
		f 4 137 135 -42 -135
		mu 0 4 111 112 20 18
		f 4 -9 -69 -57 -1
		mu 0 4 66 54 34 37
		f 4 86 82 -61 -82
		mu 0 4 132 133 42 41
		f 4 129 123 -53 -123
		mu 0 4 117 118 32 30
		f 4 124 -71 -62 -118
		mu 0 4 69 120 40 138
		f 3 89 -13 -88
		mu 0 3 1 70 166
		f 4 126 120 -74 -120
		mu 0 4 59 71 5 86
		f 4 -77 147 -10 10
		mu 0 4 92 72 46 104
		f 4 106 -92 96 -102
		mu 0 4 49 10 9 94
		f 4 -121 127 -18 -80
		mu 0 4 5 71 83 29
		f 4 -85 79 18 -81
		mu 0 4 95 5 29 96
		f 4 -52 71 -86 80
		mu 0 4 28 31 60 6
		f 4 -54 30 -87 -72
		mu 0 4 31 33 67 60
		f 5 72 -89 78 -20 20
		mu 0 5 167 165 0 56 98
		f 4 -76 -90 -73 -5
		mu 0 4 88 70 1 38
		f 4 113 109 -96 -109
		mu 0 4 89 73 9 90
		f 4 -97 -110 114 -93
		mu 0 4 94 9 73 87
		f 4 -98 92 115 111
		mu 0 4 51 131 125 123
		f 4 116 -95 -99 -112
		mu 0 4 123 124 63 51
		f 4 -105 -25 -48 -101
		mu 0 4 48 128 26 24
		f 4 -45 15 -106 100
		mu 0 4 24 150 93 48
		f 4 -103 -107 -16 74
		mu 0 4 72 10 49 23
		f 4 -108 102 76 -104
		mu 0 4 91 10 72 92
		f 4 12 77 -114 -14
		mu 0 4 166 70 73 89
		f 4 -115 -78 75 -111
		mu 0 4 87 73 70 88
		f 4 -116 110 3 66
		mu 0 4 75 74 55 159
		f 4 -113 -117 -67 8
		mu 0 4 160 76 75 159
		f 4 -8 -119 -125 -3
		mu 0 4 61 57 58 122
		f 4 -6 6 -126 118
		mu 0 4 57 163 85 58
		f 4 -79 83 -127 -7
		mu 0 4 56 0 71 59
		f 4 -128 -84 -12 -122
		mu 0 4 83 71 0 84
		f 4 -41 67 -129 121
		mu 0 4 3 19 53 52
		f 4 -44 29 -130 -68
		mu 0 4 19 21 68 53
		f 4 140 138 -133 90
		mu 0 4 110 108 78 8
		f 4 141 139 -134 -139
		mu 0 4 108 109 80 78
		f 4 132 130 -137 108
		mu 0 4 116 114 45 44
		f 4 133 131 -138 -131
		mu 0 4 114 115 65 45
		f 4 -36 64 -141 103
		mu 0 4 12 15 77 11
		f 4 -38 27 -142 -65
		mu 0 4 15 155 79 77
		f 4 -146 142 -47 65
		mu 0 4 47 107 22 25
		f 4 -147 -66 -49 -145
		mu 0 4 62 47 25 27
		f 4 -148 -75 16 -143
		mu 0 4 46 72 23 82;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode lightLinker -s -n "lightLinker1";
	rename -uid "0A398480-4998-91CE-43CA-DA835FDFA38B";
	setAttr -s 6 ".lnk";
	setAttr -s 6 ".slnk";
createNode shapeEditorManager -n "shapeEditorManager";
	rename -uid "010D3024-4BE2-BECD-2AA4-DCA637D46BD1";
createNode poseInterpolatorManager -n "poseInterpolatorManager";
	rename -uid "7D27D349-447F-67E8-DA49-038F26286FFA";
createNode displayLayerManager -n "layerManager";
	rename -uid "A3EC539B-48D2-E769-10DA-2CB8A5D5A7EF";
	setAttr -s 2 ".dli[1]"  1;
	setAttr -s 2 ".dli";
createNode displayLayer -n "defaultLayer";
	rename -uid "E67C30A5-495B-C622-CFE2-DDB357D82505";
createNode renderLayerManager -n "renderLayerManager";
	rename -uid "9910C601-43F5-2F96-2E80-8A8331CC4039";
createNode renderLayer -n "defaultRenderLayer";
	rename -uid "155B49E7-4777-0BCC-EF78-C68759911B4B";
	setAttr ".g" yes;
createNode phong -n "M_DarkGrey";
	rename -uid "EA1D3474-4C05-B278-29E5-AE90BF3425F1";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SecondaryConcPlatSG";
	rename -uid "42929F82-4D0A-0BB5-EC73-F58A6947BD34";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo1";
	rename -uid "F3B2FCCD-4F11-0578-CB03-17ACA7675EB0";
createNode phong -n "WorldGridMaterial";
	rename -uid "309C2058-4BA9-7ECA-C651-EB8D5487181F";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SecondaryConcPlatSG1";
	rename -uid "1802FF77-480D-0FD5-9FDB-FC85A128F273";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo2";
	rename -uid "9B80DEE2-4136-3028-8EF8-32859B2B13F5";
createNode phong -n "M_DarkGrey1";
	rename -uid "32C0C4A4-4685-197E-25B3-218E5450DD66";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0 0 0 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SecondaryConcPlatSG2";
	rename -uid "0664FA09-4014-52B8-597E-7494FBCF02D5";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo3";
	rename -uid "F2DED1EC-4865-62FF-8272-5B9D1B090C62";
createNode phong -n "WorldGridMaterial1";
	rename -uid "04004673-4BC9-0441-005B-B49A90B2E54F";
	setAttr ".dc" 1;
	setAttr ".c" -type "float3" 0.2158605 0.2158605 0.2158605 ;
	setAttr ".sc" -type "float3" 0.2 0.2 0.2 ;
	setAttr ".rfl" 1;
createNode shadingEngine -n "SecondaryConcPlatSG3";
	rename -uid "DDB5330F-4C1B-0B5C-A2F2-539D43AD7A9B";
	setAttr ".ihi" 0;
	setAttr ".ro" yes;
createNode materialInfo -n "materialInfo4";
	rename -uid "1FCB121A-4244-3780-2220-D19EA79825A0";
createNode groupId -n "groupId1";
	rename -uid "3CA2E61F-414A-0BC6-B3B0-3884C4DA63AA";
	setAttr ".ihi" 0;
createNode groupId -n "groupId2";
	rename -uid "A11F7B5B-4B08-414C-3839-D5892C461DA1";
	setAttr ".ihi" 0;
createNode displayLayer -n "layer1";
	rename -uid "E67FB583-45B0-CBA8-5E10-7D9DB428C2AB";
	setAttr ".dt" 2;
	setAttr ".v" no;
	setAttr ".do" 1;
createNode script -n "uiConfigurationScriptNode";
	rename -uid "1D6BD7B5-4D61-D5C0-C770-FEB0BF63F8D3";
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
		+ "            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1\n            -height 1\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Persp View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"persp\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n"
		+ "            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n"
		+ "            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 0\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n"
		+ "            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 708\n            -height 811\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"ToggledOutliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"ToggledOutliner\")) -mbv $menusOkayInPanels  $panelName;\n"
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
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\tif ($useSceneConfig) {\n        string $configName = `getPanel -cwl (localizedPanelLabel(\"Current Layout\"))`;\n        if (\"\" != $configName) {\n\t\t\tpanelConfiguration -edit -label (localizedPanelLabel(\"Current Layout\")) \n\t\t\t\t-userCreated false\n\t\t\t\t-defaultImage \"vacantCell.xP:/\"\n\t\t\t\t-image \"\"\n\t\t\t\t-sc false\n\t\t\t\t-configString \"global string $gMainPane; paneLayout -e -cn \\\"single\\\" -ps 1 100 100 $gMainPane;\"\n\t\t\t\t-removeAllPanels\n\t\t\t\t-ap false\n\t\t\t\t\t(localizedPanelLabel(\"Persp View\")) \n\t\t\t\t\t\"modelPanel\"\n"
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 0\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 708\\n    -height 811\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Persp View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -cam `findStartUpCamera persp` \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 0\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 0\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 0\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 708\\n    -height 811\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t$configName;\n\n            setNamedPanelLayout (localizedPanelLabel(\"Current Layout\"));\n        }\n\n        panelHistory -e -clear mainPanelHistory;\n        sceneUIReplacement -clear;\n\t}\n\n\ngrid -spacing 5 -size 12 -divisions 5 -displayAxes yes -displayGridLines yes -displayDivisionLines yes -displayPerspectiveLabels no -displayOrthographicLabels no -displayAxesBold yes -perspectiveLabelPosition axis -orthographicLabelPosition edge;\nviewManip -drawCompass 0 -compassAngle 0 -frontParameters \"\" -homeParameters \"\" -selectionLockParameters \"\";\n}\n");
	setAttr ".st" 3;
createNode script -n "sceneConfigurationScriptNode";
	rename -uid "8807D7F6-455A-9F3F-FC59-8CB92DC05567";
	setAttr ".b" -type "string" "playbackOptions -min 0 -max 120 -ast 0 -aet 200 ";
	setAttr ".st" 6;
createNode gameFbxExporter -n "gameExporterPreset1";
	rename -uid "BA4F56A5-4DB3-ADD9-5A92-388032098157";
	setAttr ".pn" -type "string" "Model Default";
	setAttr ".ils" yes;
	setAttr ".ilu" yes;
	setAttr ".ebm" yes;
	setAttr ".inc" yes;
	setAttr ".fv" -type "string" "FBX201800";
	setAttr ".exp" -type "string" "G:/Cavalry/Maya Project Files/Env/Exports/ConcreteSlab";
	setAttr ".exf" -type "string" "ConcreteSlab_02_SM_Low";
createNode gameFbxExporter -n "gameExporterPreset2";
	rename -uid "646E19DD-4A0C-0A1C-7B89-64A73333B866";
	setAttr ".pn" -type "string" "Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 2;
	setAttr ".spt" 2;
	setAttr ".ic" no;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode gameFbxExporter -n "gameExporterPreset3";
	rename -uid "683CE347-40C4-E648-DDFE-91BDE2BC355D";
	setAttr ".pn" -type "string" "TE Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 3;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
select -ne :time1;
	setAttr ".o" 0;
select -ne :hardwareRenderingGlobals;
	setAttr ".otfna" -type "stringArray" 22 "NURBS Curves" "NURBS Surfaces" "Polygons" "Subdiv Surface" "Particles" "Particle Instance" "Fluids" "Strokes" "Image Planes" "UI" "Lights" "Cameras" "Locators" "Joints" "IK Handles" "Deformers" "Motion Trails" "Components" "Hair Systems" "Follicles" "Misc. UI" "Ornaments"  ;
	setAttr ".otfva" -type "Int32Array" 22 0 1 1 1 1 1
		 1 1 1 0 0 0 0 0 0 0 0 0
		 0 0 0 0 ;
	setAttr ".fprt" yes;
select -ne :renderPartition;
	setAttr -s 6 ".st";
select -ne :renderGlobalsList1;
select -ne :defaultShaderList1;
	setAttr -s 9 ".s";
select -ne :postProcessList1;
	setAttr -s 2 ".p";
select -ne :defaultRenderingList1;
select -ne :initialShadingGroup;
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
connectAttr "layer1.di" "SecondaryConcPlat.do";
connectAttr "groupId1.id" "SecondaryConcPlatShape.iog.og[0].gid";
connectAttr "SecondaryConcPlatSG2.mwc" "SecondaryConcPlatShape.iog.og[0].gco";
connectAttr "groupId2.id" "SecondaryConcPlatShape.iog.og[1].gid";
connectAttr "SecondaryConcPlatSG3.mwc" "SecondaryConcPlatShape.iog.og[1].gco";
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SecondaryConcPlatSG.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SecondaryConcPlatSG1.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SecondaryConcPlatSG2.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" "SecondaryConcPlatSG3.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SecondaryConcPlatSG.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SecondaryConcPlatSG1.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SecondaryConcPlatSG2.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" "SecondaryConcPlatSG3.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr "M_DarkGrey.oc" "SecondaryConcPlatSG.ss";
connectAttr "SecondaryConcPlatSG.msg" "materialInfo1.sg";
connectAttr "M_DarkGrey.msg" "materialInfo1.m";
connectAttr "WorldGridMaterial.oc" "SecondaryConcPlatSG1.ss";
connectAttr "SecondaryConcPlatSG1.msg" "materialInfo2.sg";
connectAttr "WorldGridMaterial.msg" "materialInfo2.m";
connectAttr "M_DarkGrey1.oc" "SecondaryConcPlatSG2.ss";
connectAttr "groupId1.msg" "SecondaryConcPlatSG2.gn" -na;
connectAttr "SecondaryConcPlatShape.iog.og[0]" "SecondaryConcPlatSG2.dsm" -na;
connectAttr "SecondaryConcPlatSG2.msg" "materialInfo3.sg";
connectAttr "M_DarkGrey1.msg" "materialInfo3.m";
connectAttr "WorldGridMaterial1.oc" "SecondaryConcPlatSG3.ss";
connectAttr "groupId2.msg" "SecondaryConcPlatSG3.gn" -na;
connectAttr "SecondaryConcPlatShape.iog.og[1]" "SecondaryConcPlatSG3.dsm" -na;
connectAttr "SecondaryConcPlatSG3.msg" "materialInfo4.sg";
connectAttr "WorldGridMaterial1.msg" "materialInfo4.m";
connectAttr "layerManager.dli[1]" "layer1.id";
connectAttr "SecondaryConcPlatSG.pa" ":renderPartition.st" -na;
connectAttr "SecondaryConcPlatSG1.pa" ":renderPartition.st" -na;
connectAttr "SecondaryConcPlatSG2.pa" ":renderPartition.st" -na;
connectAttr "SecondaryConcPlatSG3.pa" ":renderPartition.st" -na;
connectAttr "M_DarkGrey.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial.msg" ":defaultShaderList1.s" -na;
connectAttr "M_DarkGrey1.msg" ":defaultShaderList1.s" -na;
connectAttr "WorldGridMaterial1.msg" ":defaultShaderList1.s" -na;
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "ConcreteSlab_Shape2.iog" ":initialShadingGroup.dsm" -na;
// End of SecondaryConcFloor.ma
