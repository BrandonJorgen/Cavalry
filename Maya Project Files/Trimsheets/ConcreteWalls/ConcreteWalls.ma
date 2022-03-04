//Maya ASCII 2022 scene
//Name: ConcreteWalls.ma
//Last modified: Wed, Mar 02, 2022 01:18:18 PM
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
fileInfo "osv" "Windows 10 Home v2009 (Build: 19043)";
fileInfo "UUID" "9DCEFC38-4C1C-0EEE-49F8-CAB32AAC2983";
createNode transform -s -n "persp";
	rename -uid "04AFA46A-49EE-862A-D2FC-598DAB3F0B38";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -2.9914869065294951 0.63317587799273212 10.533231377985715 ;
	setAttr ".r" -type "double3" -4.2000000000008662 -18.800000000001756 1.0499383243968153e-16 ;
	setAttr ".rp" -type "double3" 0 -7.105427357601002e-17 0 ;
	setAttr ".rpt" -type "double3" -1.1309826650682508e-18 1.6779273755254624e-19 4.7473683199002063e-18 ;
createNode camera -s -n "perspShape" -p "persp";
	rename -uid "AC70D06A-46E4-8849-61E0-60A06BAC66E4";
	setAttr -k off ".v" no;
	setAttr ".fl" 34.999999999999979;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 11.753951326525819;
	setAttr ".ow" 0.1;
	setAttr ".imn" -type "string" "persp";
	setAttr ".den" -type "string" "persp_depth";
	setAttr ".man" -type "string" "persp_mask";
	setAttr ".tp" -type "double3" -20.958708179799373 22.116532680627465 -21.361143507494717 ;
	setAttr ".hc" -type "string" "viewSet -p %camera";
	setAttr ".ai_translator" -type "string" "perspective";
createNode transform -s -n "top";
	rename -uid "CAB9E9F6-4401-AA5B-5CEA-22994867A1DB";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 0 10.001000000000001 0 ;
	setAttr ".r" -type "double3" -90 0 0 ;
createNode camera -s -n "topShape" -p "top";
	rename -uid "4145C33D-4F9E-2677-892F-A2A778C6D553";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.001000000000001;
	setAttr ".ow" 4.2105263157894743;
	setAttr ".imn" -type "string" "top";
	setAttr ".den" -type "string" "top_depth";
	setAttr ".man" -type "string" "top_mask";
	setAttr ".hc" -type "string" "viewSet -t %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "front";
	rename -uid "6F36F36B-495A-1C97-3D3F-A4BCC6C87ED7";
	setAttr ".v" no;
	setAttr ".t" -type "double3" -0.10520265627594583 0.65724745206611834 10.001000000000001 ;
createNode camera -s -n "frontShape" -p "front";
	rename -uid "1BEA5B4D-48C9-ADD4-62BC-4092F57A39E2";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.001000000000001;
	setAttr ".ow" 8.7369102599724737;
	setAttr ".imn" -type "string" "front";
	setAttr ".den" -type "string" "front_depth";
	setAttr ".man" -type "string" "front_mask";
	setAttr ".hc" -type "string" "viewSet -f %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -s -n "side";
	rename -uid "C443A208-4174-A803-787B-329B96D0883A";
	setAttr ".v" no;
	setAttr ".t" -type "double3" 10.001000000000001 0 0 ;
	setAttr ".r" -type "double3" 0 90 0 ;
createNode camera -s -n "sideShape" -p "side";
	rename -uid "AABF29BE-4A35-59C3-F7F5-8E9CB4A02264";
	setAttr -k off ".v" no;
	setAttr ".rnd" no;
	setAttr ".ncp" 0.001;
	setAttr ".fcp" 100;
	setAttr ".fd" 0.05;
	setAttr ".coi" 10.001000000000001;
	setAttr ".ow" 8.4222097033412062;
	setAttr ".imn" -type "string" "side";
	setAttr ".den" -type "string" "side_depth";
	setAttr ".man" -type "string" "side_mask";
	setAttr ".hc" -type "string" "viewSet -s %camera";
	setAttr ".o" yes;
	setAttr ".ai_translator" -type "string" "orthographic";
createNode transform -n "BASE";
	rename -uid "D244FDFF-4368-601F-5556-7382B7A873A4";
	setAttr ".r" -type "double3" 90.000000000000028 0 0 ;
createNode mesh -n "BASEShape" -p "BASE";
	rename -uid "7E000035-4BBF-E7D8-9938-CAB740621CB0";
	setAttr -k off ".v";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr -s 5 ".gtag";
	setAttr ".gtag[0].gtagnm" -type "string" "back";
	setAttr ".gtag[0].gtagcmp" -type "componentList" 1 "e[3]";
	setAttr ".gtag[1].gtagnm" -type "string" "front";
	setAttr ".gtag[1].gtagcmp" -type "componentList" 1 "e[0]";
	setAttr ".gtag[2].gtagnm" -type "string" "left";
	setAttr ".gtag[2].gtagcmp" -type "componentList" 1 "e[1]";
	setAttr ".gtag[3].gtagnm" -type "string" "right";
	setAttr ".gtag[3].gtagcmp" -type "componentList" 1 "e[2]";
	setAttr ".gtag[4].gtagnm" -type "string" "rim";
	setAttr ".gtag[4].gtagcmp" -type "componentList" 1 "e[0:3]";
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 4 ".uvst[0].uvsp[0:3]" -type "float2" 0 0 1 0 0 1 1 1;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 4 ".vt[0:3]"  -2 0 2 2 0 2 -2 0 -2 2 0 -2;
	setAttr -s 4 ".ed[0:3]"  0 1 0 0 2 0 1 3 0 2 3 0;
	setAttr -ch 4 ".fc[0]" -type "polyFaces" 
		f 4 0 2 -4 -2
		mu 0 4 0 1 3 2;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Trim_A";
	rename -uid "9D61DA67-41D1-D56B-387F-F983F88D6143";
createNode transform -n "polySurface45" -p "Trim_A";
	rename -uid "943EBC24-40DF-17A5-736D-B097DF9D7CBD";
createNode mesh -n "polySurfaceShape50" -p "polySurface45";
	rename -uid "28DF51F7-4A54-F0C1-19BC-1E976703A5D0";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:31]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 39 ".uvst[0].uvsp[0:38]" -type "float2" 0.0080570979 0.24194288
		 0.0080570905 0.0080571007 0.49194288 0.0080571026 0.49194288 0.24194288 0.5 0 0 0
		 0.5 0.25 0.5 0 0 0.25 0.5 0.25 0 0 0 0.25 0.25 0 0.25 0 0.24999999 0.0080571016 0.24999999
		 0.24194288 0.25 0.25 0.25 0.25 0 0.125 0 0.125 0.0080570942 0.12499999 0.24999999
		 0.12499999 0.49194288 0.12499999 0.5 0.125 0.5 0.125 0.375 0 0.375 0 0.37097144 0.0080571026
		 0.37097144 0.12499999 0.37097144 0.24194288 0.375 0.25 0.375 0.25 0.125 0 0.125 0
		 0.12902854 0.0080571007 0.12902854 0.12499999 0.12902854 0.24194288 0.125 0.25 0.125
		 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 39 ".vt[0:38]"  -2 -2 0 -2 -1 0 2.8421709e-16 -2 0 2.8421709e-16 -1 0
		 -2 -2 0.048350714 -1.96777165 -1.96777165 0.080579154 -0.03222844 -1.96777165 0.080579154
		 3.6948789e-16 -2 0.048350714 -0.03222844 -1.03222847 0.080579154 3.6948789e-16 -1 0.048350714
		 -1.96777165 -1.03222847 0.080579154 -2 -1 0.048350714 -1 -2 0 -1 -2 0.048350714 -1 -1.96777165 0.080579154
		 -1 -1.03222847 0.080579154 -1 -1 0.048350714 -1 -1 0 -2 -1.5 0 -2 -1.5 0.048350714
		 -1.96777165 -1.5 0.080579154 -1 -1.5 0.080579154 -0.03222844 -1.5 0.080579154 3.6948789e-16 -1.5 0.048350714
		 2.8421709e-16 -1.5 0 -0.5 -2 0 -0.5 -2 0.048350714 -0.51611423 -1.96777165 0.080579154
		 -0.51611423 -1.5 0.080579154 -0.51611423 -1.03222847 0.080579154 -0.5 -1 0.048350714
		 -0.5 -1 0 -1.5 -2 0 -1.5 -2 0.048350714 -1.48388577 -1.96777165 0.080579154 -1.48388577 -1.5 0.080579154
		 -1.48388577 -1.03222847 0.080579154 -1.5 -1 0.048350714 -1.5 -1 0;
	setAttr -s 70 ".ed[0:69]"  0 32 0 0 18 0 1 38 0 2 24 0 4 5 0 5 20 0
		 10 11 0 11 19 0 4 33 0 7 6 0 6 27 0 7 23 0 9 8 0 8 22 0 9 30 0 10 36 0 2 7 0 4 0 0
		 3 9 0 1 11 0 12 25 0 13 26 0 14 34 0 15 29 0 16 37 0 17 31 0 12 13 1 13 14 1 14 21 1
		 15 16 1 16 17 1 18 1 0 19 4 0 20 10 0 21 15 1 22 6 0 23 9 0 24 3 0 18 19 1 19 20 1
		 20 35 1 21 28 1 22 23 1 23 24 1 25 2 0 26 7 0 27 14 0 28 22 1 29 8 0 30 16 0 31 3 0
		 25 26 1 26 27 1 27 28 1 28 29 1 29 30 1 30 31 1 32 12 0 33 13 0 34 5 0 35 21 1 36 15 0
		 37 11 0 38 17 0 32 33 1 33 34 1 34 35 1 35 36 1 36 37 1 37 38 1;
	setAttr -s 32 -ch 128 ".fc[0:31]" -type "polyFaces" 
		f 4 39 33 6 7
		mu 0 4 19 20 0 11
		f 4 -5 8 65 59
		mu 0 4 1 5 33 34
		f 4 42 36 12 13
		mu 0 4 22 23 9 3
		f 4 68 62 -7 15
		mu 0 4 36 37 11 0
		f 4 40 67 -16 -34
		mu 0 4 20 35 36 0
		f 4 0 64 -9 17
		mu 0 4 10 32 33 5
		f 4 43 37 18 -37
		mu 0 4 23 24 6 9
		f 4 69 -3 19 -63
		mu 0 4 37 38 8 11
		f 4 -32 38 -8 -20
		mu 0 4 8 18 19 11
		f 4 -27 20 51 -22
		mu 0 4 13 12 25 26
		f 4 -28 21 52 46
		mu 0 4 14 13 26 27
		f 4 -35 41 54 -24
		mu 0 4 15 21 28 29
		f 4 55 49 -30 23
		mu 0 4 29 30 16 15
		f 4 56 -26 -31 -50
		mu 0 4 30 31 17 16
		f 4 -39 -2 -18 -33
		mu 0 4 19 18 10 5
		f 4 4 5 -40 32
		mu 0 4 5 1 20 19
		f 4 -60 66 -41 -6
		mu 0 4 1 34 35 20
		f 4 53 -42 -29 -47
		mu 0 4 27 28 21 14
		f 4 -10 11 -43 35
		mu 0 4 2 7 23 22
		f 4 3 -44 -12 -17
		mu 0 4 4 24 23 7
		f 4 -52 44 16 -46
		mu 0 4 26 25 4 7
		f 4 -53 45 9 10
		mu 0 4 27 26 7 2
		f 4 -48 -54 -11 -36
		mu 0 4 22 28 27 2
		f 4 -55 47 -14 -49
		mu 0 4 29 28 22 3
		f 4 -13 14 -56 48
		mu 0 4 3 9 30 29
		f 4 -51 -57 -15 -19
		mu 0 4 6 31 30 9
		f 4 -65 57 26 -59
		mu 0 4 33 32 12 13
		f 4 -66 58 27 22
		mu 0 4 34 33 13 14
		f 4 -67 -23 28 -61
		mu 0 4 35 34 14 21
		f 4 -68 60 34 -62
		mu 0 4 36 35 21 15
		f 4 29 24 -69 61
		mu 0 4 15 16 37 36
		f 4 30 -64 -70 -25
		mu 0 4 16 17 38 37;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface46" -p "Trim_A";
	rename -uid "CE0CA567-4347-0C4D-7F76-4B99DBADC4B8";
createNode mesh -n "polySurfaceShape51" -p "polySurface46";
	rename -uid "9BF7F235-4569-C23F-A8A3-8F95D91DADE1";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:31]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 39 ".uvst[0].uvsp[0:38]" -type "float2" 0.50805712 0.0080571175
		 0.50805712 0.24194288 0.99194288 0.24194288 0.99194288 0.0080570979 0.5 0 0.5 0.25
		 1 0 0.5 0 1 0.25 1 0 0.5 0.25 1 0.25 0.75 0 0.75 0 0.75 0.0080571081 0.75 0.24194288
		 0.75 0.25 0.75 0.25 1 0.125 1 0.125 0.99194288 0.12499999 0.75 0.12499999 0.50805712
		 0.125 0.5 0.125 0.5 0.125 0.875 0 0.875 0 0.87097144 0.0080571026 0.87097144 0.12499999
		 0.87097144 0.24194288 0.875 0.25 0.875 0.25 0.625 0 0.625 0 0.62902856 0.0080571128
		 0.62902856 0.125 0.62902856 0.24194288 0.625 0.25 0.625 0.25;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 39 ".vt[0:38]"  2 -2 0 2 -1 0 0 -2 0 0 -1 0 0.03222844 -1.96777165 0.080579154
		 -2.5581245e-16 -2 0.048350714 -2.5581245e-16 -1 0.048350714 0.03222844 -1.03222847 0.080579154
		 1.96777165 -1.96777165 0.080579154 2 -2 0.048350714 1.96777165 -1.03222847 0.080579154
		 2 -1 0.048350714 1 -2 0 1 -2 0.048350714 1 -1.96777165 0.080579154 1 -1.03222847 0.080579154
		 1 -1 0.048350714 1 -1 0 2 -1.5 0 2 -1.5 0.048350714 1.96777165 -1.5 0.080579154 1 -1.5 0.080579154
		 0.03222844 -1.5 0.080579154 -2.5581245e-16 -1.5 0.048350714 0 -1.5 0 1.5 -2 0 1.5 -2 0.048350714
		 1.48388577 -1.96777165 0.080579154 1.48388577 -1.5 0.080579154 1.48388577 -1.03222847 0.080579154
		 1.5 -1 0.048350714 1.5 -1 0 0.5 -2 0 0.5 -2 0.048350714 0.51611423 -1.96777165 0.080579154
		 0.51611423 -1.5 0.080579154 0.51611423 -1.03222847 0.080579154 0.5 -1 0.048350714
		 0.5 -1 0;
	setAttr -s 70 ".ed[0:69]"  0 18 0 2 32 0 3 38 0 2 24 0 4 5 0 5 33 0
		 9 8 0 8 27 0 4 22 0 7 6 0 6 23 0 7 36 0 10 11 0 11 30 0 9 19 0 10 20 0 2 5 0 6 3 0
		 0 9 0 1 11 0 12 25 0 13 26 0 14 34 0 15 29 0 16 37 0 17 31 0 12 13 1 13 14 1 14 21 1
		 15 16 1 16 17 1 18 1 0 19 11 0 20 8 0 21 15 1 22 7 0 23 5 0 24 3 0 18 19 1 19 20 1
		 20 28 1 21 35 1 22 23 1 23 24 1 25 0 0 26 9 0 27 14 0 28 21 1 29 10 0 30 16 0 31 1 0
		 25 26 1 26 27 1 27 28 1 28 29 1 29 30 1 30 31 1 32 12 0 33 13 0 34 4 0 35 22 1 36 15 0
		 37 6 0 38 17 0 32 33 1 33 34 1 34 35 1 35 36 1 36 37 1 37 38 1;
	setAttr -s 32 -ch 128 ".fc[0:31]" -type "polyFaces" 
		f 4 4 5 65 59
		mu 0 4 0 7 33 34
		f 4 -5 8 42 36
		mu 0 4 7 0 22 23
		f 4 -10 11 68 62
		mu 0 4 5 1 36 37
		f 4 -7 14 39 33
		mu 0 4 3 9 19 20
		f 4 66 60 -9 -60
		mu 0 4 34 35 22 0
		f 4 43 -4 16 -37
		mu 0 4 23 24 4 7
		f 4 1 64 -6 -17
		mu 0 4 4 32 33 7
		f 4 0 38 -15 -19
		mu 0 4 6 18 19 9
		f 4 69 -3 -18 -63
		mu 0 4 37 38 10 5
		f 4 -27 20 51 -22
		mu 0 4 13 12 25 26
		f 4 -28 21 52 46
		mu 0 4 14 13 26 27
		f 4 53 47 -29 -47
		mu 0 4 27 28 21 14
		f 4 -30 23 55 49
		mu 0 4 16 15 29 30
		f 4 56 -26 -31 -50
		mu 0 4 30 31 17 16
		f 4 -39 31 19 -33
		mu 0 4 19 18 8 11
		f 4 -40 32 -13 15
		mu 0 4 20 19 11 2
		f 4 -35 -48 54 -24
		mu 0 4 15 21 28 29
		f 4 -36 -61 67 -12
		mu 0 4 1 22 35 36
		f 4 -43 35 9 10
		mu 0 4 23 22 1 5
		f 4 -38 -44 -11 17
		mu 0 4 10 24 23 5
		f 4 -52 44 18 -46
		mu 0 4 26 25 6 9
		f 4 -53 45 6 7
		mu 0 4 27 26 9 3
		f 4 40 -54 -8 -34
		mu 0 4 20 28 27 3
		f 4 -55 -41 -16 -49
		mu 0 4 29 28 20 2
		f 4 -56 48 12 13
		mu 0 4 30 29 2 11
		f 4 -51 -57 -14 -20
		mu 0 4 8 31 30 11
		f 4 -65 57 26 -59
		mu 0 4 33 32 12 13
		f 4 -66 58 27 22
		mu 0 4 34 33 13 14
		f 4 41 -67 -23 28
		mu 0 4 21 35 34 14
		f 4 -68 -42 34 -62
		mu 0 4 36 35 21 15
		f 4 -69 61 29 24
		mu 0 4 37 36 15 16
		f 4 30 -64 -70 -25
		mu 0 4 16 17 38 37;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Trim_B";
	rename -uid "07C6F7AC-4D73-7129-8E7A-9CAD8450894F";
createNode mesh -n "Trim_BShape" -p "Trim_B";
	rename -uid "A3D005E7-4B73-CE0C-66DE-BEBD17A5555F";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:55]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 67 ".uvst[0].uvsp[0:66]" -type "float2" 0.0080570988 0.49194291
		 0.0080570951 0.25805712 0.99194288 0.25805712 0.99194294 0.49194288 1 0.25 0 0.25
		 1 0.5 1 0.25 0 0.5 1 0.5 0 0.25 0 0.5 0.5 0.25 0.5 0.25 0.5 0.25805712 0.5 0.49194288
		 0.5 0.5 0.5 0.5 0 0.375 0 0.375 0.008057097 0.375 0.5 0.375 0.99194288 0.375 1 0.375
		 1 0.375 0.75 0.25 0.75 0.25 0.74597144 0.25805712 0.74597144 0.375 0.74597144 0.49194288
		 0.75 0.5 0.75 0.5 0.25 0.25 0.25 0.25 0.25402856 0.25805712 0.25402856 0.375 0.25402856
		 0.49194288 0.25 0.5 0.25 0.5 0.125 0.25 0.125 0.25 0.13104282 0.25805712 0.13104282
		 0.375 0.13104282 0.49194288 0.125 0.5 0.125 0.5 0.375 0.25 0.375 0.25 0.37701428
		 0.25805712 0.37701428 0.375 0.37701428 0.49194288 0.375 0.5 0.375 0.5 0.625 0.25
		 0.625 0.25 0.62298572 0.25805712 0.62298572 0.375 0.62298572 0.49194288 0.625 0.5
		 0.625 0.5 0.875 0.25 0.875 0.25 0.86895716 0.25805712 0.86895716 0.375 0.86895716
		 0.49194288 0.875 0.5 0.875 0.5;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 67 ".vt[0:66]"  -2 -1 0 2 -1 0 2 -7.1054272e-17 0 -2 -7.1054272e-17 0
		 -2 -1 0.048350714 -1.96777165 -0.96777153 0.080579154 1.96777165 -0.96777153 0.080579154
		 2 -1 0.048350714 1.96777165 -0.03222844 0.080579154 2 -1.1368968e-16 0.048350714
		 -1.96777165 -0.03222844 0.080579154 -2 -1.1368968e-16 0.048350714 0 -1 0 0 -1 0.048350714
		 0 -0.96777153 0.080579154 0 -0.03222844 0.080579154 0 -1.1368968e-16 0.048350714
		 0 -7.1054272e-17 0 -2 -0.5 0 -2 -0.5 0.048350714 -1.96777165 -0.5 0.080579154 0 -0.5 0.080579154
		 1.96777165 -0.5 0.080579154 2 -0.5 0.048350714 2 -0.5 0 1 -1 0 1 -1 0.048350714 0.98388582 -0.96777153 0.080579154
		 0.98388582 -0.5 0.080579154 0.98388582 -0.03222844 0.080579154 1 -1.1368968e-16 0.048350714
		 1 -7.1054272e-17 0 -1 -1 0 -1 -1 0.048350714 -0.98388582 -0.96777153 0.080579154
		 -0.98388582 -0.5 0.080579154 -0.98388582 -0.03222844 0.080579154 -1 -1.1368968e-16 0.048350714
		 -1 -7.1054272e-17 0 -1.5 -1 0 -1.5 -1 0.048350714 -1.47582865 -0.96777153 0.080579154
		 -1.47582865 -0.5 0.080579154 -1.47582865 -0.03222844 0.080579154 -1.5 -1.1368968e-16 0.048350714
		 -1.5 -7.1054272e-17 0 -0.5 -1 0 -0.5 -1 0.048350714 -0.49194291 -0.96777153 0.080579154
		 -0.49194291 -0.5 0.080579154 -0.49194291 -0.03222844 0.080579154 -0.5 -1.1368968e-16 0.048350714
		 -0.5 -7.1054272e-17 0 0.5 -1 0 0.5 -1 0.048350714 0.49194291 -0.96777153 0.080579154
		 0.49194291 -0.5 0.080579154 0.49194291 -0.03222844 0.080579154 0.5 -1.1368968e-16 0.048350714
		 0.5 -7.1054272e-17 0 1.5 -1 0 1.5 -1 0.048350714 1.47582865 -0.96777153 0.080579154
		 1.47582865 -0.5 0.080579154 1.47582865 -0.03222844 0.080579154 1.5 -1.1368968e-16 0.048350714
		 1.5 -7.1054272e-17 0;
	setAttr -s 122 ".ed[0:121]"  0 18 0 1 24 0 0 39 0 3 45 0 4 5 0 5 20 0
		 10 11 0 11 19 0 4 40 0 7 6 0 6 62 0 7 23 0 9 8 0 8 22 0 9 65 0 10 43 0 1 7 0 4 0 0
		 2 9 0 3 11 0 12 53 0 13 54 0 14 48 0 15 57 0 16 51 0 17 59 0 12 13 1 13 14 1 14 21 1
		 15 16 1 16 17 1 18 3 0 19 4 0 20 10 0 21 15 1 22 6 0 23 9 0 24 2 0 18 19 1 19 20 1
		 20 42 1 21 56 1 22 23 1 23 24 1 25 60 0 26 61 0 27 55 0 28 63 1 29 64 0 30 58 0 31 66 0
		 25 26 1 26 27 1 27 28 1 28 29 1 29 30 1 30 31 1 32 46 0 33 47 0 34 41 0 35 49 1 36 50 0
		 37 44 0 38 52 0 32 33 1 33 34 1 34 35 1 35 36 1 36 37 1 37 38 1 39 32 0 40 33 0 41 5 0
		 42 35 1 43 36 0 44 11 0 45 38 0 39 40 1 40 41 1 41 42 1 42 43 1 43 44 1 44 45 1 46 12 0
		 47 13 0 48 34 0 49 21 1 50 15 0 51 37 0 52 17 0 46 47 1 47 48 1 48 49 1 49 50 1 50 51 1
		 51 52 1 53 25 0 54 26 0 55 14 0 56 28 1 57 29 0 58 16 0 59 31 0 53 54 1 54 55 1 55 56 1
		 56 57 1 57 58 1 58 59 1 60 1 0 61 7 0 62 27 0 63 22 1 64 8 0 65 30 0 66 2 0 60 61 1
		 61 62 1 62 63 1 63 64 1 64 65 1 65 66 1;
	setAttr -s 56 -ch 224 ".fc[0:55]" -type "polyFaces" 
		f 4 39 33 6 7
		mu 0 4 19 20 0 11
		f 4 -5 8 78 72
		mu 0 4 1 5 40 41
		f 4 42 36 12 13
		mu 0 4 22 23 9 3
		f 4 81 75 -7 15
		mu 0 4 43 44 11 0
		f 4 40 80 -16 -34
		mu 0 4 20 42 43 0
		f 4 2 77 -9 17
		mu 0 4 10 39 40 5
		f 4 43 37 18 -37
		mu 0 4 23 24 6 9
		f 4 82 -4 19 -76
		mu 0 4 44 45 8 11
		f 4 -32 38 -8 -20
		mu 0 4 8 18 19 11
		f 4 -27 20 103 -22
		mu 0 4 13 12 53 54
		f 4 -28 21 104 98
		mu 0 4 14 13 54 55
		f 4 -35 41 106 -24
		mu 0 4 15 21 56 57
		f 4 107 101 -30 23
		mu 0 4 57 58 16 15
		f 4 108 -26 -31 -102
		mu 0 4 58 59 17 16
		f 4 -39 -1 -18 -33
		mu 0 4 19 18 10 5
		f 4 4 5 -40 32
		mu 0 4 5 1 20 19
		f 4 -73 79 -41 -6
		mu 0 4 1 41 42 20
		f 4 105 -42 -29 -99
		mu 0 4 55 56 21 14
		f 4 -10 11 -43 35
		mu 0 4 2 7 23 22
		f 4 1 -44 -12 -17
		mu 0 4 4 24 23 7
		f 4 -52 44 116 -46
		mu 0 4 26 25 60 61
		f 4 -53 45 117 111
		mu 0 4 27 26 61 62
		f 4 118 -48 -54 -112
		mu 0 4 62 63 28 27
		f 4 -55 47 119 -49
		mu 0 4 29 28 63 64
		f 4 120 114 -56 48
		mu 0 4 64 65 30 29
		f 4 121 -51 -57 -115
		mu 0 4 65 66 31 30
		f 4 -65 57 90 -59
		mu 0 4 33 32 46 47
		f 4 -66 58 91 85
		mu 0 4 34 33 47 48
		f 4 -67 -86 92 -61
		mu 0 4 35 34 48 49
		f 4 -68 60 93 -62
		mu 0 4 36 35 49 50
		f 4 94 88 -69 61
		mu 0 4 50 51 37 36
		f 4 95 -64 -70 -89
		mu 0 4 51 52 38 37
		f 4 -78 70 64 -72
		mu 0 4 40 39 32 33
		f 4 -79 71 65 59
		mu 0 4 41 40 33 34
		f 4 -80 -60 66 -74
		mu 0 4 42 41 34 35
		f 4 -81 73 67 -75
		mu 0 4 43 42 35 36
		f 4 68 62 -82 74
		mu 0 4 36 37 44 43
		f 4 69 -77 -83 -63
		mu 0 4 37 38 45 44
		f 4 -91 83 26 -85
		mu 0 4 47 46 12 13
		f 4 -92 84 27 22
		mu 0 4 48 47 13 14
		f 4 -93 -23 28 -87
		mu 0 4 49 48 14 21
		f 4 -94 86 34 -88
		mu 0 4 50 49 21 15
		f 4 29 24 -95 87
		mu 0 4 15 16 51 50
		f 4 30 -90 -96 -25
		mu 0 4 16 17 52 51
		f 4 -104 96 51 -98
		mu 0 4 54 53 25 26
		f 4 -105 97 52 46
		mu 0 4 55 54 26 27
		f 4 53 -100 -106 -47
		mu 0 4 27 28 56 55
		f 4 -107 99 54 -101
		mu 0 4 57 56 28 29
		f 4 55 49 -108 100
		mu 0 4 29 30 58 57
		f 4 56 -103 -109 -50
		mu 0 4 30 31 59 58
		f 4 -117 109 16 -111
		mu 0 4 61 60 4 7
		f 4 -118 110 9 10
		mu 0 4 62 61 7 2
		f 4 -113 -119 -11 -36
		mu 0 4 22 63 62 2
		f 4 -120 112 -14 -114
		mu 0 4 64 63 22 3
		f 4 -13 14 -121 113
		mu 0 4 3 9 65 64
		f 4 -116 -122 -15 -19
		mu 0 4 6 66 65 9;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Trim_C";
	rename -uid "14796FF6-4978-0333-4A61-0CAEAC69CA45";
createNode mesh -n "Trim_CShape" -p "Trim_C";
	rename -uid "C83B7884-475D-E698-C5B1-E1B674D2308C";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:25]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 39 ".uvst[0].uvsp[0:38]" -type "float2" 1 0.5 0 0.75 1 0.75
		 1 0.75 0 0.5 0 0.5 0.0080571175 0.75 0.99194288 0.5 1 0.5 0.99194288 0.75 0.0080570998
		 0.5 0 0.75 0.5 0.5 0.5 0.75 0 0.625 0 0.625 0.0080571081 0.625 0.5 0.625 0.99194288
		 0.625 1 0.625 1 0.625 0.74597144 0.5 0.74597144 0.625 0.74597144 0.75 0.25402856
		 0.5 0.25402856 0.625 0.25402856 0.75 0.13104282 0.5 0.13104284 0.625 0.13104284 0.75
		 0.37701428 0.5 0.37701428 0.625 0.37701428 0.75 0.62298572 0.5 0.62298572 0.625 0.62298572
		 0.75 0.86895716 0.5 0.86895716 0.625 0.86895716 0.75;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 39 ".vt[0:38]"  -2 7.1054272e-17 0 2 7.1054272e-17 0 2 1 0
		 -2 1 0 1.96777165 1.4210854e-16 0.080579154 2 1.1368968e-16 0.048350714 1.96777165 1 0.080579154
		 2 1 0.048350714 -2 1.1368968e-16 0.048350714 -1.96777165 1.4210854e-16 0.080579154
		 -1.96777165 1 0.080579154 -2 1 0.048350714 0 1.4210854e-16 0.080579154 0 1 0.080579154
		 -2 0.5 0 -2 0.5 0.048350714 -1.96777165 0.5 0.080579154 0 0.5 0.080579154 1.96777165 0.5 0.080579154
		 2 0.5 0.048350714 2 0.5 0 0.98388582 1.4210854e-16 0.080579154 0.98388582 0.5 0.080579154
		 0.98388582 1 0.080579154 -0.98388582 1.4210854e-16 0.080579154 -0.98388582 0.5 0.080579154
		 -0.98388582 1 0.080579154 -1.47582865 1.4210854e-16 0.080579154 -1.47582865 0.5 0.080579154
		 -1.47582865 1 0.080579154 -0.49194291 1.4210854e-16 0.080579154 -0.49194291 0.5 0.080579154
		 -0.49194291 1 0.080579154 0.49194291 1.4210854e-16 0.080579154 0.49194291 0.5 0.080579154
		 0.49194291 1 0.080579154 1.47582865 1.4210854e-16 0.080579154 1.47582865 0.5 0.080579154
		 1.47582865 1 0.080579154;
	setAttr -s 64 ".ed[0:63]"  0 14 0 1 20 0 0 1 0 3 2 0 0 8 0 1 5 0 2 7 0
		 3 11 0 5 4 0 6 7 0 9 27 0 9 8 0 10 29 0 11 10 0 4 18 0 7 19 0 8 15 0 10 16 0 12 33 0
		 13 35 0 12 17 1 14 3 0 15 11 0 16 9 0 17 13 1 18 6 0 19 5 0 20 2 0 14 15 1 15 16 1
		 16 28 1 17 34 1 18 19 1 19 20 1 21 36 0 22 37 1 23 38 0 21 22 1 22 23 1 24 30 0 25 31 1
		 26 32 0 24 25 1 25 26 1 27 24 0 28 25 1 29 26 0 27 28 1 28 29 1 30 12 0 31 17 1 32 13 0
		 30 31 1 31 32 1 33 21 0 34 22 1 35 23 0 33 34 1 34 35 1 36 4 0 37 18 1 38 6 0 36 37 1
		 37 38 1;
	setAttr -s 26 -ch 122 ".fc[0:25]" -type "polyFaces" 
		f 4 17 30 48 -13
		mu 0 4 6 16 28 29
		f 13 2 5 8 -60 -35 -55 -19 -50 -40 -45 -11 11 -5
		mu 0 13 4 0 8 7 36 21 33 12 30 24 27 10 5
		f 4 33 27 6 15
		mu 0 4 19 20 2 3
		f 13 -4 7 13 12 46 41 51 19 56 36 61 9 -7
		mu 0 13 2 1 11 6 29 26 32 13 35 23 38 9 3
		f 4 -22 28 22 -8
		mu 0 4 1 14 15 11
		f 4 32 -16 -10 -26
		mu 0 4 18 19 3 9
		f 4 29 -18 -14 -23
		mu 0 4 15 16 6 11
		f 4 -25 31 58 -20
		mu 0 4 13 17 34 35
		f 4 -29 -1 4 16
		mu 0 4 15 14 4 5
		f 4 -12 -24 -30 -17
		mu 0 4 5 10 16 15
		f 4 47 -31 23 10
		mu 0 4 27 28 16 10
		f 4 57 -32 -21 18
		mu 0 4 33 34 17 12
		f 4 -9 -27 -33 -15
		mu 0 4 7 8 19 18
		f 4 1 -34 26 -6
		mu 0 4 0 20 19 8
		f 4 62 -36 -38 34
		mu 0 4 36 37 22 21
		f 4 -39 35 63 -37
		mu 0 4 23 22 37 38
		f 4 52 -41 -43 39
		mu 0 4 30 31 25 24
		f 4 -44 40 53 -42
		mu 0 4 26 25 31 32
		f 4 42 -46 -48 44
		mu 0 4 24 25 28 27
		f 4 -49 45 43 -47
		mu 0 4 29 28 25 26
		f 4 -51 -53 49 20
		mu 0 4 17 31 30 12
		f 4 -54 50 24 -52
		mu 0 4 32 31 17 13
		f 4 37 -56 -58 54
		mu 0 4 21 22 34 33
		f 4 -59 55 38 -57
		mu 0 4 35 34 22 23
		f 4 -61 -63 59 14
		mu 0 4 18 37 36 7
		f 4 -64 60 25 -62
		mu 0 4 38 37 18 9;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Trim_D";
	rename -uid "4B60DCCF-465B-C2FC-5F8C-D2886DB3707B";
createNode transform -n "polySurface47" -p "Trim_D";
	rename -uid "3CDD5160-4A7E-7B12-B432-69BF8019FDB8";
createNode transform -n "polySurface49" -p "polySurface47";
	rename -uid "D97521EE-4365-DEBC-6424-618D04EF5977";
createNode mesh -n "polySurfaceShape55" -p "polySurface49";
	rename -uid "95FDA666-43E5-DD02-6A85-0CAC7AB73327";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:8]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 12 ".uvst[0].uvsp[0:11]" -type "float2" 0.92069525 0.82930475
		 0.92069525 0.75402856 0.99597144 0.75402856 0.99597144 0.82930475 1 0.75 0.91666663
		 0.75 1 0.83333331 1 0.75 0.91666669 0.83333331 1 0.83333331 0.91666669 0.75 0.91666663
		 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 12 ".vt[0:11]"  2 1 0 2 1.33333325 0 1.66666687 1.33333325 0
		 1.66666687 1 0 1.66666687 1 0.064464934 1.6827811 1.016114235 0.080579154 1.98388577 1.016114235 0.080579154
		 2 1 0.064464934 1.98388577 1.31721914 0.080579154 2 1.33333325 0.064464934 1.6827811 1.31721914 0.080579154
		 1.66666687 1.33333325 0.064464934;
	setAttr -s 20 ".ed[0:19]"  0 1 0 2 1 0 3 0 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 7 0 7 6 0 6 5 0 7 9 0 9 8 0 8 6 0 9 11 0 10 8 0 0 7 0 4 3 0 1 9 0 2 11 0;
	setAttr -s 9 -ch 36 ".fc[0:8]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 -5 8 9 10
		mu 0 4 1 5 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 -7 15
		mu 0 4 3 9 11 0
		f 4 -11 -14 -16 -6
		mu 0 4 1 2 3 0
		f 4 2 16 -9 17
		mu 0 4 10 4 7 5
		f 4 0 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -2 19 -15 -19
		mu 0 4 6 8 11 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface50" -p "polySurface47";
	rename -uid "DAAC19DF-4A83-EC79-89DA-949D58268E60";
createNode transform -n "polySurface51" -p "polySurface50";
	rename -uid "2CE9EAAE-44E6-130E-14B4-A9B0C208BBCD";
createNode mesh -n "polySurfaceShape57" -p "polySurface51";
	rename -uid "723A023B-4649-4B6D-1A19-2C91BF23B534";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:8]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 12 ".uvst[0].uvsp[0:11]" -type "float2" 0.83736187 0.82930475
		 0.83736187 0.75402856 0.91263813 0.75402856 0.91263819 0.82930475 0.91666669 0.75
		 0.83333331 0.75 0.91666669 0.83333331 0.91666669 0.75 0.83333331 0.83333331 0.91666663
		 0.83333331 0.83333331 0.75 0.83333331 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 12 ".vt[0:11]"  1.66666687 1.33333325 0 1.66666687 1 0 1.33333349 1.33333325 0
		 1.33333349 1 0 1.33333349 1 0.064464934 1.34944761 1.016114235 0.080579154 1.65055263 1.016114235 0.080579154
		 1.66666687 1 0.064464934 1.65055263 1.31721914 0.080579154 1.66666687 1.33333325 0.064464934
		 1.34944761 1.31721914 0.080579154 1.33333349 1.33333325 0.064464934;
	setAttr -s 20 ".ed[0:19]"  0 1 0 2 0 0 3 1 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 7 0 7 6 0 6 5 0 7 9 0 9 8 0 8 6 0 9 11 0 10 8 0 1 7 0 4 3 0 0 9 0 2 11 0;
	setAttr -s 9 -ch 36 ".fc[0:8]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 -5 8 9 10
		mu 0 4 1 5 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 -7 15
		mu 0 4 3 9 11 0
		f 4 -11 -14 -16 -6
		mu 0 4 1 2 3 0
		f 4 2 16 -9 17
		mu 0 4 10 4 7 5
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -2 19 -15 -19
		mu 0 4 6 8 11 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface52" -p "polySurface50";
	rename -uid "4F384167-46B0-CA2A-B23C-4ABCA473D57C";
createNode transform -n "polySurface53" -p "polySurface52";
	rename -uid "06F57884-4BDB-EF0D-A68D-C1BC60C230DF";
createNode mesh -n "polySurfaceShape59" -p "polySurface53";
	rename -uid "9D291A92-41E2-1170-209A-61B2DC37E92D";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:8]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 12 ".uvst[0].uvsp[0:11]" -type "float2" 0.7540285 0.82930475
		 0.7540285 0.75402856 0.82930475 0.75402856 0.82930475 0.82930475 0.83333331 0.75
		 0.74999988 0.75 0.83333331 0.83333331 0.83333331 0.75 0.74999994 0.83333331 0.83333331
		 0.83333331 0.74999994 0.75 0.74999994 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 12 ".vt[0:11]"  1.33333349 1.33333325 0 1.33333349 1 0 1 1.33333325 0
		 1 1 0 1 1 0.064464934 1.016114235 1.016114235 0.080579154 1.31721926 1.016114235 0.080579154
		 1.33333349 1 0.064464934 1.31721926 1.31721914 0.080579154 1.33333349 1.33333325 0.064464934
		 1.016114235 1.31721914 0.080579154 1 1.33333325 0.064464934;
	setAttr -s 20 ".ed[0:19]"  0 1 0 2 0 0 3 1 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 7 0 7 6 0 6 5 0 7 9 0 9 8 0 8 6 0 9 11 0 10 8 0 1 7 0 4 3 0 0 9 0 2 11 0;
	setAttr -s 9 -ch 36 ".fc[0:8]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 -5 8 9 10
		mu 0 4 1 5 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 -7 15
		mu 0 4 3 9 11 0
		f 4 -11 -14 -16 -6
		mu 0 4 1 2 3 0
		f 4 2 16 -9 17
		mu 0 4 10 4 7 5
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -2 19 -15 -19
		mu 0 4 6 8 11 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface54" -p "polySurface52";
	rename -uid "8C65449B-4E9C-A181-1189-539277825387";
createNode transform -n "polySurface55" -p "polySurface54";
	rename -uid "E1E2B518-49FB-6498-E720-73B0E7770238";
createNode mesh -n "polySurfaceShape61" -p "polySurface55";
	rename -uid "87BA01DC-4ED6-7C48-1173-E8B97E31320C";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:8]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 12 ".uvst[0].uvsp[0:11]" -type "float2" 0.67069519 0.82930475
		 0.67069519 0.75402856 0.74597138 0.75402856 0.74597138 0.82930475 0.74999994 0.75
		 0.66666657 0.75 0.74999994 0.83333331 0.74999988 0.75 0.66666663 0.83333331 0.74999988
		 0.83333331 0.66666663 0.75 0.66666657 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 12 ".vt[0:11]"  1 1.33333325 0 1 1 0 0.66666675 1.33333325 0
		 0.66666675 1 0 0.66666675 1 0.064464934 0.68278092 1.016114235 0.080579154 0.98388582 1.016114235 0.080579154
		 1 1 0.064464934 0.98388582 1.31721914 0.080579154 1 1.33333325 0.064464934 0.68278092 1.31721914 0.080579154
		 0.66666675 1.33333325 0.064464934;
	setAttr -s 20 ".ed[0:19]"  0 1 0 2 0 0 3 1 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 7 0 7 6 0 6 5 0 7 9 0 9 8 0 8 6 0 9 11 0 10 8 0 1 7 0 4 3 0 0 9 0 2 11 0;
	setAttr -s 9 -ch 36 ".fc[0:8]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 -5 8 9 10
		mu 0 4 1 5 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 -7 15
		mu 0 4 3 9 11 0
		f 4 -11 -14 -16 -6
		mu 0 4 1 2 3 0
		f 4 2 16 -9 17
		mu 0 4 10 4 7 5
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -2 19 -15 -19
		mu 0 4 6 8 11 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface56" -p "polySurface54";
	rename -uid "A8168D06-444B-E91A-9EB0-00A2FDE0E429";
createNode transform -n "polySurface57" -p "polySurface56";
	rename -uid "3108892A-453B-3072-FFD3-FFB087711D9A";
createNode mesh -n "polySurfaceShape63" -p "polySurface57";
	rename -uid "0D8D1B2C-4BFE-3217-AE83-45B854FDAE7B";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:8]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 12 ".uvst[0].uvsp[0:11]" -type "float2" 0.58736187 0.82930475
		 0.58736187 0.75402856 0.66263807 0.75402856 0.66263813 0.82930475 0.66666663 0.75
		 0.58333325 0.75 0.66666663 0.83333331 0.66666657 0.75 0.58333331 0.83333331 0.66666657
		 0.83333331 0.58333331 0.75 0.58333325 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 12 ".vt[0:11]"  0.66666675 1.33333325 0 0.66666675 1 0 0.33333337 1.33333325 0
		 0.33333337 1 0 0.33333337 1 0.064464934 0.34944761 1.016114235 0.080579154 0.65055251 1.016114235 0.080579154
		 0.66666675 1 0.064464934 0.65055251 1.31721914 0.080579154 0.66666675 1.33333325 0.064464934
		 0.34944761 1.31721914 0.080579154 0.33333337 1.33333325 0.064464934;
	setAttr -s 20 ".ed[0:19]"  0 1 0 2 0 0 3 1 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 7 0 7 6 0 6 5 0 7 9 0 9 8 0 8 6 0 9 11 0 10 8 0 1 7 0 4 3 0 0 9 0 2 11 0;
	setAttr -s 9 -ch 36 ".fc[0:8]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 -5 8 9 10
		mu 0 4 1 5 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 -7 15
		mu 0 4 3 9 11 0
		f 4 -11 -14 -16 -6
		mu 0 4 1 2 3 0
		f 4 2 16 -9 17
		mu 0 4 10 4 7 5
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -2 19 -15 -19
		mu 0 4 6 8 11 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface58" -p "polySurface56";
	rename -uid "44B59327-4780-4208-DC60-BC9A9F723497";
createNode transform -n "polySurface59" -p "polySurface58";
	rename -uid "35C06D87-4256-A160-4DC8-EA867F0ED6FA";
createNode mesh -n "polySurfaceShape65" -p "polySurface59";
	rename -uid "FC0C67A0-446C-CBBF-4E28-9A87992411C6";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:8]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 12 ".uvst[0].uvsp[0:11]" -type "float2" 0.50402856 0.82930481
		 0.50402856 0.75402856 0.57930475 0.75402856 0.57930475 0.82930481 0.58333331 0.75
		 0.5 0.75 0.58333331 0.83333331 0.58333325 0.75 0.5 0.83333337 0.58333325 0.83333331
		 0.5 0.75 0.5 0.83333337;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 12 ".vt[0:11]"  0.33333337 1.33333325 0 0.33333337 1 0 3.8146972e-08 1.33333325 0
		 3.8146972e-08 1 0 3.8146972e-08 1 0.064464934 0.016114257 1.016114235 0.080579154
		 0.31721914 1.016114235 0.080579154 0.33333337 1 0.064464934 0.31721914 1.31721914 0.080579154
		 0.33333337 1.33333325 0.064464934 0.016114257 1.31721914 0.080579154 3.8146972e-08 1.33333325 0.064464934;
	setAttr -s 20 ".ed[0:19]"  0 1 0 2 0 0 3 1 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 7 0 7 6 0 6 5 0 7 9 0 9 8 0 8 6 0 9 11 0 10 8 0 1 7 0 4 3 0 0 9 0 2 11 0;
	setAttr -s 9 -ch 36 ".fc[0:8]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 -5 8 9 10
		mu 0 4 1 5 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 -7 15
		mu 0 4 3 9 11 0
		f 4 -11 -14 -16 -6
		mu 0 4 1 2 3 0
		f 4 2 16 -9 17
		mu 0 4 10 4 7 5
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -2 19 -15 -19
		mu 0 4 6 8 11 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface60" -p "polySurface58";
	rename -uid "56D7B1C1-46E8-9C5F-30A1-A988429E3AF5";
createNode transform -n "polySurface61" -p "polySurface60";
	rename -uid "5F1F908F-4A9D-CD73-282E-1C8F6F6CEDD7";
createNode mesh -n "polySurfaceShape67" -p "polySurface61";
	rename -uid "CF16EBE1-421F-E611-8116-C0AB0E03C056";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:8]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 12 ".uvst[0].uvsp[0:11]" -type "float2" 0.42069522 0.82930481
		 0.42069522 0.75402856 0.49597144 0.75402856 0.49597144 0.82930481 0.5 0.75 0.41666666
		 0.75 0.5 0.83333337 0.5 0.75 0.41666666 0.83333337 0.5 0.83333337 0.41666666 0.75
		 0.41666666 0.83333337;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 12 ".vt[0:11]"  3.8146972e-08 1.33333325 0 3.8146972e-08 1 0
		 -0.33333331 1.33333325 0 -0.33333331 1 0 -0.33333331 1 0.064464934 -0.31721911 1.016114235 0.080579154
		 -0.016114181 1.016114235 0.080579154 3.8146972e-08 1 0.064464934 -0.016114181 1.31721914 0.080579154
		 3.8146972e-08 1.33333325 0.064464934 -0.31721911 1.31721914 0.080579154 -0.33333331 1.33333325 0.064464934;
	setAttr -s 20 ".ed[0:19]"  0 1 0 2 0 0 3 1 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 7 0 7 6 0 6 5 0 7 9 0 9 8 0 8 6 0 9 11 0 10 8 0 1 7 0 4 3 0 0 9 0 2 11 0;
	setAttr -s 9 -ch 36 ".fc[0:8]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 -5 8 9 10
		mu 0 4 1 5 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 -7 15
		mu 0 4 3 9 11 0
		f 4 -11 -14 -16 -6
		mu 0 4 1 2 3 0
		f 4 2 16 -9 17
		mu 0 4 10 4 7 5
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -2 19 -15 -19
		mu 0 4 6 8 11 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface62" -p "polySurface60";
	rename -uid "A46004DB-4326-B6F0-48F0-7AA270876B20";
createNode transform -n "polySurface63" -p "polySurface62";
	rename -uid "727BF6AF-40B7-DA31-E66A-C79F5119EAC6";
createNode mesh -n "polySurfaceShape69" -p "polySurface63";
	rename -uid "611FEF26-4A1B-4588-CE8E-4BBA808A1C54";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:8]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 12 ".uvst[0].uvsp[0:11]" -type "float2" 0.3373619 0.82930487
		 0.3373619 0.75402856 0.4126381 0.75402856 0.41263813 0.82930487 0.41666666 0.75 0.33333331
		 0.75 0.41666666 0.83333337 0.41666666 0.75 0.33333334 0.83333337 0.41666666 0.83333337
		 0.33333334 0.75 0.33333331 0.83333337;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 12 ".vt[0:11]"  -0.33333331 1.33333325 0 -0.33333331 1 0
		 -0.66666663 1.33333325 0 -0.66666663 1 0 -0.66666663 1 0.064464934 -0.65055245 1.016114235 0.080579154
		 -0.34944755 1.016114235 0.080579154 -0.33333331 1 0.064464934 -0.34944755 1.31721914 0.080579154
		 -0.33333331 1.33333325 0.064464934 -0.65055245 1.31721914 0.080579154 -0.66666663 1.33333325 0.064464934;
	setAttr -s 20 ".ed[0:19]"  0 1 0 2 0 0 3 1 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 7 0 7 6 0 6 5 0 7 9 0 9 8 0 8 6 0 9 11 0 10 8 0 1 7 0 4 3 0 0 9 0 2 11 0;
	setAttr -s 9 -ch 36 ".fc[0:8]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 -5 8 9 10
		mu 0 4 1 5 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 -7 15
		mu 0 4 3 9 11 0
		f 4 -11 -14 -16 -6
		mu 0 4 1 2 3 0
		f 4 2 16 -9 17
		mu 0 4 10 4 7 5
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -2 19 -15 -19
		mu 0 4 6 8 11 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface64" -p "polySurface62";
	rename -uid "0E501FB4-4ED4-1426-9EAF-699D2D1F4225";
createNode transform -n "polySurface65" -p "polySurface64";
	rename -uid "27B84F7C-46BB-2C27-B7B3-0B879E419A96";
createNode mesh -n "polySurfaceShape71" -p "polySurface65";
	rename -uid "01E81F79-436A-FC59-0617-C2B9FABA99E4";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:8]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 12 ".uvst[0].uvsp[0:11]" -type "float2" 0.25402856 0.82930481
		 0.25402856 0.75402856 0.32930478 0.75402856 0.32930481 0.82930481 0.33333334 0.75
		 0.25 0.75 0.33333334 0.83333337 0.33333331 0.75 0.25 0.83333331 0.33333331 0.83333337
		 0.25 0.75 0.25 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 12 ".vt[0:11]"  -0.66666663 1.33333325 0 -0.66666663 1 0
		 -1 1.33333325 0 -1 1 0 -1 1 0.064464934 -0.98388582 1.016114235 0.080579154 -0.68278086 1.016114235 0.080579154
		 -0.66666663 1 0.064464934 -0.68278086 1.31721914 0.080579154 -0.66666663 1.33333325 0.064464934
		 -0.98388582 1.31721914 0.080579154 -1 1.33333325 0.064464934;
	setAttr -s 20 ".ed[0:19]"  0 1 0 2 0 0 3 1 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 7 0 7 6 0 6 5 0 7 9 0 9 8 0 8 6 0 9 11 0 10 8 0 1 7 0 4 3 0 0 9 0 2 11 0;
	setAttr -s 9 -ch 36 ".fc[0:8]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 -5 8 9 10
		mu 0 4 1 5 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 -7 15
		mu 0 4 3 9 11 0
		f 4 -11 -14 -16 -6
		mu 0 4 1 2 3 0
		f 4 2 16 -9 17
		mu 0 4 10 4 7 5
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -2 19 -15 -19
		mu 0 4 6 8 11 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface66" -p "polySurface64";
	rename -uid "516937DB-40B6-E389-8B82-A7944D71F739";
createNode transform -n "polySurface67" -p "polySurface66";
	rename -uid "1E83782E-446F-BF25-1BE9-A3848B5F2A49";
createNode mesh -n "polySurfaceShape73" -p "polySurface67";
	rename -uid "075D6D5F-4E36-0DCC-0CE9-25AD6165C3B6";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:8]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".pv" -type "double2" 0.2083333283662796 0.7916666567325592 ;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 12 ".uvst[0].uvsp[0:11]" -type "float2" 0.1706952 0.82930475
		 0.1706952 0.75402856 0.24597146 0.75402856 0.24597146 0.82930475 0.25 0.75 0.16666664
		 0.75 0.25 0.83333331 0.25 0.75 0.16666666 0.83333331 0.25 0.83333331 0.16666666 0.75
		 0.16666664 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 4 ".pt[0:3]" -type "float3"  -3.8146972e-08 0 0 -3.8146972e-08 
		0 0 -3.8146972e-08 0 0 -3.8146972e-08 0 0;
	setAttr -s 12 ".vt[0:11]"  -1 1.33333325 0 -1 1 0 -1.33333349 1.33333325 0
		 -1.33333349 1 0 -1.33333349 1 0.064464934 -1.31721926 1.016114235 0.080579154 -1.016114235 1.016114235 0.080579154
		 -1 1 0.064464934 -1.016114235 1.31721914 0.080579154 -1 1.33333325 0.064464934 -1.31721926 1.31721914 0.080579154
		 -1.33333349 1.33333325 0.064464934;
	setAttr -s 20 ".ed[0:19]"  0 1 0 2 0 0 3 1 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 7 0 7 6 0 6 5 0 7 9 0 9 8 0 8 6 0 9 11 0 10 8 0 1 7 0 4 3 0 0 9 0 2 11 0;
	setAttr -s 9 -ch 36 ".fc[0:8]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 -5 8 9 10
		mu 0 4 1 5 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 -7 15
		mu 0 4 3 9 11 0
		f 4 -11 -14 -16 -6
		mu 0 4 1 2 3 0
		f 4 2 16 -9 17
		mu 0 4 10 4 7 5
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -2 19 -15 -19
		mu 0 4 6 8 11 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface68" -p "polySurface66";
	rename -uid "1B05EF73-464E-F290-61E2-2C8A29DE36CE";
createNode mesh -n "polySurfaceShape74" -p "polySurface68";
	rename -uid "D3CF9925-48F8-B6B6-AB0C-6FA7BEC19352";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:8]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 12 ".uvst[0].uvsp[0:11]" -type "float2" 0.08736188 0.82930475
		 0.087361872 0.75402856 0.16263811 0.75402856 0.16263811 0.82930475 0.16666666 0.75
		 0.083333321 0.75 0.16666666 0.83333331 0.16666664 0.75 0.083333328 0.83333331 0.16666664
		 0.83333331 0.083333328 0.75 0.083333321 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 12 ".vt[0:11]"  -1.33333349 1.33333325 0 -1.33333349 1 0
		 -1.66666675 1.33333325 0 -1.66666675 1 0 -1.66666675 1 0.064464934 -1.65055251 1.016114235 0.080579154
		 -1.34944761 1.016114235 0.080579154 -1.33333349 1 0.064464934 -1.34944761 1.31721914 0.080579154
		 -1.33333349 1.33333325 0.064464934 -1.65055251 1.31721914 0.080579154 -1.66666675 1.33333325 0.064464934;
	setAttr -s 20 ".ed[0:19]"  0 1 0 2 0 0 3 1 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 7 0 7 6 0 6 5 0 7 9 0 9 8 0 8 6 0 9 11 0 10 8 0 1 7 0 4 3 0 0 9 0 2 11 0;
	setAttr -s 9 -ch 36 ".fc[0:8]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 -5 8 9 10
		mu 0 4 1 5 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 -7 15
		mu 0 4 3 9 11 0
		f 4 -11 -14 -16 -6
		mu 0 4 1 2 3 0
		f 4 2 16 -9 17
		mu 0 4 10 4 7 5
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -2 19 -15 -19
		mu 0 4 6 8 11 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface48" -p "Trim_D";
	rename -uid "35E7B993-4A41-FBD5-C2D3-CA8CB29ABA12";
createNode mesh -n "polySurfaceShape54" -p "polySurface48";
	rename -uid "AC1E9A4B-493F-2E86-C2DC-78960D80D99C";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:8]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 12 ".uvst[0].uvsp[0:11]" -type "float2" 0.0040285485 0.82930475
		 0.0040285462 0.75402856 0.079304777 0.75402856 0.079304785 0.82930475 0.083333328
		 0.75 0 0.75 0.083333328 0.83333331 0.083333321 0.75 0 0.83333331 0.083333321 0.83333331
		 0 0.75 0 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 12 ".vt[0:11]"  -2 1 0 -2 1.33333325 0 -1.66666675 1 0 -1.66666675 1.33333325 0
		 -2 1 0.064464934 -1.98388577 1.016114235 0.080579154 -1.68278086 1.016114235 0.080579154
		 -1.66666675 1 0.064464934 -1.68278086 1.31721914 0.080579154 -1.66666675 1.33333325 0.064464934
		 -1.98388577 1.31721914 0.080579154 -2 1.33333325 0.064464934;
	setAttr -s 20 ".ed[0:19]"  0 1 0 1 3 0 0 2 0 3 2 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 7 0 7 6 0 6 5 0 7 9 0 9 8 0 8 6 0 9 11 0 10 8 0 2 7 0 4 0 0 3 9 0 1 11 0;
	setAttr -s 9 -ch 36 ".fc[0:8]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 -5 8 9 10
		mu 0 4 1 5 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 -7 15
		mu 0 4 3 9 11 0
		f 4 -11 -14 -16 -6
		mu 0 4 1 2 3 0
		f 4 2 16 -9 17
		mu 0 4 10 4 7 5
		f 4 -4 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -2 19 -15 -19
		mu 0 4 6 8 11 9
		f 4 -1 -18 -8 -20
		mu 0 4 8 10 5 11;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Trim_E";
	rename -uid "A5A83704-466B-69A4-6D0B-849E86212208";
createNode transform -n "polySurface69" -p "Trim_E";
	rename -uid "9FD27209-4526-0C2D-21BA-0CA0468DECBB";
createNode mesh -n "polySurfaceShape76" -p "polySurface69";
	rename -uid "FF7FAA2D-49E6-7FB6-B06B-DB8E35046D47";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:13]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 18 ".uvst[0].uvsp[0:17]" -type "float2" 0.83736187 0.91263813
		 0.83736187 0.83736187 0.99597144 0.83736187 0.99597144 0.91263813 1 0.83333331 0.83333331
		 0.83333331 1 0.91666663 1 0.83333331 0.83333331 0.91666663 1 0.91666657 0.83333331
		 0.83333331 0.83333331 0.91666657 0.91666663 0.91666663 0.91666663 0.91666657 0.91666663
		 0.91263813 0.91666663 0.83736187 0.91666663 0.83333331 0.91666663 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 18 ".vt[0:17]"  2 1.33333325 0 2 1.66666651 0 1.33333313 1.66666651 0
		 1.33333313 1.33333325 0 1.33333313 1.33333325 0.064464934 1.34944737 1.34944749 0.080579154
		 1.98388577 1.34944749 0.080579154 2 1.33333325 0.064464934 1.98388577 1.65055239 0.080579154
		 2 1.66666651 0.064464934 1.34944737 1.65055239 0.080579154 1.33333313 1.66666651 0.064464934
		 1.66666651 1.66666651 0 1.66666651 1.66666651 0.064464934 1.66666651 1.65055239 0.080579154
		 1.66666651 1.34944749 0.080579154 1.66666651 1.33333325 0.064464934 1.66666651 1.33333325 0;
	setAttr -s 31 ".ed[0:30]"  0 1 0 2 12 0 3 17 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 16 0 7 6 0 6 15 0 7 9 0 9 8 0 8 6 0 9 13 0 10 14 0 0 7 0 4 3 0 1 9 0 2 11 0
		 12 1 0 13 11 0 14 8 0 15 5 0 16 7 0 17 0 0 12 13 1 13 14 1 14 15 1 15 16 1 16 17 1;
	setAttr -s 14 -ch 56 ".fc[0:13]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 29 24 9 10
		mu 0 4 15 16 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 27 22
		mu 0 4 3 9 13 14
		f 4 28 -11 -14 -23
		mu 0 4 14 15 2 3
		f 4 30 25 16 -25
		mu 0 4 16 17 4 7
		f 4 0 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -21 26 -15 -19
		mu 0 4 6 12 13 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11
		f 4 -27 -2 19 -22
		mu 0 4 13 12 8 11
		f 4 -28 21 -7 15
		mu 0 4 14 13 11 0
		f 4 -24 -29 -16 -6
		mu 0 4 1 15 14 0
		f 4 -5 8 -30 23
		mu 0 4 1 5 16 15
		f 4 2 -31 -9 17
		mu 0 4 10 17 16 5;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface70" -p "Trim_E";
	rename -uid "DBEC0DA7-4655-CEAD-C10C-A7B761F5EA72";
createNode transform -n "polySurface71" -p "polySurface70";
	rename -uid "FE969D79-4122-3C50-231A-369779E236FE";
createNode mesh -n "polySurfaceShape78" -p "polySurface71";
	rename -uid "4C9D9769-465E-FC92-F7C2-2AA3DF67D288";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:13]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 18 ".uvst[0].uvsp[0:17]" -type "float2" 0.67069525 0.91263807
		 0.67069525 0.83736193 0.82930475 0.83736187 0.82930481 0.91263813 0.83333331 0.83333331
		 0.66666663 0.83333337 0.83333331 0.91666663 0.83333331 0.83333331 0.66666669 0.91666663
		 0.83333331 0.91666657 0.66666669 0.83333337 0.66666663 0.91666657 0.75 0.91666663
		 0.75 0.91666657 0.75 0.91263807 0.75 0.83736193 0.75 0.83333337 0.75 0.83333337;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 18 ".vt[0:17]"  1.33333313 1.66666651 0 1.33333313 1.33333325 0
		 0.66666657 1.66666651 0 0.66666657 1.33333325 0 0.66666657 1.33333325 0.064464934
		 0.68278074 1.34944749 0.080579154 1.3172189 1.34944749 0.080579154 1.33333313 1.33333325 0.064464934
		 1.3172189 1.65055239 0.080579154 1.33333313 1.66666651 0.064464934 0.68278074 1.65055239 0.080579154
		 0.66666657 1.66666651 0.064464934 0.99999982 1.66666651 0 0.99999982 1.66666651 0.064464934
		 0.99999982 1.65055239 0.080579154 0.99999982 1.34944749 0.080579154 0.99999982 1.33333325 0.064464934
		 0.99999982 1.33333325 0;
	setAttr -s 31 ".ed[0:30]"  0 1 0 2 12 0 3 17 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 16 0 7 6 0 6 15 0 7 9 0 9 8 0 8 6 0 9 13 0 10 14 0 1 7 0 4 3 0 0 9 0 2 11 0
		 12 0 0 13 11 0 14 8 0 15 5 0 16 7 0 17 1 0 12 13 1 13 14 1 14 15 1 15 16 1 16 17 1;
	setAttr -s 14 -ch 56 ".fc[0:13]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 29 24 9 10
		mu 0 4 15 16 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 27 22
		mu 0 4 3 9 13 14
		f 4 28 -11 -14 -23
		mu 0 4 14 15 2 3
		f 4 30 25 16 -25
		mu 0 4 16 17 4 7
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -21 26 -15 -19
		mu 0 4 6 12 13 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11
		f 4 -27 -2 19 -22
		mu 0 4 13 12 8 11
		f 4 -28 21 -7 15
		mu 0 4 14 13 11 0
		f 4 -24 -29 -16 -6
		mu 0 4 1 15 14 0
		f 4 -5 8 -30 23
		mu 0 4 1 5 16 15
		f 4 2 -31 -9 17
		mu 0 4 10 17 16 5;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface72" -p "polySurface70";
	rename -uid "20B3744F-4613-0050-0B3C-71AE0EC8E742";
createNode transform -n "polySurface73" -p "polySurface72";
	rename -uid "C5448B0B-4C10-13AB-1BB4-9D9D8D94970E";
createNode mesh -n "polySurfaceShape80" -p "polySurface73";
	rename -uid "109CE31B-4244-FB75-FA01-CDBEEBBB6AA0";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:13]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 18 ".uvst[0].uvsp[0:17]" -type "float2" 0.50402856 0.91263813
		 0.50402856 0.83736187 0.66263813 0.83736193 0.66263813 0.91263813 0.66666669 0.83333337
		 0.5 0.83333331 0.66666669 0.91666663 0.66666663 0.83333337 0.5 0.91666663 0.66666663
		 0.91666657 0.5 0.83333331 0.5 0.91666657 0.58333337 0.91666663 0.58333331 0.91666657
		 0.58333337 0.91263813 0.58333337 0.83736193 0.58333331 0.83333337 0.58333337 0.83333337;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 18 ".vt[0:17]"  0.66666657 1.66666651 0 0.66666657 1.33333325 0
		 -7.6293944e-08 1.66666651 0 -7.6293944e-08 1.33333325 0 -7.6293944e-08 1.33333325 0.064464934
		 0.016114144 1.34944749 0.080579154 0.65055239 1.34944749 0.080579154 0.66666657 1.33333325 0.064464934
		 0.65055239 1.65055239 0.080579154 0.66666657 1.66666651 0.064464934 0.016114144 1.65055239 0.080579154
		 -7.6293944e-08 1.66666651 0.064464934 0.33333325 1.66666651 0 0.33333325 1.66666651 0.064464934
		 0.33333325 1.65055239 0.080579154 0.33333325 1.34944749 0.080579154 0.33333325 1.33333325 0.064464934
		 0.33333325 1.33333325 0;
	setAttr -s 31 ".ed[0:30]"  0 1 0 2 12 0 3 17 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 16 0 7 6 0 6 15 0 7 9 0 9 8 0 8 6 0 9 13 0 10 14 0 1 7 0 4 3 0 0 9 0 2 11 0
		 12 0 0 13 11 0 14 8 0 15 5 0 16 7 0 17 1 0 12 13 1 13 14 1 14 15 1 15 16 1 16 17 1;
	setAttr -s 14 -ch 56 ".fc[0:13]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 29 24 9 10
		mu 0 4 15 16 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 27 22
		mu 0 4 3 9 13 14
		f 4 28 -11 -14 -23
		mu 0 4 14 15 2 3
		f 4 30 25 16 -25
		mu 0 4 16 17 4 7
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -21 26 -15 -19
		mu 0 4 6 12 13 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11
		f 4 -27 -2 19 -22
		mu 0 4 13 12 8 11
		f 4 -28 21 -7 15
		mu 0 4 14 13 11 0
		f 4 -24 -29 -16 -6
		mu 0 4 1 15 14 0
		f 4 -5 8 -30 23
		mu 0 4 1 5 16 15
		f 4 2 -31 -9 17
		mu 0 4 10 17 16 5;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface74" -p "polySurface72";
	rename -uid "C30C3F70-4880-CE5A-1B0C-30B9E0647EC3";
createNode transform -n "polySurface75" -p "polySurface74";
	rename -uid "B0FD9BD1-4C5D-9E64-EFB6-16ACC42F9178";
createNode mesh -n "polySurfaceShape82" -p "polySurface75";
	rename -uid "51E2D935-4807-D5BB-9A43-D2838B674EAD";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:13]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 18 ".uvst[0].uvsp[0:17]" -type "float2" 0.33736184 0.91263807
		 0.33736187 0.83736187 0.49597144 0.83736187 0.49597144 0.91263807 0.5 0.83333331
		 0.33333328 0.83333331 0.5 0.91666663 0.5 0.83333331 0.33333331 0.91666663 0.5 0.91666657
		 0.33333331 0.83333331 0.33333328 0.91666657 0.41666666 0.91666663 0.41666663 0.91666657
		 0.41666663 0.91263807 0.41666666 0.83736187 0.41666663 0.83333331 0.41666666 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 18 ".vt[0:17]"  -7.6293944e-08 1.66666651 0 -7.6293944e-08 1.33333325 0
		 -0.66666681 1.66666651 0 -0.66666681 1.33333325 0 -0.66666681 1.33333325 0.064464934
		 -0.65055257 1.34944749 0.080579154 -0.016114296 1.34944749 0.080579154 -7.6293944e-08 1.33333325 0.064464934
		 -0.016114296 1.65055239 0.080579154 -7.6293944e-08 1.66666651 0.064464934 -0.65055257 1.65055239 0.080579154
		 -0.66666681 1.66666651 0.064464934 -0.33333343 1.66666651 0 -0.33333343 1.66666651 0.064464934
		 -0.33333343 1.65055239 0.080579154 -0.33333343 1.34944749 0.080579154 -0.33333343 1.33333325 0.064464934
		 -0.33333343 1.33333325 0;
	setAttr -s 31 ".ed[0:30]"  0 1 0 2 12 0 3 17 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 16 0 7 6 0 6 15 0 7 9 0 9 8 0 8 6 0 9 13 0 10 14 0 1 7 0 4 3 0 0 9 0 2 11 0
		 12 0 0 13 11 0 14 8 0 15 5 0 16 7 0 17 1 0 12 13 1 13 14 1 14 15 1 15 16 1 16 17 1;
	setAttr -s 14 -ch 56 ".fc[0:13]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 29 24 9 10
		mu 0 4 15 16 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 27 22
		mu 0 4 3 9 13 14
		f 4 28 -11 -14 -23
		mu 0 4 14 15 2 3
		f 4 30 25 16 -25
		mu 0 4 16 17 4 7
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -21 26 -15 -19
		mu 0 4 6 12 13 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11
		f 4 -27 -2 19 -22
		mu 0 4 13 12 8 11
		f 4 -28 21 -7 15
		mu 0 4 14 13 11 0
		f 4 -24 -29 -16 -6
		mu 0 4 1 15 14 0
		f 4 -5 8 -30 23
		mu 0 4 1 5 16 15
		f 4 2 -31 -9 17
		mu 0 4 10 17 16 5;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface76" -p "polySurface74";
	rename -uid "1F278BAA-4F82-B2BA-09A3-0DA470A79292";
createNode transform -n "polySurface77" -p "polySurface76";
	rename -uid "F8514452-41B9-D766-09A6-F0BCB5C922BF";
createNode mesh -n "polySurfaceShape84" -p "polySurface77";
	rename -uid "567052AC-4BB1-C94A-5002-8894F0CAA7D0";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:13]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 18 ".uvst[0].uvsp[0:17]" -type "float2" 0.1706952 0.91263813
		 0.1706952 0.83736187 0.32930475 0.83736187 0.32930475 0.91263813 0.33333331 0.83333331
		 0.16666664 0.83333331 0.33333331 0.91666663 0.33333328 0.83333331 0.16666666 0.91666663
		 0.33333328 0.91666657 0.16666666 0.83333331 0.16666664 0.91666657 0.24999999 0.91666663
		 0.24999997 0.91666657 0.24999997 0.91263813 0.24999997 0.83736187 0.24999997 0.83333331
		 0.24999999 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 18 ".vt[0:17]"  -0.66666681 1.66666651 0 -0.66666681 1.33333325 0
		 -1.33333349 1.66666651 0 -1.33333349 1.33333325 0 -1.33333349 1.33333325 0.064464934
		 -1.31721926 1.34944749 0.080579154 -0.68278098 1.34944749 0.080579154 -0.66666681 1.33333325 0.064464934
		 -0.68278098 1.65055239 0.080579154 -0.66666681 1.66666651 0.064464934 -1.31721926 1.65055239 0.080579154
		 -1.33333349 1.66666651 0.064464934 -1.000000119209 1.66666651 0 -1.000000119209 1.66666651 0.064464934
		 -1.000000119209 1.65055239 0.080579154 -1.000000119209 1.34944749 0.080579154 -1.000000119209 1.33333325 0.064464934
		 -1.000000119209 1.33333325 0;
	setAttr -s 31 ".ed[0:30]"  0 1 0 2 12 0 3 17 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 16 0 7 6 0 6 15 0 7 9 0 9 8 0 8 6 0 9 13 0 10 14 0 1 7 0 4 3 0 0 9 0 2 11 0
		 12 0 0 13 11 0 14 8 0 15 5 0 16 7 0 17 1 0 12 13 1 13 14 1 14 15 1 15 16 1 16 17 1;
	setAttr -s 14 -ch 56 ".fc[0:13]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 29 24 9 10
		mu 0 4 15 16 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 27 22
		mu 0 4 3 9 13 14
		f 4 28 -11 -14 -23
		mu 0 4 14 15 2 3
		f 4 30 25 16 -25
		mu 0 4 16 17 4 7
		f 4 -1 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -21 26 -15 -19
		mu 0 4 6 12 13 9
		f 4 3 -18 -8 -20
		mu 0 4 8 10 5 11
		f 4 -27 -2 19 -22
		mu 0 4 13 12 8 11
		f 4 -28 21 -7 15
		mu 0 4 14 13 11 0
		f 4 -24 -29 -16 -6
		mu 0 4 1 15 14 0
		f 4 -5 8 -30 23
		mu 0 4 1 5 16 15
		f 4 2 -31 -9 17
		mu 0 4 10 17 16 5;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "polySurface78" -p "polySurface76";
	rename -uid "0C32475E-469B-E0EE-2041-EBAA271A0E69";
createNode mesh -n "polySurfaceShape85" -p "polySurface78";
	rename -uid "E79F69D5-4139-E095-3305-4F810A124C6A";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:13]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 18 ".uvst[0].uvsp[0:17]" -type "float2" 0.004028549 0.91263807
		 0.0040285499 0.83736187 0.16263811 0.83736187 0.16263811 0.91263813 0.16666666 0.83333331
		 0 0.83333331 0.16666666 0.91666663 0.16666664 0.83333331 0 0.91666663 0.16666664
		 0.91666657 0 0.83333331 0 0.91666657 0.083333328 0.91666663 0.083333321 0.91666657
		 0.083333328 0.91263807 0.083333328 0.83736187 0.083333321 0.83333331 0.083333328
		 0.83333331;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 18 ".vt[0:17]"  -2 1.33333325 0 -2 1.66666651 0 -1.33333349 1.66666651 0
		 -1.33333349 1.33333325 0 -2 1.33333325 0.064464934 -1.98388577 1.34944749 0.080579154
		 -1.34944761 1.34944749 0.080579154 -1.33333349 1.33333325 0.064464934 -1.34944761 1.65055239 0.080579154
		 -1.33333349 1.66666651 0.064464934 -1.98388577 1.65055239 0.080579154 -2 1.66666651 0.064464934
		 -1.66666675 1.66666651 0 -1.66666675 1.66666651 0.064464934 -1.66666675 1.65055239 0.080579154
		 -1.66666675 1.34944749 0.080579154 -1.66666675 1.33333325 0.064464934 -1.66666675 1.33333325 0;
	setAttr -s 31 ".ed[0:30]"  0 1 0 1 12 0 0 17 0 2 3 0 4 5 0 5 10 0 10 11 0
		 11 4 0 4 16 0 7 6 0 6 15 0 7 9 0 9 8 0 8 6 0 9 13 0 10 14 0 3 7 0 4 0 0 2 9 0 1 11 0
		 12 2 0 13 11 0 14 8 0 15 5 0 16 7 0 17 3 0 12 13 1 13 14 1 14 15 1 15 16 1 16 17 1;
	setAttr -s 14 -ch 56 ".fc[0:13]" -type "polyFaces" 
		f 4 4 5 6 7
		mu 0 4 5 1 0 11
		f 4 29 24 9 10
		mu 0 4 15 16 7 2
		f 4 -10 11 12 13
		mu 0 4 2 7 9 3
		f 4 -13 14 27 22
		mu 0 4 3 9 13 14
		f 4 28 -11 -14 -23
		mu 0 4 14 15 2 3
		f 4 30 25 16 -25
		mu 0 4 16 17 4 7
		f 4 -4 18 -12 -17
		mu 0 4 4 6 9 7
		f 4 -21 26 -15 -19
		mu 0 4 6 12 13 9
		f 4 -1 -18 -8 -20
		mu 0 4 8 10 5 11
		f 4 -27 -2 19 -22
		mu 0 4 13 12 8 11
		f 4 -28 21 -7 15
		mu 0 4 14 13 11 0
		f 4 -24 -29 -16 -6
		mu 0 4 1 15 14 0
		f 4 -5 8 -30 23
		mu 0 4 1 5 16 15
		f 4 2 -31 -9 17
		mu 0 4 10 17 16 5;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode transform -n "Trim_F";
	rename -uid "04C57905-47DA-7F5E-8414-6BBC898EF072";
createNode mesh -n "Trim_FShape" -p "Trim_F";
	rename -uid "796843BD-40B5-28A1-48A0-D6AA1C648079";
	setAttr -k off ".v";
	setAttr ".iog[0].og[0].gcl" -type "componentList" 1 "f[0:15]";
	setAttr ".vir" yes;
	setAttr ".vif" yes;
	setAttr ".uvst[0].uvsn" -type "string" "map1";
	setAttr -s 27 ".uvst[0].uvsp[0:26]" -type "float2" 0 0.91666663 1 0.91666663
		 1 1 0 1 0.5 1 0.5 0.91666663 0.25 1 0.25 0.91666663 0.75 1 0.75 0.91666663 0 0.95833331
		 0.25 0.95833331 0.5 0.95833331 0.75 0.95833331 1 0.95833331 0.875 1 0.875 0.95833331
		 0.875 0.91666663 0.625 1 0.625 0.95833331 0.625 0.91666663 0.375 1 0.375 0.95833331
		 0.375 0.91666663 0.125 1 0.125 0.95833331 0.125 0.91666663;
	setAttr ".cuvs" -type "string" "map1";
	setAttr ".dcc" -type "string" "Ambient+Diffuse";
	setAttr ".covm[0]"  0 1 1;
	setAttr ".cdvm[0]"  0 1 1;
	setAttr -s 27 ".vt[0:26]"  -2 2 0 2 2 0 -2 1.66666651 0 2 1.66666651 0
		 0 2 0 0 1.66666651 0 -1 2 0 -1 1.66666651 0 1 2 0 1 1.66666651 0 -2 1.83333325 0
		 -1 1.83333325 0 0 1.83333325 0 1 1.83333325 0 2 1.83333325 0 1.5 2 0 1.5 1.83333325 0
		 1.5 1.66666651 0 0.5 2 0 0.5 1.83333325 0 0.5 1.66666651 0 -0.5 2 0 -0.5 1.83333325 0
		 -0.5 1.66666651 0 -1.5 2 0 -1.5 1.83333325 0 -1.5 1.66666651 0;
	setAttr -s 42 ".ed[0:41]"  0 24 0 2 10 0 3 14 0 2 26 0 4 18 0 5 20 0
		 4 12 1 6 21 0 7 23 0 6 11 1 8 15 0 9 17 0 8 13 1 10 0 0 11 7 1 12 5 1 13 9 1 14 1 0
		 10 25 1 11 22 1 12 19 1 13 16 1 15 1 0 16 14 1 17 3 0 15 16 1 16 17 1 18 8 0 19 13 1
		 20 9 0 18 19 1 19 20 1 21 4 0 22 12 1 23 5 0 21 22 1 22 23 1 24 6 0 25 11 1 26 7 0
		 24 25 1 25 26 1;
	setAttr -s 16 -ch 64 ".fc[0:15]" -type "polyFaces" 
		f 4 25 23 17 -23
		mu 0 4 15 16 14 2
		f 4 35 33 -7 -33
		mu 0 4 21 22 12 4
		f 4 40 38 -10 -38
		mu 0 4 24 25 11 6
		f 4 30 28 -13 -28
		mu 0 4 18 19 13 8
		f 4 41 39 -15 -39
		mu 0 4 25 26 7 11
		f 4 -34 36 34 -16
		mu 0 4 12 22 23 5
		f 4 -29 31 29 -17
		mu 0 4 13 19 20 9
		f 4 -24 26 24 2
		mu 0 4 14 16 17 1
		f 4 12 21 -26 -11
		mu 0 4 8 13 16 15
		f 4 -27 -22 16 11
		mu 0 4 17 16 13 9
		f 4 6 20 -31 -5
		mu 0 4 4 12 19 18
		f 4 -32 -21 15 5
		mu 0 4 20 19 12 5
		f 4 9 19 -36 -8
		mu 0 4 6 11 22 21
		f 4 -37 -20 14 8
		mu 0 4 23 22 11 7
		f 4 18 -41 -1 -14
		mu 0 4 10 25 24 3
		f 4 3 -42 -19 -2
		mu 0 4 0 26 25 10;
	setAttr ".cd" -type "dataPolyComponent" Index_Data Edge 0 ;
	setAttr ".cvd" -type "dataPolyComponent" Index_Data Vertex 0 ;
	setAttr ".pd[0]" -type "dataPolyComponent" Index_Data UV 0 ;
	setAttr ".hfd" -type "dataPolyComponent" Index_Data Face 0 ;
	setAttr ".ai_translator" -type "string" "polymesh";
createNode lightLinker -s -n "lightLinker1";
	rename -uid "D15A4EDD-4191-4599-015D-7F97D9F39B6E";
	setAttr -s 2 ".lnk";
	setAttr -s 2 ".slnk";
createNode shapeEditorManager -n "shapeEditorManager";
	rename -uid "031DFF7F-4A06-2F2A-9C90-5FB34C714FCF";
createNode poseInterpolatorManager -n "poseInterpolatorManager";
	rename -uid "BCBE5801-459C-B8CE-D175-29A97F3428D5";
createNode displayLayerManager -n "layerManager";
	rename -uid "AA834916-438D-F838-D03E-8A8D14DD8A1E";
createNode displayLayer -n "defaultLayer";
	rename -uid "DC3D0371-4A15-571A-96DD-D381ABE08277";
createNode renderLayerManager -n "renderLayerManager";
	rename -uid "6C53D273-4108-B670-3FC5-48951B109414";
createNode renderLayer -n "defaultRenderLayer";
	rename -uid "545AC348-4E5C-B7A9-A450-0A8D16BCEA2C";
	setAttr ".g" yes;
createNode script -n "uiConfigurationScriptNode";
	rename -uid "7302FAE2-4D85-BC42-418E-32AF182EB792";
	setAttr ".b" -type "string" (
		"// Maya Mel UI Configuration File.\n//\n//  This script is machine generated.  Edit at your own risk.\n//\n//\n\nglobal string $gMainPane;\nif (`paneLayout -exists $gMainPane`) {\n\n\tglobal int $gUseScenePanelConfig;\n\tint    $useSceneConfig = $gUseScenePanelConfig;\n\tint    $nodeEditorPanelVisible = stringArrayContains(\"nodeEditorPanel1\", `getPanel -vis`);\n\tint    $nodeEditorWorkspaceControlOpen = (`workspaceControl -exists nodeEditorPanel1Window` && `workspaceControl -q -visible nodeEditorPanel1Window`);\n\tint    $menusOkayInPanels = `optionVar -q allowMenusInPanels`;\n\tint    $nVisPanes = `paneLayout -q -nvp $gMainPane`;\n\tint    $nPanes = 0;\n\tstring $editorName;\n\tstring $panelName;\n\tstring $itemFilterName;\n\tstring $panelConfig;\n\n\t//\n\t//  get current state of the UI\n\t//\n\tsceneUIReplacement -update $gMainPane;\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Top View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Top View\")) -mbv $menusOkayInPanels  $panelName;\n"
		+ "\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"top\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n"
		+ "            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n"
		+ "            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 556\n            -height 337\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n"
		+ "\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Side View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Side View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"side\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n"
		+ "            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n"
		+ "            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 1\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 555\n            -height 337\n"
		+ "            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Front View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Front View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"persp\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n            -wireframeOnShaded 1\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n"
		+ "            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 1\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n"
		+ "            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 0\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n"
		+ "            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 1118\n            -height 718\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"modelPanel\" (localizedPanelLabel(\"Persp View\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\tmodelPanel -edit -l (localizedPanelLabel(\"Persp View\")) -mbv $menusOkayInPanels  $panelName;\n\t\t$editorName = $panelName;\n        modelEditor -e \n            -camera \"front\" \n            -useInteractiveMode 0\n            -displayLights \"default\" \n            -displayAppearance \"smoothShaded\" \n            -activeOnly 0\n            -ignorePanZoom 0\n"
		+ "            -wireframeOnShaded 0\n            -headsUpDisplay 1\n            -holdOuts 1\n            -selectionHiliteDisplay 1\n            -useDefaultMaterial 0\n            -bufferMode \"double\" \n            -twoSidedLighting 0\n            -backfaceCulling 0\n            -xray 0\n            -jointXray 0\n            -activeComponentsXray 0\n            -displayTextures 0\n            -smoothWireframe 0\n            -lineWidth 1\n            -textureAnisotropic 0\n            -textureHilight 1\n            -textureSampling 2\n            -textureDisplay \"modulate\" \n            -textureMaxSize 32768\n            -fogging 0\n            -fogSource \"fragment\" \n            -fogMode \"linear\" \n            -fogStart 0\n            -fogEnd 100\n            -fogDensity 0.1\n            -fogColor 0.5 0.5 0.5 1 \n            -depthOfFieldPreview 1\n            -maxConstantTransparency 1\n            -rendererName \"vp2Renderer\" \n            -objectFilterShowInHUD 1\n            -isFiltered 0\n            -colorResolution 256 256 \n            -bumpResolution 512 512 \n"
		+ "            -textureCompression 0\n            -transparencyAlgorithm \"frontAndBackCull\" \n            -transpInShadows 0\n            -cullingOverride \"none\" \n            -lowQualityLighting 0\n            -maximumNumHardwareLights 1\n            -occlusionCulling 0\n            -shadingModel 0\n            -useBaseRenderer 0\n            -useReducedRenderer 0\n            -smallObjectCulling 0\n            -smallObjectThreshold -1 \n            -interactiveDisableShadows 0\n            -interactiveBackFaceCull 0\n            -sortTransparent 1\n            -controllers 1\n            -nurbsCurves 1\n            -nurbsSurfaces 1\n            -polymeshes 1\n            -subdivSurfaces 1\n            -planes 1\n            -lights 1\n            -cameras 1\n            -controlVertices 1\n            -hulls 1\n            -grid 0\n            -imagePlane 1\n            -joints 1\n            -ikHandles 1\n            -deformers 1\n            -dynamics 1\n            -particleInstancers 1\n            -fluids 1\n            -hairSystems 1\n            -follicles 1\n"
		+ "            -nCloths 1\n            -nParticles 1\n            -nRigids 1\n            -dynamicConstraints 1\n            -locators 1\n            -manipulators 1\n            -pluginShapes 1\n            -dimensions 1\n            -handles 1\n            -pivots 1\n            -textures 1\n            -strokes 1\n            -motionTrails 1\n            -clipGhosts 1\n            -greasePencils 1\n            -shadows 0\n            -captureSequenceNumber -1\n            -width 556\n            -height 337\n            -sceneRenderFilter 0\n            $editorName;\n        modelEditor -e -viewSelected 0 $editorName;\n        modelEditor -e \n            -pluginObjects \"gpuCacheDisplayFilter\" 1 \n            $editorName;\n\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\t$panelName = `sceneUIReplacement -getNextPanel \"outlinerPanel\" (localizedPanelLabel(\"ToggledOutliner\")) `;\n\tif (\"\" != $panelName) {\n\t\t$label = `panel -q -label $panelName`;\n\t\toutlinerPanel -edit -l (localizedPanelLabel(\"ToggledOutliner\")) -mbv $menusOkayInPanels  $panelName;\n"
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
		+ "\t\tif (!$useSceneConfig) {\n\t\t\tpanel -e -l $label $panelName;\n\t\t}\n\t}\n\n\n\tif ($useSceneConfig) {\n        string $configName = `getPanel -cwl (localizedPanelLabel(\"Current Layout\"))`;\n        if (\"\" != $configName) {\n\t\t\tpanelConfiguration -edit -label (localizedPanelLabel(\"Current Layout\")) \n\t\t\t\t-userCreated false\n\t\t\t\t-defaultImage \"vacantCell.xP:/\"\n\t\t\t\t-image \"\"\n\t\t\t\t-sc false\n\t\t\t\t-configString \"global string $gMainPane; paneLayout -e -cn \\\"single\\\" -ps 1 100 100 $gMainPane;\"\n\t\t\t\t-removeAllPanels\n\t\t\t\t-ap false\n\t\t\t\t\t(localizedPanelLabel(\"Front View\")) \n\t\t\t\t\t\"modelPanel\"\n"
		+ "\t\t\t\t\t\"$panelName = `modelPanel -unParent -l (localizedPanelLabel(\\\"Front View\\\")) -mbv $menusOkayInPanels `;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -camera \\\"persp\\\" \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 1\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 1\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 0\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1118\\n    -height 718\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t\t\"modelPanel -edit -l (localizedPanelLabel(\\\"Front View\\\")) -mbv $menusOkayInPanels  $panelName;\\n$editorName = $panelName;\\nmodelEditor -e \\n    -camera \\\"persp\\\" \\n    -useInteractiveMode 0\\n    -displayLights \\\"default\\\" \\n    -displayAppearance \\\"smoothShaded\\\" \\n    -activeOnly 0\\n    -ignorePanZoom 0\\n    -wireframeOnShaded 1\\n    -headsUpDisplay 1\\n    -holdOuts 1\\n    -selectionHiliteDisplay 1\\n    -useDefaultMaterial 0\\n    -bufferMode \\\"double\\\" \\n    -twoSidedLighting 0\\n    -backfaceCulling 0\\n    -xray 0\\n    -jointXray 0\\n    -activeComponentsXray 0\\n    -displayTextures 0\\n    -smoothWireframe 0\\n    -lineWidth 1\\n    -textureAnisotropic 0\\n    -textureHilight 1\\n    -textureSampling 2\\n    -textureDisplay \\\"modulate\\\" \\n    -textureMaxSize 32768\\n    -fogging 0\\n    -fogSource \\\"fragment\\\" \\n    -fogMode \\\"linear\\\" \\n    -fogStart 0\\n    -fogEnd 100\\n    -fogDensity 0.1\\n    -fogColor 0.5 0.5 0.5 1 \\n    -depthOfFieldPreview 1\\n    -maxConstantTransparency 1\\n    -rendererName \\\"vp2Renderer\\\" \\n    -objectFilterShowInHUD 1\\n    -isFiltered 1\\n    -colorResolution 256 256 \\n    -bumpResolution 512 512 \\n    -textureCompression 0\\n    -transparencyAlgorithm \\\"frontAndBackCull\\\" \\n    -transpInShadows 0\\n    -cullingOverride \\\"none\\\" \\n    -lowQualityLighting 0\\n    -maximumNumHardwareLights 1\\n    -occlusionCulling 0\\n    -shadingModel 0\\n    -useBaseRenderer 0\\n    -useReducedRenderer 0\\n    -smallObjectCulling 0\\n    -smallObjectThreshold -1 \\n    -interactiveDisableShadows 0\\n    -interactiveBackFaceCull 0\\n    -sortTransparent 1\\n    -controllers 1\\n    -nurbsCurves 1\\n    -nurbsSurfaces 1\\n    -polymeshes 1\\n    -subdivSurfaces 1\\n    -planes 1\\n    -lights 1\\n    -cameras 1\\n    -controlVertices 1\\n    -hulls 1\\n    -grid 0\\n    -imagePlane 1\\n    -joints 1\\n    -ikHandles 1\\n    -deformers 1\\n    -dynamics 1\\n    -particleInstancers 1\\n    -fluids 1\\n    -hairSystems 1\\n    -follicles 1\\n    -nCloths 1\\n    -nParticles 1\\n    -nRigids 1\\n    -dynamicConstraints 1\\n    -locators 1\\n    -manipulators 1\\n    -pluginShapes 1\\n    -dimensions 1\\n    -handles 1\\n    -pivots 1\\n    -textures 1\\n    -strokes 1\\n    -motionTrails 1\\n    -clipGhosts 1\\n    -greasePencils 1\\n    -shadows 0\\n    -captureSequenceNumber -1\\n    -width 1118\\n    -height 718\\n    -sceneRenderFilter 0\\n    $editorName;\\nmodelEditor -e -viewSelected 0 $editorName;\\nmodelEditor -e \\n    -pluginObjects \\\"gpuCacheDisplayFilter\\\" 1 \\n    $editorName\"\n"
		+ "\t\t\t\t$configName;\n\n            setNamedPanelLayout (localizedPanelLabel(\"Current Layout\"));\n        }\n\n        panelHistory -e -clear mainPanelHistory;\n        sceneUIReplacement -clear;\n\t}\n\n\ngrid -spacing 5 -size 12 -divisions 5 -displayAxes yes -displayGridLines yes -displayDivisionLines yes -displayPerspectiveLabels no -displayOrthographicLabels no -displayAxesBold yes -perspectiveLabelPosition axis -orthographicLabelPosition edge;\nviewManip -drawCompass 0 -compassAngle 0 -frontParameters \"\" -homeParameters \"\" -selectionLockParameters \"\";\n}\n");
	setAttr ".st" 3;
createNode script -n "sceneConfigurationScriptNode";
	rename -uid "03C4FD3D-4A6D-E88B-6B91-118EAC4B81A1";
	setAttr ".b" -type "string" "playbackOptions -min 1 -max 120 -ast 1 -aet 200 ";
	setAttr ".st" 6;
createNode gameFbxExporter -n "gameExporterPreset1";
	rename -uid "08E8228F-4599-D5B6-16B8-8CBF3855ADC8";
	setAttr ".pn" -type "string" "Model Default";
	setAttr ".ils" yes;
	setAttr ".ilu" yes;
	setAttr ".esi" 2;
	setAttr ".ebm" yes;
	setAttr ".inc" yes;
	setAttr ".fv" -type "string" "FBX201800";
	setAttr ".exp" -type "string" "I:/Cavalry/Maya Project Files//Trimsheets/ConcreteWalls";
	setAttr ".exf" -type "string" "BRANDONBAKE2";
createNode gameFbxExporter -n "gameExporterPreset2";
	rename -uid "67ADF7C8-414F-5C3C-C34C-FC8CB8936A7F";
	setAttr ".pn" -type "string" "Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 2;
	setAttr ".spt" 2;
	setAttr ".ic" no;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode gameFbxExporter -n "gameExporterPreset3";
	rename -uid "0CE000A7-4388-C8C4-7466-E98D0B75065B";
	setAttr ".pn" -type "string" "TE Anim Default";
	setAttr ".ils" yes;
	setAttr ".eti" 3;
	setAttr ".ebm" yes;
	setAttr ".fv" -type "string" "FBX201800";
createNode groupId -n "groupId141";
	rename -uid "92FBFE78-4CDF-2CFE-00CE-EEAD822570A9";
	setAttr ".ihi" 0;
createNode groupId -n "groupId142";
	rename -uid "10491434-436B-3599-EFC3-4C863FE427FB";
	setAttr ".ihi" 0;
createNode groupId -n "groupId143";
	rename -uid "A38EDC09-43CA-93DB-5F8A-2394C0CD23A8";
	setAttr ".ihi" 0;
createNode groupId -n "groupId144";
	rename -uid "041B1836-45D0-770C-060B-AE9C0C7F2A4C";
	setAttr ".ihi" 0;
createNode groupId -n "groupId145";
	rename -uid "737B70EE-4295-83DB-0226-B4B830E259FB";
	setAttr ".ihi" 0;
createNode groupId -n "groupId146";
	rename -uid "3F0259C1-4429-1D23-9C5A-4483C4487599";
	setAttr ".ihi" 0;
createNode groupId -n "groupId147";
	rename -uid "11B3220D-4EAE-1B74-03D9-2B9EFBD109D6";
	setAttr ".ihi" 0;
createNode groupId -n "groupId148";
	rename -uid "DBEDF1AC-40B8-5679-29BE-46BA5937F41C";
	setAttr ".ihi" 0;
createNode groupId -n "groupId149";
	rename -uid "E79127A9-4D0C-359F-F45A-018FE9F2CE38";
	setAttr ".ihi" 0;
createNode groupId -n "groupId150";
	rename -uid "8BE354FB-4E93-6684-770D-C5A08F1EDE71";
	setAttr ".ihi" 0;
createNode groupId -n "groupId151";
	rename -uid "6869F5C5-4A47-38D4-B7C8-7AB661A2CB00";
	setAttr ".ihi" 0;
createNode groupId -n "groupId152";
	rename -uid "75AB6318-48F8-B71A-9AF2-938D7DF6D755";
	setAttr ".ihi" 0;
createNode groupId -n "groupId153";
	rename -uid "51EDCB1B-4170-CEEB-4BB9-C18B13DA1D1D";
	setAttr ".ihi" 0;
createNode groupId -n "groupId154";
	rename -uid "1C65D0F5-4390-8881-6C40-FEA8C3482F4C";
	setAttr ".ihi" 0;
createNode groupId -n "groupId155";
	rename -uid "CE33F5A3-49DE-4532-B337-4E8616121E6C";
	setAttr ".ihi" 0;
createNode groupId -n "groupId156";
	rename -uid "D036368E-4074-6B69-0877-2186482A0131";
	setAttr ".ihi" 0;
createNode groupId -n "groupId157";
	rename -uid "F188340B-429D-7582-5DD2-9CA6F6697946";
	setAttr ".ihi" 0;
createNode groupId -n "groupId158";
	rename -uid "9C55F13A-4068-09E7-CA58-1E89EEF16C2F";
	setAttr ".ihi" 0;
createNode groupId -n "groupId159";
	rename -uid "C5F39AA4-4CCD-3619-53C8-3BAD5D16746A";
	setAttr ".ihi" 0;
createNode groupId -n "groupId160";
	rename -uid "D172C8CC-4C31-13C6-0B03-E786152BEF2B";
	setAttr ".ihi" 0;
createNode groupId -n "groupId161";
	rename -uid "382AA2C9-414C-C24F-626D-1A98B73BFC11";
	setAttr ".ihi" 0;
createNode groupId -n "groupId162";
	rename -uid "38F5D4FD-4D83-FDF3-18D6-79ADEE22C4DD";
	setAttr ".ihi" 0;
createNode groupId -n "groupId163";
	rename -uid "B9D539E2-48B3-92E2-112A-DC850438A01C";
	setAttr ".ihi" 0;
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
	setAttr -s 24 ".dsm";
	setAttr ".ro" yes;
	setAttr -s 23 ".gn";
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
connectAttr "groupId141.id" "polySurfaceShape50.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape50.iog.og[0].gco";
connectAttr "groupId142.id" "polySurfaceShape51.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape51.iog.og[0].gco";
connectAttr "groupId143.id" "Trim_BShape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "Trim_BShape.iog.og[0].gco";
connectAttr "groupId144.id" "Trim_CShape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "Trim_CShape.iog.og[0].gco";
connectAttr "groupId145.id" "polySurfaceShape55.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape55.iog.og[0].gco";
connectAttr "groupId146.id" "polySurfaceShape57.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape57.iog.og[0].gco";
connectAttr "groupId147.id" "polySurfaceShape59.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape59.iog.og[0].gco";
connectAttr "groupId148.id" "polySurfaceShape61.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape61.iog.og[0].gco";
connectAttr "groupId149.id" "polySurfaceShape63.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape63.iog.og[0].gco";
connectAttr "groupId150.id" "polySurfaceShape65.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape65.iog.og[0].gco";
connectAttr "groupId151.id" "polySurfaceShape67.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape67.iog.og[0].gco";
connectAttr "groupId152.id" "polySurfaceShape69.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape69.iog.og[0].gco";
connectAttr "groupId153.id" "polySurfaceShape71.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape71.iog.og[0].gco";
connectAttr "groupId154.id" "polySurfaceShape73.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape73.iog.og[0].gco";
connectAttr "groupId155.id" "polySurfaceShape74.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape74.iog.og[0].gco";
connectAttr "groupId156.id" "polySurfaceShape54.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape54.iog.og[0].gco";
connectAttr "groupId157.id" "polySurfaceShape76.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape76.iog.og[0].gco";
connectAttr "groupId158.id" "polySurfaceShape78.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape78.iog.og[0].gco";
connectAttr "groupId159.id" "polySurfaceShape80.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape80.iog.og[0].gco";
connectAttr "groupId160.id" "polySurfaceShape82.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape82.iog.og[0].gco";
connectAttr "groupId161.id" "polySurfaceShape84.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape84.iog.og[0].gco";
connectAttr "groupId162.id" "polySurfaceShape85.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "polySurfaceShape85.iog.og[0].gco";
connectAttr "groupId163.id" "Trim_FShape.iog.og[0].gid";
connectAttr ":initialShadingGroup.mwc" "Trim_FShape.iog.og[0].gco";
relationship "link" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "link" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialShadingGroup.message" ":defaultLightSet.message";
relationship "shadowLink" ":lightLinker1" ":initialParticleSE.message" ":defaultLightSet.message";
connectAttr "layerManager.dli[0]" "defaultLayer.id";
connectAttr "renderLayerManager.rlmi[0]" "defaultRenderLayer.rlid";
connectAttr "defaultRenderLayer.msg" ":defaultRenderingList1.r" -na;
connectAttr "BASEShape.iog" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape50.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape51.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "Trim_BShape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "Trim_CShape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape55.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape57.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape59.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape61.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape63.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape65.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape67.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape69.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape71.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape73.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape74.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape54.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape76.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape78.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape80.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape82.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape84.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "polySurfaceShape85.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "Trim_FShape.iog.og[0]" ":initialShadingGroup.dsm" -na;
connectAttr "groupId141.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId142.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId143.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId144.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId145.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId146.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId147.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId148.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId149.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId150.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId151.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId152.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId153.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId154.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId155.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId156.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId157.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId158.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId159.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId160.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId161.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId162.msg" ":initialShadingGroup.gn" -na;
connectAttr "groupId163.msg" ":initialShadingGroup.gn" -na;
// End of ConcreteWalls.ma
